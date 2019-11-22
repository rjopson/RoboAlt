/* Generated code for Python module 'numpy.core.shape_base'
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

/* The "_module_numpy$core$shape_base" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$shape_base;
PyDictObject *moduledict_numpy$core$shape_base;

/* The declarations of module constants used, if any. */
static PyObject *const_list_fed8c17e77f4f5eb83be81f53126ba0d_list;
static PyObject *const_str_plain__stack_dispatcher;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_ary;
extern PyObject *const_str_plain_result;
static PyObject *const_str_plain_accumulated;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_array;
static PyObject *const_str_plain_first_index;
static PyObject *const_str_plain__block_check_depths_match;
extern PyObject *const_tuple_str_plain_a_str_plain_ndim_tuple;
extern PyObject *const_str_plain_i;
static PyObject *const_tuple_str_plain_arr_str_plain_sl_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_sl;
static PyObject *const_str_plain_parent_index;
extern PyObject *const_str_plain_zip;
static PyObject *const_str_plain_C_order;
extern PyObject *const_str_plain_max;
static PyObject *const_str_plain__ndim;
static PyObject *const_str_plain__atleast_3d_dispatcher;
static PyObject *const_tuple_bfdb38f00dd16c14e84762cc035ea8fe_tuple;
static PyObject *const_str_digest_fd4c5f42d97a31e9c8d03ac62580942d;
static PyObject *const_tuple_str_plain_arrays_str_plain_stacklevel_tuple;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_a;
static PyObject *const_tuple_str_plain_arys_str_plain_res_str_plain_ary_str_plain_result_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_stack;
extern PyObject *const_dict_6e6659be28864e39bad7cab4409b7e16;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_offsets_at_axis;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
static PyObject *const_str_plain_first_shape_pre;
static PyObject *const_str_plain_shape_at_axis;
extern PyObject *const_str_plain_size;
static PyObject *const_str_plain_arys;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_end;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_F_CONTIGUOUS;
extern PyObject *const_str_plain_atleast_3d;
static PyObject *const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple;
extern PyObject *const_str_plain__size;
static PyObject *const_str_digest_8156045d0165c8778a0a0784ec56dc3e;
static PyObject *const_str_plain_final_size;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_FutureWarning;
static PyObject *const_str_digest_8c7cfe3d08dfb55572f2ffbb2ed45ad6;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_hstack;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_tuple_str_plain_overrides_tuple;
extern PyObject *const_str_plain___wrapped__;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain__block_slicing;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_i_tuple;
extern PyObject *const_str_plain_block;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_numeric;
static PyObject *const_str_plain_expanded_arrays;
static PyObject *const_str_digest_1816a25c113dff6903321ffadd09527e;
static PyObject *const_tuple_f3a3e751d47f0966296c099e060e41ff_tuple;
extern PyObject *const_str_plain_Ellipsis;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_flags;
static PyObject *const_tuple_str_plain_index_str_plain_idx_str_tuple;
extern PyObject *const_tuple_int_pos_1_int_pos_1_int_pos_1_tuple;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_tuple_int_0_none_tuple;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_tuple_int_pos_4_tuple;
static PyObject *const_str_plain_idx_str;
extern PyObject *const_str_plain_C_CONTIGUOUS;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
static PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arr_tuple;
extern PyObject *const_str_plain_depth;
static PyObject *const_tuple_1cafeedad90bbc2f71d16732a728a0f1_tuple;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_7b6823f8dc9ded008c2837856c4dfa59;
extern PyObject *const_str_plain_asanyarray;
static PyObject *const_str_plain__atleast_1d_dispatcher;
extern PyObject *const_str_plain_normalize_axis_index;
extern PyObject *const_str_plain_all;
static PyObject *const_tuple_da9ab5abea714773c6626cc64f6d375e_tuple;
static PyObject *const_str_digest_a1d24a536e3fbb717f9de5a921a9decd;
static PyObject *const_str_plain__concatenate_shapes;
static PyObject *const_str_plain_slice_prefixes;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_arr;
extern PyObject *const_str_plain_enumerate;
static PyObject *const_str_digest_34ea1747c10b494f6d8d0e1cf1a045ca;
extern PyObject *const_str_plain_out;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_c32a1a91ff24c1652fe8e82e8629f0e2;
extern PyObject *const_tuple_str_plain_arr_tuple;
static PyObject *const_str_plain_first_shape_post;
static PyObject *const_str_plain_idxs_ndims;
static PyObject *const_str_plain__accumulate;
static PyObject *const_tuple_str_plain_arys_tuple;
static PyObject *const_str_plain_the_slice;
static PyObject *const_str_digest_d67dfe87afa17d645c0b631d486beccd;
extern PyObject *const_str_plain_tup;
extern PyObject *const_str_plain__arrays_for_stack_dispatcher;
static PyObject *const_str_digest_8912937ba7b11d940e2c172e469e5864;
static PyObject *const_str_digest_a11996f55bed466d32ef859a905d6b55;
static PyObject *const_str_digest_bbf7571aaa3edb4a9c1dd5c2990d3de4;
extern PyObject *const_str_plain__nx;
static PyObject *const_str_digest_93a0dab5c5488e186ac055f4f94532ca;
static PyObject *const_tuple_str_plain_shape_str_plain_axis_tuple;
extern PyObject *const_str_plain_stacklevel;
static PyObject *const_tuple_15dea024c47fcc99f9af2d3e1bf1dfba_tuple;
static PyObject *const_str_plain__block;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_tuple_str_plain_numeric_tuple;
extern PyObject *const_str_plain_result_type;
static PyObject *const_tuple_fba5d3772dddccf0649d29775417867e_tuple;
extern PyObject *const_str_plain_concatenate;
static PyObject *const_str_plain__atleast_2d_dispatcher;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_3a93d794d41bcab8cf5e5ac009e1df2c;
extern PyObject *const_str_plain_ARRAY_FUNCTION_ENABLED;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_b630e4ee3a292785d79f3fdc6b7b3a27_tuple;
static PyObject *const_str_digest_eec8e1baa32d30e231e402ae34e9aa6e;
extern PyObject *const_str_plain_list;
static PyObject *const_str_plain_subarray;
static PyObject *const_str_plain__concatenate;
extern PyObject *const_str_plain_vstack;
extern PyObject *const_str_plain_arrays;
extern PyObject *const_str_plain_atleast_2d;
extern PyObject *const_str_plain_overrides;
extern PyObject *const_int_0;
extern PyObject *const_tuple_int_pos_1_int_pos_1_tuple;
static PyObject *const_str_plain_max_arr_ndim;
extern PyObject *const_str_plain_slices;
extern PyObject *const_str_plain_multiarray;
extern PyObject *const_str_plain_F;
static PyObject *const_str_digest_0211f308e7cdb532cb4e60135adbedb0;
static PyObject *const_str_plain_list_ndim;
extern PyObject *const_tuple_str_plain_tup_tuple;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain__atleast_nd;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_list_tuple_empty_list;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_atleast_1d;
extern PyObject *const_tuple_ellipsis_tuple;
static PyObject *const_tuple_str_plain_array_str_plain_asanyarray_str_plain_newaxis_tuple;
static PyObject *const_tuple_a3aa2f878cd22e2e50b9922f3df0fa6b_tuple;
extern PyObject *const_str_angle_setcontraction;
static PyObject *const_tuple_70258e1f253725b897e60906008c7bd1_tuple;
static PyObject *const_tuple_da2f4ca24bc238683a84396ccf9342a0_tuple;
extern PyObject *const_int_pos_4;
extern PyObject *const_tuple_slice_none_none_none_tuple;
static PyObject *const_str_plain__block_info_recursion;
static PyObject *const_str_digest_c09a44058734ab9b6bc73b2a7a039a84;
extern PyObject *const_list_none_list;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_arrs;
static PyObject *const_str_digest_f74963e4c77c7418367d1c49289cdaa5;
extern PyObject *const_str_plain_shapes;
extern PyObject *const_str_plain_subok;
static PyObject *const_str_digest_ec9d9d680533b610bd9f1a29189fd37d;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_plain__block_setup;
static PyObject *const_str_digest_b33f762006ad3b724527b5b83e95479e;
static PyObject *const_str_plain_F_order;
extern PyObject *const_str_plain_array_function_dispatch;
extern PyObject *const_tuple_str_plain_start_str_plain_end_tuple;
static PyObject *const_str_plain_slice_prefix;
static PyObject *const_str_digest_178512e92ee9bb9661192deec41d1ede;
static PyObject *const_str_digest_e2aace573343e64efec459500b1d15cc;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_partial;
extern PyObject *const_str_plain_values;
extern PyObject *const_tuple_str_plain_arrays_str_plain_axis_str_plain_out_tuple;
extern PyObject *const_str_plain_reduce;
extern PyObject *const_list_int_0_list;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_axis;
static PyObject *const_str_digest_b4c939c3514055bf8e1cf36ee382dc44;
static PyObject *const_str_plain__block_dispatcher;
static PyObject *const_str_digest_c341b6b907536b0f14f8293d793c2e25;
extern PyObject *const_tuple_str_plain_normalize_axis_index_tuple;
extern PyObject *const_str_plain_tuple;
static PyObject *const_str_plain_arr_ndim;
extern PyObject *const_tuple_str_plain_tup_str_plain_arrs_tuple;
static PyObject *const_str_plain_first_shape;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_plain__vhstack_dispatcher;
static PyObject *const_int_pos_524288;
extern PyObject *const_str_plain_newaxis;
static PyObject *const_tuple_81707c10f0df0189a2d0277990b0dbfa_tuple;
static PyObject *const_str_plain_result_ndim;
extern PyObject *const_slice_none_none_none;
static PyObject *const_tuple_5cebd82ef3361f9247168521132e3980_tuple;
static PyObject *const_dict_f5069c97cdc54b2d109afca44cc81281;
extern PyObject *const_str_digest_efb46d5ae6444069cb470abcca31da10;
static PyObject *const_tuple_str_plain_arrays_str_plain_subarrays_str_plain_subarray_tuple;
extern PyObject *const_str_plain_module;
static PyObject *const_tuple_5be020b560806dad5834356bca694da0_tuple;
static PyObject *const_str_plain_inner_slices;
extern PyObject *const_str_plain_operator;
static PyObject *const_str_digest_d96152e5d83ac7bbec3579fa32dd3f99;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_max_depth;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_subarrays;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain__block_concatenate;
static PyObject *const_str_plain_bottom_index;
extern PyObject *const_str_empty;
extern PyObject *const_str_digest_05505d3dfcf4f98fe70aff71c6cc60d8;
extern PyObject *const_str_plain___iter__;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_digest_dcf6dc776c8508ac5c029e2bb2739044;
extern PyObject *const_str_plain_ndmin;
static PyObject *const_str_plain__block_format_index;
extern PyObject *const_str_plain_order;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_list_fed8c17e77f4f5eb83be81f53126ba0d_list = PyList_New( 7 );
    PyList_SET_ITEM( const_list_fed8c17e77f4f5eb83be81f53126ba0d_list, 0, const_str_plain_atleast_1d ); Py_INCREF( const_str_plain_atleast_1d );
    PyList_SET_ITEM( const_list_fed8c17e77f4f5eb83be81f53126ba0d_list, 1, const_str_plain_atleast_2d ); Py_INCREF( const_str_plain_atleast_2d );
    PyList_SET_ITEM( const_list_fed8c17e77f4f5eb83be81f53126ba0d_list, 2, const_str_plain_atleast_3d ); Py_INCREF( const_str_plain_atleast_3d );
    PyList_SET_ITEM( const_list_fed8c17e77f4f5eb83be81f53126ba0d_list, 3, const_str_plain_block ); Py_INCREF( const_str_plain_block );
    PyList_SET_ITEM( const_list_fed8c17e77f4f5eb83be81f53126ba0d_list, 4, const_str_plain_hstack ); Py_INCREF( const_str_plain_hstack );
    PyList_SET_ITEM( const_list_fed8c17e77f4f5eb83be81f53126ba0d_list, 5, const_str_plain_stack ); Py_INCREF( const_str_plain_stack );
    PyList_SET_ITEM( const_list_fed8c17e77f4f5eb83be81f53126ba0d_list, 6, const_str_plain_vstack ); Py_INCREF( const_str_plain_vstack );
    const_str_plain__stack_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 2788376 ], 17, 1 );
    const_str_plain_accumulated = UNSTREAM_STRING_ASCII( &constant_bin[ 972603 ], 11, 1 );
    const_str_plain_first_index = UNSTREAM_STRING_ASCII( &constant_bin[ 2788393 ], 11, 1 );
    const_str_plain__block_check_depths_match = UNSTREAM_STRING_ASCII( &constant_bin[ 2788404 ], 25, 1 );
    const_tuple_str_plain_arr_str_plain_sl_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_sl_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_sl_tuple, 1, const_str_plain_sl ); Py_INCREF( const_str_plain_sl );
    const_str_plain_parent_index = UNSTREAM_STRING_ASCII( &constant_bin[ 2788429 ], 12, 1 );
    const_str_plain_C_order = UNSTREAM_STRING_ASCII( &constant_bin[ 2788441 ], 7, 1 );
    const_str_plain__ndim = UNSTREAM_STRING_ASCII( &constant_bin[ 2607551 ], 5, 1 );
    const_str_plain__atleast_3d_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 2788448 ], 22, 1 );
    const_tuple_bfdb38f00dd16c14e84762cc035ea8fe_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_bfdb38f00dd16c14e84762cc035ea8fe_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    const_str_plain_max_depth = UNSTREAM_STRING_ASCII( &constant_bin[ 2788470 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_bfdb38f00dd16c14e84762cc035ea8fe_tuple, 1, const_str_plain_max_depth ); Py_INCREF( const_str_plain_max_depth );
    const_str_plain_result_ndim = UNSTREAM_STRING_ASCII( &constant_bin[ 2788479 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_bfdb38f00dd16c14e84762cc035ea8fe_tuple, 2, const_str_plain_result_ndim ); Py_INCREF( const_str_plain_result_ndim );
    PyTuple_SET_ITEM( const_tuple_bfdb38f00dd16c14e84762cc035ea8fe_tuple, 3, const_str_plain_depth ); Py_INCREF( const_str_plain_depth );
    PyTuple_SET_ITEM( const_tuple_bfdb38f00dd16c14e84762cc035ea8fe_tuple, 4, const_str_plain_shapes ); Py_INCREF( const_str_plain_shapes );
    PyTuple_SET_ITEM( const_tuple_bfdb38f00dd16c14e84762cc035ea8fe_tuple, 5, const_str_plain_slices ); Py_INCREF( const_str_plain_slices );
    PyTuple_SET_ITEM( const_tuple_bfdb38f00dd16c14e84762cc035ea8fe_tuple, 6, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_bfdb38f00dd16c14e84762cc035ea8fe_tuple, 7, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    const_str_plain_slice_prefixes = UNSTREAM_STRING_ASCII( &constant_bin[ 2788490 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_bfdb38f00dd16c14e84762cc035ea8fe_tuple, 8, const_str_plain_slice_prefixes ); Py_INCREF( const_str_plain_slice_prefixes );
    PyTuple_SET_ITEM( const_tuple_bfdb38f00dd16c14e84762cc035ea8fe_tuple, 9, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    const_str_digest_fd4c5f42d97a31e9c8d03ac62580942d = UNSTREAM_STRING_ASCII( &constant_bin[ 2788504 ], 68, 0 );
    const_tuple_str_plain_arrays_str_plain_stacklevel_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arrays_str_plain_stacklevel_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    PyTuple_SET_ITEM( const_tuple_str_plain_arrays_str_plain_stacklevel_tuple, 1, const_str_plain_stacklevel ); Py_INCREF( const_str_plain_stacklevel );
    const_tuple_str_plain_arys_str_plain_res_str_plain_ary_str_plain_result_tuple = PyTuple_New( 4 );
    const_str_plain_arys = UNSTREAM_STRING_ASCII( &constant_bin[ 2788572 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arys_str_plain_res_str_plain_ary_str_plain_result_tuple, 0, const_str_plain_arys ); Py_INCREF( const_str_plain_arys );
    PyTuple_SET_ITEM( const_tuple_str_plain_arys_str_plain_res_str_plain_ary_str_plain_result_tuple, 1, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_str_plain_arys_str_plain_res_str_plain_ary_str_plain_result_tuple, 2, const_str_plain_ary ); Py_INCREF( const_str_plain_ary );
    PyTuple_SET_ITEM( const_tuple_str_plain_arys_str_plain_res_str_plain_ary_str_plain_result_tuple, 3, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain_offsets_at_axis = UNSTREAM_STRING_ASCII( &constant_bin[ 2788576 ], 15, 1 );
    const_str_plain_first_shape_pre = UNSTREAM_STRING_ASCII( &constant_bin[ 2788591 ], 15, 1 );
    const_str_plain_shape_at_axis = UNSTREAM_STRING_ASCII( &constant_bin[ 2788606 ], 13, 1 );
    const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    const_str_plain_list_ndim = UNSTREAM_STRING_ASCII( &constant_bin[ 2788532 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple, 1, const_str_plain_list_ndim ); Py_INCREF( const_str_plain_list_ndim );
    PyTuple_SET_ITEM( const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple, 2, const_str_plain_result_ndim ); Py_INCREF( const_str_plain_result_ndim );
    PyTuple_SET_ITEM( const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple, 3, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple, 4, const_str_plain_slices ); Py_INCREF( const_str_plain_slices );
    PyTuple_SET_ITEM( const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple, 5, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_str_plain_F_order = UNSTREAM_STRING_ASCII( &constant_bin[ 2788619 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple, 6, const_str_plain_F_order ); Py_INCREF( const_str_plain_F_order );
    PyTuple_SET_ITEM( const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple, 7, const_str_plain_C_order ); Py_INCREF( const_str_plain_C_order );
    PyTuple_SET_ITEM( const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple, 8, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple, 9, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain_the_slice = UNSTREAM_STRING_ASCII( &constant_bin[ 2788626 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple, 10, const_str_plain_the_slice ); Py_INCREF( const_str_plain_the_slice );
    PyTuple_SET_ITEM( const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple, 11, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    const_str_digest_8156045d0165c8778a0a0784ec56dc3e = UNSTREAM_STRING_ASCII( &constant_bin[ 2788635 ], 785, 0 );
    const_str_plain_final_size = UNSTREAM_STRING_ASCII( &constant_bin[ 2788556 ], 10, 1 );
    const_str_digest_8c7cfe3d08dfb55572f2ffbb2ed45ad6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2789420 ], 99, 0 );
    const_str_plain__block_slicing = UNSTREAM_STRING_ASCII( &constant_bin[ 2789519 ], 14, 1 );
    const_str_plain_expanded_arrays = UNSTREAM_STRING_ASCII( &constant_bin[ 2789533 ], 15, 1 );
    const_str_digest_1816a25c113dff6903321ffadd09527e = UNSTREAM_STRING_ASCII( &constant_bin[ 2789548 ], 795, 0 );
    const_tuple_f3a3e751d47f0966296c099e060e41ff_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_f3a3e751d47f0966296c099e060e41ff_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    PyTuple_SET_ITEM( const_tuple_f3a3e751d47f0966296c099e060e41ff_tuple, 1, const_str_plain_list_ndim ); Py_INCREF( const_str_plain_list_ndim );
    PyTuple_SET_ITEM( const_tuple_f3a3e751d47f0966296c099e060e41ff_tuple, 2, const_str_plain_result_ndim ); Py_INCREF( const_str_plain_result_ndim );
    PyTuple_SET_ITEM( const_tuple_f3a3e751d47f0966296c099e060e41ff_tuple, 3, const_str_plain_final_size ); Py_INCREF( const_str_plain_final_size );
    const_tuple_str_plain_index_str_plain_idx_str_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_index_str_plain_idx_str_tuple, 0, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    const_str_plain_idx_str = UNSTREAM_STRING_ASCII( &constant_bin[ 2790343 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_index_str_plain_idx_str_tuple, 1, const_str_plain_idx_str ); Py_INCREF( const_str_plain_idx_str );
    const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arr_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arr_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arr_tuple, 1, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    const_tuple_1cafeedad90bbc2f71d16732a728a0f1_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_1cafeedad90bbc2f71d16732a728a0f1_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    const_str_plain_bottom_index = UNSTREAM_STRING_ASCII( &constant_bin[ 2790350 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_1cafeedad90bbc2f71d16732a728a0f1_tuple, 1, const_str_plain_bottom_index ); Py_INCREF( const_str_plain_bottom_index );
    const_str_plain_arr_ndim = UNSTREAM_STRING_ASCII( &constant_bin[ 2790362 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_1cafeedad90bbc2f71d16732a728a0f1_tuple, 2, const_str_plain_arr_ndim ); Py_INCREF( const_str_plain_arr_ndim );
    PyTuple_SET_ITEM( const_tuple_1cafeedad90bbc2f71d16732a728a0f1_tuple, 3, const_str_plain_final_size ); Py_INCREF( const_str_plain_final_size );
    PyTuple_SET_ITEM( const_tuple_1cafeedad90bbc2f71d16732a728a0f1_tuple, 4, const_str_plain_list_ndim ); Py_INCREF( const_str_plain_list_ndim );
    PyTuple_SET_ITEM( const_tuple_1cafeedad90bbc2f71d16732a728a0f1_tuple, 5, const_str_plain_result_ndim ); Py_INCREF( const_str_plain_result_ndim );
    const_str_digest_7b6823f8dc9ded008c2837856c4dfa59 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790370 ], 1271, 0 );
    const_str_plain__atleast_1d_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 2791641 ], 22, 1 );
    const_tuple_da9ab5abea714773c6626cc64f6d375e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_da9ab5abea714773c6626cc64f6d375e_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_da9ab5abea714773c6626cc64f6d375e_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_da9ab5abea714773c6626cc64f6d375e_tuple, 2, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_da9ab5abea714773c6626cc64f6d375e_tuple, 3, const_str_plain_parent_index ); Py_INCREF( const_str_plain_parent_index );
    const_str_digest_a1d24a536e3fbb717f9de5a921a9decd = UNSTREAM_STRING_ASCII( &constant_bin[ 2791663 ], 127, 0 );
    const_str_plain__concatenate_shapes = UNSTREAM_STRING_ASCII( &constant_bin[ 2790586 ], 19, 1 );
    const_str_digest_34ea1747c10b494f6d8d0e1cf1a045ca = UNSTREAM_STRING_ASCII( &constant_bin[ 2791790 ], 1495, 0 );
    const_str_digest_c32a1a91ff24c1652fe8e82e8629f0e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2793285 ], 26, 0 );
    const_str_plain_first_shape_post = UNSTREAM_STRING_ASCII( &constant_bin[ 2793311 ], 16, 1 );
    const_str_plain_idxs_ndims = UNSTREAM_STRING_ASCII( &constant_bin[ 2793327 ], 10, 1 );
    const_str_plain__accumulate = UNSTREAM_STRING_ASCII( &constant_bin[ 2793337 ], 11, 1 );
    const_tuple_str_plain_arys_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arys_tuple, 0, const_str_plain_arys ); Py_INCREF( const_str_plain_arys );
    const_str_digest_d67dfe87afa17d645c0b631d486beccd = UNSTREAM_STRING_ASCII( &constant_bin[ 2793348 ], 1535, 0 );
    const_str_digest_8912937ba7b11d940e2c172e469e5864 = UNSTREAM_STRING_ASCII( &constant_bin[ 2794883 ], 33, 0 );
    const_str_digest_a11996f55bed466d32ef859a905d6b55 = UNSTREAM_STRING_ASCII( &constant_bin[ 2794916 ], 346, 0 );
    const_str_digest_bbf7571aaa3edb4a9c1dd5c2990d3de4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2795262 ], 24, 0 );
    const_str_digest_93a0dab5c5488e186ac055f4f94532ca = UNSTREAM_STRING_ASCII( &constant_bin[ 2795286 ], 38, 0 );
    const_tuple_str_plain_shape_str_plain_axis_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_shape_str_plain_axis_tuple, 0, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_str_plain_shape_str_plain_axis_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_tuple_15dea024c47fcc99f9af2d3e1bf1dfba_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_15dea024c47fcc99f9af2d3e1bf1dfba_tuple, 0, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    PyTuple_SET_ITEM( const_tuple_15dea024c47fcc99f9af2d3e1bf1dfba_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_15dea024c47fcc99f9af2d3e1bf1dfba_tuple, 2, const_str_plain_accumulated ); Py_INCREF( const_str_plain_accumulated );
    PyTuple_SET_ITEM( const_tuple_15dea024c47fcc99f9af2d3e1bf1dfba_tuple, 3, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_plain__block = UNSTREAM_STRING_ASCII( &constant_bin[ 18542 ], 6, 1 );
    const_tuple_fba5d3772dddccf0649d29775417867e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_fba5d3772dddccf0649d29775417867e_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    PyTuple_SET_ITEM( const_tuple_fba5d3772dddccf0649d29775417867e_tuple, 1, const_str_plain_list_ndim ); Py_INCREF( const_str_plain_list_ndim );
    PyTuple_SET_ITEM( const_tuple_fba5d3772dddccf0649d29775417867e_tuple, 2, const_str_plain_result_ndim ); Py_INCREF( const_str_plain_result_ndim );
    PyTuple_SET_ITEM( const_tuple_fba5d3772dddccf0649d29775417867e_tuple, 3, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain__atleast_2d_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 2795324 ], 22, 1 );
    const_str_digest_3a93d794d41bcab8cf5e5ac009e1df2c = UNSTREAM_STRING_ASCII( &constant_bin[ 2795346 ], 38, 0 );
    const_tuple_b630e4ee3a292785d79f3fdc6b7b3a27_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b630e4ee3a292785d79f3fdc6b7b3a27_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_b630e4ee3a292785d79f3fdc6b7b3a27_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_b630e4ee3a292785d79f3fdc6b7b3a27_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_b630e4ee3a292785d79f3fdc6b7b3a27_tuple, 3, const_str_plain_first_shape_pre ); Py_INCREF( const_str_plain_first_shape_pre );
    PyTuple_SET_ITEM( const_tuple_b630e4ee3a292785d79f3fdc6b7b3a27_tuple, 4, const_str_plain_first_shape_post ); Py_INCREF( const_str_plain_first_shape_post );
    const_str_digest_eec8e1baa32d30e231e402ae34e9aa6e = UNSTREAM_STRING_ASCII( &constant_bin[ 2795384 ], 77, 0 );
    const_str_plain_subarray = UNSTREAM_STRING_ASCII( &constant_bin[ 2307289 ], 8, 1 );
    const_str_plain__concatenate = UNSTREAM_STRING_ASCII( &constant_bin[ 2790586 ], 12, 1 );
    const_str_plain_max_arr_ndim = UNSTREAM_STRING_ASCII( &constant_bin[ 2795461 ], 12, 1 );
    const_str_digest_0211f308e7cdb532cb4e60135adbedb0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2795473 ], 1182, 0 );
    const_str_plain__atleast_nd = UNSTREAM_STRING_ASCII( &constant_bin[ 2796655 ], 11, 1 );
    const_list_tuple_empty_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_tuple_empty_list, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_tuple_str_plain_array_str_plain_asanyarray_str_plain_newaxis_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_array_str_plain_asanyarray_str_plain_newaxis_tuple, 0, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_str_plain_array_str_plain_asanyarray_str_plain_newaxis_tuple, 1, const_str_plain_asanyarray ); Py_INCREF( const_str_plain_asanyarray );
    PyTuple_SET_ITEM( const_tuple_str_plain_array_str_plain_asanyarray_str_plain_newaxis_tuple, 2, const_str_plain_newaxis ); Py_INCREF( const_str_plain_newaxis );
    const_tuple_a3aa2f878cd22e2e50b9922f3df0fa6b_tuple = PyTuple_New( 3 );
    const_str_plain_slice_prefix = UNSTREAM_STRING_ASCII( &constant_bin[ 2788490 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_a3aa2f878cd22e2e50b9922f3df0fa6b_tuple, 0, const_str_plain_slice_prefix ); Py_INCREF( const_str_plain_slice_prefix );
    const_str_plain_inner_slices = UNSTREAM_STRING_ASCII( &constant_bin[ 2796666 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_a3aa2f878cd22e2e50b9922f3df0fa6b_tuple, 1, const_str_plain_inner_slices ); Py_INCREF( const_str_plain_inner_slices );
    PyTuple_SET_ITEM( const_tuple_a3aa2f878cd22e2e50b9922f3df0fa6b_tuple, 2, const_str_plain_the_slice ); Py_INCREF( const_str_plain_the_slice );
    const_tuple_70258e1f253725b897e60906008c7bd1_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_70258e1f253725b897e60906008c7bd1_tuple, 0, const_str_plain_shapes ); Py_INCREF( const_str_plain_shapes );
    PyTuple_SET_ITEM( const_tuple_70258e1f253725b897e60906008c7bd1_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_70258e1f253725b897e60906008c7bd1_tuple, 2, const_str_plain_shape_at_axis ); Py_INCREF( const_str_plain_shape_at_axis );
    const_str_plain_first_shape = UNSTREAM_STRING_ASCII( &constant_bin[ 2788591 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_70258e1f253725b897e60906008c7bd1_tuple, 3, const_str_plain_first_shape ); Py_INCREF( const_str_plain_first_shape );
    PyTuple_SET_ITEM( const_tuple_70258e1f253725b897e60906008c7bd1_tuple, 4, const_str_plain_first_shape_pre ); Py_INCREF( const_str_plain_first_shape_pre );
    PyTuple_SET_ITEM( const_tuple_70258e1f253725b897e60906008c7bd1_tuple, 5, const_str_plain_first_shape_post ); Py_INCREF( const_str_plain_first_shape_post );
    PyTuple_SET_ITEM( const_tuple_70258e1f253725b897e60906008c7bd1_tuple, 6, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_70258e1f253725b897e60906008c7bd1_tuple, 7, const_str_plain_offsets_at_axis ); Py_INCREF( const_str_plain_offsets_at_axis );
    PyTuple_SET_ITEM( const_tuple_70258e1f253725b897e60906008c7bd1_tuple, 8, const_str_plain_slice_prefixes ); Py_INCREF( const_str_plain_slice_prefixes );
    const_tuple_da2f4ca24bc238683a84396ccf9342a0_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_da2f4ca24bc238683a84396ccf9342a0_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    PyTuple_SET_ITEM( const_tuple_da2f4ca24bc238683a84396ccf9342a0_tuple, 1, const_str_plain_max_depth ); Py_INCREF( const_str_plain_max_depth );
    PyTuple_SET_ITEM( const_tuple_da2f4ca24bc238683a84396ccf9342a0_tuple, 2, const_str_plain_result_ndim ); Py_INCREF( const_str_plain_result_ndim );
    PyTuple_SET_ITEM( const_tuple_da2f4ca24bc238683a84396ccf9342a0_tuple, 3, const_str_plain_depth ); Py_INCREF( const_str_plain_depth );
    PyTuple_SET_ITEM( const_tuple_da2f4ca24bc238683a84396ccf9342a0_tuple, 4, const_str_plain_arrs ); Py_INCREF( const_str_plain_arrs );
    const_str_plain__block_info_recursion = UNSTREAM_STRING_ASCII( &constant_bin[ 2796678 ], 21, 1 );
    const_str_digest_c09a44058734ab9b6bc73b2a7a039a84 = UNSTREAM_STRING_ASCII( &constant_bin[ 2796699 ], 44, 0 );
    const_str_digest_f74963e4c77c7418367d1c49289cdaa5 = UNSTREAM_STRING_ASCII( &constant_bin[ 2796743 ], 1603, 0 );
    const_str_digest_ec9d9d680533b610bd9f1a29189fd37d = UNSTREAM_STRING_ASCII( &constant_bin[ 2798346 ], 30, 0 );
    const_str_plain__block_setup = UNSTREAM_STRING_ASCII( &constant_bin[ 2798376 ], 12, 1 );
    const_str_digest_b33f762006ad3b724527b5b83e95479e = UNSTREAM_STRING_ASCII( &constant_bin[ 2798388 ], 860, 0 );
    const_str_digest_178512e92ee9bb9661192deec41d1ede = UNSTREAM_STRING_ASCII( &constant_bin[ 2799248 ], 41, 0 );
    const_str_digest_e2aace573343e64efec459500b1d15cc = UNSTREAM_STRING_ASCII( &constant_bin[ 2799289 ], 32, 0 );
    const_str_digest_b4c939c3514055bf8e1cf36ee382dc44 = UNSTREAM_STRING_ASCII( &constant_bin[ 2799321 ], 4646, 0 );
    const_str_plain__block_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 2803967 ], 17, 1 );
    const_str_digest_c341b6b907536b0f14f8293d793c2e25 = UNSTREAM_STRING_ASCII( &constant_bin[ 2803984 ], 1283, 0 );
    const_str_plain__vhstack_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 2805267 ], 19, 1 );
    const_int_pos_524288 = PyLong_FromUnsignedLong( 524288ul );
    const_tuple_81707c10f0df0189a2d0277990b0dbfa_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_81707c10f0df0189a2d0277990b0dbfa_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_81707c10f0df0189a2d0277990b0dbfa_tuple, 1, const_str_plain_max_depth ); Py_INCREF( const_str_plain_max_depth );
    PyTuple_SET_ITEM( const_tuple_81707c10f0df0189a2d0277990b0dbfa_tuple, 2, const_str_plain_result_ndim ); Py_INCREF( const_str_plain_result_ndim );
    PyTuple_SET_ITEM( const_tuple_81707c10f0df0189a2d0277990b0dbfa_tuple, 3, const_str_plain_depth ); Py_INCREF( const_str_plain_depth );
    const_tuple_5cebd82ef3361f9247168521132e3980_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_5cebd82ef3361f9247168521132e3980_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    PyTuple_SET_ITEM( const_tuple_5cebd82ef3361f9247168521132e3980_tuple, 1, const_str_plain_parent_index ); Py_INCREF( const_str_plain_parent_index );
    PyTuple_SET_ITEM( const_tuple_5cebd82ef3361f9247168521132e3980_tuple, 2, const_str_plain_idxs_ndims ); Py_INCREF( const_str_plain_idxs_ndims );
    PyTuple_SET_ITEM( const_tuple_5cebd82ef3361f9247168521132e3980_tuple, 3, const_str_plain_first_index ); Py_INCREF( const_str_plain_first_index );
    PyTuple_SET_ITEM( const_tuple_5cebd82ef3361f9247168521132e3980_tuple, 4, const_str_plain_max_arr_ndim ); Py_INCREF( const_str_plain_max_arr_ndim );
    PyTuple_SET_ITEM( const_tuple_5cebd82ef3361f9247168521132e3980_tuple, 5, const_str_plain_final_size ); Py_INCREF( const_str_plain_final_size );
    PyTuple_SET_ITEM( const_tuple_5cebd82ef3361f9247168521132e3980_tuple, 6, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    PyTuple_SET_ITEM( const_tuple_5cebd82ef3361f9247168521132e3980_tuple, 7, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    PyTuple_SET_ITEM( const_tuple_5cebd82ef3361f9247168521132e3980_tuple, 8, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    const_dict_f5069c97cdc54b2d109afca44cc81281 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_f5069c97cdc54b2d109afca44cc81281, const_str_plain_stacklevel, const_int_pos_6 );
    assert( PyDict_Size( const_dict_f5069c97cdc54b2d109afca44cc81281 ) == 1 );
    const_tuple_str_plain_arrays_str_plain_subarrays_str_plain_subarray_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arrays_str_plain_subarrays_str_plain_subarray_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    const_str_plain_subarrays = UNSTREAM_STRING_ASCII( &constant_bin[ 2307289 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arrays_str_plain_subarrays_str_plain_subarray_tuple, 1, const_str_plain_subarrays ); Py_INCREF( const_str_plain_subarrays );
    PyTuple_SET_ITEM( const_tuple_str_plain_arrays_str_plain_subarrays_str_plain_subarray_tuple, 2, const_str_plain_subarray ); Py_INCREF( const_str_plain_subarray );
    const_tuple_5be020b560806dad5834356bca694da0_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_5be020b560806dad5834356bca694da0_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    PyTuple_SET_ITEM( const_tuple_5be020b560806dad5834356bca694da0_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_5be020b560806dad5834356bca694da0_tuple, 2, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_5be020b560806dad5834356bca694da0_tuple, 3, const_str_plain_shapes ); Py_INCREF( const_str_plain_shapes );
    PyTuple_SET_ITEM( const_tuple_5be020b560806dad5834356bca694da0_tuple, 4, const_str_plain_result_ndim ); Py_INCREF( const_str_plain_result_ndim );
    PyTuple_SET_ITEM( const_tuple_5be020b560806dad5834356bca694da0_tuple, 5, const_str_plain_sl ); Py_INCREF( const_str_plain_sl );
    PyTuple_SET_ITEM( const_tuple_5be020b560806dad5834356bca694da0_tuple, 6, const_str_plain_expanded_arrays ); Py_INCREF( const_str_plain_expanded_arrays );
    const_str_digest_d96152e5d83ac7bbec3579fa32dd3f99 = UNSTREAM_STRING_ASCII( &constant_bin[ 2805286 ], 47, 0 );
    const_str_plain__block_concatenate = UNSTREAM_STRING_ASCII( &constant_bin[ 2805333 ], 18, 1 );
    const_str_digest_dcf6dc776c8508ac5c029e2bb2739044 = UNSTREAM_STRING_ASCII( &constant_bin[ 2805351 ], 198, 0 );
    const_str_plain__block_format_index = UNSTREAM_STRING_ASCII( &constant_bin[ 2795286 ], 19, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$shape_base( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6aa005fa219f3dd5d10f3dfa9ebf3ec9;
static PyCodeObject *codeobj_fbf7dae15a056d1874a9b1cff61628e1;
static PyCodeObject *codeobj_731817b6ac9f75d121a9a557f0b78de8;
static PyCodeObject *codeobj_ae7eff15c69bc5bcc29824b23de90a5b;
static PyCodeObject *codeobj_a5b4dd2c5e2ca087f83a56001be161e4;
static PyCodeObject *codeobj_a1142eddb32919db908ad5406e4bcbe2;
static PyCodeObject *codeobj_230478f24e70fcf006f3a92fcd1af812;
static PyCodeObject *codeobj_98cf7235447432893988227dbf24e33f;
static PyCodeObject *codeobj_d2d00ff9da709011310c038eff0c6ad6;
static PyCodeObject *codeobj_3f5aca8741b83c68c68958b8afb313d3;
static PyCodeObject *codeobj_a33007f3dc926ee01784f766dac17eef;
static PyCodeObject *codeobj_b8f885e84ef2db3e879cce578de31228;
static PyCodeObject *codeobj_045e802adba160c2da82e171b248e52c;
static PyCodeObject *codeobj_221a5ccc23e8d9d4a3e390aa130e9185;
static PyCodeObject *codeobj_8b1d20db60e0d78c953c4ad899f5237c;
static PyCodeObject *codeobj_9962c1f848e5d55585e284ee02fc8659;
static PyCodeObject *codeobj_e1f566bb2eb38c76f73d8de0857b9015;
static PyCodeObject *codeobj_0189c3fdb49af755c71024cc991badb4;
static PyCodeObject *codeobj_3542f5c8b18da835a7d570c597da5604;
static PyCodeObject *codeobj_ea6ff67bccf130eeb55397d5ddff07cf;
static PyCodeObject *codeobj_1b9c46b1ecc783b52be63a3e66a1e3de;
static PyCodeObject *codeobj_1643fb3501044873c9e0b9afc79d8fd3;
static PyCodeObject *codeobj_aa130298e6cd915ce3c46168d830997f;
static PyCodeObject *codeobj_c08219f7e0a78c365d03474baac460c1;
static PyCodeObject *codeobj_6235b41678eb7f9dd51a1c5c8cb7de91;
static PyCodeObject *codeobj_5b97ede82f90e8f7c920686262c4c76c;
static PyCodeObject *codeobj_6240613f8d389846e068d3ed1e9a28c6;
static PyCodeObject *codeobj_1b8a1d54177d4c312b087159f4edaae9;
static PyCodeObject *codeobj_b7af69a54ccc3f2c22d28cef07006df4;
static PyCodeObject *codeobj_0b0af011f668899e5f1fa0319fa834ef;
static PyCodeObject *codeobj_d0a155392b78f8c237366740b7e806d3;
static PyCodeObject *codeobj_ecf6278fb62153a38c11715409f0a640;
static PyCodeObject *codeobj_9eb40b521a3d4c55ae28b70f0dd36a02;
static PyCodeObject *codeobj_551d77cea179406190828d032cfaf25e;
static PyCodeObject *codeobj_6c96372defba2f12d98c7c1064a90cf4;
static PyCodeObject *codeobj_caa373b77343e025617bc8fe8e41cbb9;
static PyCodeObject *codeobj_feff84a29eabd4b2f652314dd64b407f;
static PyCodeObject *codeobj_25b004355d48f3ddbea90f7e0dff2348;
static PyCodeObject *codeobj_17d62bd13e6cffcf7ba6c062716b3157;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_bbf7571aaa3edb4a9c1dd5c2990d3de4 );
    codeobj_6aa005fa219f3dd5d10f3dfa9ebf3ec9 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 447, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_i_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fbf7dae15a056d1874a9b1cff61628e1 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 496, const_tuple_da9ab5abea714773c6626cc64f6d375e_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_731817b6ac9f75d121a9a557f0b78de8 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 588, const_tuple_b630e4ee3a292785d79f3fdc6b7b3a27_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ae7eff15c69bc5bcc29824b23de90a5b = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 884, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arr_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a5b4dd2c5e2ca087f83a56001be161e4 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 885, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arr_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a1142eddb32919db908ad5406e4bcbe2 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 419, const_tuple_str_plain_arr_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_230478f24e70fcf006f3a92fcd1af812 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 431, const_tuple_str_plain_arr_str_plain_sl_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_98cf7235447432893988227dbf24e33f = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 581, const_tuple_str_plain_shape_str_plain_axis_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d2d00ff9da709011310c038eff0c6ad6 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 596, const_tuple_str_plain_start_str_plain_end_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3f5aca8741b83c68c68958b8afb313d3 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 631, const_tuple_81707c10f0df0189a2d0277990b0dbfa_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a33007f3dc926ee01784f766dac17eef = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 638, const_tuple_a3aa2f878cd22e2e50b9922f3df0fa6b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b8f885e84ef2db3e879cce578de31228 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 665, const_tuple_81707c10f0df0189a2d0277990b0dbfa_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_045e802adba160c2da82e171b248e52c = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 881, const_tuple_str_plain_arr_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_221a5ccc23e8d9d4a3e390aa130e9185 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ec9d9d680533b610bd9f1a29189fd37d, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_8b1d20db60e0d78c953c4ad899f5237c = MAKE_CODEOBJ( module_filename_obj, const_str_angle_setcontraction, 423, const_tuple_str_plain_arr_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9962c1f848e5d55585e284ee02fc8659 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__accumulate, 533, const_tuple_15dea024c47fcc99f9af2d3e1bf1dfba_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e1f566bb2eb38c76f73d8de0857b9015 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__arrays_for_stack_dispatcher, 208, const_tuple_str_plain_arrays_str_plain_stacklevel_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0189c3fdb49af755c71024cc991badb4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__atleast_1d_dispatcher, 20, const_tuple_str_plain_arys_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_3542f5c8b18da835a7d570c597da5604 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__atleast_2d_dispatcher, 78, const_tuple_str_plain_arys_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_ea6ff67bccf130eeb55397d5ddff07cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain__atleast_3d_dispatcher, 136, const_tuple_str_plain_arys_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_1b9c46b1ecc783b52be63a3e66a1e3de = MAKE_CODEOBJ( module_filename_obj, const_str_plain__atleast_nd, 527, const_tuple_str_plain_a_str_plain_ndim_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1643fb3501044873c9e0b9afc79d8fd3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__block, 655, const_tuple_da2f4ca24bc238683a84396ccf9342a0_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aa130298e6cd915ce3c46168d830997f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__block_check_depths_match, 451, const_tuple_5cebd82ef3361f9247168521132e3980_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c08219f7e0a78c365d03474baac460c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__block_concatenate, 897, const_tuple_fba5d3772dddccf0649d29775417867e_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6235b41678eb7f9dd51a1c5c8cb7de91 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__block_dispatcher, 674, const_tuple_str_plain_arrays_str_plain_subarrays_str_plain_subarray_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5b97ede82f90e8f7c920686262c4c76c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__block_format_index, 443, const_tuple_str_plain_index_str_plain_idx_str_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6240613f8d389846e068d3ed1e9a28c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__block_info_recursion, 602, const_tuple_bfdb38f00dd16c14e84762cc035ea8fe_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1b8a1d54177d4c312b087159f4edaae9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__block_setup, 861, const_tuple_1cafeedad90bbc2f71d16732a728a0f1_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b7af69a54ccc3f2c22d28cef07006df4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__block_slicing, 878, const_tuple_4f172e10db4558a8f5dd53fe299f31f1_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0b0af011f668899e5f1fa0319fa834ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain__concatenate_shapes, 544, const_tuple_70258e1f253725b897e60906008c7bd1_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0a155392b78f8c237366740b7e806d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__stack_dispatcher, 347, const_tuple_str_plain_arrays_str_plain_axis_str_plain_out_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ecf6278fb62153a38c11715409f0a640 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__vhstack_dispatcher, 219, const_tuple_str_plain_tup_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9eb40b521a3d4c55ae28b70f0dd36a02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_atleast_1d, 24, const_tuple_str_plain_arys_str_plain_res_str_plain_ary_str_plain_result_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_551d77cea179406190828d032cfaf25e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_atleast_2d, 82, const_tuple_str_plain_arys_str_plain_res_str_plain_ary_str_plain_result_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_6c96372defba2f12d98c7c1064a90cf4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_atleast_3d, 140, const_tuple_str_plain_arys_str_plain_res_str_plain_ary_str_plain_result_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_caa373b77343e025617bc8fe8e41cbb9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_block, 686, const_tuple_f3a3e751d47f0966296c099e060e41ff_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_feff84a29eabd4b2f652314dd64b407f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hstack, 285, const_tuple_str_plain_tup_str_plain_arrs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_25b004355d48f3ddbea90f7e0dff2348 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_stack, 356, const_tuple_5be020b560806dad5834356bca694da0_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_17d62bd13e6cffcf7ba6c062716b3157 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_vstack, 223, const_tuple_str_plain_tup_str_plain_arrs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *numpy$core$shape_base$$$function_13__block_format_index$$$genexpr_1_genexpr_maker( void );


static PyObject *numpy$core$shape_base$$$function_14__block_check_depths_match$$$genexpr_1_genexpr_maker( void );


static PyObject *numpy$core$shape_base$$$function_17__concatenate_shapes$$$genexpr_1_genexpr_maker( void );


static PyObject *numpy$core$shape_base$$$function_20__block_dispatcher$$$genobj_1__block_dispatcher_maker( void );


static PyObject *numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_1_genexpr_maker( void );


static PyObject *numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_2_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_10_hstack(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_11__stack_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_12_stack( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_13__block_format_index(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_14__block_check_depths_match( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_15__atleast_nd(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_16__accumulate(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_17__concatenate_shapes(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_18__block_info_recursion( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_19__block( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_1__atleast_1d_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_20__block_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_21_block(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_22__block_setup(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_23__block_slicing(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_24__block_concatenate(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_2_atleast_1d(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_3__atleast_2d_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_4_atleast_2d(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_5__atleast_3d_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_6_atleast_3d(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_7__arrays_for_stack_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_8__vhstack_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_9_vstack(  );


// The module function definitions.
static PyObject *impl_numpy$core$shape_base$$$function_1__atleast_1d_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arys = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_arys );
    tmp_return_value = par_arys;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_1__atleast_1d_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arys );
    Py_DECREF( par_arys );
    par_arys = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_1__atleast_1d_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$shape_base$$$function_2_atleast_1d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arys = python_pars[ 0 ];
    PyObject *var_res = NULL;
    PyObject *var_ary = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_9eb40b521a3d4c55ae28b70f0dd36a02;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9eb40b521a3d4c55ae28b70f0dd36a02 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_res == NULL );
        var_res = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9eb40b521a3d4c55ae28b70f0dd36a02, codeobj_9eb40b521a3d4c55ae28b70f0dd36a02, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9eb40b521a3d4c55ae28b70f0dd36a02 = cache_frame_9eb40b521a3d4c55ae28b70f0dd36a02;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9eb40b521a3d4c55ae28b70f0dd36a02 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9eb40b521a3d4c55ae28b70f0dd36a02 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_arys );
        tmp_iter_arg_1 = par_arys;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 65;
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
            PyObject *old = var_ary;
            var_ary = tmp_assign_source_4;
            Py_INCREF( var_ary );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asanyarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_ary );
        tmp_args_element_name_1 = var_ary;
        frame_9eb40b521a3d4c55ae28b70f0dd36a02->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_ary;
            assert( old != NULL );
            var_ary = tmp_assign_source_5;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_ary );
        tmp_source_name_1 = var_ary;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oooo";
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( var_ary );
            tmp_called_instance_1 = var_ary;
            frame_9eb40b521a3d4c55ae28b70f0dd36a02->m_frame.f_lineno = 68;
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_result;
                var_result = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( var_ary );
            tmp_assign_source_7 = var_ary;
            {
                PyObject *old = var_result;
                var_result = tmp_assign_source_7;
                Py_INCREF( var_result );
                Py_XDECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_res );
        tmp_called_instance_2 = var_res;
        CHECK_OBJECT( var_result );
        tmp_args_element_name_2 = var_result;
        frame_9eb40b521a3d4c55ae28b70f0dd36a02->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooo";
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
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_res );
        tmp_len_arg_1 = var_res;
        tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
        assert( !(tmp_compexpr_left_2 == NULL) );
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_res );
            tmp_subscribed_name_1 = var_res;
            tmp_subscript_name_1 = const_int_0;
            tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        CHECK_OBJECT( var_res );
        tmp_return_value = var_res;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9eb40b521a3d4c55ae28b70f0dd36a02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9eb40b521a3d4c55ae28b70f0dd36a02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9eb40b521a3d4c55ae28b70f0dd36a02 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9eb40b521a3d4c55ae28b70f0dd36a02, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9eb40b521a3d4c55ae28b70f0dd36a02->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9eb40b521a3d4c55ae28b70f0dd36a02, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9eb40b521a3d4c55ae28b70f0dd36a02,
        type_description_1,
        par_arys,
        var_res,
        var_ary,
        var_result
    );


    // Release cached frame.
    if ( frame_9eb40b521a3d4c55ae28b70f0dd36a02 == cache_frame_9eb40b521a3d4c55ae28b70f0dd36a02 )
    {
        Py_DECREF( frame_9eb40b521a3d4c55ae28b70f0dd36a02 );
    }
    cache_frame_9eb40b521a3d4c55ae28b70f0dd36a02 = NULL;

    assertFrameObject( frame_9eb40b521a3d4c55ae28b70f0dd36a02 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_2_atleast_1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arys );
    Py_DECREF( par_arys );
    par_arys = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_ary );
    var_ary = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arys );
    Py_DECREF( par_arys );
    par_arys = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_ary );
    var_ary = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_2_atleast_1d );
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


static PyObject *impl_numpy$core$shape_base$$$function_3__atleast_2d_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arys = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_arys );
    tmp_return_value = par_arys;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_3__atleast_2d_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arys );
    Py_DECREF( par_arys );
    par_arys = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_3__atleast_2d_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$shape_base$$$function_4_atleast_2d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arys = python_pars[ 0 ];
    PyObject *var_res = NULL;
    PyObject *var_ary = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_551d77cea179406190828d032cfaf25e;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_551d77cea179406190828d032cfaf25e = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_res == NULL );
        var_res = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_551d77cea179406190828d032cfaf25e, codeobj_551d77cea179406190828d032cfaf25e, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_551d77cea179406190828d032cfaf25e = cache_frame_551d77cea179406190828d032cfaf25e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_551d77cea179406190828d032cfaf25e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_551d77cea179406190828d032cfaf25e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_arys );
        tmp_iter_arg_1 = par_arys;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 121;
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
            PyObject *old = var_ary;
            var_ary = tmp_assign_source_4;
            Py_INCREF( var_ary );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asanyarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_ary );
        tmp_args_element_name_1 = var_ary;
        frame_551d77cea179406190828d032cfaf25e->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_ary;
            assert( old != NULL );
            var_ary = tmp_assign_source_5;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_ary );
        tmp_source_name_1 = var_ary;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "oooo";
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( var_ary );
            tmp_called_instance_1 = var_ary;
            frame_551d77cea179406190828d032cfaf25e->m_frame.f_lineno = 124;
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_pos_1_int_pos_1_tuple, 0 ) );

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_result;
                var_result = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( var_ary );
            tmp_source_name_2 = var_ary;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 125;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            tmp_compexpr_right_2 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 125;
                type_description_1 = "oooo";
                goto try_except_handler_2;
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
                PyObject *tmp_assign_source_7;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_mvar_value_2;
                CHECK_OBJECT( var_ary );
                tmp_subscribed_name_1 = var_ary;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_newaxis );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_newaxis );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "newaxis" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 126;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }

                tmp_tuple_element_1 = tmp_mvar_value_2;
                tmp_subscript_name_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_1 );
                tmp_tuple_element_1 = const_slice_none_none_none;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_1 );
                tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscript_name_1 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 126;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_result;
                    var_result = tmp_assign_source_7;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT( var_ary );
                tmp_assign_source_8 = var_ary;
                {
                    PyObject *old = var_result;
                    var_result = tmp_assign_source_8;
                    Py_INCREF( var_result );
                    Py_XDECREF( old );
                }

            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_res );
        tmp_source_name_3 = var_res;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if ( var_result == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 129;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_2 = var_result;
        frame_551d77cea179406190828d032cfaf25e->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oooo";
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
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_res );
        tmp_len_arg_1 = var_res;
        tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
        assert( !(tmp_compexpr_left_3 == NULL) );
        tmp_compexpr_right_3 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
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
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( var_res );
            tmp_subscribed_name_2 = var_res;
            tmp_subscript_name_2 = const_int_0;
            tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_3;
        branch_no_3:;
        CHECK_OBJECT( var_res );
        tmp_return_value = var_res;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_551d77cea179406190828d032cfaf25e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_551d77cea179406190828d032cfaf25e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_551d77cea179406190828d032cfaf25e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_551d77cea179406190828d032cfaf25e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_551d77cea179406190828d032cfaf25e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_551d77cea179406190828d032cfaf25e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_551d77cea179406190828d032cfaf25e,
        type_description_1,
        par_arys,
        var_res,
        var_ary,
        var_result
    );


    // Release cached frame.
    if ( frame_551d77cea179406190828d032cfaf25e == cache_frame_551d77cea179406190828d032cfaf25e )
    {
        Py_DECREF( frame_551d77cea179406190828d032cfaf25e );
    }
    cache_frame_551d77cea179406190828d032cfaf25e = NULL;

    assertFrameObject( frame_551d77cea179406190828d032cfaf25e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_4_atleast_2d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arys );
    Py_DECREF( par_arys );
    par_arys = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_ary );
    var_ary = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arys );
    Py_DECREF( par_arys );
    par_arys = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_ary );
    var_ary = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_4_atleast_2d );
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


static PyObject *impl_numpy$core$shape_base$$$function_5__atleast_3d_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arys = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_arys );
    tmp_return_value = par_arys;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_5__atleast_3d_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arys );
    Py_DECREF( par_arys );
    par_arys = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_5__atleast_3d_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$shape_base$$$function_6_atleast_3d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arys = python_pars[ 0 ];
    PyObject *var_res = NULL;
    PyObject *var_ary = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_6c96372defba2f12d98c7c1064a90cf4;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6c96372defba2f12d98c7c1064a90cf4 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_res == NULL );
        var_res = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c96372defba2f12d98c7c1064a90cf4, codeobj_6c96372defba2f12d98c7c1064a90cf4, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6c96372defba2f12d98c7c1064a90cf4 = cache_frame_6c96372defba2f12d98c7c1064a90cf4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c96372defba2f12d98c7c1064a90cf4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c96372defba2f12d98c7c1064a90cf4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_arys );
        tmp_iter_arg_1 = par_arys;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 191;
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
            PyObject *old = var_ary;
            var_ary = tmp_assign_source_4;
            Py_INCREF( var_ary );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asanyarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 192;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_ary );
        tmp_args_element_name_1 = var_ary;
        frame_6c96372defba2f12d98c7c1064a90cf4->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_ary;
            assert( old != NULL );
            var_ary = tmp_assign_source_5;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_ary );
        tmp_source_name_1 = var_ary;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooo";
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( var_ary );
            tmp_called_instance_1 = var_ary;
            frame_6c96372defba2f12d98c7c1064a90cf4->m_frame.f_lineno = 194;
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_pos_1_int_pos_1_int_pos_1_tuple, 0 ) );

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 194;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_result;
                var_result = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( var_ary );
            tmp_source_name_2 = var_ary;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            tmp_compexpr_right_2 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "oooo";
                goto try_except_handler_2;
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
                PyObject *tmp_assign_source_7;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_mvar_value_3;
                CHECK_OBJECT( var_ary );
                tmp_subscribed_name_1 = var_ary;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_newaxis );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_newaxis );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "newaxis" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 196;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }

                tmp_tuple_element_1 = tmp_mvar_value_2;
                tmp_subscript_name_1 = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_1 );
                tmp_tuple_element_1 = const_slice_none_none_none;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_1 );
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_newaxis );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_newaxis );
                }

                if ( tmp_mvar_value_3 == NULL )
                {
                    Py_DECREF( tmp_subscript_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "newaxis" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 196;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }

                tmp_tuple_element_1 = tmp_mvar_value_3;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_subscript_name_1, 2, tmp_tuple_element_1 );
                tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscript_name_1 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 196;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_result;
                    var_result = tmp_assign_source_7;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT( var_ary );
                tmp_source_name_3 = var_ary;
                tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 197;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                tmp_compexpr_right_3 = const_int_pos_2;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 197;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
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
                    PyObject *tmp_assign_source_8;
                    PyObject *tmp_subscribed_name_2;
                    PyObject *tmp_subscript_name_2;
                    PyObject *tmp_tuple_element_2;
                    PyObject *tmp_mvar_value_4;
                    CHECK_OBJECT( var_ary );
                    tmp_subscribed_name_2 = var_ary;
                    tmp_tuple_element_2 = const_slice_none_none_none;
                    tmp_subscript_name_2 = PyTuple_New( 3 );
                    Py_INCREF( tmp_tuple_element_2 );
                    PyTuple_SET_ITEM( tmp_subscript_name_2, 0, tmp_tuple_element_2 );
                    tmp_tuple_element_2 = const_slice_none_none_none;
                    Py_INCREF( tmp_tuple_element_2 );
                    PyTuple_SET_ITEM( tmp_subscript_name_2, 1, tmp_tuple_element_2 );
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_newaxis );

                    if (unlikely( tmp_mvar_value_4 == NULL ))
                    {
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_newaxis );
                    }

                    if ( tmp_mvar_value_4 == NULL )
                    {
                        Py_DECREF( tmp_subscript_name_2 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "newaxis" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 198;
                        type_description_1 = "oooo";
                        goto try_except_handler_2;
                    }

                    tmp_tuple_element_2 = tmp_mvar_value_4;
                    Py_INCREF( tmp_tuple_element_2 );
                    PyTuple_SET_ITEM( tmp_subscript_name_2, 2, tmp_tuple_element_2 );
                    tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                    Py_DECREF( tmp_subscript_name_2 );
                    if ( tmp_assign_source_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 198;
                        type_description_1 = "oooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_result;
                        var_result = tmp_assign_source_8;
                        Py_XDECREF( old );
                    }

                }
                goto branch_end_3;
                branch_no_3:;
                {
                    PyObject *tmp_assign_source_9;
                    CHECK_OBJECT( var_ary );
                    tmp_assign_source_9 = var_ary;
                    {
                        PyObject *old = var_result;
                        var_result = tmp_assign_source_9;
                        Py_INCREF( var_result );
                        Py_XDECREF( old );
                    }

                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_res );
        tmp_source_name_4 = var_res;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if ( var_result == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 201;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_2 = var_result;
        frame_6c96372defba2f12d98c7c1064a90cf4->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "oooo";
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
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_res );
        tmp_len_arg_1 = var_res;
        tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_1 );
        assert( !(tmp_compexpr_left_4 == NULL) );
        tmp_compexpr_right_4 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( var_res );
            tmp_subscribed_name_3 = var_res;
            tmp_subscript_name_3 = const_int_0;
            tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_4;
        branch_no_4:;
        CHECK_OBJECT( var_res );
        tmp_return_value = var_res;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c96372defba2f12d98c7c1064a90cf4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c96372defba2f12d98c7c1064a90cf4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c96372defba2f12d98c7c1064a90cf4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c96372defba2f12d98c7c1064a90cf4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c96372defba2f12d98c7c1064a90cf4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c96372defba2f12d98c7c1064a90cf4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c96372defba2f12d98c7c1064a90cf4,
        type_description_1,
        par_arys,
        var_res,
        var_ary,
        var_result
    );


    // Release cached frame.
    if ( frame_6c96372defba2f12d98c7c1064a90cf4 == cache_frame_6c96372defba2f12d98c7c1064a90cf4 )
    {
        Py_DECREF( frame_6c96372defba2f12d98c7c1064a90cf4 );
    }
    cache_frame_6c96372defba2f12d98c7c1064a90cf4 = NULL;

    assertFrameObject( frame_6c96372defba2f12d98c7c1064a90cf4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_6_atleast_3d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arys );
    Py_DECREF( par_arys );
    par_arys = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_ary );
    var_ary = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arys );
    Py_DECREF( par_arys );
    par_arys = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_ary );
    var_ary = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_6_atleast_3d );
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


static PyObject *impl_numpy$core$shape_base$$$function_7__arrays_for_stack_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    PyObject *par_stacklevel = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e1f566bb2eb38c76f73d8de0857b9015;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e1f566bb2eb38c76f73d8de0857b9015 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e1f566bb2eb38c76f73d8de0857b9015, codeobj_e1f566bb2eb38c76f73d8de0857b9015, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *) );
    frame_e1f566bb2eb38c76f73d8de0857b9015 = cache_frame_e1f566bb2eb38c76f73d8de0857b9015;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e1f566bb2eb38c76f73d8de0857b9015 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e1f566bb2eb38c76f73d8de0857b9015 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_name_2;
        CHECK_OBJECT( par_arrays );
        tmp_source_name_1 = par_arrays;
        tmp_attribute_name_1 = const_str_plain___getitem__;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_arrays );
        tmp_source_name_2 = par_arrays;
        tmp_attribute_name_2 = const_str_plain___iter__;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_2, tmp_attribute_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 210;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_warn );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 210;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = const_str_digest_dcf6dc776c8508ac5c029e2bb2739044;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_FutureWarning );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FutureWarning );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FutureWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 214;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = tmp_mvar_value_2;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_stacklevel;
            CHECK_OBJECT( par_stacklevel );
            tmp_dict_value_1 = par_stacklevel;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_e1f566bb2eb38c76f73d8de0857b9015->m_frame.f_lineno = 210;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 210;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        tmp_return_value = const_tuple_empty;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1f566bb2eb38c76f73d8de0857b9015 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1f566bb2eb38c76f73d8de0857b9015 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1f566bb2eb38c76f73d8de0857b9015 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e1f566bb2eb38c76f73d8de0857b9015, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e1f566bb2eb38c76f73d8de0857b9015->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e1f566bb2eb38c76f73d8de0857b9015, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e1f566bb2eb38c76f73d8de0857b9015,
        type_description_1,
        par_arrays,
        par_stacklevel
    );


    // Release cached frame.
    if ( frame_e1f566bb2eb38c76f73d8de0857b9015 == cache_frame_e1f566bb2eb38c76f73d8de0857b9015 )
    {
        Py_DECREF( frame_e1f566bb2eb38c76f73d8de0857b9015 );
    }
    cache_frame_e1f566bb2eb38c76f73d8de0857b9015 = NULL;

    assertFrameObject( frame_e1f566bb2eb38c76f73d8de0857b9015 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_arrays );
    tmp_return_value = par_arrays;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_7__arrays_for_stack_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_stacklevel );
    Py_DECREF( par_stacklevel );
    par_stacklevel = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_stacklevel );
    Py_DECREF( par_stacklevel );
    par_stacklevel = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_7__arrays_for_stack_dispatcher );
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


static PyObject *impl_numpy$core$shape_base$$$function_8__vhstack_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tup = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_ecf6278fb62153a38c11715409f0a640;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ecf6278fb62153a38c11715409f0a640 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ecf6278fb62153a38c11715409f0a640, codeobj_ecf6278fb62153a38c11715409f0a640, module_numpy$core$shape_base, sizeof(void *) );
    frame_ecf6278fb62153a38c11715409f0a640 = cache_frame_ecf6278fb62153a38c11715409f0a640;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ecf6278fb62153a38c11715409f0a640 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ecf6278fb62153a38c11715409f0a640 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_arrays_for_stack_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_tup );
        tmp_args_element_name_1 = par_tup;
        frame_ecf6278fb62153a38c11715409f0a640->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ecf6278fb62153a38c11715409f0a640 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ecf6278fb62153a38c11715409f0a640 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ecf6278fb62153a38c11715409f0a640 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ecf6278fb62153a38c11715409f0a640, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ecf6278fb62153a38c11715409f0a640->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ecf6278fb62153a38c11715409f0a640, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ecf6278fb62153a38c11715409f0a640,
        type_description_1,
        par_tup
    );


    // Release cached frame.
    if ( frame_ecf6278fb62153a38c11715409f0a640 == cache_frame_ecf6278fb62153a38c11715409f0a640 )
    {
        Py_DECREF( frame_ecf6278fb62153a38c11715409f0a640 );
    }
    cache_frame_ecf6278fb62153a38c11715409f0a640 = NULL;

    assertFrameObject( frame_ecf6278fb62153a38c11715409f0a640 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_8__vhstack_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_8__vhstack_dispatcher );
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


static PyObject *impl_numpy$core$shape_base$$$function_9_vstack( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tup = python_pars[ 0 ];
    PyObject *var_arrs = NULL;
    struct Nuitka_FrameObject *frame_17d62bd13e6cffcf7ba6c062716b3157;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_17d62bd13e6cffcf7ba6c062716b3157 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_17d62bd13e6cffcf7ba6c062716b3157, codeobj_17d62bd13e6cffcf7ba6c062716b3157, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *) );
    frame_17d62bd13e6cffcf7ba6c062716b3157 = cache_frame_17d62bd13e6cffcf7ba6c062716b3157;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_17d62bd13e6cffcf7ba6c062716b3157 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_17d62bd13e6cffcf7ba6c062716b3157 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_overrides );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_overrides );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "overrides" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ARRAY_FUNCTION_ENABLED );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_arrays_for_stack_dispatcher" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 278;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_tup );
            tmp_tuple_element_1 = par_tup;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
            frame_17d62bd13e6cffcf7ba6c062716b3157->m_frame.f_lineno = 278;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dircall_arg2_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_atleast_2d );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_2d );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atleast_2d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_tup );
        tmp_dircall_arg2_1 = par_tup;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_arrs == NULL );
        var_arrs = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( var_arrs );
        tmp_isinstance_inst_1 = var_arrs;
        tmp_isinstance_cls_1 = (PyObject *)&PyList_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "oo";
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
            PyObject *tmp_list_element_1;
            CHECK_OBJECT( var_arrs );
            tmp_list_element_1 = var_arrs;
            tmp_assign_source_2 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_2, 0, tmp_list_element_1 );
            {
                PyObject *old = var_arrs;
                assert( old != NULL );
                var_arrs = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        CHECK_OBJECT( var_arrs );
        tmp_args_element_name_1 = var_arrs;
        tmp_args_element_name_2 = const_int_0;
        frame_17d62bd13e6cffcf7ba6c062716b3157->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_concatenate, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17d62bd13e6cffcf7ba6c062716b3157 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_17d62bd13e6cffcf7ba6c062716b3157 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17d62bd13e6cffcf7ba6c062716b3157 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_17d62bd13e6cffcf7ba6c062716b3157, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_17d62bd13e6cffcf7ba6c062716b3157->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_17d62bd13e6cffcf7ba6c062716b3157, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_17d62bd13e6cffcf7ba6c062716b3157,
        type_description_1,
        par_tup,
        var_arrs
    );


    // Release cached frame.
    if ( frame_17d62bd13e6cffcf7ba6c062716b3157 == cache_frame_17d62bd13e6cffcf7ba6c062716b3157 )
    {
        Py_DECREF( frame_17d62bd13e6cffcf7ba6c062716b3157 );
    }
    cache_frame_17d62bd13e6cffcf7ba6c062716b3157 = NULL;

    assertFrameObject( frame_17d62bd13e6cffcf7ba6c062716b3157 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_9_vstack );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

    CHECK_OBJECT( (PyObject *)var_arrs );
    Py_DECREF( var_arrs );
    var_arrs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

    Py_XDECREF( var_arrs );
    var_arrs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_9_vstack );
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


static PyObject *impl_numpy$core$shape_base$$$function_10_hstack( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tup = python_pars[ 0 ];
    PyObject *var_arrs = NULL;
    struct Nuitka_FrameObject *frame_feff84a29eabd4b2f652314dd64b407f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_feff84a29eabd4b2f652314dd64b407f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_feff84a29eabd4b2f652314dd64b407f, codeobj_feff84a29eabd4b2f652314dd64b407f, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *) );
    frame_feff84a29eabd4b2f652314dd64b407f = cache_frame_feff84a29eabd4b2f652314dd64b407f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_feff84a29eabd4b2f652314dd64b407f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_feff84a29eabd4b2f652314dd64b407f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_overrides );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_overrides );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "overrides" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 333;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ARRAY_FUNCTION_ENABLED );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_arrays_for_stack_dispatcher" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 335;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_tup );
            tmp_tuple_element_1 = par_tup;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
            frame_feff84a29eabd4b2f652314dd64b407f->m_frame.f_lineno = 335;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dircall_arg2_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_atleast_1d );

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

            exception_lineno = 337;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_tup );
        tmp_dircall_arg2_1 = par_tup;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_arrs == NULL );
        var_arrs = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( var_arrs );
        tmp_isinstance_inst_1 = var_arrs;
        tmp_isinstance_cls_1 = (PyObject *)&PyList_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "oo";
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
            PyObject *tmp_list_element_1;
            CHECK_OBJECT( var_arrs );
            tmp_list_element_1 = var_arrs;
            tmp_assign_source_2 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_2, 0, tmp_list_element_1 );
            {
                PyObject *old = var_arrs;
                assert( old != NULL );
                var_arrs = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_arrs );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_arrs );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oo";
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
        CHECK_OBJECT( var_arrs );
        tmp_subscribed_name_1 = var_arrs;
        tmp_subscript_name_1 = const_int_0;
        tmp_source_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oo";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 342;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_4;
            CHECK_OBJECT( var_arrs );
            tmp_args_element_name_1 = var_arrs;
            tmp_args_element_name_2 = const_int_0;
            frame_feff84a29eabd4b2f652314dd64b407f->m_frame.f_lineno = 342;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_concatenate, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 344;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_5;
            CHECK_OBJECT( var_arrs );
            tmp_args_element_name_3 = var_arrs;
            tmp_args_element_name_4 = const_int_pos_1;
            frame_feff84a29eabd4b2f652314dd64b407f->m_frame.f_lineno = 344;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_concatenate, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 344;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_feff84a29eabd4b2f652314dd64b407f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_feff84a29eabd4b2f652314dd64b407f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_feff84a29eabd4b2f652314dd64b407f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_feff84a29eabd4b2f652314dd64b407f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_feff84a29eabd4b2f652314dd64b407f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_feff84a29eabd4b2f652314dd64b407f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_feff84a29eabd4b2f652314dd64b407f,
        type_description_1,
        par_tup,
        var_arrs
    );


    // Release cached frame.
    if ( frame_feff84a29eabd4b2f652314dd64b407f == cache_frame_feff84a29eabd4b2f652314dd64b407f )
    {
        Py_DECREF( frame_feff84a29eabd4b2f652314dd64b407f );
    }
    cache_frame_feff84a29eabd4b2f652314dd64b407f = NULL;

    assertFrameObject( frame_feff84a29eabd4b2f652314dd64b407f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_10_hstack );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

    CHECK_OBJECT( (PyObject *)var_arrs );
    Py_DECREF( var_arrs );
    var_arrs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

    Py_XDECREF( var_arrs );
    var_arrs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_10_hstack );
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


static PyObject *impl_numpy$core$shape_base$$$function_11__stack_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_d0a155392b78f8c237366740b7e806d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d0a155392b78f8c237366740b7e806d3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d0a155392b78f8c237366740b7e806d3, codeobj_d0a155392b78f8c237366740b7e806d3, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d0a155392b78f8c237366740b7e806d3 = cache_frame_d0a155392b78f8c237366740b7e806d3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d0a155392b78f8c237366740b7e806d3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d0a155392b78f8c237366740b7e806d3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_arrays_for_stack_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 348;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_arrays );
        tmp_tuple_element_1 = par_arrays;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_f5069c97cdc54b2d109afca44cc81281 );
        frame_d0a155392b78f8c237366740b7e806d3->m_frame.f_lineno = 348;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 348;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_arrays;
            assert( old != NULL );
            par_arrays = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_out );
        tmp_compexpr_left_1 = par_out;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_list_arg_1;
            CHECK_OBJECT( par_arrays );
            tmp_list_arg_1 = par_arrays;
            tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 351;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_arrays;
                assert( old != NULL );
                par_arrays = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_arrays );
            tmp_called_instance_1 = par_arrays;
            CHECK_OBJECT( par_out );
            tmp_args_element_name_1 = par_out;
            frame_d0a155392b78f8c237366740b7e806d3->m_frame.f_lineno = 352;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0a155392b78f8c237366740b7e806d3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0a155392b78f8c237366740b7e806d3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0a155392b78f8c237366740b7e806d3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0a155392b78f8c237366740b7e806d3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0a155392b78f8c237366740b7e806d3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d0a155392b78f8c237366740b7e806d3,
        type_description_1,
        par_arrays,
        par_axis,
        par_out
    );


    // Release cached frame.
    if ( frame_d0a155392b78f8c237366740b7e806d3 == cache_frame_d0a155392b78f8c237366740b7e806d3 )
    {
        Py_DECREF( frame_d0a155392b78f8c237366740b7e806d3 );
    }
    cache_frame_d0a155392b78f8c237366740b7e806d3 = NULL;

    assertFrameObject( frame_d0a155392b78f8c237366740b7e806d3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_arrays );
    tmp_return_value = par_arrays;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_11__stack_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_11__stack_dispatcher );
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


static PyObject *impl_numpy$core$shape_base$$$function_12_stack( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *var_shapes = NULL;
    PyObject *var_result_ndim = NULL;
    PyObject *var_sl = NULL;
    PyObject *var_expanded_arrays = NULL;
    PyObject *outline_0_var_arr = NULL;
    PyObject *outline_1_var_arr = NULL;
    PyObject *outline_2_var_arr = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_setcontraction_1__$0 = NULL;
    PyObject *tmp_setcontraction_1__contraction = NULL;
    PyObject *tmp_setcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_25b004355d48f3ddbea90f7e0dff2348;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_a1142eddb32919db908ad5406e4bcbe2_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a1142eddb32919db908ad5406e4bcbe2_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_8b1d20db60e0d78c953c4ad899f5237c_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_8b1d20db60e0d78c953c4ad899f5237c_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_230478f24e70fcf006f3a92fcd1af812_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_230478f24e70fcf006f3a92fcd1af812_4 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_25b004355d48f3ddbea90f7e0dff2348 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_25b004355d48f3ddbea90f7e0dff2348, codeobj_25b004355d48f3ddbea90f7e0dff2348, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_25b004355d48f3ddbea90f7e0dff2348 = cache_frame_25b004355d48f3ddbea90f7e0dff2348;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_25b004355d48f3ddbea90f7e0dff2348 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_25b004355d48f3ddbea90f7e0dff2348 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_overrides );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_overrides );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "overrides" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 415;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ARRAY_FUNCTION_ENABLED );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_arrays_for_stack_dispatcher" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 417;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_arrays );
            tmp_tuple_element_1 = par_arrays;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
            frame_25b004355d48f3ddbea90f7e0dff2348->m_frame.f_lineno = 417;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 417;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_arrays );
            tmp_iter_arg_1 = par_arrays;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 419;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_a1142eddb32919db908ad5406e4bcbe2_2, codeobj_a1142eddb32919db908ad5406e4bcbe2, module_numpy$core$shape_base, sizeof(void *) );
        frame_a1142eddb32919db908ad5406e4bcbe2_2 = cache_frame_a1142eddb32919db908ad5406e4bcbe2_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_a1142eddb32919db908ad5406e4bcbe2_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_a1142eddb32919db908ad5406e4bcbe2_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
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
                    type_description_2 = "o";
                    exception_lineno = 419;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_arr;
                outline_0_var_arr = tmp_assign_source_5;
                Py_INCREF( outline_0_var_arr );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asanyarray" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 419;
                type_description_2 = "o";
                goto try_except_handler_3;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( outline_0_var_arr );
            tmp_args_element_name_1 = outline_0_var_arr;
            frame_a1142eddb32919db908ad5406e4bcbe2_2->m_frame.f_lineno = 419;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 419;
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


                exception_lineno = 419;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_1 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_12_stack );
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
        RESTORE_FRAME_EXCEPTION( frame_a1142eddb32919db908ad5406e4bcbe2_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_a1142eddb32919db908ad5406e4bcbe2_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_a1142eddb32919db908ad5406e4bcbe2_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_a1142eddb32919db908ad5406e4bcbe2_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_a1142eddb32919db908ad5406e4bcbe2_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_a1142eddb32919db908ad5406e4bcbe2_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_a1142eddb32919db908ad5406e4bcbe2_2,
            type_description_2,
            outline_0_var_arr
        );


        // Release cached frame.
        if ( frame_a1142eddb32919db908ad5406e4bcbe2_2 == cache_frame_a1142eddb32919db908ad5406e4bcbe2_2 )
        {
            Py_DECREF( frame_a1142eddb32919db908ad5406e4bcbe2_2 );
        }
        cache_frame_a1142eddb32919db908ad5406e4bcbe2_2 = NULL;

        assertFrameObject( frame_a1142eddb32919db908ad5406e4bcbe2_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_12_stack );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_arr );
        outline_0_var_arr = NULL;

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

        Py_XDECREF( outline_0_var_arr );
        outline_0_var_arr = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_12_stack );
        return NULL;
        outline_exception_1:;
        exception_lineno = 419;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = par_arrays;
            assert( old != NULL );
            par_arrays = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( par_arrays );
        tmp_operand_name_2 = par_arrays;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_e2aace573343e64efec459500b1d15cc;
            frame_25b004355d48f3ddbea90f7e0dff2348->m_frame.f_lineno = 421;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 421;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_6;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( par_arrays );
            tmp_iter_arg_2 = par_arrays;
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_setcontraction_1__$0 == NULL );
            tmp_setcontraction_1__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = PySet_New( NULL );
            assert( tmp_setcontraction_1__contraction == NULL );
            tmp_setcontraction_1__contraction = tmp_assign_source_8;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_8b1d20db60e0d78c953c4ad899f5237c_3, codeobj_8b1d20db60e0d78c953c4ad899f5237c, module_numpy$core$shape_base, sizeof(void *) );
        frame_8b1d20db60e0d78c953c4ad899f5237c_3 = cache_frame_8b1d20db60e0d78c953c4ad899f5237c_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_8b1d20db60e0d78c953c4ad899f5237c_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_8b1d20db60e0d78c953c4ad899f5237c_3 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_setcontraction_1__$0 );
            tmp_next_source_2 = tmp_setcontraction_1__$0;
            tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_9 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 423;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_setcontraction_1__iter_value_0;
                tmp_setcontraction_1__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_setcontraction_1__iter_value_0 );
            tmp_assign_source_10 = tmp_setcontraction_1__iter_value_0;
            {
                PyObject *old = outline_1_var_arr;
                outline_1_var_arr = tmp_assign_source_10;
                Py_INCREF( outline_1_var_arr );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_setcontraction_1__contraction );
            tmp_append_list_2 = tmp_setcontraction_1__contraction;
            CHECK_OBJECT( outline_1_var_arr );
            tmp_source_name_2 = outline_1_var_arr;
            tmp_append_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
            if ( tmp_append_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert( PySet_Check( tmp_append_list_2 ) );
            tmp_res = PySet_Add( tmp_append_list_2, tmp_append_value_2 );
            Py_DECREF( tmp_append_value_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_setcontraction_1__contraction );
        tmp_assign_source_6 = tmp_setcontraction_1__contraction;
        Py_INCREF( tmp_assign_source_6 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_12_stack );
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)tmp_setcontraction_1__$0 );
        Py_DECREF( tmp_setcontraction_1__$0 );
        tmp_setcontraction_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_setcontraction_1__contraction );
        Py_DECREF( tmp_setcontraction_1__contraction );
        tmp_setcontraction_1__contraction = NULL;

        Py_XDECREF( tmp_setcontraction_1__iter_value_0 );
        tmp_setcontraction_1__iter_value_0 = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_setcontraction_1__$0 );
        Py_DECREF( tmp_setcontraction_1__$0 );
        tmp_setcontraction_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_setcontraction_1__contraction );
        Py_DECREF( tmp_setcontraction_1__contraction );
        tmp_setcontraction_1__contraction = NULL;

        Py_XDECREF( tmp_setcontraction_1__iter_value_0 );
        tmp_setcontraction_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8b1d20db60e0d78c953c4ad899f5237c_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_8b1d20db60e0d78c953c4ad899f5237c_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8b1d20db60e0d78c953c4ad899f5237c_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_8b1d20db60e0d78c953c4ad899f5237c_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_8b1d20db60e0d78c953c4ad899f5237c_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_8b1d20db60e0d78c953c4ad899f5237c_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_8b1d20db60e0d78c953c4ad899f5237c_3,
            type_description_2,
            outline_1_var_arr
        );


        // Release cached frame.
        if ( frame_8b1d20db60e0d78c953c4ad899f5237c_3 == cache_frame_8b1d20db60e0d78c953c4ad899f5237c_3 )
        {
            Py_DECREF( frame_8b1d20db60e0d78c953c4ad899f5237c_3 );
        }
        cache_frame_8b1d20db60e0d78c953c4ad899f5237c_3 = NULL;

        assertFrameObject( frame_8b1d20db60e0d78c953c4ad899f5237c_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_12_stack );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF( outline_1_var_arr );
        outline_1_var_arr = NULL;

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

        Py_XDECREF( outline_1_var_arr );
        outline_1_var_arr = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_12_stack );
        return NULL;
        outline_exception_2:;
        exception_lineno = 423;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert( var_shapes == NULL );
        var_shapes = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_shapes );
        tmp_len_arg_1 = var_shapes;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
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
            tmp_make_exception_arg_2 = const_str_digest_178512e92ee9bb9661192deec41d1ede;
            frame_25b004355d48f3ddbea90f7e0dff2348->m_frame.f_lineno = 425;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 425;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_arrays );
        tmp_subscribed_name_1 = par_arrays;
        tmp_subscript_name_1 = const_int_0;
        tmp_source_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 427;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 427;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 427;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_result_ndim == NULL );
        var_result_ndim = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalize_axis_index" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 428;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        CHECK_OBJECT( var_result_ndim );
        tmp_args_element_name_3 = var_result_ndim;
        frame_25b004355d48f3ddbea90f7e0dff2348->m_frame.f_lineno = 428;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_axis;
            assert( old != NULL );
            par_axis = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        tmp_left_name_3 = const_tuple_slice_none_none_none_tuple;
        CHECK_OBJECT( par_axis );
        tmp_right_name_2 = par_axis;
        tmp_left_name_2 = BINARY_OPERATION_MUL_TUPLE_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 430;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_newaxis );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 430;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_2 );
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sl == NULL );
        var_sl = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( par_arrays );
            tmp_iter_arg_3 = par_arrays;
            tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 431;
                type_description_1 = "ooooooo";
                goto try_except_handler_6;
            }
            assert( tmp_listcomp_2__$0 == NULL );
            tmp_listcomp_2__$0 = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = PyList_New( 0 );
            assert( tmp_listcomp_2__contraction == NULL );
            tmp_listcomp_2__contraction = tmp_assign_source_16;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_230478f24e70fcf006f3a92fcd1af812_4, codeobj_230478f24e70fcf006f3a92fcd1af812, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *) );
        frame_230478f24e70fcf006f3a92fcd1af812_4 = cache_frame_230478f24e70fcf006f3a92fcd1af812_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_230478f24e70fcf006f3a92fcd1af812_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_230478f24e70fcf006f3a92fcd1af812_4 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_listcomp_2__$0 );
            tmp_next_source_3 = tmp_listcomp_2__$0;
            tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_3 );
            if ( tmp_assign_source_17 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "oo";
                    exception_lineno = 431;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_17;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
            tmp_assign_source_18 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_2_var_arr;
                outline_2_var_arr = tmp_assign_source_18;
                Py_INCREF( outline_2_var_arr );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( tmp_listcomp_2__contraction );
            tmp_append_list_3 = tmp_listcomp_2__contraction;
            CHECK_OBJECT( outline_2_var_arr );
            tmp_subscribed_name_2 = outline_2_var_arr;
            CHECK_OBJECT( var_sl );
            tmp_subscript_name_2 = var_sl;
            tmp_append_value_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_append_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 431;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            assert( PyList_Check( tmp_append_list_3 ) );
            tmp_res = PyList_Append( tmp_append_list_3, tmp_append_value_3 );
            Py_DECREF( tmp_append_value_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 431;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 431;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT( tmp_listcomp_2__contraction );
        tmp_assign_source_14 = tmp_listcomp_2__contraction;
        Py_INCREF( tmp_assign_source_14 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_12_stack );
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
        Py_DECREF( tmp_listcomp_2__$0 );
        tmp_listcomp_2__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
        Py_DECREF( tmp_listcomp_2__contraction );
        tmp_listcomp_2__contraction = NULL;

        Py_XDECREF( tmp_listcomp_2__iter_value_0 );
        tmp_listcomp_2__iter_value_0 = NULL;

        goto frame_return_exit_4;
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

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
        Py_DECREF( tmp_listcomp_2__$0 );
        tmp_listcomp_2__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
        Py_DECREF( tmp_listcomp_2__contraction );
        tmp_listcomp_2__contraction = NULL;

        Py_XDECREF( tmp_listcomp_2__iter_value_0 );
        tmp_listcomp_2__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_4;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_230478f24e70fcf006f3a92fcd1af812_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_return_exit_4:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_230478f24e70fcf006f3a92fcd1af812_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_230478f24e70fcf006f3a92fcd1af812_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_230478f24e70fcf006f3a92fcd1af812_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_230478f24e70fcf006f3a92fcd1af812_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_230478f24e70fcf006f3a92fcd1af812_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_230478f24e70fcf006f3a92fcd1af812_4,
            type_description_2,
            outline_2_var_arr,
            var_sl
        );


        // Release cached frame.
        if ( frame_230478f24e70fcf006f3a92fcd1af812_4 == cache_frame_230478f24e70fcf006f3a92fcd1af812_4 )
        {
            Py_DECREF( frame_230478f24e70fcf006f3a92fcd1af812_4 );
        }
        cache_frame_230478f24e70fcf006f3a92fcd1af812_4 = NULL;

        assertFrameObject( frame_230478f24e70fcf006f3a92fcd1af812_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "ooooooo";
        goto try_except_handler_6;
        skip_nested_handling_3:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_12_stack );
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF( outline_2_var_arr );
        outline_2_var_arr = NULL;

        goto outline_result_3;
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

        Py_XDECREF( outline_2_var_arr );
        outline_2_var_arr = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_12_stack );
        return NULL;
        outline_exception_3:;
        exception_lineno = 431;
        goto frame_exception_exit_1;
        outline_result_3:;
        assert( var_expanded_arrays == NULL );
        var_expanded_arrays = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_6;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_concatenate );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_expanded_arrays );
        tmp_tuple_element_3 = var_expanded_arrays;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
        tmp_dict_key_1 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_1 = par_axis;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_out;
        CHECK_OBJECT( par_out );
        tmp_dict_value_2 = par_out;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_25b004355d48f3ddbea90f7e0dff2348->m_frame.f_lineno = 432;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25b004355d48f3ddbea90f7e0dff2348 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_25b004355d48f3ddbea90f7e0dff2348 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25b004355d48f3ddbea90f7e0dff2348 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_25b004355d48f3ddbea90f7e0dff2348, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_25b004355d48f3ddbea90f7e0dff2348->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_25b004355d48f3ddbea90f7e0dff2348, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_25b004355d48f3ddbea90f7e0dff2348,
        type_description_1,
        par_arrays,
        par_axis,
        par_out,
        var_shapes,
        var_result_ndim,
        var_sl,
        var_expanded_arrays
    );


    // Release cached frame.
    if ( frame_25b004355d48f3ddbea90f7e0dff2348 == cache_frame_25b004355d48f3ddbea90f7e0dff2348 )
    {
        Py_DECREF( frame_25b004355d48f3ddbea90f7e0dff2348 );
    }
    cache_frame_25b004355d48f3ddbea90f7e0dff2348 = NULL;

    assertFrameObject( frame_25b004355d48f3ddbea90f7e0dff2348 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_4:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_12_stack );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)var_shapes );
    Py_DECREF( var_shapes );
    var_shapes = NULL;

    CHECK_OBJECT( (PyObject *)var_result_ndim );
    Py_DECREF( var_result_ndim );
    var_result_ndim = NULL;

    CHECK_OBJECT( (PyObject *)var_sl );
    Py_DECREF( var_sl );
    var_sl = NULL;

    CHECK_OBJECT( (PyObject *)var_expanded_arrays );
    Py_DECREF( var_expanded_arrays );
    var_expanded_arrays = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    Py_XDECREF( var_shapes );
    var_shapes = NULL;

    Py_XDECREF( var_result_ndim );
    var_result_ndim = NULL;

    Py_XDECREF( var_sl );
    var_sl = NULL;

    Py_XDECREF( var_expanded_arrays );
    var_expanded_arrays = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_12_stack );
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


static PyObject *impl_numpy$core$shape_base$$$function_13__block_format_index( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_index = python_pars[ 0 ];
    PyObject *var_idx_str = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_5b97ede82f90e8f7c920686262c4c76c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5b97ede82f90e8f7c920686262c4c76c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5b97ede82f90e8f7c920686262c4c76c, codeobj_5b97ede82f90e8f7c920686262c4c76c, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *) );
    frame_5b97ede82f90e8f7c920686262c4c76c = cache_frame_5b97ede82f90e8f7c920686262c4c76c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5b97ede82f90e8f7c920686262c4c76c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5b97ede82f90e8f7c920686262c4c76c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_source_name_1 = const_str_empty;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
        assert( !(tmp_called_name_1 == NULL) );
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_index );
            tmp_iter_arg_1 = par_index;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 447;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        tmp_args_element_name_1 = numpy$core$shape_base$$$function_13__block_format_index$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_13__block_format_index );
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
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_13__block_format_index );
        return NULL;
        outline_result_1:;
        frame_5b97ede82f90e8f7c920686262c4c76c->m_frame.f_lineno = 447;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 447;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_idx_str == NULL );
        var_idx_str = tmp_assign_source_1;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_str_plain_arrays;
        CHECK_OBJECT( var_idx_str );
        tmp_right_name_1 = var_idx_str;
        tmp_return_value = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b97ede82f90e8f7c920686262c4c76c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b97ede82f90e8f7c920686262c4c76c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b97ede82f90e8f7c920686262c4c76c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5b97ede82f90e8f7c920686262c4c76c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5b97ede82f90e8f7c920686262c4c76c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5b97ede82f90e8f7c920686262c4c76c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5b97ede82f90e8f7c920686262c4c76c,
        type_description_1,
        par_index,
        var_idx_str
    );


    // Release cached frame.
    if ( frame_5b97ede82f90e8f7c920686262c4c76c == cache_frame_5b97ede82f90e8f7c920686262c4c76c )
    {
        Py_DECREF( frame_5b97ede82f90e8f7c920686262c4c76c );
    }
    cache_frame_5b97ede82f90e8f7c920686262c4c76c = NULL;

    assertFrameObject( frame_5b97ede82f90e8f7c920686262c4c76c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_13__block_format_index );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_index );
    Py_DECREF( par_index );
    par_index = NULL;

    CHECK_OBJECT( (PyObject *)var_idx_str );
    Py_DECREF( var_idx_str );
    var_idx_str = NULL;

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

    CHECK_OBJECT( (PyObject *)par_index );
    Py_DECREF( par_index );
    par_index = NULL;

    Py_XDECREF( var_idx_str );
    var_idx_str = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_13__block_format_index );
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



struct numpy$core$shape_base$$$function_13__block_format_index$$$genexpr_1_genexpr_locals {
    PyObject *var_i;
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

static PyObject *numpy$core$shape_base$$$function_13__block_format_index$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$core$shape_base$$$function_13__block_format_index$$$genexpr_1_genexpr_locals *generator_heap = (struct numpy$core$shape_base$$$function_13__block_format_index$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_i = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_6aa005fa219f3dd5d10f3dfa9ebf3ec9, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 447;
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
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_i );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( generator_heap->var_i );
        tmp_compexpr_left_1 = generator_heap->var_i;
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
            PyObject *tmp_expression_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
            tmp_called_instance_1 = const_str_digest_efb46d5ae6444069cb470abcca31da10;
            CHECK_OBJECT( generator_heap->var_i );
            tmp_args_element_name_1 = generator_heap->var_i;
            generator->m_frame->m_frame.f_lineno = 447;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_expression_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
            }

            if ( tmp_expression_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 447;
                generator_heap->type_description_1 = "No";
                goto try_except_handler_2;
            }
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
            generator->m_yield_return_index = 1;
            return tmp_expression_name_1;
            yield_return_1:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 447;
                generator_heap->type_description_1 = "No";
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


        generator_heap->exception_lineno = 447;
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
            generator_heap->var_i
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

    Py_XDECREF( generator_heap->var_i );
    generator_heap->var_i = NULL;

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

    Py_XDECREF( generator_heap->var_i );
    generator_heap->var_i = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$core$shape_base$$$function_13__block_format_index$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$core$shape_base$$$function_13__block_format_index$$$genexpr_1_genexpr_context,
        module_numpy$core$shape_base,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_93a0dab5c5488e186ac055f4f94532ca,
#endif
        codeobj_6aa005fa219f3dd5d10f3dfa9ebf3ec9,
        1,
        sizeof(struct numpy$core$shape_base$$$function_13__block_format_index$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_numpy$core$shape_base$$$function_14__block_check_depths_match( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    struct Nuitka_CellObject *par_parent_index = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *var_idxs_ndims = NULL;
    PyObject *var_first_index = NULL;
    PyObject *var_max_arr_ndim = NULL;
    PyObject *var_final_size = NULL;
    PyObject *var_index = NULL;
    PyObject *var_ndim = NULL;
    PyObject *var_size = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_aa130298e6cd915ce3c46168d830997f;
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
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_aa130298e6cd915ce3c46168d830997f = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aa130298e6cd915ce3c46168d830997f, codeobj_aa130298e6cd915ce3c46168d830997f, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aa130298e6cd915ce3c46168d830997f = cache_frame_aa130298e6cd915ce3c46168d830997f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aa130298e6cd915ce3c46168d830997f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aa130298e6cd915ce3c46168d830997f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT( par_arrays );
        tmp_type_arg_1 = par_arrays;
        tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_compexpr_left_1 == NULL) );
        tmp_compexpr_right_1 = (PyObject *)&PyTuple_Type;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_2;
            tmp_source_name_1 = const_str_digest_a1d24a536e3fbb717f9de5a921a9decd;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
            assert( !(tmp_called_name_1 == NULL) );
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_format_index );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__block_format_index );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_block_format_index" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 492;
                type_description_1 = "ocooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_1;
            CHECK_OBJECT( PyCell_GET( par_parent_index ) );
            tmp_args_element_name_2 = PyCell_GET( par_parent_index );
            frame_aa130298e6cd915ce3c46168d830997f->m_frame.f_lineno = 492;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 492;
                type_description_1 = "ocooooooo";
                goto frame_exception_exit_1;
            }
            frame_aa130298e6cd915ce3c46168d830997f->m_frame.f_lineno = 489;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 489;
                type_description_1 = "ocooooooo";
                goto frame_exception_exit_1;
            }
            frame_aa130298e6cd915ce3c46168d830997f->m_frame.f_lineno = 488;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 488;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_type_arg_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( par_arrays );
            tmp_type_arg_2 = par_arrays;
            tmp_compexpr_left_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_compexpr_left_2 == NULL) );
            tmp_compexpr_right_2 = (PyObject *)&PyList_Type;
            tmp_and_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_2 );
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
            CHECK_OBJECT( par_arrays );
            tmp_len_arg_1 = par_arrays;
            tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 495;
                type_description_1 = "ocooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            assert( !(tmp_res == -1) );
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
                PyObject *tmp_assign_source_1;
                {
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_iter_arg_1;
                    PyObject *tmp_called_name_3;
                    PyObject *tmp_args_element_name_3;
                    tmp_called_name_3 = (PyObject *)&PyEnum_Type;
                    CHECK_OBJECT( par_arrays );
                    tmp_args_element_name_3 = par_arrays;
                    frame_aa130298e6cd915ce3c46168d830997f->m_frame.f_lineno = 497;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_3 };
                        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                    }

                    if ( tmp_iter_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 497;
                        type_description_1 = "ocooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
                    Py_DECREF( tmp_iter_arg_1 );
                    if ( tmp_assign_source_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 496;
                        type_description_1 = "ocooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( tmp_genexpr_1__$0 == NULL );
                    tmp_genexpr_1__$0 = tmp_assign_source_2;
                }
                // Tried code:
                tmp_assign_source_1 = numpy$core$shape_base$$$function_14__block_check_depths_match$$$genexpr_1_genexpr_maker();

                ((struct Nuitka_GeneratorObject *)tmp_assign_source_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
                ((struct Nuitka_GeneratorObject *)tmp_assign_source_1)->m_closure[1] = par_parent_index;
                Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_assign_source_1)->m_closure[1] );


                goto try_return_handler_2;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_14__block_check_depths_match );
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
                NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_14__block_check_depths_match );
                return NULL;
                outline_result_1:;
                assert( var_idxs_ndims == NULL );
                var_idxs_ndims = tmp_assign_source_1;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_value_name_1;
                CHECK_OBJECT( var_idxs_ndims );
                tmp_value_name_1 = var_idxs_ndims;
                tmp_iter_arg_2 = ITERATOR_NEXT( tmp_value_name_1 );
                if ( tmp_iter_arg_2 == NULL )
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


                    type_description_1 = "ocooooooo";
                    exception_lineno = 499;
                    goto try_except_handler_3;
                }
                tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 499;
                    type_description_1 = "ocooooooo";
                    goto try_except_handler_3;
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


                    type_description_1 = "ocooooooo";
                    exception_lineno = 499;
                    goto try_except_handler_4;
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


                    type_description_1 = "ocooooooo";
                    exception_lineno = 499;
                    goto try_except_handler_4;
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


                    type_description_1 = "ocooooooo";
                    exception_lineno = 499;
                    goto try_except_handler_4;
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

                            type_description_1 = "ocooooooo";
                            exception_lineno = 499;
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
                    PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ocooooooo";
                    exception_lineno = 499;
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
                assert( var_first_index == NULL );
                Py_INCREF( tmp_assign_source_7 );
                var_first_index = tmp_assign_source_7;
            }
            Py_XDECREF( tmp_tuple_unpack_1__element_1 );
            tmp_tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
                tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
                assert( var_max_arr_ndim == NULL );
                Py_INCREF( tmp_assign_source_8 );
                var_max_arr_ndim = tmp_assign_source_8;
            }
            Py_XDECREF( tmp_tuple_unpack_1__element_2 );
            tmp_tuple_unpack_1__element_2 = NULL;

            {
                PyObject *tmp_assign_source_9;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
                tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
                assert( var_final_size == NULL );
                Py_INCREF( tmp_assign_source_9 );
                var_final_size = tmp_assign_source_9;
            }
            Py_XDECREF( tmp_tuple_unpack_1__element_3 );
            tmp_tuple_unpack_1__element_3 = NULL;

            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_iter_arg_3;
                CHECK_OBJECT( var_idxs_ndims );
                tmp_iter_arg_3 = var_idxs_ndims;
                tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 500;
                    type_description_1 = "ocooooooo";
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
                        type_description_1 = "ocooooooo";
                        exception_lineno = 500;
                        goto try_except_handler_5;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_1__iter_value;
                    tmp_for_loop_1__iter_value = tmp_assign_source_11;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_12;
                PyObject *tmp_iter_arg_4;
                CHECK_OBJECT( tmp_for_loop_1__iter_value );
                tmp_iter_arg_4 = tmp_for_loop_1__iter_value;
                tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_4 );
                if ( tmp_assign_source_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 500;
                    type_description_1 = "ocooooooo";
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = tmp_tuple_unpack_2__source_iter;
                    tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_unpack_4;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_4, 0, 3 );
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


                    type_description_1 = "ocooooooo";
                    exception_lineno = 500;
                    goto try_except_handler_7;
                }
                {
                    PyObject *old = tmp_tuple_unpack_2__element_1;
                    tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_unpack_5;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_5, 1, 3 );
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


                    type_description_1 = "ocooooooo";
                    exception_lineno = 500;
                    goto try_except_handler_7;
                }
                {
                    PyObject *old = tmp_tuple_unpack_2__element_2;
                    tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_unpack_6;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_6, 2, 3 );
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


                    type_description_1 = "ocooooooo";
                    exception_lineno = 500;
                    goto try_except_handler_7;
                }
                {
                    PyObject *old = tmp_tuple_unpack_2__element_3;
                    tmp_tuple_unpack_2__element_3 = tmp_assign_source_15;
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

                            type_description_1 = "ocooooooo";
                            exception_lineno = 500;
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
                    PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ocooooooo";
                    exception_lineno = 500;
                    goto try_except_handler_7;
                }
            }
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

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
            Py_DECREF( tmp_tuple_unpack_2__source_iter );
            tmp_tuple_unpack_2__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto try_except_handler_6;
            // End of try:
            try_end_3:;
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

            goto try_except_handler_5;
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
                    PyObject *old = var_index;
                    var_index = tmp_assign_source_16;
                    Py_INCREF( var_index );
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
                    PyObject *old = var_ndim;
                    var_ndim = tmp_assign_source_17;
                    Py_INCREF( var_ndim );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_2__element_2 );
            tmp_tuple_unpack_2__element_2 = NULL;

            {
                PyObject *tmp_assign_source_18;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
                tmp_assign_source_18 = tmp_tuple_unpack_2__element_3;
                {
                    PyObject *old = var_size;
                    var_size = tmp_assign_source_18;
                    Py_INCREF( var_size );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_2__element_3 );
            tmp_tuple_unpack_2__element_3 = NULL;

            {
                PyObject *tmp_assign_source_19;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( var_final_size );
                tmp_left_name_1 = var_final_size;
                CHECK_OBJECT( var_size );
                tmp_right_name_1 = var_size;
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 501;
                    type_description_1 = "ocooooooo";
                    goto try_except_handler_5;
                }
                tmp_assign_source_19 = tmp_left_name_1;
                var_final_size = tmp_assign_source_19;

            }
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( var_ndim );
                tmp_compexpr_left_4 = var_ndim;
                if ( var_max_arr_ndim == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "max_arr_ndim" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 502;
                    type_description_1 = "ocooooooo";
                    goto try_except_handler_5;
                }

                tmp_compexpr_right_4 = var_max_arr_ndim;
                tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 502;
                    type_description_1 = "ocooooooo";
                    goto try_except_handler_5;
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
                    PyObject *tmp_assign_source_20;
                    CHECK_OBJECT( var_ndim );
                    tmp_assign_source_20 = var_ndim;
                    {
                        PyObject *old = var_max_arr_ndim;
                        var_max_arr_ndim = tmp_assign_source_20;
                        Py_INCREF( var_max_arr_ndim );
                        Py_XDECREF( old );
                    }

                }
                branch_no_3:;
            }
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_len_arg_2;
                PyObject *tmp_len_arg_3;
                CHECK_OBJECT( var_index );
                tmp_len_arg_2 = var_index;
                tmp_compexpr_left_5 = BUILTIN_LEN( tmp_len_arg_2 );
                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 504;
                    type_description_1 = "ocooooooo";
                    goto try_except_handler_5;
                }
                if ( var_first_index == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_5 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_index" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 504;
                    type_description_1 = "ocooooooo";
                    goto try_except_handler_5;
                }

                tmp_len_arg_3 = var_first_index;
                tmp_compexpr_right_5 = BUILTIN_LEN( tmp_len_arg_3 );
                if ( tmp_compexpr_right_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_5 );

                    exception_lineno = 504;
                    type_description_1 = "ocooooooo";
                    goto try_except_handler_5;
                }
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                Py_DECREF( tmp_compexpr_right_5 );
                assert( !(tmp_res == -1) );
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
                    PyObject *tmp_called_name_4;
                    PyObject *tmp_source_name_2;
                    PyObject *tmp_args_element_name_4;
                    PyObject *tmp_len_arg_4;
                    PyObject *tmp_args_element_name_5;
                    PyObject *tmp_len_arg_5;
                    PyObject *tmp_args_element_name_6;
                    PyObject *tmp_called_name_5;
                    PyObject *tmp_mvar_value_2;
                    PyObject *tmp_args_element_name_7;
                    tmp_source_name_2 = const_str_digest_8c7cfe3d08dfb55572f2ffbb2ed45ad6;
                    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_format );
                    assert( !(tmp_called_name_4 == NULL) );
                    if ( var_first_index == NULL )
                    {
                        Py_DECREF( tmp_called_name_4 );
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_index" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 508;
                        type_description_1 = "ocooooooo";
                        goto try_except_handler_5;
                    }

                    tmp_len_arg_4 = var_first_index;
                    tmp_args_element_name_4 = BUILTIN_LEN( tmp_len_arg_4 );
                    if ( tmp_args_element_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );

                        exception_lineno = 508;
                        type_description_1 = "ocooooooo";
                        goto try_except_handler_5;
                    }
                    CHECK_OBJECT( var_index );
                    tmp_len_arg_5 = var_index;
                    tmp_args_element_name_5 = BUILTIN_LEN( tmp_len_arg_5 );
                    if ( tmp_args_element_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_args_element_name_4 );

                        exception_lineno = 509;
                        type_description_1 = "ocooooooo";
                        goto try_except_handler_5;
                    }
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_format_index );

                    if (unlikely( tmp_mvar_value_2 == NULL ))
                    {
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__block_format_index );
                    }

                    if ( tmp_mvar_value_2 == NULL )
                    {
                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_args_element_name_4 );
                        Py_DECREF( tmp_args_element_name_5 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_block_format_index" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 510;
                        type_description_1 = "ocooooooo";
                        goto try_except_handler_5;
                    }

                    tmp_called_name_5 = tmp_mvar_value_2;
                    CHECK_OBJECT( var_index );
                    tmp_args_element_name_7 = var_index;
                    frame_aa130298e6cd915ce3c46168d830997f->m_frame.f_lineno = 510;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_7 };
                        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                    }

                    if ( tmp_args_element_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_args_element_name_4 );
                        Py_DECREF( tmp_args_element_name_5 );

                        exception_lineno = 510;
                        type_description_1 = "ocooooooo";
                        goto try_except_handler_5;
                    }
                    frame_aa130298e6cd915ce3c46168d830997f->m_frame.f_lineno = 506;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                        tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
                    }

                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_element_name_4 );
                    Py_DECREF( tmp_args_element_name_5 );
                    Py_DECREF( tmp_args_element_name_6 );
                    if ( tmp_make_exception_arg_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 506;
                        type_description_1 = "ocooooooo";
                        goto try_except_handler_5;
                    }
                    frame_aa130298e6cd915ce3c46168d830997f->m_frame.f_lineno = 505;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_2 };
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_2 );
                    assert( !(tmp_raise_type_2 == NULL) );
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 505;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ocooooooo";
                    goto try_except_handler_5;
                }
                branch_no_4:;
            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                CHECK_OBJECT( var_index );
                tmp_subscribed_name_1 = var_index;
                tmp_subscript_name_1 = const_int_neg_1;
                tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
                if ( tmp_compexpr_left_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 514;
                    type_description_1 = "ocooooooo";
                    goto try_except_handler_5;
                }
                tmp_compexpr_right_6 = Py_None;
                tmp_condition_result_5 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_compexpr_left_6 );
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
                    CHECK_OBJECT( var_index );
                    tmp_assign_source_21 = var_index;
                    {
                        PyObject *old = var_first_index;
                        var_first_index = tmp_assign_source_21;
                        Py_INCREF( var_first_index );
                        Py_XDECREF( old );
                    }

                }
                branch_no_5:;
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 500;
                type_description_1 = "ocooooooo";
                goto try_except_handler_5;
            }
            goto loop_start_1;
            loop_end_1:;
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
                PyObject *tmp_tuple_element_1;
                if ( var_first_index == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_index" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 517;
                    type_description_1 = "ocooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_1 = var_first_index;
                tmp_return_value = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
                if ( var_max_arr_ndim == NULL )
                {
                    Py_DECREF( tmp_return_value );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "max_arr_ndim" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 517;
                    type_description_1 = "ocooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_1 = var_max_arr_ndim;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
                CHECK_OBJECT( var_final_size );
                tmp_tuple_element_1 = var_final_size;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_6;
                int tmp_and_left_truth_2;
                nuitka_bool tmp_and_left_value_2;
                nuitka_bool tmp_and_right_value_2;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                PyObject *tmp_type_arg_3;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                PyObject *tmp_len_arg_6;
                CHECK_OBJECT( par_arrays );
                tmp_type_arg_3 = par_arrays;
                tmp_compexpr_left_7 = BUILTIN_TYPE1( tmp_type_arg_3 );
                assert( !(tmp_compexpr_left_7 == NULL) );
                tmp_compexpr_right_7 = (PyObject *)&PyList_Type;
                tmp_and_left_value_2 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_compexpr_left_7 );
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
                CHECK_OBJECT( par_arrays );
                tmp_len_arg_6 = par_arrays;
                tmp_compexpr_left_8 = BUILTIN_LEN( tmp_len_arg_6 );
                if ( tmp_compexpr_left_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 518;
                    type_description_1 = "ocooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_8 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                Py_DECREF( tmp_compexpr_left_8 );
                assert( !(tmp_res == -1) );
                tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_tuple_element_2;
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_right_name_2;
                    CHECK_OBJECT( PyCell_GET( par_parent_index ) );
                    tmp_left_name_2 = PyCell_GET( par_parent_index );
                    tmp_right_name_2 = LIST_COPY( const_list_none_list );
                    tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_LIST( tmp_left_name_2, tmp_right_name_2 );
                    Py_DECREF( tmp_right_name_2 );
                    if ( tmp_tuple_element_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 520;
                        type_description_1 = "ocooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_return_value = PyTuple_New( 3 );
                    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
                    tmp_tuple_element_2 = const_int_0;
                    Py_INCREF( tmp_tuple_element_2 );
                    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
                    tmp_tuple_element_2 = const_int_0;
                    Py_INCREF( tmp_tuple_element_2 );
                    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
                    goto frame_return_exit_1;
                }
                goto branch_end_6;
                branch_no_6:;
                {
                    PyObject *tmp_assign_source_22;
                    PyObject *tmp_called_name_6;
                    PyObject *tmp_mvar_value_3;
                    PyObject *tmp_args_element_name_8;
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__size );

                    if (unlikely( tmp_mvar_value_3 == NULL ))
                    {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__size );
                    }

                    if ( tmp_mvar_value_3 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_size" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 523;
                        type_description_1 = "ocooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_6 = tmp_mvar_value_3;
                    CHECK_OBJECT( par_arrays );
                    tmp_args_element_name_8 = par_arrays;
                    frame_aa130298e6cd915ce3c46168d830997f->m_frame.f_lineno = 523;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_8 };
                        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
                    }

                    if ( tmp_assign_source_22 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 523;
                        type_description_1 = "ocooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_size == NULL );
                    var_size = tmp_assign_source_22;
                }
                {
                    PyObject *tmp_tuple_element_3;
                    PyObject *tmp_called_name_7;
                    PyObject *tmp_mvar_value_4;
                    PyObject *tmp_args_element_name_9;
                    CHECK_OBJECT( PyCell_GET( par_parent_index ) );
                    tmp_tuple_element_3 = PyCell_GET( par_parent_index );
                    tmp_return_value = PyTuple_New( 3 );
                    Py_INCREF( tmp_tuple_element_3 );
                    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__ndim );

                    if (unlikely( tmp_mvar_value_4 == NULL ))
                    {
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ndim );
                    }

                    if ( tmp_mvar_value_4 == NULL )
                    {
                        Py_DECREF( tmp_return_value );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ndim" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 524;
                        type_description_1 = "ocooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_7 = tmp_mvar_value_4;
                    CHECK_OBJECT( par_arrays );
                    tmp_args_element_name_9 = par_arrays;
                    frame_aa130298e6cd915ce3c46168d830997f->m_frame.f_lineno = 524;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_9 };
                        tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                    }

                    if ( tmp_tuple_element_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_return_value );

                        exception_lineno = 524;
                        type_description_1 = "ocooooooo";
                        goto frame_exception_exit_1;
                    }
                    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
                    CHECK_OBJECT( var_size );
                    tmp_tuple_element_3 = var_size;
                    Py_INCREF( tmp_tuple_element_3 );
                    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_3 );
                    goto frame_return_exit_1;
                }
                branch_end_6:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa130298e6cd915ce3c46168d830997f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa130298e6cd915ce3c46168d830997f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa130298e6cd915ce3c46168d830997f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aa130298e6cd915ce3c46168d830997f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aa130298e6cd915ce3c46168d830997f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aa130298e6cd915ce3c46168d830997f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aa130298e6cd915ce3c46168d830997f,
        type_description_1,
        par_arrays,
        par_parent_index,
        var_idxs_ndims,
        var_first_index,
        var_max_arr_ndim,
        var_final_size,
        var_index,
        var_ndim,
        var_size
    );


    // Release cached frame.
    if ( frame_aa130298e6cd915ce3c46168d830997f == cache_frame_aa130298e6cd915ce3c46168d830997f )
    {
        Py_DECREF( frame_aa130298e6cd915ce3c46168d830997f );
    }
    cache_frame_aa130298e6cd915ce3c46168d830997f = NULL;

    assertFrameObject( frame_aa130298e6cd915ce3c46168d830997f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_14__block_check_depths_match );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_parent_index );
    Py_DECREF( par_parent_index );
    par_parent_index = NULL;

    Py_XDECREF( var_idxs_ndims );
    var_idxs_ndims = NULL;

    Py_XDECREF( var_first_index );
    var_first_index = NULL;

    Py_XDECREF( var_max_arr_ndim );
    var_max_arr_ndim = NULL;

    Py_XDECREF( var_final_size );
    var_final_size = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_ndim );
    var_ndim = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_parent_index );
    Py_DECREF( par_parent_index );
    par_parent_index = NULL;

    Py_XDECREF( var_idxs_ndims );
    var_idxs_ndims = NULL;

    Py_XDECREF( var_first_index );
    var_first_index = NULL;

    Py_XDECREF( var_max_arr_ndim );
    var_max_arr_ndim = NULL;

    Py_XDECREF( var_final_size );
    var_final_size = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_ndim );
    var_ndim = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_14__block_check_depths_match );
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



struct numpy$core$shape_base$$$function_14__block_check_depths_match$$$genexpr_1_genexpr_locals {
    PyObject *var_i;
    PyObject *var_arr;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *numpy$core$shape_base$$$function_14__block_check_depths_match$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$core$shape_base$$$function_14__block_check_depths_match$$$genexpr_1_genexpr_locals *generator_heap = (struct numpy$core$shape_base$$$function_14__block_check_depths_match$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_i = NULL;
    generator_heap->var_arr = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_fbf7dae15a056d1874a9b1cff61628e1, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
                generator_heap->type_description_1 = "Nooc";
                generator_heap->exception_lineno = 496;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 496;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            }


            generator_heap->type_description_1 = "Nooc";
            generator_heap->exception_lineno = 496;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            }


            generator_heap->type_description_1 = "Nooc";
            generator_heap->exception_lineno = 496;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        generator_heap->tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( generator_heap->tmp_iterator_attempt == NULL ))
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
                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

                    generator_heap->type_description_1 = "Nooc";
                    generator_heap->exception_lineno = 496;
                    goto try_except_handler_4;
                }
            }
        }
        else
        {
            Py_DECREF( generator_heap->tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

            generator_heap->type_description_1 = "Nooc";
            generator_heap->exception_lineno = 496;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_5;
            Py_INCREF( generator_heap->var_i );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_arr;
            generator_heap->var_arr = tmp_assign_source_6;
            Py_INCREF( generator_heap->var_arr );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_list_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_check_depths_match );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__block_check_depths_match );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_block_check_depths_match" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 496;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( generator_heap->var_arr );
        tmp_args_element_name_1 = generator_heap->var_arr;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "parent_index" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 496;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }

        tmp_left_name_1 = PyCell_GET( generator->m_closure[1] );
        CHECK_OBJECT( generator_heap->var_i );
        tmp_list_element_1 = generator_heap->var_i;
        tmp_right_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_right_name_1, 0, tmp_list_element_1 );
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_LIST( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 496;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 496;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 496;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), &tmp_list_element_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), &tmp_list_element_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 496;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 496;
        generator_heap->type_description_1 = "Nooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

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
            generator_heap->var_i,
            generator_heap->var_arr,
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
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_i );
    generator_heap->var_i = NULL;

    Py_XDECREF( generator_heap->var_arr );
    generator_heap->var_arr = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_i );
    generator_heap->var_i = NULL;

    Py_XDECREF( generator_heap->var_arr );
    generator_heap->var_arr = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$core$shape_base$$$function_14__block_check_depths_match$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$core$shape_base$$$function_14__block_check_depths_match$$$genexpr_1_genexpr_context,
        module_numpy$core$shape_base,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_c09a44058734ab9b6bc73b2a7a039a84,
#endif
        codeobj_fbf7dae15a056d1874a9b1cff61628e1,
        2,
        sizeof(struct numpy$core$shape_base$$$function_14__block_check_depths_match$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_numpy$core$shape_base$$$function_15__atleast_nd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_ndim = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_1b9c46b1ecc783b52be63a3e66a1e3de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1b9c46b1ecc783b52be63a3e66a1e3de = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1b9c46b1ecc783b52be63a3e66a1e3de, codeobj_1b9c46b1ecc783b52be63a3e66a1e3de, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *) );
    frame_1b9c46b1ecc783b52be63a3e66a1e3de = cache_frame_1b9c46b1ecc783b52be63a3e66a1e3de;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1b9c46b1ecc783b52be63a3e66a1e3de );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1b9c46b1ecc783b52be63a3e66a1e3de ) == 2 ); // Frame stack

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
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 530;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_ndmin;
        CHECK_OBJECT( par_ndim );
        tmp_dict_value_1 = par_ndim;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_copy;
        tmp_dict_value_2 = Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_subok;
        tmp_dict_value_3 = Py_True;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_1b9c46b1ecc783b52be63a3e66a1e3de->m_frame.f_lineno = 530;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 530;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b9c46b1ecc783b52be63a3e66a1e3de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b9c46b1ecc783b52be63a3e66a1e3de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b9c46b1ecc783b52be63a3e66a1e3de );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1b9c46b1ecc783b52be63a3e66a1e3de, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1b9c46b1ecc783b52be63a3e66a1e3de->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1b9c46b1ecc783b52be63a3e66a1e3de, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1b9c46b1ecc783b52be63a3e66a1e3de,
        type_description_1,
        par_a,
        par_ndim
    );


    // Release cached frame.
    if ( frame_1b9c46b1ecc783b52be63a3e66a1e3de == cache_frame_1b9c46b1ecc783b52be63a3e66a1e3de )
    {
        Py_DECREF( frame_1b9c46b1ecc783b52be63a3e66a1e3de );
    }
    cache_frame_1b9c46b1ecc783b52be63a3e66a1e3de = NULL;

    assertFrameObject( frame_1b9c46b1ecc783b52be63a3e66a1e3de );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_15__atleast_nd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_15__atleast_nd );
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


static PyObject *impl_numpy$core$shape_base$$$function_16__accumulate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[ 0 ];
    PyObject *var_value = NULL;
    PyObject *var_accumulated = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_9962c1f848e5d55585e284ee02fc8659;
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
    static struct Nuitka_FrameObject *cache_frame_9962c1f848e5d55585e284ee02fc8659 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert( var_value == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_value = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New( 0 );
        assert( var_accumulated == NULL );
        var_accumulated = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9962c1f848e5d55585e284ee02fc8659, codeobj_9962c1f848e5d55585e284ee02fc8659, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9962c1f848e5d55585e284ee02fc8659 = cache_frame_9962c1f848e5d55585e284ee02fc8659;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9962c1f848e5d55585e284ee02fc8659 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9962c1f848e5d55585e284ee02fc8659 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_values );
        tmp_iter_arg_1 = par_values;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 538;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 538;
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
            PyObject *old = var_v;
            var_v = tmp_assign_source_5;
            Py_INCREF( var_v );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_value );
        tmp_left_name_1 = var_value;
        CHECK_OBJECT( var_v );
        tmp_right_name_1 = var_v;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 539;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = tmp_left_name_1;
        var_value = tmp_assign_source_6;

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_accumulated );
        tmp_called_instance_1 = var_accumulated;
        CHECK_OBJECT( var_value );
        tmp_args_element_name_1 = var_value;
        frame_9962c1f848e5d55585e284ee02fc8659->m_frame.f_lineno = 540;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 540;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        type_description_1 = "oooo";
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
    RESTORE_FRAME_EXCEPTION( frame_9962c1f848e5d55585e284ee02fc8659 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9962c1f848e5d55585e284ee02fc8659 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9962c1f848e5d55585e284ee02fc8659, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9962c1f848e5d55585e284ee02fc8659->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9962c1f848e5d55585e284ee02fc8659, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9962c1f848e5d55585e284ee02fc8659,
        type_description_1,
        par_values,
        var_value,
        var_accumulated,
        var_v
    );


    // Release cached frame.
    if ( frame_9962c1f848e5d55585e284ee02fc8659 == cache_frame_9962c1f848e5d55585e284ee02fc8659 )
    {
        Py_DECREF( frame_9962c1f848e5d55585e284ee02fc8659 );
    }
    cache_frame_9962c1f848e5d55585e284ee02fc8659 = NULL;

    assertFrameObject( frame_9962c1f848e5d55585e284ee02fc8659 );

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

    CHECK_OBJECT( var_accumulated );
    tmp_return_value = var_accumulated;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_16__accumulate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    CHECK_OBJECT( (PyObject *)var_value );
    Py_DECREF( var_value );
    var_value = NULL;

    CHECK_OBJECT( (PyObject *)var_accumulated );
    Py_DECREF( var_accumulated );
    var_accumulated = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    CHECK_OBJECT( (PyObject *)var_accumulated );
    Py_DECREF( var_accumulated );
    var_accumulated = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_16__accumulate );
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


static PyObject *impl_numpy$core$shape_base$$$function_17__concatenate_shapes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_shapes = python_pars[ 0 ];
    struct Nuitka_CellObject *par_axis = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *var_shape_at_axis = NULL;
    PyObject *var_first_shape = NULL;
    struct Nuitka_CellObject *var_first_shape_pre = PyCell_EMPTY();
    struct Nuitka_CellObject *var_first_shape_post = PyCell_EMPTY();
    PyObject *var_shape = NULL;
    PyObject *var_offsets_at_axis = NULL;
    PyObject *var_slice_prefixes = NULL;
    PyObject *outline_0_var_shape = NULL;
    PyObject *outline_1_var_start = NULL;
    PyObject *outline_1_var_end = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_0b0af011f668899e5f1fa0319fa834ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_98cf7235447432893988227dbf24e33f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_98cf7235447432893988227dbf24e33f_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_d2d00ff9da709011310c038eff0c6ad6_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_d2d00ff9da709011310c038eff0c6ad6_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_0b0af011f668899e5f1fa0319fa834ef = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0b0af011f668899e5f1fa0319fa834ef, codeobj_0b0af011f668899e5f1fa0319fa834ef, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0b0af011f668899e5f1fa0319fa834ef = cache_frame_0b0af011f668899e5f1fa0319fa834ef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0b0af011f668899e5f1fa0319fa834ef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0b0af011f668899e5f1fa0319fa834ef ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_shapes );
            tmp_iter_arg_1 = par_shapes;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 581;
                type_description_1 = "ocooccooo";
                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_98cf7235447432893988227dbf24e33f_2, codeobj_98cf7235447432893988227dbf24e33f, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *) );
        frame_98cf7235447432893988227dbf24e33f_2 = cache_frame_98cf7235447432893988227dbf24e33f_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_98cf7235447432893988227dbf24e33f_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_98cf7235447432893988227dbf24e33f_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
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
                    type_description_2 = "oc";
                    exception_lineno = 581;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_shape;
                outline_0_var_shape = tmp_assign_source_5;
                Py_INCREF( outline_0_var_shape );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT( outline_0_var_shape );
            tmp_subscribed_name_1 = outline_0_var_shape;
            CHECK_OBJECT( PyCell_GET( par_axis ) );
            tmp_subscript_name_1 = PyCell_GET( par_axis );
            tmp_append_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 581;
                type_description_2 = "oc";
                goto try_except_handler_3;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 581;
                type_description_2 = "oc";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 581;
            type_description_2 = "oc";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_1 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_17__concatenate_shapes );
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

        goto frame_return_exit_1;
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
        RESTORE_FRAME_EXCEPTION( frame_98cf7235447432893988227dbf24e33f_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_98cf7235447432893988227dbf24e33f_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_98cf7235447432893988227dbf24e33f_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_98cf7235447432893988227dbf24e33f_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_98cf7235447432893988227dbf24e33f_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_98cf7235447432893988227dbf24e33f_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_98cf7235447432893988227dbf24e33f_2,
            type_description_2,
            outline_0_var_shape,
            par_axis
        );


        // Release cached frame.
        if ( frame_98cf7235447432893988227dbf24e33f_2 == cache_frame_98cf7235447432893988227dbf24e33f_2 )
        {
            Py_DECREF( frame_98cf7235447432893988227dbf24e33f_2 );
        }
        cache_frame_98cf7235447432893988227dbf24e33f_2 = NULL;

        assertFrameObject( frame_98cf7235447432893988227dbf24e33f_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ocooccooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_17__concatenate_shapes );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_shape );
        outline_0_var_shape = NULL;

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

        Py_XDECREF( outline_0_var_shape );
        outline_0_var_shape = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_17__concatenate_shapes );
        return NULL;
        outline_exception_1:;
        exception_lineno = 581;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert( var_shape_at_axis == NULL );
        var_shape_at_axis = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_shapes );
        tmp_subscribed_name_2 = par_shapes;
        tmp_subscript_name_2 = const_int_0;
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 584;
            type_description_1 = "ocooccooo";
            goto frame_exception_exit_1;
        }
        assert( var_first_shape == NULL );
        var_first_shape = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( var_first_shape );
        tmp_subscribed_name_3 = var_first_shape;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( PyCell_GET( par_axis ) );
        tmp_stop_name_1 = PyCell_GET( par_axis );
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_3 == NULL) );
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 585;
            type_description_1 = "ocooccooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_first_shape_pre ) == NULL );
        PyCell_SET( var_first_shape_pre, tmp_assign_source_7 );

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_start_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( var_first_shape );
        tmp_subscribed_name_4 = var_first_shape;
        CHECK_OBJECT( PyCell_GET( par_axis ) );
        tmp_left_name_1 = PyCell_GET( par_axis );
        tmp_right_name_1 = const_int_pos_1;
        tmp_start_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_start_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 586;
            type_description_1 = "ocooccooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_2 = Py_None;
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_start_name_2 );
        assert( !(tmp_subscript_name_4 == NULL) );
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 586;
            type_description_1 = "ocooccooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_first_shape_post ) == NULL );
        PyCell_SET( var_first_shape_post, tmp_assign_source_8 );

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_any );
        assert( tmp_called_name_1 != NULL );
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( par_shapes );
            tmp_iter_arg_2 = par_shapes;
            tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 588;
                type_description_1 = "ocooccooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_9;
        }
        // Tried code:
        tmp_args_element_name_1 = numpy$core$shape_base$$$function_17__concatenate_shapes$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[0] = par_axis;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[0] );
        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[1] = var_first_shape_post;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[1] );
        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[2] = var_first_shape_pre;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[2] );
        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[3] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_17__concatenate_shapes );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_17__concatenate_shapes );
        return NULL;
        outline_result_2:;
        frame_0b0af011f668899e5f1fa0319fa834ef->m_frame.f_lineno = 588;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 588;
            type_description_1 = "ocooccooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 588;
            type_description_1 = "ocooccooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_2;
            tmp_called_instance_1 = const_str_digest_d96152e5d83ac7bbec3579fa32dd3f99;
            CHECK_OBJECT( PyCell_GET( par_axis ) );
            tmp_args_element_name_2 = PyCell_GET( par_axis );
            frame_0b0af011f668899e5f1fa0319fa834ef->m_frame.f_lineno = 591;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_make_exception_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
            }

            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 591;
                type_description_1 = "ocooccooo";
                goto frame_exception_exit_1;
            }
            frame_0b0af011f668899e5f1fa0319fa834ef->m_frame.f_lineno = 590;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 590;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ocooccooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_sum_sequence_1;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_start_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_step_name_3;
        CHECK_OBJECT( PyCell_GET( var_first_shape_pre ) );
        tmp_left_name_3 = PyCell_GET( var_first_shape_pre );
        CHECK_OBJECT( var_shape_at_axis );
        tmp_sum_sequence_1 = var_shape_at_axis;
        tmp_tuple_element_1 = BUILTIN_SUM1( tmp_sum_sequence_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 593;
            type_description_1 = "ocooccooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 593;
            type_description_1 = "ocooccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_first_shape );
        tmp_subscribed_name_5 = var_first_shape;
        CHECK_OBJECT( PyCell_GET( par_axis ) );
        tmp_left_name_4 = PyCell_GET( par_axis );
        tmp_right_name_4 = const_int_pos_1;
        tmp_start_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_start_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 593;
            type_description_1 = "ocooccooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_3 = Py_None;
        tmp_step_name_3 = Py_None;
        tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        Py_DECREF( tmp_start_name_3 );
        assert( !(tmp_subscript_name_5 == NULL) );
        tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscript_name_5 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 593;
            type_description_1 = "ocooccooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 593;
            type_description_1 = "ocooccooo";
            goto frame_exception_exit_1;
        }
        assert( var_shape == NULL );
        var_shape = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__accumulate );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__accumulate );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_accumulate" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 595;
            type_description_1 = "ocooccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_shape_at_axis );
        tmp_args_element_name_3 = var_shape_at_axis;
        frame_0b0af011f668899e5f1fa0319fa834ef->m_frame.f_lineno = 595;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 595;
            type_description_1 = "ocooccooo";
            goto frame_exception_exit_1;
        }
        assert( var_offsets_at_axis == NULL );
        var_offsets_at_axis = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_args_element_name_5;
            tmp_called_name_3 = (PyObject *)&PyZip_Type;
            tmp_left_name_5 = LIST_COPY( const_list_int_0_list );
            CHECK_OBJECT( var_offsets_at_axis );
            tmp_right_name_5 = var_offsets_at_axis;
            tmp_args_element_name_4 = BINARY_OPERATION_ADD_LIST_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 597;
                type_description_1 = "ocooccooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( var_offsets_at_axis );
            tmp_args_element_name_5 = var_offsets_at_axis;
            frame_0b0af011f668899e5f1fa0319fa834ef->m_frame.f_lineno = 597;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 597;
                type_description_1 = "ocooccooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 596;
                type_description_1 = "ocooccooo";
                goto try_except_handler_5;
            }
            assert( tmp_listcomp_2__$0 == NULL );
            tmp_listcomp_2__$0 = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = PyList_New( 0 );
            assert( tmp_listcomp_2__contraction == NULL );
            tmp_listcomp_2__contraction = tmp_assign_source_14;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_d2d00ff9da709011310c038eff0c6ad6_3, codeobj_d2d00ff9da709011310c038eff0c6ad6, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *) );
        frame_d2d00ff9da709011310c038eff0c6ad6_3 = cache_frame_d2d00ff9da709011310c038eff0c6ad6_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_d2d00ff9da709011310c038eff0c6ad6_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_d2d00ff9da709011310c038eff0c6ad6_3 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_listcomp_2__$0 );
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_15 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "oo";
                    exception_lineno = 596;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_15;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
            tmp_iter_arg_4 = tmp_listcomp_2__iter_value_0;
            tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_4 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 596;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_16;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
            if ( tmp_assign_source_17 == NULL )
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


                type_description_2 = "oo";
                exception_lineno = 596;
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_17;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


                type_description_2 = "oo";
                exception_lineno = 596;
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_18;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__source_iter );
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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

                        type_description_2 = "oo";
                        exception_lineno = 596;
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

                type_description_2 = "oo";
                exception_lineno = 596;
                goto try_except_handler_8;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_listcomp$tuple_unpack_1__source_iter );
        Py_DECREF( tmp_listcomp$tuple_unpack_1__source_iter );
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_7;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_1 );
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_2 );
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_6;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp$tuple_unpack_1__source_iter );
        Py_DECREF( tmp_listcomp$tuple_unpack_1__source_iter );
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__element_1 );
            tmp_assign_source_19 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_1_var_start;
                outline_1_var_start = tmp_assign_source_19;
                Py_INCREF( outline_1_var_start );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_1 );
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__element_2 );
            tmp_assign_source_20 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_1_var_end;
                outline_1_var_end = tmp_assign_source_20;
                Py_INCREF( outline_1_var_end );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_2 );
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_start_name_4;
            PyObject *tmp_stop_name_4;
            PyObject *tmp_step_name_4;
            CHECK_OBJECT( tmp_listcomp_2__contraction );
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT( outline_1_var_start );
            tmp_start_name_4 = outline_1_var_start;
            CHECK_OBJECT( outline_1_var_end );
            tmp_stop_name_4 = outline_1_var_end;
            tmp_step_name_4 = Py_None;
            tmp_tuple_element_2 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
            assert( !(tmp_tuple_element_2 == NULL) );
            tmp_append_value_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_append_value_2, 0, tmp_tuple_element_2 );
            assert( PyList_Check( tmp_append_list_2 ) );
            tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
            Py_DECREF( tmp_append_value_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 596;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 596;
            type_description_2 = "oo";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_listcomp_2__contraction );
        tmp_assign_source_12 = tmp_listcomp_2__contraction;
        Py_INCREF( tmp_assign_source_12 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_17__concatenate_shapes );
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

        goto frame_return_exit_2;
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

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
        Py_DECREF( tmp_listcomp_2__$0 );
        tmp_listcomp_2__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
        Py_DECREF( tmp_listcomp_2__contraction );
        tmp_listcomp_2__contraction = NULL;

        Py_XDECREF( tmp_listcomp_2__iter_value_0 );
        tmp_listcomp_2__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d2d00ff9da709011310c038eff0c6ad6_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_d2d00ff9da709011310c038eff0c6ad6_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d2d00ff9da709011310c038eff0c6ad6_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_d2d00ff9da709011310c038eff0c6ad6_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_d2d00ff9da709011310c038eff0c6ad6_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_d2d00ff9da709011310c038eff0c6ad6_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_d2d00ff9da709011310c038eff0c6ad6_3,
            type_description_2,
            outline_1_var_start,
            outline_1_var_end
        );


        // Release cached frame.
        if ( frame_d2d00ff9da709011310c038eff0c6ad6_3 == cache_frame_d2d00ff9da709011310c038eff0c6ad6_3 )
        {
            Py_DECREF( frame_d2d00ff9da709011310c038eff0c6ad6_3 );
        }
        cache_frame_d2d00ff9da709011310c038eff0c6ad6_3 = NULL;

        assertFrameObject( frame_d2d00ff9da709011310c038eff0c6ad6_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ocooccooo";
        goto try_except_handler_5;
        skip_nested_handling_2:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_17__concatenate_shapes );
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF( outline_1_var_start );
        outline_1_var_start = NULL;

        Py_XDECREF( outline_1_var_end );
        outline_1_var_end = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( outline_1_var_start );
        outline_1_var_start = NULL;

        Py_XDECREF( outline_1_var_end );
        outline_1_var_end = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_17__concatenate_shapes );
        return NULL;
        outline_exception_2:;
        exception_lineno = 596;
        goto frame_exception_exit_1;
        outline_result_3:;
        assert( var_slice_prefixes == NULL );
        var_slice_prefixes = tmp_assign_source_12;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b0af011f668899e5f1fa0319fa834ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b0af011f668899e5f1fa0319fa834ef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0b0af011f668899e5f1fa0319fa834ef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0b0af011f668899e5f1fa0319fa834ef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0b0af011f668899e5f1fa0319fa834ef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0b0af011f668899e5f1fa0319fa834ef,
        type_description_1,
        par_shapes,
        par_axis,
        var_shape_at_axis,
        var_first_shape,
        var_first_shape_pre,
        var_first_shape_post,
        var_shape,
        var_offsets_at_axis,
        var_slice_prefixes
    );


    // Release cached frame.
    if ( frame_0b0af011f668899e5f1fa0319fa834ef == cache_frame_0b0af011f668899e5f1fa0319fa834ef )
    {
        Py_DECREF( frame_0b0af011f668899e5f1fa0319fa834ef );
    }
    cache_frame_0b0af011f668899e5f1fa0319fa834ef = NULL;

    assertFrameObject( frame_0b0af011f668899e5f1fa0319fa834ef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( var_shape );
        tmp_tuple_element_3 = var_shape;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_slice_prefixes );
        tmp_tuple_element_3 = var_slice_prefixes;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_17__concatenate_shapes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_shapes );
    Py_DECREF( par_shapes );
    par_shapes = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_shape_at_axis );
    Py_DECREF( var_shape_at_axis );
    var_shape_at_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_first_shape );
    Py_DECREF( var_first_shape );
    var_first_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_first_shape_pre );
    Py_DECREF( var_first_shape_pre );
    var_first_shape_pre = NULL;

    CHECK_OBJECT( (PyObject *)var_first_shape_post );
    Py_DECREF( var_first_shape_post );
    var_first_shape_post = NULL;

    CHECK_OBJECT( (PyObject *)var_shape );
    Py_DECREF( var_shape );
    var_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_offsets_at_axis );
    Py_DECREF( var_offsets_at_axis );
    var_offsets_at_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_slice_prefixes );
    Py_DECREF( var_slice_prefixes );
    var_slice_prefixes = NULL;

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

    CHECK_OBJECT( (PyObject *)par_shapes );
    Py_DECREF( par_shapes );
    par_shapes = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_shape_at_axis );
    var_shape_at_axis = NULL;

    Py_XDECREF( var_first_shape );
    var_first_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_first_shape_pre );
    Py_DECREF( var_first_shape_pre );
    var_first_shape_pre = NULL;

    CHECK_OBJECT( (PyObject *)var_first_shape_post );
    Py_DECREF( var_first_shape_post );
    var_first_shape_post = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_offsets_at_axis );
    var_offsets_at_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_17__concatenate_shapes );
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



struct numpy$core$shape_base$$$function_17__concatenate_shapes$$$genexpr_1_genexpr_locals {
    PyObject *var_shape;
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

static PyObject *numpy$core$shape_base$$$function_17__concatenate_shapes$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$core$shape_base$$$function_17__concatenate_shapes$$$genexpr_1_genexpr_locals *generator_heap = (struct numpy$core$shape_base$$$function_17__concatenate_shapes$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_shape = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_731817b6ac9f75d121a9a557f0b78de8, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
        CHECK_OBJECT( PyCell_GET( generator->m_closure[3] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[3] );
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
                generator_heap->type_description_1 = "Noccc";
                generator_heap->exception_lineno = 588;
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
            PyObject *old = generator_heap->var_shape;
            generator_heap->var_shape = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_shape );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_shape );
        tmp_subscribed_name_1 = generator_heap->var_shape;
        tmp_start_name_1 = Py_None;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "axis" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 588;
            generator_heap->type_description_1 = "Noccc";
            goto try_except_handler_2;
        }

        tmp_stop_name_1 = PyCell_GET( generator->m_closure[0] );
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 588;
            generator_heap->type_description_1 = "Noccc";
            goto try_except_handler_2;
        }
        if ( PyCell_GET( generator->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "first_shape_pre" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 588;
            generator_heap->type_description_1 = "Noccc";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_1 = PyCell_GET( generator->m_closure[2] );
        tmp_or_left_value_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 588;
            generator_heap->type_description_1 = "Noccc";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_or_left_value_1 );

            generator_heap->exception_lineno = 589;
            generator_heap->type_description_1 = "Noccc";
            goto try_except_handler_2;
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
        CHECK_OBJECT( generator_heap->var_shape );
        tmp_subscribed_name_2 = generator_heap->var_shape;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "axis" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 589;
            generator_heap->type_description_1 = "Noccc";
            goto try_except_handler_2;
        }

        tmp_left_name_1 = PyCell_GET( generator->m_closure[0] );
        tmp_right_name_1 = const_int_pos_1;
        tmp_start_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_start_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 589;
            generator_heap->type_description_1 = "Noccc";
            goto try_except_handler_2;
        }
        tmp_stop_name_2 = Py_None;
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_start_name_2 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 589;
            generator_heap->type_description_1 = "Noccc";
            goto try_except_handler_2;
        }
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "first_shape_post" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 589;
            generator_heap->type_description_1 = "Noccc";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_2 = PyCell_GET( generator->m_closure[1] );
        tmp_or_right_value_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_or_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 589;
            generator_heap->type_description_1 = "Noccc";
            goto try_except_handler_2;
        }
        tmp_expression_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_expression_name_1 = tmp_or_left_value_1;
        or_end_1:;
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(PyObject *), &tmp_or_right_value_1, sizeof(PyObject *), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_subscribed_name_1, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), &tmp_start_name_1, sizeof(PyObject *), &tmp_stop_name_1, sizeof(PyObject *), &tmp_step_name_1, sizeof(PyObject *), &tmp_compexpr_left_2, sizeof(PyObject *), &tmp_compexpr_right_2, sizeof(PyObject *), &tmp_subscribed_name_2, sizeof(PyObject *), &tmp_subscript_name_2, sizeof(PyObject *), &tmp_start_name_2, sizeof(PyObject *), &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), &tmp_stop_name_2, sizeof(PyObject *), &tmp_step_name_2, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(PyObject *), &tmp_or_right_value_1, sizeof(PyObject *), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_subscribed_name_1, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), &tmp_start_name_1, sizeof(PyObject *), &tmp_stop_name_1, sizeof(PyObject *), &tmp_step_name_1, sizeof(PyObject *), &tmp_compexpr_left_2, sizeof(PyObject *), &tmp_compexpr_right_2, sizeof(PyObject *), &tmp_subscribed_name_2, sizeof(PyObject *), &tmp_subscript_name_2, sizeof(PyObject *), &tmp_start_name_2, sizeof(PyObject *), &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), &tmp_stop_name_2, sizeof(PyObject *), &tmp_step_name_2, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 588;
            generator_heap->type_description_1 = "Noccc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 588;
        generator_heap->type_description_1 = "Noccc";
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
            generator_heap->var_shape,
            generator->m_closure[0],
            generator->m_closure[2],
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

    Py_XDECREF( generator_heap->var_shape );
    generator_heap->var_shape = NULL;

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

    Py_XDECREF( generator_heap->var_shape );
    generator_heap->var_shape = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$core$shape_base$$$function_17__concatenate_shapes$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$core$shape_base$$$function_17__concatenate_shapes$$$genexpr_1_genexpr_context,
        module_numpy$core$shape_base,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_3a93d794d41bcab8cf5e5ac009e1df2c,
#endif
        codeobj_731817b6ac9f75d121a9a557f0b78de8,
        4,
        sizeof(struct numpy$core$shape_base$$$function_17__concatenate_shapes$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_numpy$core$shape_base$$$function_18__block_info_recursion( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    PyObject *par_max_depth = python_pars[ 1 ];
    PyObject *par_result_ndim = python_pars[ 2 ];
    PyObject *par_depth = python_pars[ 3 ];
    PyObject *var_shapes = NULL;
    PyObject *var_slices = NULL;
    PyObject *var_axis = NULL;
    PyObject *var_shape = NULL;
    PyObject *var_slice_prefixes = NULL;
    PyObject *var_arr = NULL;
    PyObject *outline_0_var_arr = NULL;
    PyObject *outline_1_var_slice_prefix = NULL;
    PyObject *outline_1_var_inner_slices = NULL;
    PyObject *outline_1_var_the_slice = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__iter_value_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6240613f8d389846e068d3ed1e9a28c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_3f5aca8741b83c68c68958b8afb313d3_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_3f5aca8741b83c68c68958b8afb313d3_2 = NULL;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_FrameObject *frame_a33007f3dc926ee01784f766dac17eef_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_a33007f3dc926ee01784f766dac17eef_3 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6240613f8d389846e068d3ed1e9a28c6 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6240613f8d389846e068d3ed1e9a28c6, codeobj_6240613f8d389846e068d3ed1e9a28c6, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6240613f8d389846e068d3ed1e9a28c6 = cache_frame_6240613f8d389846e068d3ed1e9a28c6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6240613f8d389846e068d3ed1e9a28c6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6240613f8d389846e068d3ed1e9a28c6 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_depth );
        tmp_compexpr_left_1 = par_depth;
        CHECK_OBJECT( par_max_depth );
        tmp_compexpr_right_1 = par_max_depth;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 629;
            type_description_1 = "oooooooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_dircall_arg2_1;
            tmp_dircall_arg1_1 = (PyObject *)&PyZip_Type;
            // Tried code:
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_iter_arg_2;
                CHECK_OBJECT( par_arrays );
                tmp_iter_arg_2 = par_arrays;
                tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_2 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 631;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_3;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_2;
            }
            {
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_3;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_3f5aca8741b83c68c68958b8afb313d3_2, codeobj_3f5aca8741b83c68c68958b8afb313d3, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
            frame_3f5aca8741b83c68c68958b8afb313d3_2 = cache_frame_3f5aca8741b83c68c68958b8afb313d3_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_3f5aca8741b83c68c68958b8afb313d3_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_3f5aca8741b83c68c68958b8afb313d3_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_4;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_1 = tmp_listcomp_1__$0;
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
                        type_description_2 = "oooo";
                        exception_lineno = 631;
                        goto try_except_handler_4;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_arr;
                    outline_0_var_arr = tmp_assign_source_5;
                    Py_INCREF( outline_0_var_arr );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_info_recursion );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__block_info_recursion );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_block_info_recursion" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 631;
                    type_description_2 = "oooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_1 = tmp_mvar_value_1;
                CHECK_OBJECT( outline_0_var_arr );
                tmp_args_element_name_1 = outline_0_var_arr;
                CHECK_OBJECT( par_max_depth );
                tmp_args_element_name_2 = par_max_depth;
                CHECK_OBJECT( par_result_ndim );
                tmp_args_element_name_3 = par_result_ndim;
                CHECK_OBJECT( par_depth );
                tmp_left_name_1 = par_depth;
                tmp_right_name_1 = const_int_pos_1;
                tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 631;
                    type_description_2 = "oooo";
                    goto try_except_handler_4;
                }
                frame_3f5aca8741b83c68c68958b8afb313d3_2->m_frame.f_lineno = 631;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 631;
                    type_description_2 = "oooo";
                    goto try_except_handler_4;
                }
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 631;
                    type_description_2 = "oooo";
                    goto try_except_handler_4;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 631;
                type_description_2 = "oooo";
                goto try_except_handler_4;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_dircall_arg2_1 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_dircall_arg2_1 );
            goto try_return_handler_4;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_18__block_info_recursion );
            return NULL;
            // Return handler code:
            try_return_handler_4:;
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
            try_except_handler_4:;
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
            RESTORE_FRAME_EXCEPTION( frame_3f5aca8741b83c68c68958b8afb313d3_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_3f5aca8741b83c68c68958b8afb313d3_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_3;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_3f5aca8741b83c68c68958b8afb313d3_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_3f5aca8741b83c68c68958b8afb313d3_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_3f5aca8741b83c68c68958b8afb313d3_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_3f5aca8741b83c68c68958b8afb313d3_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_3f5aca8741b83c68c68958b8afb313d3_2,
                type_description_2,
                outline_0_var_arr,
                par_max_depth,
                par_result_ndim,
                par_depth
            );


            // Release cached frame.
            if ( frame_3f5aca8741b83c68c68958b8afb313d3_2 == cache_frame_3f5aca8741b83c68c68958b8afb313d3_2 )
            {
                Py_DECREF( frame_3f5aca8741b83c68c68958b8afb313d3_2 );
            }
            cache_frame_3f5aca8741b83c68c68958b8afb313d3_2 = NULL;

            assertFrameObject( frame_3f5aca8741b83c68c68958b8afb313d3_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_18__block_info_recursion );
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            Py_XDECREF( outline_0_var_arr );
            outline_0_var_arr = NULL;

            goto outline_result_1;
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

            Py_XDECREF( outline_0_var_arr );
            outline_0_var_arr = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_18__block_info_recursion );
            return NULL;
            outline_exception_1:;
            exception_lineno = 631;
            goto try_except_handler_2;
            outline_result_1:;
            Py_INCREF( tmp_dircall_arg1_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_iter_arg_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
            }
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 630;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 630;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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
                exception_lineno = 630;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


                type_description_1 = "oooooooooo";
                exception_lineno = 630;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


                type_description_1 = "oooooooooo";
                exception_lineno = 630;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_3 == NULL );
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_8;
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
                        exception_lineno = 630;
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

                type_description_1 = "oooooooooo";
                exception_lineno = 630;
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
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

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
            assert( var_shapes == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_shapes = tmp_assign_source_9;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
            assert( var_slices == NULL );
            Py_INCREF( tmp_assign_source_10 );
            var_slices = tmp_assign_source_10;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
            tmp_assign_source_11 = tmp_tuple_unpack_1__element_3;
            {
                PyObject *old = par_arrays;
                assert( old != NULL );
                par_arrays = tmp_assign_source_11;
                Py_INCREF( par_arrays );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( par_result_ndim );
            tmp_left_name_3 = par_result_ndim;
            CHECK_OBJECT( par_max_depth );
            tmp_right_name_2 = par_max_depth;
            tmp_left_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 634;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_depth );
            tmp_right_name_3 = par_depth;
            tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 634;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_axis == NULL );
            var_axis = tmp_assign_source_12;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__concatenate_shapes );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__concatenate_shapes );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_concatenate_shapes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 635;
                type_description_1 = "oooooooooo";
                goto try_except_handler_6;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_shapes );
            tmp_args_element_name_5 = var_shapes;
            CHECK_OBJECT( var_axis );
            tmp_args_element_name_6 = var_axis;
            frame_6240613f8d389846e068d3ed1e9a28c6->m_frame.f_lineno = 635;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 635;
                type_description_1 = "oooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 635;
                type_description_1 = "oooooooooo";
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
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


                type_description_1 = "oooooooooo";
                exception_lineno = 635;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
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


                type_description_1 = "oooooooooo";
                exception_lineno = 635;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
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
                        exception_lineno = 635;
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

                type_description_1 = "oooooooooo";
                exception_lineno = 635;
                goto try_except_handler_7;
            }
        }
        goto try_end_3;
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
        try_end_3:;
        goto try_end_4;
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
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_16 = tmp_tuple_unpack_2__element_1;
            assert( var_shape == NULL );
            Py_INCREF( tmp_assign_source_16 );
            var_shape = tmp_assign_source_16;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_17 = tmp_tuple_unpack_2__element_2;
            assert( var_slice_prefixes == NULL );
            Py_INCREF( tmp_assign_source_17 );
            var_slice_prefixes = tmp_assign_source_17;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_18;
            // Tried code:
            {
                PyObject *tmp_assign_source_19;
                PyObject *tmp_iter_arg_4;
                PyObject *tmp_called_name_3;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_args_element_name_8;
                tmp_called_name_3 = (PyObject *)&PyZip_Type;
                CHECK_OBJECT( var_slice_prefixes );
                tmp_args_element_name_7 = var_slice_prefixes;
                CHECK_OBJECT( var_slices );
                tmp_args_element_name_8 = var_slices;
                frame_6240613f8d389846e068d3ed1e9a28c6->m_frame.f_lineno = 639;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                if ( tmp_iter_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 639;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_8;
                }
                tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_4 );
                Py_DECREF( tmp_iter_arg_4 );
                if ( tmp_assign_source_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 638;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_8;
                }
                assert( tmp_listcomp_2__$0 == NULL );
                tmp_listcomp_2__$0 = tmp_assign_source_19;
            }
            {
                PyObject *tmp_assign_source_20;
                tmp_assign_source_20 = PyList_New( 0 );
                assert( tmp_listcomp_2__contraction == NULL );
                tmp_listcomp_2__contraction = tmp_assign_source_20;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_a33007f3dc926ee01784f766dac17eef_3, codeobj_a33007f3dc926ee01784f766dac17eef, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
            frame_a33007f3dc926ee01784f766dac17eef_3 = cache_frame_a33007f3dc926ee01784f766dac17eef_3;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_a33007f3dc926ee01784f766dac17eef_3 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_a33007f3dc926ee01784f766dac17eef_3 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_21;
                CHECK_OBJECT( tmp_listcomp_2__$0 );
                tmp_next_source_2 = tmp_listcomp_2__$0;
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
                        type_description_2 = "ooo";
                        exception_lineno = 638;
                        goto try_except_handler_9;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_2__iter_value_1;
                    tmp_listcomp_2__iter_value_1 = tmp_assign_source_21;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_22;
                PyObject *tmp_iter_arg_5;
                CHECK_OBJECT( tmp_listcomp_2__iter_value_1 );
                tmp_iter_arg_5 = tmp_listcomp_2__iter_value_1;
                tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_5 );
                if ( tmp_assign_source_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 638;
                    type_description_2 = "ooo";
                    goto try_except_handler_10;
                }
                {
                    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_22;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_23;
                PyObject *tmp_unpack_6;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__source_iter );
                tmp_unpack_6 = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_6, 0, 2 );
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


                    type_description_2 = "ooo";
                    exception_lineno = 638;
                    goto try_except_handler_11;
                }
                {
                    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_23;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_24;
                PyObject *tmp_unpack_7;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__source_iter );
                tmp_unpack_7 = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_7, 1, 2 );
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


                    type_description_2 = "ooo";
                    exception_lineno = 638;
                    goto try_except_handler_11;
                }
                {
                    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_24;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_3;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__source_iter );
                tmp_iterator_name_3 = tmp_listcomp$tuple_unpack_1__source_iter;
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

                            type_description_2 = "ooo";
                            exception_lineno = 638;
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

                    type_description_2 = "ooo";
                    exception_lineno = 638;
                    goto try_except_handler_11;
                }
            }
            goto try_end_5;
            // Exception handler code:
            try_except_handler_11:;
            exception_keeper_type_7 = exception_type;
            exception_keeper_value_7 = exception_value;
            exception_keeper_tb_7 = exception_tb;
            exception_keeper_lineno_7 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_listcomp$tuple_unpack_1__source_iter );
            Py_DECREF( tmp_listcomp$tuple_unpack_1__source_iter );
            tmp_listcomp$tuple_unpack_1__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto try_except_handler_10;
            // End of try:
            try_end_5:;
            goto try_end_6;
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

            Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_1 );
            tmp_listcomp$tuple_unpack_1__element_1 = NULL;

            Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_2 );
            tmp_listcomp$tuple_unpack_1__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto try_except_handler_9;
            // End of try:
            try_end_6:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp$tuple_unpack_1__source_iter );
            Py_DECREF( tmp_listcomp$tuple_unpack_1__source_iter );
            tmp_listcomp$tuple_unpack_1__source_iter = NULL;

            {
                PyObject *tmp_assign_source_25;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__element_1 );
                tmp_assign_source_25 = tmp_listcomp$tuple_unpack_1__element_1;
                {
                    PyObject *old = outline_1_var_slice_prefix;
                    outline_1_var_slice_prefix = tmp_assign_source_25;
                    Py_INCREF( outline_1_var_slice_prefix );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_1 );
            tmp_listcomp$tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_26;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__element_2 );
                tmp_assign_source_26 = tmp_listcomp$tuple_unpack_1__element_2;
                {
                    PyObject *old = outline_1_var_inner_slices;
                    outline_1_var_inner_slices = tmp_assign_source_26;
                    Py_INCREF( outline_1_var_inner_slices );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_2 );
            tmp_listcomp$tuple_unpack_1__element_2 = NULL;

            {
                PyObject *tmp_assign_source_27;
                PyObject *tmp_iter_arg_6;
                CHECK_OBJECT( outline_1_var_inner_slices );
                tmp_iter_arg_6 = outline_1_var_inner_slices;
                tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_6 );
                if ( tmp_assign_source_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 638;
                    type_description_2 = "ooo";
                    goto try_except_handler_9;
                }
                {
                    PyObject *old = tmp_listcomp_2__contraction_iter_0;
                    tmp_listcomp_2__contraction_iter_0 = tmp_assign_source_27;
                    Py_XDECREF( old );
                }

            }
            loop_start_3:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_28;
                CHECK_OBJECT( tmp_listcomp_2__contraction_iter_0 );
                tmp_next_source_3 = tmp_listcomp_2__contraction_iter_0;
                tmp_assign_source_28 = ITERATOR_NEXT( tmp_next_source_3 );
                if ( tmp_assign_source_28 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_3;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "ooo";
                        exception_lineno = 638;
                        goto try_except_handler_9;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_2__iter_value_0;
                    tmp_listcomp_2__iter_value_0 = tmp_assign_source_28;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_29;
                CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
                tmp_assign_source_29 = tmp_listcomp_2__iter_value_0;
                {
                    PyObject *old = outline_1_var_the_slice;
                    outline_1_var_the_slice = tmp_assign_source_29;
                    Py_INCREF( outline_1_var_the_slice );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                CHECK_OBJECT( tmp_listcomp_2__contraction );
                tmp_append_list_2 = tmp_listcomp_2__contraction;
                CHECK_OBJECT( outline_1_var_slice_prefix );
                tmp_left_name_4 = outline_1_var_slice_prefix;
                CHECK_OBJECT( outline_1_var_the_slice );
                tmp_right_name_4 = outline_1_var_the_slice;
                tmp_append_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
                if ( tmp_append_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 638;
                    type_description_2 = "ooo";
                    goto try_except_handler_9;
                }
                assert( PyList_Check( tmp_append_list_2 ) );
                tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
                Py_DECREF( tmp_append_value_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 638;
                    type_description_2 = "ooo";
                    goto try_except_handler_9;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 638;
                type_description_2 = "ooo";
                goto try_except_handler_9;
            }
            goto loop_start_3;
            loop_end_3:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction_iter_0 );
            Py_DECREF( tmp_listcomp_2__contraction_iter_0 );
            tmp_listcomp_2__contraction_iter_0 = NULL;

            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 638;
                type_description_2 = "ooo";
                goto try_except_handler_9;
            }
            goto loop_start_2;
            loop_end_2:;
            CHECK_OBJECT( tmp_listcomp_2__contraction );
            tmp_assign_source_18 = tmp_listcomp_2__contraction;
            Py_INCREF( tmp_assign_source_18 );
            goto try_return_handler_9;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_18__block_info_recursion );
            return NULL;
            // Return handler code:
            try_return_handler_9:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
            Py_DECREF( tmp_listcomp_2__$0 );
            tmp_listcomp_2__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
            Py_DECREF( tmp_listcomp_2__contraction );
            tmp_listcomp_2__contraction = NULL;

            Py_XDECREF( tmp_listcomp_2__iter_value_0 );
            tmp_listcomp_2__iter_value_0 = NULL;

            Py_XDECREF( tmp_listcomp_2__contraction_iter_0 );
            tmp_listcomp_2__contraction_iter_0 = NULL;

            Py_XDECREF( tmp_listcomp_2__iter_value_1 );
            tmp_listcomp_2__iter_value_1 = NULL;

            goto frame_return_exit_3;
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

            CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
            Py_DECREF( tmp_listcomp_2__$0 );
            tmp_listcomp_2__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
            Py_DECREF( tmp_listcomp_2__contraction );
            tmp_listcomp_2__contraction = NULL;

            Py_XDECREF( tmp_listcomp_2__iter_value_0 );
            tmp_listcomp_2__iter_value_0 = NULL;

            Py_XDECREF( tmp_listcomp_2__contraction_iter_0 );
            tmp_listcomp_2__contraction_iter_0 = NULL;

            Py_XDECREF( tmp_listcomp_2__iter_value_1 );
            tmp_listcomp_2__iter_value_1 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_9;
            exception_value = exception_keeper_value_9;
            exception_tb = exception_keeper_tb_9;
            exception_lineno = exception_keeper_lineno_9;

            goto frame_exception_exit_3;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_a33007f3dc926ee01784f766dac17eef_3 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_2;

            frame_return_exit_3:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_a33007f3dc926ee01784f766dac17eef_3 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_8;

            frame_exception_exit_3:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_a33007f3dc926ee01784f766dac17eef_3 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_a33007f3dc926ee01784f766dac17eef_3, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_a33007f3dc926ee01784f766dac17eef_3->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_a33007f3dc926ee01784f766dac17eef_3, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_a33007f3dc926ee01784f766dac17eef_3,
                type_description_2,
                outline_1_var_slice_prefix,
                outline_1_var_inner_slices,
                outline_1_var_the_slice
            );


            // Release cached frame.
            if ( frame_a33007f3dc926ee01784f766dac17eef_3 == cache_frame_a33007f3dc926ee01784f766dac17eef_3 )
            {
                Py_DECREF( frame_a33007f3dc926ee01784f766dac17eef_3 );
            }
            cache_frame_a33007f3dc926ee01784f766dac17eef_3 = NULL;

            assertFrameObject( frame_a33007f3dc926ee01784f766dac17eef_3 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_2;

            frame_no_exception_2:;
            goto skip_nested_handling_2;
            nested_frame_exit_2:;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
            skip_nested_handling_2:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_18__block_info_recursion );
            return NULL;
            // Return handler code:
            try_return_handler_8:;
            Py_XDECREF( outline_1_var_slice_prefix );
            outline_1_var_slice_prefix = NULL;

            Py_XDECREF( outline_1_var_inner_slices );
            outline_1_var_inner_slices = NULL;

            Py_XDECREF( outline_1_var_the_slice );
            outline_1_var_the_slice = NULL;

            goto outline_result_2;
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

            Py_XDECREF( outline_1_var_slice_prefix );
            outline_1_var_slice_prefix = NULL;

            Py_XDECREF( outline_1_var_inner_slices );
            outline_1_var_inner_slices = NULL;

            Py_XDECREF( outline_1_var_the_slice );
            outline_1_var_the_slice = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_10;
            exception_value = exception_keeper_value_10;
            exception_tb = exception_keeper_tb_10;
            exception_lineno = exception_keeper_lineno_10;

            goto outline_exception_2;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_18__block_info_recursion );
            return NULL;
            outline_exception_2:;
            exception_lineno = 638;
            goto frame_exception_exit_1;
            outline_result_2:;
            {
                PyObject *old = var_slices;
                assert( old != NULL );
                var_slices = tmp_assign_source_18;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_10;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_functools );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "functools" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 643;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_3;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_reduce );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 643;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_operator );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "operator" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 643;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_4;
            tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_add );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 643;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_arrays );
            tmp_args_element_name_10 = par_arrays;
            frame_6240613f8d389846e068d3ed1e9a28c6->m_frame.f_lineno = 643;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 643;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_arrays;
                assert( old != NULL );
                par_arrays = tmp_assign_source_30;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( var_shape );
            tmp_tuple_element_1 = var_shape;
            tmp_return_value = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_slices );
            tmp_tuple_element_1 = var_slices;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( par_arrays );
            tmp_tuple_element_1 = par_arrays;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__atleast_nd );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__atleast_nd );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_atleast_nd" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 651;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            CHECK_OBJECT( par_arrays );
            tmp_args_element_name_11 = par_arrays;
            CHECK_OBJECT( par_result_ndim );
            tmp_args_element_name_12 = par_result_ndim;
            frame_6240613f8d389846e068d3ed1e9a28c6->m_frame.f_lineno = 651;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 651;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_arr == NULL );
            var_arr = tmp_assign_source_31;
        }
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_list_element_1;
            CHECK_OBJECT( var_arr );
            tmp_source_name_3 = var_arr;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 652;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = LIST_COPY( const_list_tuple_empty_list );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( var_arr );
            tmp_list_element_1 = var_arr;
            tmp_tuple_element_2 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_tuple_element_2, 0, tmp_list_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6240613f8d389846e068d3ed1e9a28c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6240613f8d389846e068d3ed1e9a28c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6240613f8d389846e068d3ed1e9a28c6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6240613f8d389846e068d3ed1e9a28c6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6240613f8d389846e068d3ed1e9a28c6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6240613f8d389846e068d3ed1e9a28c6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6240613f8d389846e068d3ed1e9a28c6,
        type_description_1,
        par_arrays,
        par_max_depth,
        par_result_ndim,
        par_depth,
        var_shapes,
        var_slices,
        var_axis,
        var_shape,
        var_slice_prefixes,
        var_arr
    );


    // Release cached frame.
    if ( frame_6240613f8d389846e068d3ed1e9a28c6 == cache_frame_6240613f8d389846e068d3ed1e9a28c6 )
    {
        Py_DECREF( frame_6240613f8d389846e068d3ed1e9a28c6 );
    }
    cache_frame_6240613f8d389846e068d3ed1e9a28c6 = NULL;

    assertFrameObject( frame_6240613f8d389846e068d3ed1e9a28c6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_18__block_info_recursion );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_max_depth );
    Py_DECREF( par_max_depth );
    par_max_depth = NULL;

    CHECK_OBJECT( (PyObject *)par_result_ndim );
    Py_DECREF( par_result_ndim );
    par_result_ndim = NULL;

    CHECK_OBJECT( (PyObject *)par_depth );
    Py_DECREF( par_depth );
    par_depth = NULL;

    Py_XDECREF( var_shapes );
    var_shapes = NULL;

    Py_XDECREF( var_slices );
    var_slices = NULL;

    Py_XDECREF( var_axis );
    var_axis = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_slice_prefixes );
    var_slice_prefixes = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_max_depth );
    Py_DECREF( par_max_depth );
    par_max_depth = NULL;

    CHECK_OBJECT( (PyObject *)par_result_ndim );
    Py_DECREF( par_result_ndim );
    par_result_ndim = NULL;

    CHECK_OBJECT( (PyObject *)par_depth );
    Py_DECREF( par_depth );
    par_depth = NULL;

    Py_XDECREF( var_shapes );
    var_shapes = NULL;

    Py_XDECREF( var_slices );
    var_slices = NULL;

    Py_XDECREF( var_axis );
    var_axis = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_slice_prefixes );
    var_slice_prefixes = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_18__block_info_recursion );
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


static PyObject *impl_numpy$core$shape_base$$$function_19__block( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    PyObject *par_max_depth = python_pars[ 1 ];
    PyObject *par_result_ndim = python_pars[ 2 ];
    PyObject *par_depth = python_pars[ 3 ];
    PyObject *var_arrs = NULL;
    PyObject *outline_0_var_arr = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_1643fb3501044873c9e0b9afc79d8fd3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_b8f885e84ef2db3e879cce578de31228_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_b8f885e84ef2db3e879cce578de31228_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1643fb3501044873c9e0b9afc79d8fd3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1643fb3501044873c9e0b9afc79d8fd3, codeobj_1643fb3501044873c9e0b9afc79d8fd3, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1643fb3501044873c9e0b9afc79d8fd3 = cache_frame_1643fb3501044873c9e0b9afc79d8fd3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1643fb3501044873c9e0b9afc79d8fd3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1643fb3501044873c9e0b9afc79d8fd3 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_depth );
        tmp_compexpr_left_1 = par_depth;
        CHECK_OBJECT( par_max_depth );
        tmp_compexpr_right_1 = par_max_depth;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 664;
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
            // Tried code:
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_iter_arg_1;
                CHECK_OBJECT( par_arrays );
                tmp_iter_arg_1 = par_arrays;
                tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 665;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_2;
            }
            {
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_3;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_b8f885e84ef2db3e879cce578de31228_2, codeobj_b8f885e84ef2db3e879cce578de31228, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
            frame_b8f885e84ef2db3e879cce578de31228_2 = cache_frame_b8f885e84ef2db3e879cce578de31228_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_b8f885e84ef2db3e879cce578de31228_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_b8f885e84ef2db3e879cce578de31228_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_4;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_1 = tmp_listcomp_1__$0;
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
                        type_description_2 = "oooo";
                        exception_lineno = 665;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_arr;
                    outline_0_var_arr = tmp_assign_source_5;
                    Py_INCREF( outline_0_var_arr );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__block );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_block" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 665;
                    type_description_2 = "oooo";
                    goto try_except_handler_3;
                }

                tmp_called_name_1 = tmp_mvar_value_1;
                CHECK_OBJECT( outline_0_var_arr );
                tmp_args_element_name_1 = outline_0_var_arr;
                CHECK_OBJECT( par_max_depth );
                tmp_args_element_name_2 = par_max_depth;
                CHECK_OBJECT( par_result_ndim );
                tmp_args_element_name_3 = par_result_ndim;
                CHECK_OBJECT( par_depth );
                tmp_left_name_1 = par_depth;
                tmp_right_name_1 = const_int_pos_1;
                tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 665;
                    type_description_2 = "oooo";
                    goto try_except_handler_3;
                }
                frame_b8f885e84ef2db3e879cce578de31228_2->m_frame.f_lineno = 665;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 665;
                    type_description_2 = "oooo";
                    goto try_except_handler_3;
                }
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 665;
                    type_description_2 = "oooo";
                    goto try_except_handler_3;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 665;
                type_description_2 = "oooo";
                goto try_except_handler_3;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_assign_source_1 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_assign_source_1 );
            goto try_return_handler_3;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_19__block );
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
            RESTORE_FRAME_EXCEPTION( frame_b8f885e84ef2db3e879cce578de31228_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_b8f885e84ef2db3e879cce578de31228_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_2;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_b8f885e84ef2db3e879cce578de31228_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_b8f885e84ef2db3e879cce578de31228_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_b8f885e84ef2db3e879cce578de31228_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_b8f885e84ef2db3e879cce578de31228_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_b8f885e84ef2db3e879cce578de31228_2,
                type_description_2,
                outline_0_var_arr,
                par_max_depth,
                par_result_ndim,
                par_depth
            );


            // Release cached frame.
            if ( frame_b8f885e84ef2db3e879cce578de31228_2 == cache_frame_b8f885e84ef2db3e879cce578de31228_2 )
            {
                Py_DECREF( frame_b8f885e84ef2db3e879cce578de31228_2 );
            }
            cache_frame_b8f885e84ef2db3e879cce578de31228_2 = NULL;

            assertFrameObject( frame_b8f885e84ef2db3e879cce578de31228_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_19__block );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            Py_XDECREF( outline_0_var_arr );
            outline_0_var_arr = NULL;

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

            Py_XDECREF( outline_0_var_arr );
            outline_0_var_arr = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_19__block );
            return NULL;
            outline_exception_1:;
            exception_lineno = 665;
            goto frame_exception_exit_1;
            outline_result_1:;
            assert( var_arrs == NULL );
            var_arrs = tmp_assign_source_1;
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__concatenate );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__concatenate );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_concatenate" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 667;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_arrs );
            tmp_tuple_element_1 = var_arrs;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_axis;
            CHECK_OBJECT( par_max_depth );
            tmp_left_name_2 = par_max_depth;
            CHECK_OBJECT( par_depth );
            tmp_right_name_2 = par_depth;
            tmp_operand_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 667;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_value_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 667;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_1643fb3501044873c9e0b9afc79d8fd3->m_frame.f_lineno = 667;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 667;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__atleast_nd );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__atleast_nd );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_atleast_nd" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 671;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_arrays );
            tmp_args_element_name_5 = par_arrays;
            CHECK_OBJECT( par_result_ndim );
            tmp_args_element_name_6 = par_result_ndim;
            frame_1643fb3501044873c9e0b9afc79d8fd3->m_frame.f_lineno = 671;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 671;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1643fb3501044873c9e0b9afc79d8fd3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1643fb3501044873c9e0b9afc79d8fd3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1643fb3501044873c9e0b9afc79d8fd3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1643fb3501044873c9e0b9afc79d8fd3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1643fb3501044873c9e0b9afc79d8fd3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1643fb3501044873c9e0b9afc79d8fd3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1643fb3501044873c9e0b9afc79d8fd3,
        type_description_1,
        par_arrays,
        par_max_depth,
        par_result_ndim,
        par_depth,
        var_arrs
    );


    // Release cached frame.
    if ( frame_1643fb3501044873c9e0b9afc79d8fd3 == cache_frame_1643fb3501044873c9e0b9afc79d8fd3 )
    {
        Py_DECREF( frame_1643fb3501044873c9e0b9afc79d8fd3 );
    }
    cache_frame_1643fb3501044873c9e0b9afc79d8fd3 = NULL;

    assertFrameObject( frame_1643fb3501044873c9e0b9afc79d8fd3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_19__block );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_max_depth );
    Py_DECREF( par_max_depth );
    par_max_depth = NULL;

    CHECK_OBJECT( (PyObject *)par_result_ndim );
    Py_DECREF( par_result_ndim );
    par_result_ndim = NULL;

    CHECK_OBJECT( (PyObject *)par_depth );
    Py_DECREF( par_depth );
    par_depth = NULL;

    Py_XDECREF( var_arrs );
    var_arrs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_max_depth );
    Py_DECREF( par_max_depth );
    par_max_depth = NULL;

    CHECK_OBJECT( (PyObject *)par_result_ndim );
    Py_DECREF( par_result_ndim );
    par_result_ndim = NULL;

    CHECK_OBJECT( (PyObject *)par_depth );
    Py_DECREF( par_depth );
    par_depth = NULL;

    Py_XDECREF( var_arrs );
    var_arrs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_19__block );
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


static PyObject *impl_numpy$core$shape_base$$$function_20__block_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_arrays = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = numpy$core$shape_base$$$function_20__block_dispatcher$$$genobj_1__block_dispatcher_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_arrays;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_20__block_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_20__block_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct numpy$core$shape_base$$$function_20__block_dispatcher$$$genobj_1__block_dispatcher_locals {
    PyObject *var_subarrays;
    PyObject *var_subarray;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
};

static PyObject *numpy$core$shape_base$$$function_20__block_dispatcher$$$genobj_1__block_dispatcher_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$core$shape_base$$$function_20__block_dispatcher$$$genobj_1__block_dispatcher_locals *generator_heap = (struct numpy$core$shape_base$$$function_20__block_dispatcher$$$genobj_1__block_dispatcher_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_subarrays = NULL;
    generator_heap->var_subarray = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_6235b41678eb7f9dd51a1c5c8cb7de91, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "arrays" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 678;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_1 = PyCell_GET( generator->m_closure[0] );
        tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 678;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = (PyObject *)&PyList_Type;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
            PyObject *tmp_iter_arg_1;
            if ( PyCell_GET( generator->m_closure[0] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "arrays" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 679;
                generator_heap->type_description_1 = "coo";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_1 = PyCell_GET( generator->m_closure[0] );
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 679;
                generator_heap->type_description_1 = "coo";
                goto frame_exception_exit_1;
            }
            assert( generator_heap->tmp_for_loop_1__for_iterator == NULL );
            generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_2;
            CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
            tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    generator_heap->type_description_1 = "coo";
                    generator_heap->exception_lineno = 679;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
                generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
            tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
            {
                PyObject *old = generator_heap->var_subarrays;
                generator_heap->var_subarrays = tmp_assign_source_3;
                Py_INCREF( generator_heap->var_subarrays );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_dispatcher );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__block_dispatcher );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_block_dispatcher" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 680;
                generator_heap->type_description_1 = "coo";
                goto try_except_handler_2;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( generator_heap->var_subarrays );
            tmp_args_element_name_1 = generator_heap->var_subarrays;
            generator->m_frame->m_frame.f_lineno = 680;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 680;
                generator_heap->type_description_1 = "coo";
                goto try_except_handler_2;
            }
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 680;
                generator_heap->type_description_1 = "coo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
                generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( generator_heap->tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
            tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    generator_heap->type_description_1 = "coo";
                    generator_heap->exception_lineno = 680;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
                generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_5;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( generator_heap->tmp_for_loop_2__iter_value );
            tmp_assign_source_6 = generator_heap->tmp_for_loop_2__iter_value;
            {
                PyObject *old = generator_heap->var_subarray;
                generator_heap->var_subarray = tmp_assign_source_6;
                Py_INCREF( generator_heap->var_subarray );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_expression_name_1;
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
            CHECK_OBJECT( generator_heap->var_subarray );
            tmp_expression_name_1 = generator_heap->var_subarray;
            Py_INCREF( tmp_expression_name_1 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_type_arg_1, sizeof(PyObject *), NULL );
            generator->m_yield_return_index = 1;
            return tmp_expression_name_1;
            yield_return_1:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_type_arg_1, sizeof(PyObject *), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 681;
                generator_heap->type_description_1 = "coo";
                goto try_except_handler_3;
            }
            tmp_yield_result_1 = yield_return_value;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 680;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_1;
        // Exception handler code:
        try_except_handler_3:;
        generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF( generator_heap->tmp_for_loop_2__iter_value );
        generator_heap->tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_2__for_iterator );
        Py_DECREF( generator_heap->tmp_for_loop_2__for_iterator );
        generator_heap->tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_1;
        generator_heap->exception_value = generator_heap->exception_keeper_value_1;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
        Py_XDECREF( generator_heap->tmp_for_loop_2__iter_value );
        generator_heap->tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_2__for_iterator );
        Py_DECREF( generator_heap->tmp_for_loop_2__for_iterator );
        generator_heap->tmp_for_loop_2__for_iterator = NULL;

        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 679;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_2:;
        generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
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
        generator_heap->exception_type = generator_heap->exception_keeper_type_2;
        generator_heap->exception_value = generator_heap->exception_keeper_value_2;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
        generator_heap->tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
        Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
        generator_heap->tmp_for_loop_1__for_iterator = NULL;

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_expression_name_2;
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
            if ( PyCell_GET( generator->m_closure[0] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "arrays" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 683;
                generator_heap->type_description_1 = "coo";
                goto frame_exception_exit_1;
            }

            tmp_expression_name_2 = PyCell_GET( generator->m_closure[0] );
            Py_INCREF( tmp_expression_name_2 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_type_arg_1, sizeof(PyObject *), NULL );
            generator->m_yield_return_index = 2;
            return tmp_expression_name_2;
            yield_return_2:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_type_arg_1, sizeof(PyObject *), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 683;
                generator_heap->type_description_1 = "coo";
                goto frame_exception_exit_1;
            }
            tmp_yield_result_2 = yield_return_value;
        }
        branch_end_1:;
    }

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
            generator_heap->var_subarrays,
            generator_heap->var_subarray
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
    goto try_end_3;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_subarrays );
    generator_heap->var_subarrays = NULL;

    Py_XDECREF( generator_heap->var_subarray );
    generator_heap->var_subarray = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( generator_heap->var_subarrays );
    generator_heap->var_subarrays = NULL;

    Py_XDECREF( generator_heap->var_subarray );
    generator_heap->var_subarray = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$core$shape_base$$$function_20__block_dispatcher$$$genobj_1__block_dispatcher_maker( void )
{
    return Nuitka_Generator_New(
        numpy$core$shape_base$$$function_20__block_dispatcher$$$genobj_1__block_dispatcher_context,
        module_numpy$core$shape_base,
        const_str_plain__block_dispatcher,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_6235b41678eb7f9dd51a1c5c8cb7de91,
        1,
        sizeof(struct numpy$core$shape_base$$$function_20__block_dispatcher$$$genobj_1__block_dispatcher_locals)
    );
}


static PyObject *impl_numpy$core$shape_base$$$function_21_block( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    PyObject *var_list_ndim = NULL;
    PyObject *var_result_ndim = NULL;
    PyObject *var_final_size = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_caa373b77343e025617bc8fe8e41cbb9;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_caa373b77343e025617bc8fe8e41cbb9 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_caa373b77343e025617bc8fe8e41cbb9, codeobj_caa373b77343e025617bc8fe8e41cbb9, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_caa373b77343e025617bc8fe8e41cbb9 = cache_frame_caa373b77343e025617bc8fe8e41cbb9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_caa373b77343e025617bc8fe8e41cbb9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_caa373b77343e025617bc8fe8e41cbb9 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_setup );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__block_setup );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_block_setup" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 835;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_arrays );
        tmp_args_element_name_1 = par_arrays;
        frame_caa373b77343e025617bc8fe8e41cbb9->m_frame.f_lineno = 835;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 835;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 835;
            type_description_1 = "oooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 4 );
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


            type_description_1 = "oooo";
            exception_lineno = 835;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 4 );
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


            type_description_1 = "oooo";
            exception_lineno = 835;
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 4 );
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


            type_description_1 = "oooo";
            exception_lineno = 835;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_4, 3, 4 );
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


            type_description_1 = "oooo";
            exception_lineno = 835;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
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

                    type_description_1 = "oooo";
                    exception_lineno = 835;
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

            type_description_1 = "oooo";
            exception_lineno = 835;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_arrays;
            assert( old != NULL );
            par_arrays = tmp_assign_source_6;
            Py_INCREF( par_arrays );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert( var_list_ndim == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_list_ndim = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert( var_result_ndim == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_result_ndim = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
        assert( var_final_size == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_final_size = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_list_ndim );
        tmp_left_name_1 = var_list_ndim;
        CHECK_OBJECT( var_final_size );
        tmp_right_name_1 = var_final_size;
        tmp_compexpr_left_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 851;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_524288;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 851;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_slicing );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__block_slicing );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_block_slicing" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 852;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_arrays );
            tmp_args_element_name_2 = par_arrays;
            CHECK_OBJECT( var_list_ndim );
            tmp_args_element_name_3 = var_list_ndim;
            CHECK_OBJECT( var_result_ndim );
            tmp_args_element_name_4 = var_result_ndim;
            frame_caa373b77343e025617bc8fe8e41cbb9->m_frame.f_lineno = 852;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 852;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_concatenate );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__block_concatenate );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_block_concatenate" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 854;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_arrays );
            tmp_args_element_name_5 = par_arrays;
            CHECK_OBJECT( var_list_ndim );
            tmp_args_element_name_6 = var_list_ndim;
            CHECK_OBJECT( var_result_ndim );
            tmp_args_element_name_7 = var_result_ndim;
            frame_caa373b77343e025617bc8fe8e41cbb9->m_frame.f_lineno = 854;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 854;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_caa373b77343e025617bc8fe8e41cbb9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_caa373b77343e025617bc8fe8e41cbb9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_caa373b77343e025617bc8fe8e41cbb9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_caa373b77343e025617bc8fe8e41cbb9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_caa373b77343e025617bc8fe8e41cbb9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_caa373b77343e025617bc8fe8e41cbb9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_caa373b77343e025617bc8fe8e41cbb9,
        type_description_1,
        par_arrays,
        var_list_ndim,
        var_result_ndim,
        var_final_size
    );


    // Release cached frame.
    if ( frame_caa373b77343e025617bc8fe8e41cbb9 == cache_frame_caa373b77343e025617bc8fe8e41cbb9 )
    {
        Py_DECREF( frame_caa373b77343e025617bc8fe8e41cbb9 );
    }
    cache_frame_caa373b77343e025617bc8fe8e41cbb9 = NULL;

    assertFrameObject( frame_caa373b77343e025617bc8fe8e41cbb9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_21_block );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)var_list_ndim );
    Py_DECREF( var_list_ndim );
    var_list_ndim = NULL;

    CHECK_OBJECT( (PyObject *)var_result_ndim );
    Py_DECREF( var_result_ndim );
    var_result_ndim = NULL;

    CHECK_OBJECT( (PyObject *)var_final_size );
    Py_DECREF( var_final_size );
    var_final_size = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    Py_XDECREF( var_list_ndim );
    var_list_ndim = NULL;

    Py_XDECREF( var_result_ndim );
    var_result_ndim = NULL;

    Py_XDECREF( var_final_size );
    var_final_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_21_block );
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


static PyObject *impl_numpy$core$shape_base$$$function_22__block_setup( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    PyObject *var_bottom_index = NULL;
    PyObject *var_arr_ndim = NULL;
    PyObject *var_final_size = NULL;
    PyObject *var_list_ndim = NULL;
    PyObject *var_result_ndim = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1b8a1d54177d4c312b087159f4edaae9;
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
    static struct Nuitka_FrameObject *cache_frame_1b8a1d54177d4c312b087159f4edaae9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1b8a1d54177d4c312b087159f4edaae9, codeobj_1b8a1d54177d4c312b087159f4edaae9, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1b8a1d54177d4c312b087159f4edaae9 = cache_frame_1b8a1d54177d4c312b087159f4edaae9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1b8a1d54177d4c312b087159f4edaae9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1b8a1d54177d4c312b087159f4edaae9 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_check_depths_match );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__block_check_depths_match );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_block_check_depths_match" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 866;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_arrays );
        tmp_args_element_name_1 = par_arrays;
        frame_1b8a1d54177d4c312b087159f4edaae9->m_frame.f_lineno = 866;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 866;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 866;
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


            type_description_1 = "oooooo";
            exception_lineno = 866;
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


            type_description_1 = "oooooo";
            exception_lineno = 866;
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


            type_description_1 = "oooooo";
            exception_lineno = 866;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 866;
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

            type_description_1 = "oooooo";
            exception_lineno = 866;
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
        assert( var_bottom_index == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_bottom_index = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_arr_ndim == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_arr_ndim = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert( var_final_size == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_final_size = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_bottom_index );
        tmp_len_arg_1 = var_bottom_index;
        tmp_assign_source_8 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 867;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_list_ndim == NULL );
        var_list_ndim = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_bottom_index );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_bottom_index );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 868;
            type_description_1 = "oooooo";
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
        CHECK_OBJECT( var_bottom_index );
        tmp_subscribed_name_1 = var_bottom_index;
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 868;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_and_right_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            tmp_source_name_1 = const_str_digest_c32a1a91ff24c1652fe8e82e8629f0e2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
            assert( !(tmp_called_name_2 == NULL) );
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_format_index );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__block_format_index );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_block_format_index" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 871;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_2;
            CHECK_OBJECT( var_bottom_index );
            tmp_args_element_name_3 = var_bottom_index;
            frame_1b8a1d54177d4c312b087159f4edaae9->m_frame.f_lineno = 871;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 871;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_1b8a1d54177d4c312b087159f4edaae9->m_frame.f_lineno = 870;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 870;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_1b8a1d54177d4c312b087159f4edaae9->m_frame.f_lineno = 869;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 869;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_4 != NULL );
        CHECK_OBJECT( var_arr_ndim );
        tmp_args_element_name_4 = var_arr_ndim;
        CHECK_OBJECT( var_list_ndim );
        tmp_args_element_name_5 = var_list_ndim;
        frame_1b8a1d54177d4c312b087159f4edaae9->m_frame.f_lineno = 874;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 874;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_result_ndim == NULL );
        var_result_ndim = tmp_assign_source_9;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b8a1d54177d4c312b087159f4edaae9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b8a1d54177d4c312b087159f4edaae9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1b8a1d54177d4c312b087159f4edaae9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1b8a1d54177d4c312b087159f4edaae9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1b8a1d54177d4c312b087159f4edaae9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1b8a1d54177d4c312b087159f4edaae9,
        type_description_1,
        par_arrays,
        var_bottom_index,
        var_arr_ndim,
        var_final_size,
        var_list_ndim,
        var_result_ndim
    );


    // Release cached frame.
    if ( frame_1b8a1d54177d4c312b087159f4edaae9 == cache_frame_1b8a1d54177d4c312b087159f4edaae9 )
    {
        Py_DECREF( frame_1b8a1d54177d4c312b087159f4edaae9 );
    }
    cache_frame_1b8a1d54177d4c312b087159f4edaae9 = NULL;

    assertFrameObject( frame_1b8a1d54177d4c312b087159f4edaae9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_arrays );
        tmp_tuple_element_1 = par_arrays;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_list_ndim );
        tmp_tuple_element_1 = var_list_ndim;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_result_ndim );
        tmp_tuple_element_1 = var_result_ndim;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( var_final_size );
        tmp_tuple_element_1 = var_final_size;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_22__block_setup );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)var_bottom_index );
    Py_DECREF( var_bottom_index );
    var_bottom_index = NULL;

    CHECK_OBJECT( (PyObject *)var_arr_ndim );
    Py_DECREF( var_arr_ndim );
    var_arr_ndim = NULL;

    CHECK_OBJECT( (PyObject *)var_final_size );
    Py_DECREF( var_final_size );
    var_final_size = NULL;

    CHECK_OBJECT( (PyObject *)var_list_ndim );
    Py_DECREF( var_list_ndim );
    var_list_ndim = NULL;

    CHECK_OBJECT( (PyObject *)var_result_ndim );
    Py_DECREF( var_result_ndim );
    var_result_ndim = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    Py_XDECREF( var_bottom_index );
    var_bottom_index = NULL;

    Py_XDECREF( var_arr_ndim );
    var_arr_ndim = NULL;

    Py_XDECREF( var_final_size );
    var_final_size = NULL;

    Py_XDECREF( var_list_ndim );
    var_list_ndim = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_22__block_setup );
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


static PyObject *impl_numpy$core$shape_base$$$function_23__block_slicing( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    PyObject *par_list_ndim = python_pars[ 1 ];
    PyObject *par_result_ndim = python_pars[ 2 ];
    PyObject *var_shape = NULL;
    PyObject *var_slices = NULL;
    PyObject *var_dtype = NULL;
    PyObject *var_F_order = NULL;
    PyObject *var_C_order = NULL;
    PyObject *var_order = NULL;
    PyObject *var_result = NULL;
    PyObject *var_the_slice = NULL;
    PyObject *var_arr = NULL;
    PyObject *outline_0_var_arr = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b7af69a54ccc3f2c22d28cef07006df4;
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
    struct Nuitka_FrameObject *frame_045e802adba160c2da82e171b248e52c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_045e802adba160c2da82e171b248e52c_2 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_b7af69a54ccc3f2c22d28cef07006df4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b7af69a54ccc3f2c22d28cef07006df4, codeobj_b7af69a54ccc3f2c22d28cef07006df4, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b7af69a54ccc3f2c22d28cef07006df4 = cache_frame_b7af69a54ccc3f2c22d28cef07006df4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b7af69a54ccc3f2c22d28cef07006df4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b7af69a54ccc3f2c22d28cef07006df4 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_info_recursion );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__block_info_recursion );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_block_info_recursion" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 879;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_arrays );
        tmp_args_element_name_1 = par_arrays;
        CHECK_OBJECT( par_list_ndim );
        tmp_args_element_name_2 = par_list_ndim;
        CHECK_OBJECT( par_result_ndim );
        tmp_args_element_name_3 = par_result_ndim;
        frame_b7af69a54ccc3f2c22d28cef07006df4->m_frame.f_lineno = 879;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 879;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 879;
            type_description_1 = "oooooooooooo";
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 879;
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 879;
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 879;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 879;
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

            type_description_1 = "oooooooooooo";
            exception_lineno = 879;
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
        assert( var_shape == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_shape = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_slices == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_slices = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_arrays;
            assert( old != NULL );
            par_arrays = tmp_assign_source_7;
            Py_INCREF( par_arrays );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dircall_arg2_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 881;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_result_type );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 881;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( par_arrays );
            tmp_iter_arg_2 = par_arrays;
            tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 881;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_10;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_045e802adba160c2da82e171b248e52c_2, codeobj_045e802adba160c2da82e171b248e52c, module_numpy$core$shape_base, sizeof(void *) );
        frame_045e802adba160c2da82e171b248e52c_2 = cache_frame_045e802adba160c2da82e171b248e52c_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_045e802adba160c2da82e171b248e52c_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_045e802adba160c2da82e171b248e52c_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
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
                    type_description_2 = "o";
                    exception_lineno = 881;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_11;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_12 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_arr;
                outline_0_var_arr = tmp_assign_source_12;
                Py_INCREF( outline_0_var_arr );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT( outline_0_var_arr );
            tmp_source_name_2 = outline_0_var_arr;
            tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 881;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 881;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 881;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_dircall_arg2_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_dircall_arg2_1 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_23__block_slicing );
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

        goto frame_return_exit_1;
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
        RESTORE_FRAME_EXCEPTION( frame_045e802adba160c2da82e171b248e52c_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_045e802adba160c2da82e171b248e52c_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_045e802adba160c2da82e171b248e52c_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_045e802adba160c2da82e171b248e52c_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_045e802adba160c2da82e171b248e52c_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_045e802adba160c2da82e171b248e52c_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_045e802adba160c2da82e171b248e52c_2,
            type_description_2,
            outline_0_var_arr
        );


        // Release cached frame.
        if ( frame_045e802adba160c2da82e171b248e52c_2 == cache_frame_045e802adba160c2da82e171b248e52c_2 )
        {
            Py_DECREF( frame_045e802adba160c2da82e171b248e52c_2 );
        }
        cache_frame_045e802adba160c2da82e171b248e52c_2 = NULL;

        assertFrameObject( frame_045e802adba160c2da82e171b248e52c_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_23__block_slicing );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF( outline_0_var_arr );
        outline_0_var_arr = NULL;

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

        Py_XDECREF( outline_0_var_arr );
        outline_0_var_arr = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_23__block_slicing );
        return NULL;
        outline_exception_1:;
        exception_lineno = 881;
        goto frame_exception_exit_1;
        outline_result_1:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_8 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 881;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dtype == NULL );
        var_dtype = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_all );
        assert( tmp_called_name_2 != NULL );
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( par_arrays );
            tmp_iter_arg_3 = par_arrays;
            tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 884;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_14;
        }
        // Tried code:
        tmp_args_element_name_4 = numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_4)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_23__block_slicing );
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_23__block_slicing );
        return NULL;
        outline_result_2:;
        frame_b7af69a54ccc3f2c22d28cef07006df4->m_frame.f_lineno = 884;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 884;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_F_order == NULL );
        var_F_order = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_all );
        assert( tmp_called_name_3 != NULL );
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT( par_arrays );
            tmp_iter_arg_4 = par_arrays;
            tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_4 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 885;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_2__$0 == NULL );
            tmp_genexpr_2__$0 = tmp_assign_source_16;
        }
        // Tried code:
        tmp_args_element_name_5 = numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_2_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_5)->m_closure[0] = PyCell_NEW0( tmp_genexpr_2__$0 );


        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_23__block_slicing );
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
        Py_DECREF( tmp_genexpr_2__$0 );
        tmp_genexpr_2__$0 = NULL;

        goto outline_result_3;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
        Py_DECREF( tmp_genexpr_2__$0 );
        tmp_genexpr_2__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_23__block_slicing );
        return NULL;
        outline_result_3:;
        frame_b7af69a54ccc3f2c22d28cef07006df4->m_frame.f_lineno = 885;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 885;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_C_order == NULL );
        var_C_order = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_17;
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_F_order );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_F_order );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 886;
            type_description_1 = "oooooooooooo";
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
        CHECK_OBJECT( var_C_order );
        tmp_operand_name_1 = var_C_order;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 886;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_17 = const_str_plain_F;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_17 = const_str_plain_C;
        condexpr_end_1:;
        assert( var_order == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var_order = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 887;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_empty );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 887;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_shape;
        CHECK_OBJECT( var_shape );
        tmp_dict_value_1 = var_shape;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_dtype;
        CHECK_OBJECT( var_dtype );
        tmp_dict_value_2 = var_dtype;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_order;
        CHECK_OBJECT( var_order );
        tmp_dict_value_3 = var_order;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_b7af69a54ccc3f2c22d28cef07006df4->m_frame.f_lineno = 887;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 887;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_called_name_5 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT( var_slices );
        tmp_args_element_name_6 = var_slices;
        CHECK_OBJECT( par_arrays );
        tmp_args_element_name_7 = par_arrays;
        frame_b7af69a54ccc3f2c22d28cef07006df4->m_frame.f_lineno = 892;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 892;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 892;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_19;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
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
                type_description_1 = "oooooooooooo";
                exception_lineno = 892;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_20;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_6 = tmp_for_loop_1__iter_value;
        tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_6 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 892;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_4, 0, 2 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 892;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_22;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_5, 1, 2 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 892;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_23;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 892;
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

            type_description_1 = "oooooooooooo";
            exception_lineno = 892;
            goto try_except_handler_10;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_9;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
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
            PyObject *old = var_the_slice;
            var_the_slice = tmp_assign_source_24;
            Py_INCREF( var_the_slice );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_25 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_arr;
            var_arr = tmp_assign_source_25;
            Py_INCREF( var_arr );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_arr );
        tmp_ass_subvalue_1 = var_arr;
        CHECK_OBJECT( var_result );
        tmp_ass_subscribed_1 = var_result;
        tmp_left_name_1 = const_tuple_ellipsis_tuple;
        CHECK_OBJECT( var_the_slice );
        tmp_right_name_1 = var_the_slice;
        tmp_ass_subscript_1 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 893;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_8;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 893;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_8;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 892;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7af69a54ccc3f2c22d28cef07006df4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7af69a54ccc3f2c22d28cef07006df4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b7af69a54ccc3f2c22d28cef07006df4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b7af69a54ccc3f2c22d28cef07006df4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b7af69a54ccc3f2c22d28cef07006df4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b7af69a54ccc3f2c22d28cef07006df4,
        type_description_1,
        par_arrays,
        par_list_ndim,
        par_result_ndim,
        var_shape,
        var_slices,
        var_dtype,
        var_F_order,
        var_C_order,
        var_order,
        var_result,
        var_the_slice,
        var_arr
    );


    // Release cached frame.
    if ( frame_b7af69a54ccc3f2c22d28cef07006df4 == cache_frame_b7af69a54ccc3f2c22d28cef07006df4 )
    {
        Py_DECREF( frame_b7af69a54ccc3f2c22d28cef07006df4 );
    }
    cache_frame_b7af69a54ccc3f2c22d28cef07006df4 = NULL;

    assertFrameObject( frame_b7af69a54ccc3f2c22d28cef07006df4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_23__block_slicing );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_list_ndim );
    Py_DECREF( par_list_ndim );
    par_list_ndim = NULL;

    CHECK_OBJECT( (PyObject *)par_result_ndim );
    Py_DECREF( par_result_ndim );
    par_result_ndim = NULL;

    CHECK_OBJECT( (PyObject *)var_shape );
    Py_DECREF( var_shape );
    var_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_slices );
    Py_DECREF( var_slices );
    var_slices = NULL;

    CHECK_OBJECT( (PyObject *)var_dtype );
    Py_DECREF( var_dtype );
    var_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_F_order );
    Py_DECREF( var_F_order );
    var_F_order = NULL;

    CHECK_OBJECT( (PyObject *)var_C_order );
    Py_DECREF( var_C_order );
    var_C_order = NULL;

    CHECK_OBJECT( (PyObject *)var_order );
    Py_DECREF( var_order );
    var_order = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_the_slice );
    var_the_slice = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_list_ndim );
    Py_DECREF( par_list_ndim );
    par_list_ndim = NULL;

    CHECK_OBJECT( (PyObject *)par_result_ndim );
    Py_DECREF( par_result_ndim );
    par_result_ndim = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_slices );
    var_slices = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_F_order );
    var_F_order = NULL;

    Py_XDECREF( var_C_order );
    var_C_order = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_the_slice );
    var_the_slice = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_23__block_slicing );
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



struct numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_1_genexpr_locals {
    PyObject *var_arr;
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

static PyObject *numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_1_genexpr_locals *generator_heap = (struct numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_arr = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_ae7eff15c69bc5bcc29824b23de90a5b, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 884;
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
            PyObject *old = generator_heap->var_arr;
            generator_heap->var_arr = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_arr );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_arr );
        tmp_source_name_1 = generator_heap->var_arr;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flags );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 884;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_subscript_name_1 = const_str_plain_F_CONTIGUOUS;
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 884;
            generator_heap->type_description_1 = "No";
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


            generator_heap->exception_lineno = 884;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 884;
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
            generator_heap->var_arr
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

    Py_XDECREF( generator_heap->var_arr );
    generator_heap->var_arr = NULL;

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

    Py_XDECREF( generator_heap->var_arr );
    generator_heap->var_arr = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_1_genexpr_context,
        module_numpy$core$shape_base,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_8912937ba7b11d940e2c172e469e5864,
#endif
        codeobj_ae7eff15c69bc5bcc29824b23de90a5b,
        1,
        sizeof(struct numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_1_genexpr_locals)
    );
}



struct numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_2_genexpr_locals {
    PyObject *var_arr;
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

static PyObject *numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_2_genexpr_locals *generator_heap = (struct numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_arr = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_a5b4dd2c5e2ca087f83a56001be161e4, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 885;
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
            PyObject *old = generator_heap->var_arr;
            generator_heap->var_arr = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_arr );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_arr );
        tmp_source_name_1 = generator_heap->var_arr;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flags );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 885;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_subscript_name_1 = const_str_plain_C_CONTIGUOUS;
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 885;
            generator_heap->type_description_1 = "No";
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


            generator_heap->exception_lineno = 885;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 885;
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
            generator_heap->var_arr
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

    Py_XDECREF( generator_heap->var_arr );
    generator_heap->var_arr = NULL;

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

    Py_XDECREF( generator_heap->var_arr );
    generator_heap->var_arr = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_2_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_2_genexpr_context,
        module_numpy$core$shape_base,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_8912937ba7b11d940e2c172e469e5864,
#endif
        codeobj_a5b4dd2c5e2ca087f83a56001be161e4,
        1,
        sizeof(struct numpy$core$shape_base$$$function_23__block_slicing$$$genexpr_2_genexpr_locals)
    );
}


static PyObject *impl_numpy$core$shape_base$$$function_24__block_concatenate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    PyObject *par_list_ndim = python_pars[ 1 ];
    PyObject *par_result_ndim = python_pars[ 2 ];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_c08219f7e0a78c365d03474baac460c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c08219f7e0a78c365d03474baac460c1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c08219f7e0a78c365d03474baac460c1, codeobj_c08219f7e0a78c365d03474baac460c1, module_numpy$core$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c08219f7e0a78c365d03474baac460c1 = cache_frame_c08219f7e0a78c365d03474baac460c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c08219f7e0a78c365d03474baac460c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c08219f7e0a78c365d03474baac460c1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__block );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_block" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 898;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_arrays );
        tmp_args_element_name_1 = par_arrays;
        CHECK_OBJECT( par_list_ndim );
        tmp_args_element_name_2 = par_list_ndim;
        CHECK_OBJECT( par_result_ndim );
        tmp_args_element_name_3 = par_result_ndim;
        frame_c08219f7e0a78c365d03474baac460c1->m_frame.f_lineno = 898;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 898;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_list_ndim );
        tmp_compexpr_left_1 = par_list_ndim;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 899;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( var_result );
            tmp_called_instance_1 = var_result;
            frame_c08219f7e0a78c365d03474baac460c1->m_frame.f_lineno = 904;
            tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 904;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_result;
                assert( old != NULL );
                var_result = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c08219f7e0a78c365d03474baac460c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c08219f7e0a78c365d03474baac460c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c08219f7e0a78c365d03474baac460c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c08219f7e0a78c365d03474baac460c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c08219f7e0a78c365d03474baac460c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c08219f7e0a78c365d03474baac460c1,
        type_description_1,
        par_arrays,
        par_list_ndim,
        par_result_ndim,
        var_result
    );


    // Release cached frame.
    if ( frame_c08219f7e0a78c365d03474baac460c1 == cache_frame_c08219f7e0a78c365d03474baac460c1 )
    {
        Py_DECREF( frame_c08219f7e0a78c365d03474baac460c1 );
    }
    cache_frame_c08219f7e0a78c365d03474baac460c1 = NULL;

    assertFrameObject( frame_c08219f7e0a78c365d03474baac460c1 );

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
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_24__block_concatenate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_list_ndim );
    Py_DECREF( par_list_ndim );
    par_list_ndim = NULL;

    CHECK_OBJECT( (PyObject *)par_result_ndim );
    Py_DECREF( par_result_ndim );
    par_result_ndim = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    CHECK_OBJECT( (PyObject *)par_list_ndim );
    Py_DECREF( par_list_ndim );
    par_list_ndim = NULL;

    CHECK_OBJECT( (PyObject *)par_result_ndim );
    Py_DECREF( par_result_ndim );
    par_result_ndim = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$shape_base$$$function_24__block_concatenate );
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



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_10_hstack(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_10_hstack,
        const_str_plain_hstack,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_feff84a29eabd4b2f652314dd64b407f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        const_str_digest_34ea1747c10b494f6d8d0e1cf1a045ca,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_11__stack_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_11__stack_dispatcher,
        const_str_plain__stack_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d0a155392b78f8c237366740b7e806d3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_12_stack( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_12_stack,
        const_str_plain_stack,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_25b004355d48f3ddbea90f7e0dff2348,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        const_str_digest_d67dfe87afa17d645c0b631d486beccd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_13__block_format_index(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_13__block_format_index,
        const_str_plain__block_format_index,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5b97ede82f90e8f7c920686262c4c76c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        const_str_digest_eec8e1baa32d30e231e402ae34e9aa6e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_14__block_check_depths_match( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_14__block_check_depths_match,
        const_str_plain__block_check_depths_match,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_aa130298e6cd915ce3c46168d830997f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        const_str_digest_0211f308e7cdb532cb4e60135adbedb0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_15__atleast_nd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_15__atleast_nd,
        const_str_plain__atleast_nd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1b9c46b1ecc783b52be63a3e66a1e3de,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_16__accumulate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_16__accumulate,
        const_str_plain__accumulate,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9962c1f848e5d55585e284ee02fc8659,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_17__concatenate_shapes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_17__concatenate_shapes,
        const_str_plain__concatenate_shapes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0b0af011f668899e5f1fa0319fa834ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        const_str_digest_7b6823f8dc9ded008c2837856c4dfa59,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_18__block_info_recursion( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_18__block_info_recursion,
        const_str_plain__block_info_recursion,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6240613f8d389846e068d3ed1e9a28c6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        const_str_digest_8156045d0165c8778a0a0784ec56dc3e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_19__block( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_19__block,
        const_str_plain__block,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1643fb3501044873c9e0b9afc79d8fd3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        const_str_digest_a11996f55bed466d32ef859a905d6b55,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_1__atleast_1d_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_1__atleast_1d_dispatcher,
        const_str_plain__atleast_1d_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0189c3fdb49af755c71024cc991badb4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_20__block_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_20__block_dispatcher,
        const_str_plain__block_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6235b41678eb7f9dd51a1c5c8cb7de91,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_21_block(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_21_block,
        const_str_plain_block,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_caa373b77343e025617bc8fe8e41cbb9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        const_str_digest_b4c939c3514055bf8e1cf36ee382dc44,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_22__block_setup(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_22__block_setup,
        const_str_plain__block_setup,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1b8a1d54177d4c312b087159f4edaae9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        const_str_digest_fd4c5f42d97a31e9c8d03ac62580942d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_23__block_slicing(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_23__block_slicing,
        const_str_plain__block_slicing,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b7af69a54ccc3f2c22d28cef07006df4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_24__block_concatenate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_24__block_concatenate,
        const_str_plain__block_concatenate,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c08219f7e0a78c365d03474baac460c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_2_atleast_1d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_2_atleast_1d,
        const_str_plain_atleast_1d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9eb40b521a3d4c55ae28b70f0dd36a02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        const_str_digest_1816a25c113dff6903321ffadd09527e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_3__atleast_2d_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_3__atleast_2d_dispatcher,
        const_str_plain__atleast_2d_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3542f5c8b18da835a7d570c597da5604,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_4_atleast_2d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_4_atleast_2d,
        const_str_plain_atleast_2d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_551d77cea179406190828d032cfaf25e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        const_str_digest_b33f762006ad3b724527b5b83e95479e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_5__atleast_3d_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_5__atleast_3d_dispatcher,
        const_str_plain__atleast_3d_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ea6ff67bccf130eeb55397d5ddff07cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_6_atleast_3d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_6_atleast_3d,
        const_str_plain_atleast_3d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6c96372defba2f12d98c7c1064a90cf4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        const_str_digest_c341b6b907536b0f14f8293d793c2e25,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_7__arrays_for_stack_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_7__arrays_for_stack_dispatcher,
        const_str_plain__arrays_for_stack_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e1f566bb2eb38c76f73d8de0857b9015,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_8__vhstack_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_8__vhstack_dispatcher,
        const_str_plain__vhstack_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ecf6278fb62153a38c11715409f0a640,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$shape_base$$$function_9_vstack(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$shape_base$$$function_9_vstack,
        const_str_plain_vstack,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_17d62bd13e6cffcf7ba6c062716b3157,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$shape_base,
        const_str_digest_f74963e4c77c7418367d1c49289cdaa5,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$shape_base =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core.shape_base",
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

MOD_INIT_DECL( numpy$core$shape_base )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$shape_base );
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
    puts("numpy.core.shape_base: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core.shape_base: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core.shape_base: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$core$shape_base" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$shape_base = Py_InitModule4(
        "numpy.core.shape_base",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$core$shape_base = PyModule_Create( &mdef_numpy$core$shape_base );
#endif

    moduledict_numpy$core$shape_base = MODULE_DICT( module_numpy$core$shape_base );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$core$shape_base,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$core$shape_base,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$shape_base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$shape_base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$core$shape_base );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_05505d3dfcf4f98fe70aff71c6cc60d8, module_numpy$core$shape_base );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_221a5ccc23e8d9d4a3e390aa130e9185;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_221a5ccc23e8d9d4a3e390aa130e9185 = MAKE_MODULE_FRAME( codeobj_221a5ccc23e8d9d4a3e390aa130e9185, module_numpy$core$shape_base );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_221a5ccc23e8d9d4a3e390aa130e9185 );
    assert( Py_REFCNT( frame_221a5ccc23e8d9d4a3e390aa130e9185 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        tmp_assign_source_8 = LIST_COPY( const_list_fed8c17e77f4f5eb83be81f53126ba0d_list );
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_functools;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$shape_base;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 6;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_operator;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$core$shape_base;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 7;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_operator, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_warnings;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$core$shape_base;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 8;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_empty;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$core$shape_base;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_numeric_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 10;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_numpy$core$shape_base,
                const_str_plain_numeric,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_numeric );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__nx, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_empty;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$core$shape_base;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_overrides_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 11;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_numpy$core$shape_base,
                const_str_plain_overrides,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_overrides );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_overrides, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_numeric;
        tmp_globals_name_6 = (PyObject *)moduledict_numpy$core$shape_base;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_array_str_plain_asanyarray_str_plain_newaxis_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 12;
        tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_numpy$core$shape_base,
                const_str_plain_array,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_array );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_numpy$core$shape_base,
                const_str_plain_asanyarray,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_asanyarray );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_asanyarray, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_numpy$core$shape_base,
                const_str_plain_newaxis,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_newaxis );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_newaxis, tmp_assign_source_17 );
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
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_multiarray;
        tmp_globals_name_7 = (PyObject *)moduledict_numpy$core$shape_base;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_normalize_axis_index_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 13;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_numpy$core$shape_base,
                const_str_plain_normalize_axis_index,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_normalize_axis_index );
        }

        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_normalize_axis_index, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_functools );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "functools" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_partial );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_overrides );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_overrides );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "overrides" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array_function_dispatch );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6e6659be28864e39bad7cab4409b7e16 );
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 16;
        tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_numpy$core$shape_base$$$function_1__atleast_1d_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__atleast_1d_dispatcher, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_called_name_3 = tmp_mvar_value_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__atleast_1d_dispatcher );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__atleast_1d_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_args_element_name_1 = tmp_mvar_value_6;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$core$shape_base$$$function_2_atleast_1d(  );



        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_atleast_1d, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_numpy$core$shape_base$$$function_3__atleast_2d_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__atleast_2d_dispatcher, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__atleast_2d_dispatcher );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__atleast_2d_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_8 );
        tmp_args_element_name_3 = tmp_mvar_value_8;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_called_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = MAKE_FUNCTION_numpy$core$shape_base$$$function_4_atleast_2d(  );



        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_atleast_2d, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_FUNCTION_numpy$core$shape_base$$$function_5__atleast_3d_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__atleast_3d_dispatcher, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_9;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__atleast_3d_dispatcher );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__atleast_3d_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_10 );
        tmp_args_element_name_5 = tmp_mvar_value_10;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = MAKE_FUNCTION_numpy$core$shape_base$$$function_6_atleast_3d(  );



        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_atleast_3d, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_int_pos_4_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_26 = MAKE_FUNCTION_numpy$core$shape_base$$$function_7__arrays_for_stack_dispatcher( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_numpy$core$shape_base$$$function_8__vhstack_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__vhstack_dispatcher, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_11;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__vhstack_dispatcher );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__vhstack_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_12 );
        tmp_args_element_name_7 = tmp_mvar_value_12;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = MAKE_FUNCTION_numpy$core$shape_base$$$function_9_vstack(  );



        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_vstack, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_13;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__vhstack_dispatcher );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__vhstack_dispatcher );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_vhstack_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = tmp_mvar_value_14;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_called_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = MAKE_FUNCTION_numpy$core$shape_base$$$function_10_hstack(  );



        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_hstack, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_30 = MAKE_FUNCTION_numpy$core$shape_base$$$function_11__stack_dispatcher( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__stack_dispatcher, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_12;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_defaults_3;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 356;

            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_15;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__stack_dispatcher );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stack_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_16 );
        tmp_args_element_name_11 = tmp_mvar_value_16;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 356;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_called_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = const_tuple_int_0_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_args_element_name_12 = MAKE_FUNCTION_numpy$core$shape_base$$$function_12_stack( tmp_defaults_3 );



        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 356;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_stack, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 438;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_17;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_size );
        if ( tmp_getattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        tmp_getattr_attr_1 = const_str_plain___wrapped__;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_18 == NULL )
        {
            Py_DECREF( tmp_getattr_target_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 438;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_18;
        tmp_getattr_default_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_size );
        if ( tmp_getattr_default_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_getattr_target_1 );

            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        Py_DECREF( tmp_getattr_target_1 );
        Py_DECREF( tmp_getattr_default_1 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__size, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_20;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 439;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_19;
        tmp_getattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ndim );
        if ( tmp_getattr_target_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        tmp_getattr_attr_2 = const_str_plain___wrapped__;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_20 == NULL )
        {
            Py_DECREF( tmp_getattr_target_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 439;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_20;
        tmp_getattr_default_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
        if ( tmp_getattr_default_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_getattr_target_2 );

            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
        Py_DECREF( tmp_getattr_target_2 );
        Py_DECREF( tmp_getattr_default_2 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__ndim, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_22;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 440;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_21;
        tmp_getattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_concatenate );
        if ( tmp_getattr_target_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_getattr_attr_3 = const_str_plain___wrapped__;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_22 == NULL )
        {
            Py_DECREF( tmp_getattr_target_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 440;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_22;
        tmp_getattr_default_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_concatenate );
        if ( tmp_getattr_default_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_getattr_target_3 );

            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
        Py_DECREF( tmp_getattr_target_3 );
        Py_DECREF( tmp_getattr_default_3 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__concatenate, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_numpy$core$shape_base$$$function_13__block_format_index(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_format_index, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_4;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = PyList_New( 0 );
        tmp_defaults_4 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 0, tmp_tuple_element_2 );
        tmp_assign_source_36 = MAKE_FUNCTION_numpy$core$shape_base$$$function_14__block_check_depths_match( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_check_depths_match, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_numpy$core$shape_base$$$function_15__atleast_nd(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__atleast_nd, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_numpy$core$shape_base$$$function_16__accumulate(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__accumulate, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_numpy$core$shape_base$$$function_17__concatenate_shapes(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__concatenate_shapes, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_40 = MAKE_FUNCTION_numpy$core$shape_base$$$function_18__block_info_recursion( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_info_recursion, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_assign_source_41 = MAKE_FUNCTION_numpy$core$shape_base$$$function_19__block( tmp_defaults_6 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_FUNCTION_numpy$core$shape_base$$$function_20__block_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_dispatcher, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 686;

            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_23;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_dispatcher );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__block_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_24 );
        tmp_args_element_name_13 = tmp_mvar_value_24;
        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 686;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_called_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 686;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_14 = MAKE_FUNCTION_numpy$core$shape_base$$$function_21_block(  );



        frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame.f_lineno = 686;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 686;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain_block, tmp_assign_source_43 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_221a5ccc23e8d9d4a3e390aa130e9185 );
#endif
    popFrameStack();

    assertFrameObject( frame_221a5ccc23e8d9d4a3e390aa130e9185 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_221a5ccc23e8d9d4a3e390aa130e9185 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_221a5ccc23e8d9d4a3e390aa130e9185, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_221a5ccc23e8d9d4a3e390aa130e9185->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_221a5ccc23e8d9d4a3e390aa130e9185, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_FUNCTION_numpy$core$shape_base$$$function_22__block_setup(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_setup, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_FUNCTION_numpy$core$shape_base$$$function_23__block_slicing(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_slicing, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_FUNCTION_numpy$core$shape_base$$$function_24__block_concatenate(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain__block_concatenate, tmp_assign_source_46 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$core$shape_base, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$core$shape_base );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
