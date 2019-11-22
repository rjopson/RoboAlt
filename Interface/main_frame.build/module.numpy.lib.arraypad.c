/* Generated code for Python module 'numpy.lib.arraypad'
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

/* The "_module_numpy$lib$arraypad" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$arraypad;
PyDictObject *moduledict_numpy$lib$arraypad;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_right_pad;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_fill_value;
extern PyObject *const_str_plain_array;
static PyObject *const_str_plain__linear_ramp;
static PyObject *const_str_plain_gain;
static PyObject *const_list_str_plain_reflect_type_list;
static PyObject *const_str_plain_left_length;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_sl;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_right_stat;
static PyObject *const_str_plain_left_index;
static PyObject *const_str_digest_fd096b3979fb57a7dd585a7ce3a49e25;
extern PyObject *const_str_plain_max;
static PyObject *const_str_digest_2cf78271d53ae2a150daec7a0d550fa6;
static PyObject *const_str_plain_new_right_pad;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_dict_6e6659be28864e39bad7cab4409b7e16;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_right_chunk;
static PyObject *const_dict_787eda1103da1ea39cbb770f6d104ce2;
static PyObject *const_str_plain_left_ramp;
static PyObject *const_str_plain_right_slice;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_size;
static PyObject *const_str_plain_reflect;
static PyObject *const_str_plain_right_index;
extern PyObject *const_str_plain_minimum;
static PyObject *const_str_digest_56946dabfb133fa3f913eb1fae93705b;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_624983e6bb2a2fba0a932a1309512e6b;
static PyObject *const_str_digest_e08d44340090d07bb24b07c38ddc133c;
extern PyObject *const_str_plain_wrap;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain_callable;
static PyObject *const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple;
extern PyObject *const_str_plain_start;
static PyObject *const_str_digest_4a7013c58a5c32ba604f88ac016cc633;
static PyObject *const_str_plain_left_pad;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_tuple_int_pos_1_tuple;
static PyObject *const_str_plain__get_edges;
static PyObject *const_tuple_289ad3ee11dc6d148c759de73f346aa5_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_reverse;
extern PyObject *const_str_plain_tolist;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_include_edge;
static PyObject *const_str_plain__set_pad_area;
extern PyObject *const_str_plain_Ellipsis;
extern PyObject *const_str_plain_flags;
static PyObject *const_str_plain_end_value_pair;
static PyObject *const_str_digest_d67a0cdf56e6b04c2b1f7c4b730d405c;
static PyObject *const_tuple_str_plain_stat_length_none_tuple;
static PyObject *const_list_str_plain_stat_length_list;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_digest_b9c9459e9fda1e023a6ba9f3cec1a14a;
static PyObject *const_str_digest_063706e0993ba59758cd0ad89bf21d17;
static PyObject *const_str_digest_5b795b900cf96d0f8f23d5f0ae069a60;
static PyObject *const_str_plain_init_shape;
static PyObject *const_tuple_str_plain_constant_values_int_0_tuple;
static PyObject *const_str_digest_c04f8465d9a92ee9b38f5e390057f4fb;
static PyObject *const_str_plain__get_linear_ramps;
extern PyObject *const_str_plain_min;
static PyObject *const_str_plain_ramp;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
static PyObject *const_str_plain_right_ramp;
static PyObject *const_tuple_str_plain_arr_str_plain_dtype_tuple;
static PyObject *const_list_str_plain_end_values_list;
static PyObject *const_str_plain_edge_slice;
extern PyObject *const_str_plain_even;
static PyObject *const_str_plain__slice_at_axis;
static PyObject *const_str_plain__round_if_needed;
extern PyObject *const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_arr;
static PyObject *const_list_str_plain_pad_list;
static PyObject *const_str_plain_left_chunk;
static PyObject *const_str_plain_right_length;
extern PyObject *const_str_plain_out;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_left_edge;
static PyObject *const_str_plain_new_left_pad;
extern PyObject *const_str_plain_broadcast_to;
static PyObject *const_str_plain_pad_width;
static PyObject *const_str_plain__set_wrap_both;
static PyObject *const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple;
static PyObject *const_str_digest_615f15f1cdffbaa9f5621fb3f332af66;
extern PyObject *const_tuple_str_plain_array_function_dispatch_tuple;
extern PyObject *const_str_plain_integer;
static PyObject *const_tuple_tuple_none_none_tuple_tuple;
static PyObject *const_dict_a49cf6d67d73ee9b51dbb6169697ab19;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_2e26ef9fb5d77f8269406dedfb29e440_tuple;
static PyObject *const_list_str_plain_constant_values_list;
static PyObject *const_str_plain_pad_area;
static PyObject *const_str_digest_ad624d1305f637d8804820a52da6da65;
static PyObject *const_str_plain_as_index;
extern PyObject *const_int_0;
static PyObject *const_str_plain__pad_dispatcher;
static PyObject *const_str_digest_d25154b4821daa338eaf0c798dee972e;
static PyObject *const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple;
static PyObject *const_str_plain_edge_pair;
extern PyObject *const_str_plain_F;
static PyObject *const_str_plain_linear_ramp;
extern PyObject *const_str_plain_float64;
static PyObject *const_tuple_7d115a5ed5a313ce27808df687460449_tuple;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ind_tuple;
extern PyObject *const_str_plain_ravel;
static PyObject *const_str_plain__pad_simple;
static PyObject *const_str_plain__view_roi;
extern PyObject *const_str_plain_median;
static PyObject *const_str_plain__set_reflect_both;
extern PyObject *const_str_plain_moveaxis;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_plain_constant_values;
extern PyObject *const_str_plain_new_shape;
extern PyObject *const_str_plain_right;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_ind;
extern PyObject *const_tuple_ellipsis_tuple;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_71bad4e0b4147d15eac690c62ce6efe3;
extern PyObject *const_str_plain_odd;
static PyObject *const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple;
extern PyObject *const_tuple_slice_none_none_none_tuple;
static PyObject *const_str_plain_left_stat;
static PyObject *const_str_plain_old_length;
static PyObject *const_dict_e24c06a0a11b6d4526a84b33486b9123;
static PyObject *const_str_digest_b39de0d9d89a6ab08ca6ee2fd060a3c6;
extern PyObject *const_str_plain_intp;
extern PyObject *const_str_plain_pad;
extern PyObject *const_str_plain_fnc;
extern PyObject *const_slice_none_none_int_neg_1;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_tuple_str_plain_constant_tuple;
static PyObject *const_tuple_46b308d7f1da5dc5aa5b4231611fe55a_tuple;
static PyObject *const_str_plain_original_area_slice;
static PyObject *const_str_plain_stat_func;
static PyObject *const_str_plain_max_length;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_tuple_str_plain_end_values_int_0_tuple;
static PyObject *const_str_plain_stat_length;
static PyObject *const_str_plain_chunk_length;
static PyObject *const_str_plain_right_edge;
static PyObject *const_str_plain_edge_offset;
extern PyObject *const_str_plain_kind;
static PyObject *const_tuple_29cd30ad46293e9af0d03a5880ca000e_tuple;
extern PyObject *const_str_plain_array_function_dispatch;
static PyObject *const_tuple_str_plain_reflect_type_str_plain_even_tuple;
static PyObject *const_str_digest_c4c43a43772e74668c61aa86a57b8af6;
static PyObject *const_set_cc63bcba9d40711d2fe518d8993c5aa2;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_str_plain_ndindex_tuple;
static PyObject *const_str_digest_4e7bc992bf8080156ef0970ca5db2a9d;
static PyObject *const_str_plain_end_values;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_ndindex;
static PyObject *const_str_plain_length_pair;
extern PyObject *const_str_plain_symmetric;
static PyObject *const_str_digest_36c3e0ead60cb2e9773b4ea99207bccf;
extern PyObject *const_str_plain_stop;
static PyObject *const_str_plain__as_pairs;
extern PyObject *const_str_plain_edge;
static PyObject *const_str_digest_aeffe88638b8c9e1d7edff4ace7508bd;
extern PyObject *const_str_plain_maximum;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_left;
static PyObject *const_tuple_bb834637c978590f8a9e1ab69daf9ccb_tuple;
extern PyObject *const_str_plain_keepdims;
static PyObject *const_str_plain_reflect_type;
extern PyObject *const_str_plain_dtype;
static PyObject *const_tuple_str_plain_sl_str_plain_axis_tuple;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_mean;
static PyObject *const_str_digest_3fe443fba0ae6931993411663f59f3df;
static PyObject *const_tuple_a9908093e2124ff448c4425513eb3392_tuple;
extern PyObject *const_str_plain_module;
static PyObject *const_str_plain_width_pair;
extern PyObject *const_str_plain_method;
static PyObject *const_tuple_str_plain_x_str_plain_ndim_str_plain_as_index_tuple;
static PyObject *const_tuple_3cfbd7dc6a7bdd2a9ee9155cef75e596_tuple;
static PyObject *const_str_plain_left_slice;
extern PyObject *const_str_plain_round;
extern PyObject *const_str_digest_3ebbb82d9800d0665e0803be07081408;
extern PyObject *const_list_empty;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_digest_16e2e549868032d8ab73d52222cd0476;
extern PyObject *const_str_plain_np;
static PyObject *const_str_digest_003c6ddae0231acf717e666fbe77d653;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_value_pair;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_constant;
extern PyObject *const_tuple_int_pos_2_int_pos_1_tuple;
static PyObject *const_str_digest_9cd59190d3d3f277685a8eabead5a4ec;
extern PyObject *const_str_plain_period;
extern PyObject *const_str_plain_padded;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_fill;
static PyObject *const_str_plain__get_stats;
extern PyObject *const_str_plain_order;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_right_pad = UNSTREAM_STRING_ASCII( &constant_bin[ 2897519 ], 9, 1 );
    const_str_plain__linear_ramp = UNSTREAM_STRING_ASCII( &constant_bin[ 2897528 ], 12, 1 );
    const_str_plain_gain = UNSTREAM_STRING_ASCII( &constant_bin[ 58680 ], 4, 1 );
    const_list_str_plain_reflect_type_list = PyList_New( 1 );
    const_str_plain_reflect_type = UNSTREAM_STRING_ASCII( &constant_bin[ 2897540 ], 12, 1 );
    PyList_SET_ITEM( const_list_str_plain_reflect_type_list, 0, const_str_plain_reflect_type ); Py_INCREF( const_str_plain_reflect_type );
    const_str_plain_left_length = UNSTREAM_STRING_ASCII( &constant_bin[ 2897552 ], 11, 1 );
    const_str_plain_right_stat = UNSTREAM_STRING_ASCII( &constant_bin[ 2897563 ], 10, 1 );
    const_str_plain_left_index = UNSTREAM_STRING_ASCII( &constant_bin[ 2897573 ], 10, 1 );
    const_str_digest_fd096b3979fb57a7dd585a7ce3a49e25 = UNSTREAM_STRING_ASCII( &constant_bin[ 2897583 ], 22, 0 );
    const_str_digest_2cf78271d53ae2a150daec7a0d550fa6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2897605 ], 511, 0 );
    const_str_plain_new_right_pad = UNSTREAM_STRING_ASCII( &constant_bin[ 2898116 ], 13, 1 );
    const_str_plain_right_chunk = UNSTREAM_STRING_ASCII( &constant_bin[ 2898129 ], 11, 1 );
    const_dict_787eda1103da1ea39cbb770f6d104ce2 = _PyDict_NewPresized( 11 );
    PyDict_SetItem( const_dict_787eda1103da1ea39cbb770f6d104ce2, const_str_plain_empty, const_list_empty );
    PyDict_SetItem( const_dict_787eda1103da1ea39cbb770f6d104ce2, const_str_plain_edge, const_list_empty );
    PyDict_SetItem( const_dict_787eda1103da1ea39cbb770f6d104ce2, const_str_plain_wrap, const_list_empty );
    const_list_str_plain_constant_values_list = PyList_New( 1 );
    const_str_plain_constant_values = UNSTREAM_STRING_ASCII( &constant_bin[ 2898140 ], 15, 1 );
    PyList_SET_ITEM( const_list_str_plain_constant_values_list, 0, const_str_plain_constant_values ); Py_INCREF( const_str_plain_constant_values );
    PyDict_SetItem( const_dict_787eda1103da1ea39cbb770f6d104ce2, const_str_plain_constant, const_list_str_plain_constant_values_list );
    const_str_plain_linear_ramp = UNSTREAM_STRING_ASCII( &constant_bin[ 2897529 ], 11, 1 );
    const_list_str_plain_end_values_list = PyList_New( 1 );
    const_str_plain_end_values = UNSTREAM_STRING_ASCII( &constant_bin[ 2898155 ], 10, 1 );
    PyList_SET_ITEM( const_list_str_plain_end_values_list, 0, const_str_plain_end_values ); Py_INCREF( const_str_plain_end_values );
    PyDict_SetItem( const_dict_787eda1103da1ea39cbb770f6d104ce2, const_str_plain_linear_ramp, const_list_str_plain_end_values_list );
    const_list_str_plain_stat_length_list = PyList_New( 1 );
    const_str_plain_stat_length = UNSTREAM_STRING_ASCII( &constant_bin[ 2898165 ], 11, 1 );
    PyList_SET_ITEM( const_list_str_plain_stat_length_list, 0, const_str_plain_stat_length ); Py_INCREF( const_str_plain_stat_length );
    PyDict_SetItem( const_dict_787eda1103da1ea39cbb770f6d104ce2, const_str_plain_maximum, const_list_str_plain_stat_length_list );
    PyDict_SetItem( const_dict_787eda1103da1ea39cbb770f6d104ce2, const_str_plain_mean, const_list_str_plain_stat_length_list );
    PyDict_SetItem( const_dict_787eda1103da1ea39cbb770f6d104ce2, const_str_plain_median, const_list_str_plain_stat_length_list );
    PyDict_SetItem( const_dict_787eda1103da1ea39cbb770f6d104ce2, const_str_plain_minimum, const_list_str_plain_stat_length_list );
    const_str_plain_reflect = UNSTREAM_STRING_ASCII( &constant_bin[ 16665 ], 7, 1 );
    PyDict_SetItem( const_dict_787eda1103da1ea39cbb770f6d104ce2, const_str_plain_reflect, const_list_str_plain_reflect_type_list );
    PyDict_SetItem( const_dict_787eda1103da1ea39cbb770f6d104ce2, const_str_plain_symmetric, const_list_str_plain_reflect_type_list );
    assert( PyDict_Size( const_dict_787eda1103da1ea39cbb770f6d104ce2 ) == 11 );
    const_str_plain_left_ramp = UNSTREAM_STRING_ASCII( &constant_bin[ 2898176 ], 9, 1 );
    const_str_plain_right_slice = UNSTREAM_STRING_ASCII( &constant_bin[ 2898185 ], 11, 1 );
    const_str_plain_right_index = UNSTREAM_STRING_ASCII( &constant_bin[ 2898196 ], 11, 1 );
    const_str_digest_56946dabfb133fa3f913eb1fae93705b = UNSTREAM_STRING_ASCII( &constant_bin[ 2898207 ], 18, 0 );
    const_str_digest_624983e6bb2a2fba0a932a1309512e6b = UNSTREAM_STRING_ASCII( &constant_bin[ 2898225 ], 108, 0 );
    const_str_digest_e08d44340090d07bb24b07c38ddc133c = UNSTREAM_STRING_ASCII( &constant_bin[ 2898333 ], 21, 0 );
    const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple, 0, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    const_str_plain_pad_width = UNSTREAM_STRING_ASCII( &constant_bin[ 2898354 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple, 1, const_str_plain_pad_width ); Py_INCREF( const_str_plain_pad_width );
    PyTuple_SET_ITEM( const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple, 2, const_str_plain_fill_value ); Py_INCREF( const_str_plain_fill_value );
    PyTuple_SET_ITEM( const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple, 3, const_str_plain_new_shape ); Py_INCREF( const_str_plain_new_shape );
    PyTuple_SET_ITEM( const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple, 4, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple, 5, const_str_plain_padded ); Py_INCREF( const_str_plain_padded );
    const_str_plain_original_area_slice = UNSTREAM_STRING_ASCII( &constant_bin[ 2898363 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple, 6, const_str_plain_original_area_slice ); Py_INCREF( const_str_plain_original_area_slice );
    const_str_digest_4a7013c58a5c32ba604f88ac016cc633 = UNSTREAM_STRING_ASCII( &constant_bin[ 2898382 ], 7258, 0 );
    const_str_plain_left_pad = UNSTREAM_STRING_ASCII( &constant_bin[ 2905640 ], 8, 1 );
    const_str_plain__get_edges = UNSTREAM_STRING_ASCII( &constant_bin[ 2905648 ], 10, 1 );
    const_tuple_289ad3ee11dc6d148c759de73f346aa5_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_289ad3ee11dc6d148c759de73f346aa5_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_289ad3ee11dc6d148c759de73f346aa5_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_289ad3ee11dc6d148c759de73f346aa5_tuple, 2, const_str_plain_left ); Py_INCREF( const_str_plain_left );
    PyTuple_SET_ITEM( const_tuple_289ad3ee11dc6d148c759de73f346aa5_tuple, 3, const_str_plain_right ); Py_INCREF( const_str_plain_right );
    const_str_plain_include_edge = UNSTREAM_STRING_ASCII( &constant_bin[ 2905658 ], 12, 1 );
    const_str_plain__set_pad_area = UNSTREAM_STRING_ASCII( &constant_bin[ 2905670 ], 13, 1 );
    const_str_plain_end_value_pair = UNSTREAM_STRING_ASCII( &constant_bin[ 2905683 ], 14, 1 );
    const_str_digest_d67a0cdf56e6b04c2b1f7c4b730d405c = UNSTREAM_STRING_ASCII( &constant_bin[ 2905697 ], 1493, 0 );
    const_tuple_str_plain_stat_length_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_stat_length_none_tuple, 0, const_str_plain_stat_length ); Py_INCREF( const_str_plain_stat_length );
    PyTuple_SET_ITEM( const_tuple_str_plain_stat_length_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_b9c9459e9fda1e023a6ba9f3cec1a14a = UNSTREAM_STRING_ASCII( &constant_bin[ 2907190 ], 681, 0 );
    const_str_digest_063706e0993ba59758cd0ad89bf21d17 = UNSTREAM_STRING_ASCII( &constant_bin[ 2907871 ], 712, 0 );
    const_str_digest_5b795b900cf96d0f8f23d5f0ae069a60 = UNSTREAM_STRING_ASCII( &constant_bin[ 2908583 ], 506, 0 );
    const_str_plain_init_shape = UNSTREAM_STRING_ASCII( &constant_bin[ 2909089 ], 10, 1 );
    const_tuple_str_plain_constant_values_int_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_constant_values_int_0_tuple, 0, const_str_plain_constant_values ); Py_INCREF( const_str_plain_constant_values );
    PyTuple_SET_ITEM( const_tuple_str_plain_constant_values_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_digest_c04f8465d9a92ee9b38f5e390057f4fb = UNSTREAM_STRING_ASCII( &constant_bin[ 2909099 ], 37, 0 );
    const_str_plain__get_linear_ramps = UNSTREAM_STRING_ASCII( &constant_bin[ 2909136 ], 17, 1 );
    const_str_plain_ramp = UNSTREAM_STRING_ASCII( &constant_bin[ 2897536 ], 4, 1 );
    const_str_plain_right_ramp = UNSTREAM_STRING_ASCII( &constant_bin[ 2909153 ], 10, 1 );
    const_tuple_str_plain_arr_str_plain_dtype_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_dtype_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_dtype_tuple, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_str_plain_edge_slice = UNSTREAM_STRING_ASCII( &constant_bin[ 2909163 ], 10, 1 );
    const_str_plain__slice_at_axis = UNSTREAM_STRING_ASCII( &constant_bin[ 2898016 ], 14, 1 );
    const_str_plain__round_if_needed = UNSTREAM_STRING_ASCII( &constant_bin[ 2909173 ], 16, 1 );
    const_list_str_plain_pad_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_pad_list, 0, const_str_plain_pad ); Py_INCREF( const_str_plain_pad );
    const_str_plain_left_chunk = UNSTREAM_STRING_ASCII( &constant_bin[ 2909189 ], 10, 1 );
    const_str_plain_right_length = UNSTREAM_STRING_ASCII( &constant_bin[ 2909199 ], 12, 1 );
    const_str_plain_new_left_pad = UNSTREAM_STRING_ASCII( &constant_bin[ 2909211 ], 12, 1 );
    const_str_plain__set_wrap_both = UNSTREAM_STRING_ASCII( &constant_bin[ 2909223 ], 14, 1 );
    const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 0, const_str_plain_padded ); Py_INCREF( const_str_plain_padded );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_str_plain_width_pair = UNSTREAM_STRING_ASCII( &constant_bin[ 2908779 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 2, const_str_plain_width_pair ); Py_INCREF( const_str_plain_width_pair );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 3, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 4, const_str_plain_include_edge ); Py_INCREF( const_str_plain_include_edge );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 5, const_str_plain_left_pad ); Py_INCREF( const_str_plain_left_pad );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 6, const_str_plain_right_pad ); Py_INCREF( const_str_plain_right_pad );
    const_str_plain_old_length = UNSTREAM_STRING_ASCII( &constant_bin[ 2909237 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 7, const_str_plain_old_length ); Py_INCREF( const_str_plain_old_length );
    const_str_plain_edge_offset = UNSTREAM_STRING_ASCII( &constant_bin[ 2909247 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 8, const_str_plain_edge_offset ); Py_INCREF( const_str_plain_edge_offset );
    const_str_plain_chunk_length = UNSTREAM_STRING_ASCII( &constant_bin[ 2909258 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 9, const_str_plain_chunk_length ); Py_INCREF( const_str_plain_chunk_length );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 10, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 11, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    const_str_plain_left_slice = UNSTREAM_STRING_ASCII( &constant_bin[ 2909270 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 12, const_str_plain_left_slice ); Py_INCREF( const_str_plain_left_slice );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 13, const_str_plain_left_chunk ); Py_INCREF( const_str_plain_left_chunk );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 14, const_str_plain_edge_slice ); Py_INCREF( const_str_plain_edge_slice );
    const_str_plain_pad_area = UNSTREAM_STRING_ASCII( &constant_bin[ 2905675 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 15, const_str_plain_pad_area ); Py_INCREF( const_str_plain_pad_area );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 16, const_str_plain_right_slice ); Py_INCREF( const_str_plain_right_slice );
    PyTuple_SET_ITEM( const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 17, const_str_plain_right_chunk ); Py_INCREF( const_str_plain_right_chunk );
    const_str_digest_615f15f1cdffbaa9f5621fb3f332af66 = UNSTREAM_STRING_ASCII( &constant_bin[ 2909280 ], 875, 0 );
    const_tuple_tuple_none_none_tuple_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_tuple_none_none_tuple_tuple, 0, const_tuple_none_none_tuple ); Py_INCREF( const_tuple_none_none_tuple );
    const_dict_a49cf6d67d73ee9b51dbb6169697ab19 = _PyDict_NewPresized( 1 );
    const_str_plain_as_index = UNSTREAM_STRING_ASCII( &constant_bin[ 2355682 ], 8, 1 );
    PyDict_SetItem( const_dict_a49cf6d67d73ee9b51dbb6169697ab19, const_str_plain_as_index, Py_True );
    assert( PyDict_Size( const_dict_a49cf6d67d73ee9b51dbb6169697ab19 ) == 1 );
    const_tuple_2e26ef9fb5d77f8269406dedfb29e440_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_2e26ef9fb5d77f8269406dedfb29e440_tuple, 0, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    PyTuple_SET_ITEM( const_tuple_2e26ef9fb5d77f8269406dedfb29e440_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_2e26ef9fb5d77f8269406dedfb29e440_tuple, 2, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_2e26ef9fb5d77f8269406dedfb29e440_tuple, 3, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_2e26ef9fb5d77f8269406dedfb29e440_tuple, 4, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_2e26ef9fb5d77f8269406dedfb29e440_tuple, 5, const_str_plain_reverse ); Py_INCREF( const_str_plain_reverse );
    PyTuple_SET_ITEM( const_tuple_2e26ef9fb5d77f8269406dedfb29e440_tuple, 6, const_str_plain_ramp ); Py_INCREF( const_str_plain_ramp );
    PyTuple_SET_ITEM( const_tuple_2e26ef9fb5d77f8269406dedfb29e440_tuple, 7, const_str_plain_init_shape ); Py_INCREF( const_str_plain_init_shape );
    PyTuple_SET_ITEM( const_tuple_2e26ef9fb5d77f8269406dedfb29e440_tuple, 8, const_str_plain_gain ); Py_INCREF( const_str_plain_gain );
    const_str_digest_ad624d1305f637d8804820a52da6da65 = UNSTREAM_STRING_ASCII( &constant_bin[ 2910155 ], 743, 0 );
    const_str_plain__pad_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 2910898 ], 15, 1 );
    const_str_digest_d25154b4821daa338eaf0c798dee972e = UNSTREAM_STRING_ASCII( &constant_bin[ 2910913 ], 508, 0 );
    const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple, 0, const_str_plain_padded ); Py_INCREF( const_str_plain_padded );
    PyTuple_SET_ITEM( const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple, 2, const_str_plain_width_pair ); Py_INCREF( const_str_plain_width_pair );
    PyTuple_SET_ITEM( const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple, 3, const_str_plain_end_value_pair ); Py_INCREF( const_str_plain_end_value_pair );
    const_str_plain_edge_pair = UNSTREAM_STRING_ASCII( &constant_bin[ 2911421 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple, 4, const_str_plain_edge_pair ); Py_INCREF( const_str_plain_edge_pair );
    PyTuple_SET_ITEM( const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple, 5, const_str_plain_left_ramp ); Py_INCREF( const_str_plain_left_ramp );
    PyTuple_SET_ITEM( const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple, 6, const_str_plain_right_ramp ); Py_INCREF( const_str_plain_right_ramp );
    const_tuple_7d115a5ed5a313ce27808df687460449_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_7d115a5ed5a313ce27808df687460449_tuple, 0, const_str_plain_padded ); Py_INCREF( const_str_plain_padded );
    PyTuple_SET_ITEM( const_tuple_7d115a5ed5a313ce27808df687460449_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_7d115a5ed5a313ce27808df687460449_tuple, 2, const_str_plain_width_pair ); Py_INCREF( const_str_plain_width_pair );
    PyTuple_SET_ITEM( const_tuple_7d115a5ed5a313ce27808df687460449_tuple, 3, const_str_plain_left_index ); Py_INCREF( const_str_plain_left_index );
    PyTuple_SET_ITEM( const_tuple_7d115a5ed5a313ce27808df687460449_tuple, 4, const_str_plain_left_slice ); Py_INCREF( const_str_plain_left_slice );
    PyTuple_SET_ITEM( const_tuple_7d115a5ed5a313ce27808df687460449_tuple, 5, const_str_plain_left_edge ); Py_INCREF( const_str_plain_left_edge );
    PyTuple_SET_ITEM( const_tuple_7d115a5ed5a313ce27808df687460449_tuple, 6, const_str_plain_right_index ); Py_INCREF( const_str_plain_right_index );
    PyTuple_SET_ITEM( const_tuple_7d115a5ed5a313ce27808df687460449_tuple, 7, const_str_plain_right_slice ); Py_INCREF( const_str_plain_right_slice );
    const_str_plain_right_edge = UNSTREAM_STRING_ASCII( &constant_bin[ 2911430 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_7d115a5ed5a313ce27808df687460449_tuple, 8, const_str_plain_right_edge ); Py_INCREF( const_str_plain_right_edge );
    const_str_plain__pad_simple = UNSTREAM_STRING_ASCII( &constant_bin[ 2911440 ], 11, 1 );
    const_str_plain__view_roi = UNSTREAM_STRING_ASCII( &constant_bin[ 2911451 ], 9, 1 );
    const_str_plain__set_reflect_both = UNSTREAM_STRING_ASCII( &constant_bin[ 2911460 ], 17, 1 );
    const_str_digest_71bad4e0b4147d15eac690c62ce6efe3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2911477 ], 30, 0 );
    const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 0, const_str_plain_padded ); Py_INCREF( const_str_plain_padded );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 2, const_str_plain_width_pair ); Py_INCREF( const_str_plain_width_pair );
    const_str_plain_length_pair = UNSTREAM_STRING_ASCII( &constant_bin[ 2909626 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 3, const_str_plain_length_pair ); Py_INCREF( const_str_plain_length_pair );
    const_str_plain_stat_func = UNSTREAM_STRING_ASCII( &constant_bin[ 2909874 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 4, const_str_plain_stat_func ); Py_INCREF( const_str_plain_stat_func );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 5, const_str_plain_left_index ); Py_INCREF( const_str_plain_left_index );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 6, const_str_plain_right_index ); Py_INCREF( const_str_plain_right_index );
    const_str_plain_max_length = UNSTREAM_STRING_ASCII( &constant_bin[ 2911507 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 7, const_str_plain_max_length ); Py_INCREF( const_str_plain_max_length );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 8, const_str_plain_left_length ); Py_INCREF( const_str_plain_left_length );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 9, const_str_plain_right_length ); Py_INCREF( const_str_plain_right_length );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 10, const_str_plain_left_slice ); Py_INCREF( const_str_plain_left_slice );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 11, const_str_plain_left_chunk ); Py_INCREF( const_str_plain_left_chunk );
    const_str_plain_left_stat = UNSTREAM_STRING_ASCII( &constant_bin[ 2910062 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 12, const_str_plain_left_stat ); Py_INCREF( const_str_plain_left_stat );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 13, const_str_plain_right_slice ); Py_INCREF( const_str_plain_right_slice );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 14, const_str_plain_right_chunk ); Py_INCREF( const_str_plain_right_chunk );
    PyTuple_SET_ITEM( const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 15, const_str_plain_right_stat ); Py_INCREF( const_str_plain_right_stat );
    const_dict_e24c06a0a11b6d4526a84b33486b9123 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_e24c06a0a11b6d4526a84b33486b9123, const_str_plain_fill_value, const_int_0 );
    assert( PyDict_Size( const_dict_e24c06a0a11b6d4526a84b33486b9123 ) == 1 );
    const_str_digest_b39de0d9d89a6ab08ca6ee2fd060a3c6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2911517 ], 71, 0 );
    const_tuple_str_plain_constant_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_constant_tuple, 0, const_str_plain_constant ); Py_INCREF( const_str_plain_constant );
    const_tuple_46b308d7f1da5dc5aa5b4231611fe55a_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_46b308d7f1da5dc5aa5b4231611fe55a_tuple, 0, const_str_plain_padded ); Py_INCREF( const_str_plain_padded );
    PyTuple_SET_ITEM( const_tuple_46b308d7f1da5dc5aa5b4231611fe55a_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_46b308d7f1da5dc5aa5b4231611fe55a_tuple, 2, const_str_plain_width_pair ); Py_INCREF( const_str_plain_width_pair );
    const_str_plain_value_pair = UNSTREAM_STRING_ASCII( &constant_bin[ 2905687 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_46b308d7f1da5dc5aa5b4231611fe55a_tuple, 3, const_str_plain_value_pair ); Py_INCREF( const_str_plain_value_pair );
    PyTuple_SET_ITEM( const_tuple_46b308d7f1da5dc5aa5b4231611fe55a_tuple, 4, const_str_plain_left_slice ); Py_INCREF( const_str_plain_left_slice );
    PyTuple_SET_ITEM( const_tuple_46b308d7f1da5dc5aa5b4231611fe55a_tuple, 5, const_str_plain_right_slice ); Py_INCREF( const_str_plain_right_slice );
    const_tuple_str_plain_end_values_int_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_end_values_int_0_tuple, 0, const_str_plain_end_values ); Py_INCREF( const_str_plain_end_values );
    PyTuple_SET_ITEM( const_tuple_str_plain_end_values_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_29cd30ad46293e9af0d03a5880ca000e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_29cd30ad46293e9af0d03a5880ca000e_tuple, 0, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_29cd30ad46293e9af0d03a5880ca000e_tuple, 1, const_str_plain_pad_width ); Py_INCREF( const_str_plain_pad_width );
    PyTuple_SET_ITEM( const_tuple_29cd30ad46293e9af0d03a5880ca000e_tuple, 2, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_29cd30ad46293e9af0d03a5880ca000e_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_tuple_str_plain_reflect_type_str_plain_even_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_reflect_type_str_plain_even_tuple, 0, const_str_plain_reflect_type ); Py_INCREF( const_str_plain_reflect_type );
    PyTuple_SET_ITEM( const_tuple_str_plain_reflect_type_str_plain_even_tuple, 1, const_str_plain_even ); Py_INCREF( const_str_plain_even );
    const_str_digest_c4c43a43772e74668c61aa86a57b8af6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2911588 ], 47, 0 );
    const_set_cc63bcba9d40711d2fe518d8993c5aa2 = PySet_New( NULL );
    PySet_Add( const_set_cc63bcba9d40711d2fe518d8993c5aa2, const_str_plain_reflect );
    PySet_Add( const_set_cc63bcba9d40711d2fe518d8993c5aa2, const_str_plain_symmetric );
    assert( PySet_Size( const_set_cc63bcba9d40711d2fe518d8993c5aa2 ) == 2 );
    const_str_digest_4e7bc992bf8080156ef0970ca5db2a9d = UNSTREAM_STRING_ASCII( &constant_bin[ 2911635 ], 27, 0 );
    const_str_digest_36c3e0ead60cb2e9773b4ea99207bccf = UNSTREAM_STRING_ASCII( &constant_bin[ 2911662 ], 35, 0 );
    const_str_plain__as_pairs = UNSTREAM_STRING_ASCII( &constant_bin[ 2911697 ], 9, 1 );
    const_str_digest_aeffe88638b8c9e1d7edff4ace7508bd = UNSTREAM_STRING_ASCII( &constant_bin[ 2911706 ], 193, 0 );
    const_tuple_bb834637c978590f8a9e1ab69daf9ccb_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_bb834637c978590f8a9e1ab69daf9ccb_tuple, 0, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_bb834637c978590f8a9e1ab69daf9ccb_tuple, 1, const_str_plain_original_area_slice ); Py_INCREF( const_str_plain_original_area_slice );
    PyTuple_SET_ITEM( const_tuple_bb834637c978590f8a9e1ab69daf9ccb_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_bb834637c978590f8a9e1ab69daf9ccb_tuple, 3, const_str_plain_sl ); Py_INCREF( const_str_plain_sl );
    const_tuple_str_plain_sl_str_plain_axis_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sl_str_plain_axis_tuple, 0, const_str_plain_sl ); Py_INCREF( const_str_plain_sl );
    PyTuple_SET_ITEM( const_tuple_str_plain_sl_str_plain_axis_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_str_digest_3fe443fba0ae6931993411663f59f3df = UNSTREAM_STRING_ASCII( &constant_bin[ 2911899 ], 26, 0 );
    const_tuple_a9908093e2124ff448c4425513eb3392_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_a9908093e2124ff448c4425513eb3392_tuple, 0, const_str_plain_padded ); Py_INCREF( const_str_plain_padded );
    PyTuple_SET_ITEM( const_tuple_a9908093e2124ff448c4425513eb3392_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_a9908093e2124ff448c4425513eb3392_tuple, 2, const_str_plain_width_pair ); Py_INCREF( const_str_plain_width_pair );
    PyTuple_SET_ITEM( const_tuple_a9908093e2124ff448c4425513eb3392_tuple, 3, const_str_plain_left_pad ); Py_INCREF( const_str_plain_left_pad );
    PyTuple_SET_ITEM( const_tuple_a9908093e2124ff448c4425513eb3392_tuple, 4, const_str_plain_right_pad ); Py_INCREF( const_str_plain_right_pad );
    PyTuple_SET_ITEM( const_tuple_a9908093e2124ff448c4425513eb3392_tuple, 5, const_str_plain_period ); Py_INCREF( const_str_plain_period );
    PyTuple_SET_ITEM( const_tuple_a9908093e2124ff448c4425513eb3392_tuple, 6, const_str_plain_new_left_pad ); Py_INCREF( const_str_plain_new_left_pad );
    PyTuple_SET_ITEM( const_tuple_a9908093e2124ff448c4425513eb3392_tuple, 7, const_str_plain_new_right_pad ); Py_INCREF( const_str_plain_new_right_pad );
    PyTuple_SET_ITEM( const_tuple_a9908093e2124ff448c4425513eb3392_tuple, 8, const_str_plain_right_slice ); Py_INCREF( const_str_plain_right_slice );
    PyTuple_SET_ITEM( const_tuple_a9908093e2124ff448c4425513eb3392_tuple, 9, const_str_plain_right_chunk ); Py_INCREF( const_str_plain_right_chunk );
    PyTuple_SET_ITEM( const_tuple_a9908093e2124ff448c4425513eb3392_tuple, 10, const_str_plain_pad_area ); Py_INCREF( const_str_plain_pad_area );
    PyTuple_SET_ITEM( const_tuple_a9908093e2124ff448c4425513eb3392_tuple, 11, const_str_plain_left_slice ); Py_INCREF( const_str_plain_left_slice );
    PyTuple_SET_ITEM( const_tuple_a9908093e2124ff448c4425513eb3392_tuple, 12, const_str_plain_left_chunk ); Py_INCREF( const_str_plain_left_chunk );
    const_tuple_str_plain_x_str_plain_ndim_str_plain_as_index_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ndim_str_plain_as_index_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ndim_str_plain_as_index_tuple, 1, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ndim_str_plain_as_index_tuple, 2, const_str_plain_as_index ); Py_INCREF( const_str_plain_as_index );
    const_tuple_3cfbd7dc6a7bdd2a9ee9155cef75e596_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2911925 ], 313 );
    const_str_digest_16e2e549868032d8ab73d52222cd0476 = UNSTREAM_STRING_ASCII( &constant_bin[ 2912238 ], 640, 0 );
    const_str_digest_003c6ddae0231acf717e666fbe77d653 = UNSTREAM_STRING_ASCII( &constant_bin[ 2912878 ], 602, 0 );
    const_str_digest_9cd59190d3d3f277685a8eabead5a4ec = UNSTREAM_STRING_ASCII( &constant_bin[ 2913480 ], 824, 0 );
    const_str_plain__get_stats = UNSTREAM_STRING_ASCII( &constant_bin[ 2914304 ], 10, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$arraypad( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1b1a35ab10cbd9f07b3bc12bf4a3e375;
static PyCodeObject *codeobj_1d49c7753da1819f82188568a1a9aa3e;
static PyCodeObject *codeobj_0ddc48bff55e022bf9845decca10c27e;
static PyCodeObject *codeobj_85e58f59a4954e39289d0ac285ad56b9;
static PyCodeObject *codeobj_0292ba3846fccf63e980a719a6af72db;
static PyCodeObject *codeobj_8a9237d69410a61035d187d3b48dcf2e;
static PyCodeObject *codeobj_f5bf3db56db940f0ea37a4457b09261b;
static PyCodeObject *codeobj_1ae55446c2a08ed2e0d3d3419c90af42;
static PyCodeObject *codeobj_cbe67b8a590002c1c916d5b14fe40f45;
static PyCodeObject *codeobj_7b7ba7ce1a1bc345441714050682c0cb;
static PyCodeObject *codeobj_2e6454f9960b52c46fc2a25e9cb2052d;
static PyCodeObject *codeobj_2dfd93cbbaaab0c3018b108a71f88f7d;
static PyCodeObject *codeobj_9ce0a7b0af291c2c02816648a6db2e77;
static PyCodeObject *codeobj_816903115c0df5b018ae50cd2d03b0a7;
static PyCodeObject *codeobj_3bf998e5c49f1e8e3bf35c6c2943ac19;
static PyCodeObject *codeobj_80a35ca459f0049c71e4a793fbe711a0;
static PyCodeObject *codeobj_2049da0257c62b281f466fecb1fcc4ef;
static PyCodeObject *codeobj_5c7ecefaee6e383339573fd2b91cb39a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_e08d44340090d07bb24b07c38ddc133c );
    codeobj_1b1a35ab10cbd9f07b3bc12bf4a3e375 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 172, const_tuple_289ad3ee11dc6d148c759de73f346aa5_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1d49c7753da1819f82188568a1a9aa3e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 183, const_tuple_289ad3ee11dc6d148c759de73f346aa5_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0ddc48bff55e022bf9845decca10c27e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 812, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ind_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_85e58f59a4954e39289d0ac285ad56b9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4e7bc992bf8080156ef0970ca5db2a9d, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_0292ba3846fccf63e980a719a6af72db = MAKE_CODEOBJ( module_filename_obj, const_str_plain__as_pairs, 504, const_tuple_str_plain_x_str_plain_ndim_str_plain_as_index_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8a9237d69410a61035d187d3b48dcf2e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_edges, 216, const_tuple_7d115a5ed5a313ce27808df687460449_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f5bf3db56db940f0ea37a4457b09261b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_linear_ramps, 248, const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1ae55446c2a08ed2e0d3d3419c90af42 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_stats, 287, const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cbe67b8a590002c1c916d5b14fe40f45 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__linear_ramp, 20, const_tuple_2e26ef9fb5d77f8269406dedfb29e440_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7b7ba7ce1a1bc345441714050682c0cb = MAKE_CODEOBJ( module_filename_obj, const_str_plain__pad_dispatcher, 571, const_tuple_29cd30ad46293e9af0d03a5880ca000e_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_2e6454f9960b52c46fc2a25e9cb2052d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__pad_simple, 148, const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2dfd93cbbaaab0c3018b108a71f88f7d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__round_if_needed, 80, const_tuple_str_plain_arr_str_plain_dtype_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9ce0a7b0af291c2c02816648a6db2e77 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__set_pad_area, 191, const_tuple_46b308d7f1da5dc5aa5b4231611fe55a_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_816903115c0df5b018ae50cd2d03b0a7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__set_reflect_both, 346, const_tuple_e9c5f72adadd4a8a7f1e51f4f97faf46_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3bf998e5c49f1e8e3bf35c6c2943ac19 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__set_wrap_both, 431, const_tuple_a9908093e2124ff448c4425513eb3392_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_80a35ca459f0049c71e4a793fbe711a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__slice_at_axis, 95, const_tuple_str_plain_sl_str_plain_axis_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2049da0257c62b281f466fecb1fcc4ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain__view_roi, 120, const_tuple_bb834637c978590f8a9e1ab69daf9ccb_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5c7ecefaee6e383339573fd2b91cb39a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pad, 579, const_tuple_3cfbd7dc6a7bdd2a9ee9155cef75e596_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
static PyObject *numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_1_genexpr_maker( void );


static PyObject *numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_2_genexpr_maker( void );


static PyObject *numpy$lib$arraypad$$$function_14_pad$$$genexpr_1_genexpr_maker( void );


static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_10__set_reflect_both( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_11__set_wrap_both(  );


static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_12__as_pairs( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_13__pad_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_14_pad( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_1__linear_ramp( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_2__round_if_needed(  );


static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_3__slice_at_axis(  );


static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_4__view_roi(  );


static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_5__pad_simple( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_6__set_pad_area(  );


static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_7__get_edges(  );


static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_8__get_linear_ramps(  );


static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_9__get_stats(  );


// The module function definitions.
static PyObject *impl_numpy$lib$arraypad$$$function_1__linear_ramp( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ndim = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_start = python_pars[ 2 ];
    PyObject *par_stop = python_pars[ 3 ];
    PyObject *par_size = python_pars[ 4 ];
    PyObject *par_reverse = python_pars[ 5 ];
    PyObject *var_ramp = NULL;
    PyObject *var_init_shape = NULL;
    PyObject *var_gain = NULL;
    struct Nuitka_FrameObject *frame_cbe67b8a590002c1c916d5b14fe40f45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_cbe67b8a590002c1c916d5b14fe40f45 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cbe67b8a590002c1c916d5b14fe40f45, codeobj_cbe67b8a590002c1c916d5b14fe40f45, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cbe67b8a590002c1c916d5b14fe40f45 = cache_frame_cbe67b8a590002c1c916d5b14fe40f45;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cbe67b8a590002c1c916d5b14fe40f45 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cbe67b8a590002c1c916d5b14fe40f45 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

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
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_size );
        tmp_tuple_element_1 = par_size;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_dtype;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_float64 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_cbe67b8a590002c1c916d5b14fe40f45->m_frame.f_lineno = 63;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ramp == NULL );
        var_ramp = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_reverse );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_reverse );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_ramp );
            tmp_subscribed_name_1 = var_ramp;
            tmp_subscript_name_1 = const_slice_none_none_int_neg_1;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_ramp;
                assert( old != NULL );
                var_ramp = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        tmp_left_name_3 = const_tuple_int_pos_1_tuple;
        CHECK_OBJECT( par_axis );
        tmp_right_name_1 = par_axis;
        tmp_left_name_2 = BINARY_OPERATION_MUL_TUPLE_OBJECT( tmp_left_name_3, tmp_right_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_size );
        tmp_tuple_element_2 = par_size;
        tmp_right_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_2 );
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = const_tuple_int_pos_1_tuple;
        CHECK_OBJECT( par_ndim );
        tmp_left_name_6 = par_ndim;
        CHECK_OBJECT( par_axis );
        tmp_right_name_5 = par_axis;
        tmp_left_name_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 68;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = const_int_pos_1;
        tmp_right_name_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_5, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 68;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = BINARY_OPERATION_MUL_TUPLE_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 68;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_init_shape == NULL );
        var_init_shape = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_ramp );
        tmp_called_instance_1 = var_ramp;
        CHECK_OBJECT( var_init_shape );
        tmp_args_element_name_1 = var_init_shape;
        frame_cbe67b8a590002c1c916d5b14fe40f45->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_reshape, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ramp;
            assert( old != NULL );
            var_ramp = tmp_assign_source_4;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_size );
        tmp_compexpr_left_1 = par_size;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_7;
            PyObject *tmp_right_name_8;
            PyObject *tmp_float_arg_1;
            CHECK_OBJECT( par_stop );
            tmp_left_name_8 = par_stop;
            CHECK_OBJECT( par_start );
            tmp_right_name_7 = par_start;
            tmp_left_name_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_7 );
            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_size );
            tmp_float_arg_1 = par_size;
            tmp_right_name_8 = TO_FLOAT( tmp_float_arg_1 );
            if ( tmp_right_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 73;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_7 );
            Py_DECREF( tmp_right_name_8 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_gain == NULL );
            var_gain = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            CHECK_OBJECT( var_ramp );
            tmp_left_name_9 = var_ramp;
            CHECK_OBJECT( var_gain );
            tmp_right_name_9 = var_gain;
            tmp_assign_source_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_ramp;
                assert( old != NULL );
                var_ramp = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            CHECK_OBJECT( var_ramp );
            tmp_left_name_10 = var_ramp;
            CHECK_OBJECT( par_start );
            tmp_right_name_10 = par_start;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_10, tmp_right_name_10 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = tmp_left_name_10;
            var_ramp = tmp_assign_source_7;

        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbe67b8a590002c1c916d5b14fe40f45 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbe67b8a590002c1c916d5b14fe40f45 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cbe67b8a590002c1c916d5b14fe40f45, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cbe67b8a590002c1c916d5b14fe40f45->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cbe67b8a590002c1c916d5b14fe40f45, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cbe67b8a590002c1c916d5b14fe40f45,
        type_description_1,
        par_ndim,
        par_axis,
        par_start,
        par_stop,
        par_size,
        par_reverse,
        var_ramp,
        var_init_shape,
        var_gain
    );


    // Release cached frame.
    if ( frame_cbe67b8a590002c1c916d5b14fe40f45 == cache_frame_cbe67b8a590002c1c916d5b14fe40f45 )
    {
        Py_DECREF( frame_cbe67b8a590002c1c916d5b14fe40f45 );
    }
    cache_frame_cbe67b8a590002c1c916d5b14fe40f45 = NULL;

    assertFrameObject( frame_cbe67b8a590002c1c916d5b14fe40f45 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_ramp );
    tmp_return_value = var_ramp;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_1__linear_ramp );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    CHECK_OBJECT( (PyObject *)par_reverse );
    Py_DECREF( par_reverse );
    par_reverse = NULL;

    CHECK_OBJECT( (PyObject *)var_ramp );
    Py_DECREF( var_ramp );
    var_ramp = NULL;

    CHECK_OBJECT( (PyObject *)var_init_shape );
    Py_DECREF( var_init_shape );
    var_init_shape = NULL;

    Py_XDECREF( var_gain );
    var_gain = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    CHECK_OBJECT( (PyObject *)par_reverse );
    Py_DECREF( par_reverse );
    par_reverse = NULL;

    Py_XDECREF( var_ramp );
    var_ramp = NULL;

    Py_XDECREF( var_init_shape );
    var_init_shape = NULL;

    Py_XDECREF( var_gain );
    var_gain = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_1__linear_ramp );
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


static PyObject *impl_numpy$lib$arraypad$$$function_2__round_if_needed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2dfd93cbbaaab0c3018b108a71f88f7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2dfd93cbbaaab0c3018b108a71f88f7d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2dfd93cbbaaab0c3018b108a71f88f7d, codeobj_2dfd93cbbaaab0c3018b108a71f88f7d, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *) );
    frame_2dfd93cbbaaab0c3018b108a71f88f7d = cache_frame_2dfd93cbbaaab0c3018b108a71f88f7d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2dfd93cbbaaab0c3018b108a71f88f7d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2dfd93cbbaaab0c3018b108a71f88f7d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_issubdtype );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_1 = par_dtype;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_integer );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2dfd93cbbaaab0c3018b108a71f88f7d->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 91;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            CHECK_OBJECT( par_arr );
            tmp_source_name_3 = par_arr;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_round );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_out;
            CHECK_OBJECT( par_arr );
            tmp_dict_value_1 = par_arr;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_2dfd93cbbaaab0c3018b108a71f88f7d->m_frame.f_lineno = 92;
            tmp_call_result_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2dfd93cbbaaab0c3018b108a71f88f7d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2dfd93cbbaaab0c3018b108a71f88f7d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2dfd93cbbaaab0c3018b108a71f88f7d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2dfd93cbbaaab0c3018b108a71f88f7d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2dfd93cbbaaab0c3018b108a71f88f7d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2dfd93cbbaaab0c3018b108a71f88f7d,
        type_description_1,
        par_arr,
        par_dtype
    );


    // Release cached frame.
    if ( frame_2dfd93cbbaaab0c3018b108a71f88f7d == cache_frame_2dfd93cbbaaab0c3018b108a71f88f7d )
    {
        Py_DECREF( frame_2dfd93cbbaaab0c3018b108a71f88f7d );
    }
    cache_frame_2dfd93cbbaaab0c3018b108a71f88f7d = NULL;

    assertFrameObject( frame_2dfd93cbbaaab0c3018b108a71f88f7d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_2__round_if_needed );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_2__round_if_needed );
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


static PyObject *impl_numpy$lib$arraypad$$$function_3__slice_at_axis( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sl = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_80a35ca459f0049c71e4a793fbe711a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_80a35ca459f0049c71e4a793fbe711a0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_80a35ca459f0049c71e4a793fbe711a0, codeobj_80a35ca459f0049c71e4a793fbe711a0, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *) );
    frame_80a35ca459f0049c71e4a793fbe711a0 = cache_frame_80a35ca459f0049c71e4a793fbe711a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_80a35ca459f0049c71e4a793fbe711a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_80a35ca459f0049c71e4a793fbe711a0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_right_name_3;
        tmp_left_name_3 = const_tuple_slice_none_none_none_tuple;
        CHECK_OBJECT( par_axis );
        tmp_right_name_1 = par_axis;
        tmp_left_name_2 = BINARY_OPERATION_MUL_TUPLE_OBJECT( tmp_left_name_3, tmp_right_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_sl );
        tmp_tuple_element_1 = par_sl;
        tmp_right_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_tuple_ellipsis_tuple;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_1, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_80a35ca459f0049c71e4a793fbe711a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_80a35ca459f0049c71e4a793fbe711a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_80a35ca459f0049c71e4a793fbe711a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_80a35ca459f0049c71e4a793fbe711a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_80a35ca459f0049c71e4a793fbe711a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_80a35ca459f0049c71e4a793fbe711a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_80a35ca459f0049c71e4a793fbe711a0,
        type_description_1,
        par_sl,
        par_axis
    );


    // Release cached frame.
    if ( frame_80a35ca459f0049c71e4a793fbe711a0 == cache_frame_80a35ca459f0049c71e4a793fbe711a0 )
    {
        Py_DECREF( frame_80a35ca459f0049c71e4a793fbe711a0 );
    }
    cache_frame_80a35ca459f0049c71e4a793fbe711a0 = NULL;

    assertFrameObject( frame_80a35ca459f0049c71e4a793fbe711a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_3__slice_at_axis );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_sl );
    Py_DECREF( par_sl );
    par_sl = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sl );
    Py_DECREF( par_sl );
    par_sl = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_3__slice_at_axis );
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


static PyObject *impl_numpy$lib$arraypad$$$function_4__view_roi( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_array = python_pars[ 0 ];
    PyObject *par_original_area_slice = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *var_sl = NULL;
    struct Nuitka_FrameObject *frame_2049da0257c62b281f466fecb1fcc4ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2049da0257c62b281f466fecb1fcc4ef = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2049da0257c62b281f466fecb1fcc4ef, codeobj_2049da0257c62b281f466fecb1fcc4ef, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2049da0257c62b281f466fecb1fcc4ef = cache_frame_2049da0257c62b281f466fecb1fcc4ef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2049da0257c62b281f466fecb1fcc4ef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2049da0257c62b281f466fecb1fcc4ef ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_axis );
        tmp_left_name_1 = par_axis;
        tmp_right_name_1 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_left_name_1;
        par_axis = tmp_assign_source_1;

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        tmp_left_name_3 = const_tuple_slice_none_none_none_tuple;
        CHECK_OBJECT( par_axis );
        tmp_right_name_2 = par_axis;
        tmp_left_name_2 = BINARY_OPERATION_MUL_TUPLE_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_original_area_slice );
        tmp_subscribed_name_1 = par_original_area_slice;
        CHECK_OBJECT( par_axis );
        tmp_start_name_1 = par_axis;
        tmp_stop_name_1 = Py_None;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_sl == NULL );
        var_sl = tmp_assign_source_2;
    }
    {
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_array );
        tmp_subscribed_name_2 = par_array;
        CHECK_OBJECT( var_sl );
        tmp_subscript_name_2 = var_sl;
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2049da0257c62b281f466fecb1fcc4ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2049da0257c62b281f466fecb1fcc4ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2049da0257c62b281f466fecb1fcc4ef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2049da0257c62b281f466fecb1fcc4ef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2049da0257c62b281f466fecb1fcc4ef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2049da0257c62b281f466fecb1fcc4ef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2049da0257c62b281f466fecb1fcc4ef,
        type_description_1,
        par_array,
        par_original_area_slice,
        par_axis,
        var_sl
    );


    // Release cached frame.
    if ( frame_2049da0257c62b281f466fecb1fcc4ef == cache_frame_2049da0257c62b281f466fecb1fcc4ef )
    {
        Py_DECREF( frame_2049da0257c62b281f466fecb1fcc4ef );
    }
    cache_frame_2049da0257c62b281f466fecb1fcc4ef = NULL;

    assertFrameObject( frame_2049da0257c62b281f466fecb1fcc4ef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_4__view_roi );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    CHECK_OBJECT( (PyObject *)par_original_area_slice );
    Py_DECREF( par_original_area_slice );
    par_original_area_slice = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_sl );
    Py_DECREF( var_sl );
    var_sl = NULL;

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

    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    CHECK_OBJECT( (PyObject *)par_original_area_slice );
    Py_DECREF( par_original_area_slice );
    par_original_area_slice = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_sl );
    var_sl = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_4__view_roi );
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


static PyObject *impl_numpy$lib$arraypad$$$function_5__pad_simple( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_array = python_pars[ 0 ];
    PyObject *par_pad_width = python_pars[ 1 ];
    PyObject *par_fill_value = python_pars[ 2 ];
    PyObject *var_new_shape = NULL;
    PyObject *var_order = NULL;
    PyObject *var_padded = NULL;
    PyObject *var_original_area_slice = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    struct Nuitka_FrameObject *frame_2e6454f9960b52c46fc2a25e9cb2052d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2e6454f9960b52c46fc2a25e9cb2052d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2e6454f9960b52c46fc2a25e9cb2052d, codeobj_2e6454f9960b52c46fc2a25e9cb2052d, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2e6454f9960b52c46fc2a25e9cb2052d = cache_frame_2e6454f9960b52c46fc2a25e9cb2052d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2e6454f9960b52c46fc2a25e9cb2052d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2e6454f9960b52c46fc2a25e9cb2052d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_1 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT( par_array );
            tmp_source_name_1 = par_array;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_pad_width );
            tmp_args_element_name_2 = par_pad_width;
            frame_2e6454f9960b52c46fc2a25e9cb2052d->m_frame.f_lineno = 173;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 172;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        tmp_tuple_arg_1 = numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_5__pad_simple );
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
        NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_5__pad_simple );
        return NULL;
        outline_result_1:;
        tmp_assign_source_1 = PySequence_Tuple( tmp_tuple_arg_1 );
        Py_DECREF( tmp_tuple_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_new_shape == NULL );
        var_new_shape = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_3;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_array );
        tmp_source_name_3 = par_array;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_flags );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fnc );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 175;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_3 = const_str_plain_F;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_3 = const_str_plain_C;
        condexpr_end_1:;
        assert( var_order == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_order = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 176;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_empty );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_new_shape );
        tmp_tuple_element_1 = var_new_shape;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( par_array );
        tmp_source_name_5 = par_array;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 176;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_order;
        CHECK_OBJECT( var_order );
        tmp_dict_value_2 = var_order;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_2e6454f9960b52c46fc2a25e9cb2052d->m_frame.f_lineno = 176;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_padded == NULL );
        var_padded = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_fill_value );
        tmp_compexpr_left_1 = par_fill_value;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( var_padded );
            tmp_called_instance_1 = var_padded;
            CHECK_OBJECT( par_fill_value );
            tmp_args_element_name_3 = par_fill_value;
            frame_2e6454f9960b52c46fc2a25e9cb2052d->m_frame.f_lineno = 179;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fill, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_arg_2;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_5;
            tmp_called_name_3 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT( par_array );
            tmp_source_name_6 = par_array;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 184;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_pad_width );
            tmp_args_element_name_5 = par_pad_width;
            frame_2e6454f9960b52c46fc2a25e9cb2052d->m_frame.f_lineno = 184;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 184;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_2__$0 == NULL );
            tmp_genexpr_2__$0 = tmp_assign_source_6;
        }
        // Tried code:
        tmp_tuple_arg_2 = numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_2_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_2)->m_closure[0] = PyCell_NEW0( tmp_genexpr_2__$0 );


        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_5__pad_simple );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
        Py_DECREF( tmp_genexpr_2__$0 );
        tmp_genexpr_2__$0 = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
        Py_DECREF( tmp_genexpr_2__$0 );
        tmp_genexpr_2__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_5__pad_simple );
        return NULL;
        outline_result_2:;
        tmp_assign_source_5 = PySequence_Tuple( tmp_tuple_arg_2 );
        Py_DECREF( tmp_tuple_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_original_area_slice == NULL );
        var_original_area_slice = tmp_assign_source_5;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_array );
        tmp_ass_subvalue_1 = par_array;
        CHECK_OBJECT( var_padded );
        tmp_ass_subscribed_1 = var_padded;
        CHECK_OBJECT( var_original_area_slice );
        tmp_ass_subscript_1 = var_original_area_slice;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e6454f9960b52c46fc2a25e9cb2052d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e6454f9960b52c46fc2a25e9cb2052d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2e6454f9960b52c46fc2a25e9cb2052d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2e6454f9960b52c46fc2a25e9cb2052d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2e6454f9960b52c46fc2a25e9cb2052d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2e6454f9960b52c46fc2a25e9cb2052d,
        type_description_1,
        par_array,
        par_pad_width,
        par_fill_value,
        var_new_shape,
        var_order,
        var_padded,
        var_original_area_slice
    );


    // Release cached frame.
    if ( frame_2e6454f9960b52c46fc2a25e9cb2052d == cache_frame_2e6454f9960b52c46fc2a25e9cb2052d )
    {
        Py_DECREF( frame_2e6454f9960b52c46fc2a25e9cb2052d );
    }
    cache_frame_2e6454f9960b52c46fc2a25e9cb2052d = NULL;

    assertFrameObject( frame_2e6454f9960b52c46fc2a25e9cb2052d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( var_padded );
        tmp_tuple_element_2 = var_padded;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_original_area_slice );
        tmp_tuple_element_2 = var_original_area_slice;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_5__pad_simple );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    CHECK_OBJECT( (PyObject *)par_pad_width );
    Py_DECREF( par_pad_width );
    par_pad_width = NULL;

    CHECK_OBJECT( (PyObject *)par_fill_value );
    Py_DECREF( par_fill_value );
    par_fill_value = NULL;

    CHECK_OBJECT( (PyObject *)var_new_shape );
    Py_DECREF( var_new_shape );
    var_new_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_order );
    Py_DECREF( var_order );
    var_order = NULL;

    CHECK_OBJECT( (PyObject *)var_padded );
    Py_DECREF( var_padded );
    var_padded = NULL;

    CHECK_OBJECT( (PyObject *)var_original_area_slice );
    Py_DECREF( var_original_area_slice );
    var_original_area_slice = NULL;

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

    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    CHECK_OBJECT( (PyObject *)par_pad_width );
    Py_DECREF( par_pad_width );
    par_pad_width = NULL;

    CHECK_OBJECT( (PyObject *)par_fill_value );
    Py_DECREF( par_fill_value );
    par_fill_value = NULL;

    Py_XDECREF( var_new_shape );
    var_new_shape = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_padded );
    var_padded = NULL;

    Py_XDECREF( var_original_area_slice );
    var_original_area_slice = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_5__pad_simple );
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



struct numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_1_genexpr_locals {
    PyObject *var_size;
    PyObject *var_left;
    PyObject *var_right;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    PyObject *tmp_tuple_unpack_2__element_1;
    PyObject *tmp_tuple_unpack_2__element_2;
    PyObject *tmp_tuple_unpack_2__source_iter;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
};

static PyObject *numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_1_genexpr_locals *generator_heap = (struct numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_size = NULL;
    generator_heap->var_left = NULL;
    generator_heap->var_right = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_1b1a35ab10cbd9f07b3bc12bf4a3e375, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
                generator_heap->type_description_1 = "Nooo";
                generator_heap->exception_lineno = 172;
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


            generator_heap->exception_lineno = 172;
            generator_heap->type_description_1 = "Nooo";
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


            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 172;
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


            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 172;
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

                    generator_heap->type_description_1 = "Nooo";
                    generator_heap->exception_lineno = 172;
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

            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 172;
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
    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_size;
            generator_heap->var_size = tmp_assign_source_5;
            Py_INCREF( generator_heap->var_size );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_2 );
        tmp_iter_arg_2 = generator_heap->tmp_tuple_unpack_1__element_2;
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 172;
            generator_heap->type_description_1 = "Nooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__source_iter;
            generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
        if ( tmp_assign_source_7 == NULL )
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


            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 172;
            goto try_except_handler_6;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__element_1;
            generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
        if ( tmp_assign_source_8 == NULL )
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


            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 172;
            goto try_except_handler_6;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__element_2;
            generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_2__source_iter );
        tmp_iterator_name_2 = generator_heap->tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

        generator_heap->tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                    generator_heap->type_description_1 = "Nooo";
                    generator_heap->exception_lineno = 172;
                    goto try_except_handler_6;
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

            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 172;
            goto try_except_handler_6;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_2__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_2__source_iter );
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_2__element_1 );
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_2__element_2 );
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_2__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_2__source_iter );
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_9 = generator_heap->tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = generator_heap->var_left;
            generator_heap->var_left = tmp_assign_source_9;
            Py_INCREF( generator_heap->var_left );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_2__element_1 );
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_10 = generator_heap->tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = generator_heap->var_right;
            generator_heap->var_right = tmp_assign_source_10;
            Py_INCREF( generator_heap->var_right );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_2__element_2 );
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_left );
        tmp_left_name_2 = generator_heap->var_left;
        CHECK_OBJECT( generator_heap->var_size );
        tmp_right_name_1 = generator_heap->var_size;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 172;
            generator_heap->type_description_1 = "Nooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( generator_heap->var_right );
        tmp_right_name_2 = generator_heap->var_right;
        tmp_expression_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 172;
            generator_heap->type_description_1 = "Nooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_left_name_1, sizeof(PyObject *), &tmp_left_name_2, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), &tmp_right_name_2, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_left_name_1, sizeof(PyObject *), &tmp_left_name_2, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), &tmp_right_name_2, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 172;
            generator_heap->type_description_1 = "Nooo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 172;
        generator_heap->type_description_1 = "Nooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

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
            generator_heap->var_size,
            generator_heap->var_left,
            generator_heap->var_right
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
    goto try_end_6;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_size );
    generator_heap->var_size = NULL;

    Py_XDECREF( generator_heap->var_left );
    generator_heap->var_left = NULL;

    Py_XDECREF( generator_heap->var_right );
    generator_heap->var_right = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:
    try_end_6:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_size );
    generator_heap->var_size = NULL;

    Py_XDECREF( generator_heap->var_left );
    generator_heap->var_left = NULL;

    Py_XDECREF( generator_heap->var_right );
    generator_heap->var_right = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_1_genexpr_context,
        module_numpy$lib$arraypad,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_71bad4e0b4147d15eac690c62ce6efe3,
#endif
        codeobj_1b1a35ab10cbd9f07b3bc12bf4a3e375,
        1,
        sizeof(struct numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_1_genexpr_locals)
    );
}



struct numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_2_genexpr_locals {
    PyObject *var_size;
    PyObject *var_left;
    PyObject *var_right;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    PyObject *tmp_tuple_unpack_2__element_1;
    PyObject *tmp_tuple_unpack_2__element_2;
    PyObject *tmp_tuple_unpack_2__source_iter;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
};

static PyObject *numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_2_genexpr_locals *generator_heap = (struct numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_size = NULL;
    generator_heap->var_left = NULL;
    generator_heap->var_right = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_1d49c7753da1819f82188568a1a9aa3e, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
                generator_heap->type_description_1 = "Nooo";
                generator_heap->exception_lineno = 183;
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


            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "Nooo";
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


            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 183;
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


            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 183;
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

                    generator_heap->type_description_1 = "Nooo";
                    generator_heap->exception_lineno = 183;
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

            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 183;
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
    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_size;
            generator_heap->var_size = tmp_assign_source_5;
            Py_INCREF( generator_heap->var_size );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_2 );
        tmp_iter_arg_2 = generator_heap->tmp_tuple_unpack_1__element_2;
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "Nooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__source_iter;
            generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
        if ( tmp_assign_source_7 == NULL )
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


            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 183;
            goto try_except_handler_6;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__element_1;
            generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
        if ( tmp_assign_source_8 == NULL )
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


            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 183;
            goto try_except_handler_6;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__element_2;
            generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_2__source_iter );
        tmp_iterator_name_2 = generator_heap->tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

        generator_heap->tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                    generator_heap->type_description_1 = "Nooo";
                    generator_heap->exception_lineno = 183;
                    goto try_except_handler_6;
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

            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 183;
            goto try_except_handler_6;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_2__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_2__source_iter );
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_2__element_1 );
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_2__element_2 );
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_2__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_2__source_iter );
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_9 = generator_heap->tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = generator_heap->var_left;
            generator_heap->var_left = tmp_assign_source_9;
            Py_INCREF( generator_heap->var_left );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_2__element_1 );
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_10 = generator_heap->tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = generator_heap->var_right;
            generator_heap->var_right = tmp_assign_source_10;
            Py_INCREF( generator_heap->var_right );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_2__element_2 );
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_step_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_left );
        tmp_start_name_1 = generator_heap->var_left;
        CHECK_OBJECT( generator_heap->var_left );
        tmp_left_name_1 = generator_heap->var_left;
        CHECK_OBJECT( generator_heap->var_size );
        tmp_right_name_1 = generator_heap->var_size;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "Nooo";
            goto try_except_handler_2;
        }
        tmp_step_name_1 = Py_None;
        tmp_expression_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_expression_name_1 == NULL) );
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_start_name_1, sizeof(PyObject *), &tmp_stop_name_1, sizeof(PyObject *), &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), &tmp_step_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_start_name_1, sizeof(PyObject *), &tmp_stop_name_1, sizeof(PyObject *), &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), &tmp_step_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "Nooo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 183;
        generator_heap->type_description_1 = "Nooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

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
            generator_heap->var_size,
            generator_heap->var_left,
            generator_heap->var_right
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
    goto try_end_6;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_size );
    generator_heap->var_size = NULL;

    Py_XDECREF( generator_heap->var_left );
    generator_heap->var_left = NULL;

    Py_XDECREF( generator_heap->var_right );
    generator_heap->var_right = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:
    try_end_6:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_size );
    generator_heap->var_size = NULL;

    Py_XDECREF( generator_heap->var_left );
    generator_heap->var_left = NULL;

    Py_XDECREF( generator_heap->var_right );
    generator_heap->var_right = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_2_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_2_genexpr_context,
        module_numpy$lib$arraypad,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_71bad4e0b4147d15eac690c62ce6efe3,
#endif
        codeobj_1d49c7753da1819f82188568a1a9aa3e,
        1,
        sizeof(struct numpy$lib$arraypad$$$function_5__pad_simple$$$genexpr_2_genexpr_locals)
    );
}


static PyObject *impl_numpy$lib$arraypad$$$function_6__set_pad_area( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_padded = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_width_pair = python_pars[ 2 ];
    PyObject *par_value_pair = python_pars[ 3 ];
    PyObject *var_left_slice = NULL;
    PyObject *var_right_slice = NULL;
    struct Nuitka_FrameObject *frame_9ce0a7b0af291c2c02816648a6db2e77;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9ce0a7b0af291c2c02816648a6db2e77 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9ce0a7b0af291c2c02816648a6db2e77, codeobj_9ce0a7b0af291c2c02816648a6db2e77, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9ce0a7b0af291c2c02816648a6db2e77 = cache_frame_9ce0a7b0af291c2c02816648a6db2e77;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9ce0a7b0af291c2c02816648a6db2e77 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9ce0a7b0af291c2c02816648a6db2e77 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 208;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( par_width_pair );
        tmp_subscribed_name_1 = par_width_pair;
        tmp_subscript_name_1 = const_int_0;
        tmp_stop_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_args_element_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_args_element_name_1 == NULL) );
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        frame_9ce0a7b0af291c2c02816648a6db2e77->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_left_slice == NULL );
        var_left_slice = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_value_pair );
        tmp_subscribed_name_2 = par_value_pair;
        tmp_subscript_name_2 = const_int_0;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_padded );
        tmp_ass_subscribed_1 = par_padded;
        CHECK_OBJECT( var_left_slice );
        tmp_ass_subscript_1 = var_left_slice;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_start_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 211;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_padded );
        tmp_source_name_1 = par_padded;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axis );
        tmp_subscript_name_3 = par_axis;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_width_pair );
        tmp_subscribed_name_4 = par_width_pair;
        tmp_subscript_name_4 = const_int_pos_1;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 212;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_start_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_start_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_2 = Py_None;
        tmp_step_name_2 = Py_None;
        tmp_args_element_name_3 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_start_name_2 );
        assert( !(tmp_args_element_name_3 == NULL) );
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_4 = par_axis;
        frame_9ce0a7b0af291c2c02816648a6db2e77->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_right_slice == NULL );
        var_right_slice = tmp_assign_source_2;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( par_value_pair );
        tmp_subscribed_name_5 = par_value_pair;
        tmp_subscript_name_5 = const_int_pos_1;
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 1 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_padded );
        tmp_ass_subscribed_2 = par_padded;
        CHECK_OBJECT( var_right_slice );
        tmp_ass_subscript_2 = var_right_slice;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ce0a7b0af291c2c02816648a6db2e77 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ce0a7b0af291c2c02816648a6db2e77 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9ce0a7b0af291c2c02816648a6db2e77, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9ce0a7b0af291c2c02816648a6db2e77->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9ce0a7b0af291c2c02816648a6db2e77, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9ce0a7b0af291c2c02816648a6db2e77,
        type_description_1,
        par_padded,
        par_axis,
        par_width_pair,
        par_value_pair,
        var_left_slice,
        var_right_slice
    );


    // Release cached frame.
    if ( frame_9ce0a7b0af291c2c02816648a6db2e77 == cache_frame_9ce0a7b0af291c2c02816648a6db2e77 )
    {
        Py_DECREF( frame_9ce0a7b0af291c2c02816648a6db2e77 );
    }
    cache_frame_9ce0a7b0af291c2c02816648a6db2e77 = NULL;

    assertFrameObject( frame_9ce0a7b0af291c2c02816648a6db2e77 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_6__set_pad_area );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_padded );
    Py_DECREF( par_padded );
    par_padded = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_width_pair );
    Py_DECREF( par_width_pair );
    par_width_pair = NULL;

    CHECK_OBJECT( (PyObject *)par_value_pair );
    Py_DECREF( par_value_pair );
    par_value_pair = NULL;

    CHECK_OBJECT( (PyObject *)var_left_slice );
    Py_DECREF( var_left_slice );
    var_left_slice = NULL;

    CHECK_OBJECT( (PyObject *)var_right_slice );
    Py_DECREF( var_right_slice );
    var_right_slice = NULL;

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

    CHECK_OBJECT( (PyObject *)par_padded );
    Py_DECREF( par_padded );
    par_padded = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_width_pair );
    Py_DECREF( par_width_pair );
    par_width_pair = NULL;

    CHECK_OBJECT( (PyObject *)par_value_pair );
    Py_DECREF( par_value_pair );
    par_value_pair = NULL;

    Py_XDECREF( var_left_slice );
    var_left_slice = NULL;

    Py_XDECREF( var_right_slice );
    var_right_slice = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_6__set_pad_area );
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


static PyObject *impl_numpy$lib$arraypad$$$function_7__get_edges( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_padded = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_width_pair = python_pars[ 2 ];
    PyObject *var_left_index = NULL;
    PyObject *var_left_slice = NULL;
    PyObject *var_left_edge = NULL;
    PyObject *var_right_index = NULL;
    PyObject *var_right_slice = NULL;
    PyObject *var_right_edge = NULL;
    struct Nuitka_FrameObject *frame_8a9237d69410a61035d187d3b48dcf2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8a9237d69410a61035d187d3b48dcf2e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8a9237d69410a61035d187d3b48dcf2e, codeobj_8a9237d69410a61035d187d3b48dcf2e, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8a9237d69410a61035d187d3b48dcf2e = cache_frame_8a9237d69410a61035d187d3b48dcf2e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8a9237d69410a61035d187d3b48dcf2e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8a9237d69410a61035d187d3b48dcf2e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_width_pair );
        tmp_subscribed_name_1 = par_width_pair;
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_left_index == NULL );
        var_left_index = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 238;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_left_index );
        tmp_start_name_1 = var_left_index;
        CHECK_OBJECT( var_left_index );
        tmp_left_name_1 = var_left_index;
        tmp_right_name_1 = const_int_pos_1;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_args_element_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_args_element_name_1 == NULL) );
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        frame_8a9237d69410a61035d187d3b48dcf2e->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_left_slice == NULL );
        var_left_slice = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_padded );
        tmp_subscribed_name_2 = par_padded;
        CHECK_OBJECT( var_left_slice );
        tmp_subscript_name_2 = var_left_slice;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_left_edge == NULL );
        var_left_edge = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( par_padded );
        tmp_source_name_1 = par_padded;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axis );
        tmp_subscript_name_3 = par_axis;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_width_pair );
        tmp_subscribed_name_4 = par_width_pair;
        tmp_subscript_name_4 = const_int_pos_1;
        tmp_right_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 241;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_right_index == NULL );
        var_right_index = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_start_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 242;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_right_index );
        tmp_left_name_3 = var_right_index;
        tmp_right_name_3 = const_int_pos_1;
        tmp_start_name_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_start_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_right_index );
        tmp_stop_name_2 = var_right_index;
        tmp_step_name_2 = Py_None;
        tmp_args_element_name_3 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_start_name_2 );
        assert( !(tmp_args_element_name_3 == NULL) );
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_4 = par_axis;
        frame_8a9237d69410a61035d187d3b48dcf2e->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_right_slice == NULL );
        var_right_slice = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( par_padded );
        tmp_subscribed_name_5 = par_padded;
        CHECK_OBJECT( var_right_slice );
        tmp_subscript_name_5 = var_right_slice;
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_right_edge == NULL );
        var_right_edge = tmp_assign_source_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8a9237d69410a61035d187d3b48dcf2e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8a9237d69410a61035d187d3b48dcf2e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8a9237d69410a61035d187d3b48dcf2e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8a9237d69410a61035d187d3b48dcf2e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8a9237d69410a61035d187d3b48dcf2e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8a9237d69410a61035d187d3b48dcf2e,
        type_description_1,
        par_padded,
        par_axis,
        par_width_pair,
        var_left_index,
        var_left_slice,
        var_left_edge,
        var_right_index,
        var_right_slice,
        var_right_edge
    );


    // Release cached frame.
    if ( frame_8a9237d69410a61035d187d3b48dcf2e == cache_frame_8a9237d69410a61035d187d3b48dcf2e )
    {
        Py_DECREF( frame_8a9237d69410a61035d187d3b48dcf2e );
    }
    cache_frame_8a9237d69410a61035d187d3b48dcf2e = NULL;

    assertFrameObject( frame_8a9237d69410a61035d187d3b48dcf2e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_left_edge );
        tmp_tuple_element_1 = var_left_edge;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_right_edge );
        tmp_tuple_element_1 = var_right_edge;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_7__get_edges );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_padded );
    Py_DECREF( par_padded );
    par_padded = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_width_pair );
    Py_DECREF( par_width_pair );
    par_width_pair = NULL;

    CHECK_OBJECT( (PyObject *)var_left_index );
    Py_DECREF( var_left_index );
    var_left_index = NULL;

    CHECK_OBJECT( (PyObject *)var_left_slice );
    Py_DECREF( var_left_slice );
    var_left_slice = NULL;

    CHECK_OBJECT( (PyObject *)var_left_edge );
    Py_DECREF( var_left_edge );
    var_left_edge = NULL;

    CHECK_OBJECT( (PyObject *)var_right_index );
    Py_DECREF( var_right_index );
    var_right_index = NULL;

    CHECK_OBJECT( (PyObject *)var_right_slice );
    Py_DECREF( var_right_slice );
    var_right_slice = NULL;

    CHECK_OBJECT( (PyObject *)var_right_edge );
    Py_DECREF( var_right_edge );
    var_right_edge = NULL;

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

    CHECK_OBJECT( (PyObject *)par_padded );
    Py_DECREF( par_padded );
    par_padded = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_width_pair );
    Py_DECREF( par_width_pair );
    par_width_pair = NULL;

    Py_XDECREF( var_left_index );
    var_left_index = NULL;

    Py_XDECREF( var_left_slice );
    var_left_slice = NULL;

    Py_XDECREF( var_left_edge );
    var_left_edge = NULL;

    Py_XDECREF( var_right_index );
    var_right_index = NULL;

    Py_XDECREF( var_right_slice );
    var_right_slice = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_7__get_edges );
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


static PyObject *impl_numpy$lib$arraypad$$$function_8__get_linear_ramps( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_padded = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_width_pair = python_pars[ 2 ];
    PyObject *par_end_value_pair = python_pars[ 3 ];
    PyObject *var_edge_pair = NULL;
    PyObject *var_left_ramp = NULL;
    PyObject *var_right_ramp = NULL;
    struct Nuitka_FrameObject *frame_f5bf3db56db940f0ea37a4457b09261b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f5bf3db56db940f0ea37a4457b09261b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f5bf3db56db940f0ea37a4457b09261b, codeobj_f5bf3db56db940f0ea37a4457b09261b, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f5bf3db56db940f0ea37a4457b09261b = cache_frame_f5bf3db56db940f0ea37a4457b09261b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f5bf3db56db940f0ea37a4457b09261b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f5bf3db56db940f0ea37a4457b09261b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__get_edges );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_edges );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_edges" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_padded );
        tmp_args_element_name_1 = par_padded;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        CHECK_OBJECT( par_width_pair );
        tmp_args_element_name_3 = par_width_pair;
        frame_f5bf3db56db940f0ea37a4457b09261b->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_edge_pair == NULL );
        var_edge_pair = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__linear_ramp );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__linear_ramp );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_linear_ramp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_padded );
        tmp_source_name_1 = par_padded;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_axis );
        tmp_tuple_element_1 = par_axis;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_start;
        CHECK_OBJECT( par_end_value_pair );
        tmp_subscribed_name_1 = par_end_value_pair;
        tmp_subscript_name_1 = const_int_0;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 273;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_stop;
        CHECK_OBJECT( var_edge_pair );
        tmp_subscribed_name_2 = var_edge_pair;
        tmp_subscript_name_2 = const_int_0;
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 273;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_size;
        CHECK_OBJECT( par_width_pair );
        tmp_subscribed_name_3 = par_width_pair;
        tmp_subscript_name_3 = const_int_0;
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_reverse;
        tmp_dict_value_4 = Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_f5bf3db56db940f0ea37a4457b09261b->m_frame.f_lineno = 272;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_left_ramp == NULL );
        var_left_ramp = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__round_if_needed );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__round_if_needed );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_round_if_needed" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_left_ramp );
        tmp_args_element_name_4 = var_left_ramp;
        CHECK_OBJECT( par_padded );
        tmp_source_name_2 = par_padded;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_f5bf3db56db940f0ea37a4457b09261b->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__linear_ramp );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__linear_ramp );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_linear_ramp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_padded );
        tmp_source_name_3 = par_padded;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_axis );
        tmp_tuple_element_2 = par_axis;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        tmp_dict_key_5 = const_str_plain_start;
        CHECK_OBJECT( par_end_value_pair );
        tmp_subscribed_name_4 = par_end_value_pair;
        tmp_subscript_name_4 = const_int_pos_1;
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 279;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_2 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_stop;
        CHECK_OBJECT( var_edge_pair );
        tmp_subscribed_name_5 = var_edge_pair;
        tmp_subscript_name_5 = const_int_pos_1;
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 1 );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 279;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_size;
        CHECK_OBJECT( par_width_pair );
        tmp_subscribed_name_6 = par_width_pair;
        tmp_subscript_name_6 = const_int_pos_1;
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 1 );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_reverse;
        tmp_dict_value_8 = Py_True;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        frame_f5bf3db56db940f0ea37a4457b09261b->m_frame.f_lineno = 278;
        tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_right_ramp == NULL );
        var_right_ramp = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__round_if_needed );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__round_if_needed );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_round_if_needed" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( var_right_ramp );
        tmp_args_element_name_6 = var_right_ramp;
        CHECK_OBJECT( par_padded );
        tmp_source_name_4 = par_padded;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_f5bf3db56db940f0ea37a4457b09261b->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5bf3db56db940f0ea37a4457b09261b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5bf3db56db940f0ea37a4457b09261b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f5bf3db56db940f0ea37a4457b09261b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f5bf3db56db940f0ea37a4457b09261b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f5bf3db56db940f0ea37a4457b09261b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f5bf3db56db940f0ea37a4457b09261b,
        type_description_1,
        par_padded,
        par_axis,
        par_width_pair,
        par_end_value_pair,
        var_edge_pair,
        var_left_ramp,
        var_right_ramp
    );


    // Release cached frame.
    if ( frame_f5bf3db56db940f0ea37a4457b09261b == cache_frame_f5bf3db56db940f0ea37a4457b09261b )
    {
        Py_DECREF( frame_f5bf3db56db940f0ea37a4457b09261b );
    }
    cache_frame_f5bf3db56db940f0ea37a4457b09261b = NULL;

    assertFrameObject( frame_f5bf3db56db940f0ea37a4457b09261b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( var_left_ramp );
        tmp_tuple_element_3 = var_left_ramp;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_right_ramp );
        tmp_tuple_element_3 = var_right_ramp;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_8__get_linear_ramps );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_padded );
    Py_DECREF( par_padded );
    par_padded = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_width_pair );
    Py_DECREF( par_width_pair );
    par_width_pair = NULL;

    CHECK_OBJECT( (PyObject *)par_end_value_pair );
    Py_DECREF( par_end_value_pair );
    par_end_value_pair = NULL;

    CHECK_OBJECT( (PyObject *)var_edge_pair );
    Py_DECREF( var_edge_pair );
    var_edge_pair = NULL;

    CHECK_OBJECT( (PyObject *)var_left_ramp );
    Py_DECREF( var_left_ramp );
    var_left_ramp = NULL;

    CHECK_OBJECT( (PyObject *)var_right_ramp );
    Py_DECREF( var_right_ramp );
    var_right_ramp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_padded );
    Py_DECREF( par_padded );
    par_padded = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_width_pair );
    Py_DECREF( par_width_pair );
    par_width_pair = NULL;

    CHECK_OBJECT( (PyObject *)par_end_value_pair );
    Py_DECREF( par_end_value_pair );
    par_end_value_pair = NULL;

    Py_XDECREF( var_edge_pair );
    var_edge_pair = NULL;

    Py_XDECREF( var_left_ramp );
    var_left_ramp = NULL;

    Py_XDECREF( var_right_ramp );
    var_right_ramp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_8__get_linear_ramps );
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


static PyObject *impl_numpy$lib$arraypad$$$function_9__get_stats( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_padded = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_width_pair = python_pars[ 2 ];
    PyObject *par_length_pair = python_pars[ 3 ];
    PyObject *par_stat_func = python_pars[ 4 ];
    PyObject *var_left_index = NULL;
    PyObject *var_right_index = NULL;
    PyObject *var_max_length = NULL;
    PyObject *var_left_length = NULL;
    PyObject *var_right_length = NULL;
    PyObject *var_left_slice = NULL;
    PyObject *var_left_chunk = NULL;
    PyObject *var_left_stat = NULL;
    PyObject *var_right_slice = NULL;
    PyObject *var_right_chunk = NULL;
    PyObject *var_right_stat = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1ae55446c2a08ed2e0d3d3419c90af42;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1ae55446c2a08ed2e0d3d3419c90af42 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1ae55446c2a08ed2e0d3d3419c90af42, codeobj_1ae55446c2a08ed2e0d3d3419c90af42, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1ae55446c2a08ed2e0d3d3419c90af42 = cache_frame_1ae55446c2a08ed2e0d3d3419c90af42;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1ae55446c2a08ed2e0d3d3419c90af42 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1ae55446c2a08ed2e0d3d3419c90af42 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_width_pair );
        tmp_subscribed_name_1 = par_width_pair;
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_left_index == NULL );
        var_left_index = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( par_padded );
        tmp_source_name_1 = par_padded;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axis );
        tmp_subscript_name_2 = par_axis;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_width_pair );
        tmp_subscribed_name_3 = par_width_pair;
        tmp_subscript_name_3 = const_int_pos_1;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 315;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_right_index == NULL );
        var_right_index = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_right_index );
        tmp_left_name_2 = var_right_index;
        CHECK_OBJECT( var_left_index );
        tmp_right_name_2 = var_left_index;
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_max_length == NULL );
        var_max_length = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_length_pair );
        tmp_iter_arg_1 = par_length_pair;
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "oooooooooooooooo";
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


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 320;
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


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 320;
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

                    type_description_1 = "oooooooooooooooo";
                    exception_lineno = 320;
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

            type_description_1 = "oooooooooooooooo";
            exception_lineno = 320;
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
        assert( var_left_length == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_left_length = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert( var_right_length == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_right_length = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_left_length );
        tmp_compexpr_left_1 = var_left_length;
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
        CHECK_OBJECT( var_max_length );
        tmp_compexpr_left_2 = var_max_length;
        CHECK_OBJECT( var_left_length );
        tmp_compexpr_right_2 = var_left_length;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "oooooooooooooooo";
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
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( var_max_length );
            tmp_assign_source_9 = var_max_length;
            {
                PyObject *old = var_left_length;
                assert( old != NULL );
                var_left_length = tmp_assign_source_9;
                Py_INCREF( var_left_length );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_right_length );
        tmp_compexpr_left_3 = var_right_length;
        tmp_compexpr_right_3 = Py_None;
        tmp_or_left_value_2 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_max_length );
        tmp_compexpr_left_4 = var_max_length;
        CHECK_OBJECT( var_right_length );
        tmp_compexpr_right_4 = var_right_length;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "oooooooooooooooo";
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
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( var_max_length );
            tmp_assign_source_10 = var_max_length;
            {
                PyObject *old = var_right_length;
                assert( old != NULL );
                var_right_length = tmp_assign_source_10;
                Py_INCREF( var_right_length );
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_step_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 327;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_left_index );
        tmp_start_name_1 = var_left_index;
        CHECK_OBJECT( var_left_index );
        tmp_left_name_3 = var_left_index;
        CHECK_OBJECT( var_left_length );
        tmp_right_name_3 = var_left_length;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_args_element_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_args_element_name_1 == NULL) );
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        frame_1ae55446c2a08ed2e0d3d3419c90af42->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_left_slice == NULL );
        var_left_slice = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( par_padded );
        tmp_subscribed_name_4 = par_padded;
        CHECK_OBJECT( var_left_slice );
        tmp_subscript_name_4 = var_left_slice;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_left_chunk == NULL );
        var_left_chunk = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT( par_stat_func );
        tmp_called_name_2 = par_stat_func;
        CHECK_OBJECT( var_left_chunk );
        tmp_tuple_element_1 = var_left_chunk;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_1 = par_axis;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_keepdims;
        tmp_dict_value_2 = Py_True;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_1ae55446c2a08ed2e0d3d3419c90af42->m_frame.f_lineno = 330;
        tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_left_stat == NULL );
        var_left_stat = tmp_assign_source_13;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__round_if_needed );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__round_if_needed );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_round_if_needed" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 331;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        CHECK_OBJECT( var_left_stat );
        tmp_args_element_name_3 = var_left_stat;
        CHECK_OBJECT( par_padded );
        tmp_source_name_2 = par_padded;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1ae55446c2a08ed2e0d3d3419c90af42->m_frame.f_lineno = 331;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_1;
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( var_right_length );
            tmp_assign_source_14 = var_right_length;
            assert( tmp_comparison_chain_1__operand_2 == NULL );
            Py_INCREF( tmp_assign_source_14 );
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_14;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_left_length );
            tmp_compexpr_left_5 = var_left_length;
            CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
            tmp_compexpr_right_5 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_15 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_comparison_chain_1__comparison_result == NULL );
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_15;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
            tmp_operand_name_1 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_4;
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
            CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
            tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
            Py_INCREF( tmp_outline_return_value_1 );
            goto try_return_handler_4;
            branch_no_4:;
        }
        {
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
            tmp_compexpr_left_6 = tmp_comparison_chain_1__operand_2;
            CHECK_OBJECT( var_max_length );
            tmp_compexpr_right_6 = var_max_length;
            tmp_outline_return_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_outline_return_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_4;
            }
            goto try_return_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_9__get_stats );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
        Py_DECREF( tmp_comparison_chain_1__operand_2 );
        tmp_comparison_chain_1__operand_2 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
        Py_DECREF( tmp_comparison_chain_1__comparison_result );
        tmp_comparison_chain_1__comparison_result = NULL;

        goto outline_result_1;
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

        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
        Py_DECREF( tmp_comparison_chain_1__operand_2 );
        tmp_comparison_chain_1__operand_2 = NULL;

        Py_XDECREF( tmp_comparison_chain_1__comparison_result );
        tmp_comparison_chain_1__comparison_result = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_9__get_stats );
        return NULL;
        outline_result_1:;
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_outline_return_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_outline_return_value_1 );

            exception_lineno = 333;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_outline_return_value_1 );
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
            PyObject *tmp_tuple_element_2;
            CHECK_OBJECT( var_left_stat );
            tmp_tuple_element_2 = var_left_stat;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_left_stat );
            tmp_tuple_element_2 = var_left_stat;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_start_name_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 338;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_3;
        CHECK_OBJECT( var_right_index );
        tmp_left_name_4 = var_right_index;
        CHECK_OBJECT( var_right_length );
        tmp_right_name_4 = var_right_length;
        tmp_start_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_start_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_right_index );
        tmp_stop_name_2 = var_right_index;
        tmp_step_name_2 = Py_None;
        tmp_args_element_name_5 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_start_name_2 );
        assert( !(tmp_args_element_name_5 == NULL) );
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        frame_1ae55446c2a08ed2e0d3d3419c90af42->m_frame.f_lineno = 338;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_right_slice == NULL );
        var_right_slice = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( par_padded );
        tmp_subscribed_name_5 = par_padded;
        CHECK_OBJECT( var_right_slice );
        tmp_subscript_name_5 = var_right_slice;
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_right_chunk == NULL );
        var_right_chunk = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        CHECK_OBJECT( par_stat_func );
        tmp_called_name_5 = par_stat_func;
        CHECK_OBJECT( var_right_chunk );
        tmp_tuple_element_3 = var_right_chunk;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
        tmp_dict_key_3 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_3 = par_axis;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_keepdims;
        tmp_dict_value_4 = Py_True;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_1ae55446c2a08ed2e0d3d3419c90af42->m_frame.f_lineno = 341;
        tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_right_stat == NULL );
        var_right_stat = tmp_assign_source_18;
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__round_if_needed );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__round_if_needed );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_round_if_needed" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 342;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_4;
        CHECK_OBJECT( var_right_stat );
        tmp_args_element_name_7 = var_right_stat;
        CHECK_OBJECT( par_padded );
        tmp_source_name_3 = par_padded;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1ae55446c2a08ed2e0d3d3419c90af42->m_frame.f_lineno = 342;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ae55446c2a08ed2e0d3d3419c90af42 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ae55446c2a08ed2e0d3d3419c90af42 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ae55446c2a08ed2e0d3d3419c90af42 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1ae55446c2a08ed2e0d3d3419c90af42, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1ae55446c2a08ed2e0d3d3419c90af42->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1ae55446c2a08ed2e0d3d3419c90af42, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1ae55446c2a08ed2e0d3d3419c90af42,
        type_description_1,
        par_padded,
        par_axis,
        par_width_pair,
        par_length_pair,
        par_stat_func,
        var_left_index,
        var_right_index,
        var_max_length,
        var_left_length,
        var_right_length,
        var_left_slice,
        var_left_chunk,
        var_left_stat,
        var_right_slice,
        var_right_chunk,
        var_right_stat
    );


    // Release cached frame.
    if ( frame_1ae55446c2a08ed2e0d3d3419c90af42 == cache_frame_1ae55446c2a08ed2e0d3d3419c90af42 )
    {
        Py_DECREF( frame_1ae55446c2a08ed2e0d3d3419c90af42 );
    }
    cache_frame_1ae55446c2a08ed2e0d3d3419c90af42 = NULL;

    assertFrameObject( frame_1ae55446c2a08ed2e0d3d3419c90af42 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT( var_left_stat );
        tmp_tuple_element_4 = var_left_stat;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_right_stat );
        tmp_tuple_element_4 = var_right_stat;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_9__get_stats );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_padded );
    Py_DECREF( par_padded );
    par_padded = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_width_pair );
    Py_DECREF( par_width_pair );
    par_width_pair = NULL;

    CHECK_OBJECT( (PyObject *)par_length_pair );
    Py_DECREF( par_length_pair );
    par_length_pair = NULL;

    CHECK_OBJECT( (PyObject *)par_stat_func );
    Py_DECREF( par_stat_func );
    par_stat_func = NULL;

    CHECK_OBJECT( (PyObject *)var_left_index );
    Py_DECREF( var_left_index );
    var_left_index = NULL;

    CHECK_OBJECT( (PyObject *)var_right_index );
    Py_DECREF( var_right_index );
    var_right_index = NULL;

    CHECK_OBJECT( (PyObject *)var_max_length );
    Py_DECREF( var_max_length );
    var_max_length = NULL;

    CHECK_OBJECT( (PyObject *)var_left_length );
    Py_DECREF( var_left_length );
    var_left_length = NULL;

    CHECK_OBJECT( (PyObject *)var_right_length );
    Py_DECREF( var_right_length );
    var_right_length = NULL;

    CHECK_OBJECT( (PyObject *)var_left_slice );
    Py_DECREF( var_left_slice );
    var_left_slice = NULL;

    CHECK_OBJECT( (PyObject *)var_left_chunk );
    Py_DECREF( var_left_chunk );
    var_left_chunk = NULL;

    CHECK_OBJECT( (PyObject *)var_left_stat );
    Py_DECREF( var_left_stat );
    var_left_stat = NULL;

    Py_XDECREF( var_right_slice );
    var_right_slice = NULL;

    Py_XDECREF( var_right_chunk );
    var_right_chunk = NULL;

    Py_XDECREF( var_right_stat );
    var_right_stat = NULL;

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

    CHECK_OBJECT( (PyObject *)par_padded );
    Py_DECREF( par_padded );
    par_padded = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_width_pair );
    Py_DECREF( par_width_pair );
    par_width_pair = NULL;

    CHECK_OBJECT( (PyObject *)par_length_pair );
    Py_DECREF( par_length_pair );
    par_length_pair = NULL;

    CHECK_OBJECT( (PyObject *)par_stat_func );
    Py_DECREF( par_stat_func );
    par_stat_func = NULL;

    Py_XDECREF( var_left_index );
    var_left_index = NULL;

    Py_XDECREF( var_right_index );
    var_right_index = NULL;

    Py_XDECREF( var_max_length );
    var_max_length = NULL;

    Py_XDECREF( var_left_length );
    var_left_length = NULL;

    Py_XDECREF( var_right_length );
    var_right_length = NULL;

    Py_XDECREF( var_left_slice );
    var_left_slice = NULL;

    Py_XDECREF( var_left_chunk );
    var_left_chunk = NULL;

    Py_XDECREF( var_left_stat );
    var_left_stat = NULL;

    Py_XDECREF( var_right_slice );
    var_right_slice = NULL;

    Py_XDECREF( var_right_chunk );
    var_right_chunk = NULL;

    Py_XDECREF( var_right_stat );
    var_right_stat = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_9__get_stats );
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


static PyObject *impl_numpy$lib$arraypad$$$function_10__set_reflect_both( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_padded = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_width_pair = python_pars[ 2 ];
    PyObject *par_method = python_pars[ 3 ];
    PyObject *par_include_edge = python_pars[ 4 ];
    PyObject *var_left_pad = NULL;
    PyObject *var_right_pad = NULL;
    PyObject *var_old_length = NULL;
    PyObject *var_edge_offset = NULL;
    PyObject *var_chunk_length = NULL;
    PyObject *var_stop = NULL;
    PyObject *var_start = NULL;
    PyObject *var_left_slice = NULL;
    PyObject *var_left_chunk = NULL;
    PyObject *var_edge_slice = NULL;
    PyObject *var_pad_area = NULL;
    PyObject *var_right_slice = NULL;
    PyObject *var_right_chunk = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_816903115c0df5b018ae50cd2d03b0a7;
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
    static struct Nuitka_FrameObject *cache_frame_816903115c0df5b018ae50cd2d03b0a7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_816903115c0df5b018ae50cd2d03b0a7, codeobj_816903115c0df5b018ae50cd2d03b0a7, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_816903115c0df5b018ae50cd2d03b0a7 = cache_frame_816903115c0df5b018ae50cd2d03b0a7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_816903115c0df5b018ae50cd2d03b0a7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_816903115c0df5b018ae50cd2d03b0a7 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_width_pair );
        tmp_iter_arg_1 = par_width_pair;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;
            type_description_1 = "oooooooooooooooooo";
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


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 371;
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


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 371;
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

                    type_description_1 = "oooooooooooooooooo";
                    exception_lineno = 371;
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

            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 371;
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
        assert( var_left_pad == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_left_pad = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_right_pad == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_right_pad = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_padded );
        tmp_source_name_1 = par_padded;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axis );
        tmp_subscript_name_1 = par_axis;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_right_pad );
        tmp_right_name_1 = var_right_pad;
        tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_left_pad );
        tmp_right_name_2 = var_left_pad;
        tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_old_length == NULL );
        var_old_length = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_include_edge );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_include_edge );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooo";
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
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_int_pos_1;
            assert( var_edge_offset == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_edge_offset = tmp_assign_source_7;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = const_int_0;
            assert( var_edge_offset == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_edge_offset = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( var_old_length );
            tmp_left_name_3 = var_old_length;
            tmp_right_name_3 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 379;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_9 = tmp_left_name_3;
            var_old_length = tmp_assign_source_9;

        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_left_pad );
        tmp_compexpr_left_1 = var_left_pad;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 381;
            type_description_1 = "oooooooooooooooooo";
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_1 != NULL );
            CHECK_OBJECT( var_old_length );
            tmp_args_element_name_1 = var_old_length;
            CHECK_OBJECT( var_left_pad );
            tmp_args_element_name_2 = var_left_pad;
            frame_816903115c0df5b018ae50cd2d03b0a7->m_frame.f_lineno = 384;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 384;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_chunk_length == NULL );
            var_chunk_length = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( var_left_pad );
            tmp_left_name_4 = var_left_pad;
            CHECK_OBJECT( var_edge_offset );
            tmp_right_name_4 = var_edge_offset;
            tmp_assign_source_11 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 386;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_stop == NULL );
            var_stop = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( var_stop );
            tmp_left_name_5 = var_stop;
            CHECK_OBJECT( var_chunk_length );
            tmp_right_name_5 = var_chunk_length;
            tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 387;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_start == NULL );
            var_start = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 388;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_1;
            CHECK_OBJECT( var_start );
            tmp_start_name_1 = var_start;
            CHECK_OBJECT( var_stop );
            tmp_stop_name_1 = var_stop;
            tmp_step_name_1 = const_int_neg_1;
            tmp_args_element_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            assert( !(tmp_args_element_name_3 == NULL) );
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_4 = par_axis;
            frame_816903115c0df5b018ae50cd2d03b0a7->m_frame.f_lineno = 388;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 388;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_left_slice == NULL );
            var_left_slice = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_padded );
            tmp_subscribed_name_2 = par_padded;
            CHECK_OBJECT( var_left_slice );
            tmp_subscript_name_2 = var_left_slice;
            tmp_assign_source_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 389;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_left_chunk == NULL );
            var_left_chunk = tmp_assign_source_14;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_method );
            tmp_compexpr_left_2 = par_method;
            tmp_compexpr_right_2 = const_str_plain_odd;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 391;
                type_description_1 = "oooooooooooooooooo";
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
                PyObject *tmp_assign_source_15;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_start_name_2;
                PyObject *tmp_stop_name_2;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_step_name_2;
                PyObject *tmp_args_element_name_6;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 393;
                    type_description_1 = "oooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_2;
                CHECK_OBJECT( var_left_pad );
                tmp_start_name_2 = var_left_pad;
                CHECK_OBJECT( var_left_pad );
                tmp_left_name_6 = var_left_pad;
                tmp_right_name_6 = const_int_pos_1;
                tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
                if ( tmp_stop_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 393;
                    type_description_1 = "oooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_step_name_2 = Py_None;
                tmp_args_element_name_5 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                Py_DECREF( tmp_stop_name_2 );
                assert( !(tmp_args_element_name_5 == NULL) );
                CHECK_OBJECT( par_axis );
                tmp_args_element_name_6 = par_axis;
                frame_816903115c0df5b018ae50cd2d03b0a7->m_frame.f_lineno = 393;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_5 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 393;
                    type_description_1 = "oooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_edge_slice == NULL );
                var_edge_slice = tmp_assign_source_15;
            }
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_left_name_7;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_7;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_right_name_8;
                tmp_left_name_8 = const_int_pos_2;
                CHECK_OBJECT( par_padded );
                tmp_subscribed_name_3 = par_padded;
                CHECK_OBJECT( var_edge_slice );
                tmp_subscript_name_3 = var_edge_slice;
                tmp_right_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                if ( tmp_right_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 394;
                    type_description_1 = "oooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_7 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_8, tmp_right_name_7 );
                Py_DECREF( tmp_right_name_7 );
                if ( tmp_left_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 394;
                    type_description_1 = "oooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_left_chunk );
                tmp_right_name_8 = var_left_chunk;
                tmp_assign_source_16 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_8 );
                Py_DECREF( tmp_left_name_7 );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 394;
                    type_description_1 = "oooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_left_chunk;
                    assert( old != NULL );
                    var_left_chunk = tmp_assign_source_16;
                    Py_DECREF( old );
                }

            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            CHECK_OBJECT( var_left_pad );
            tmp_left_name_9 = var_left_pad;
            CHECK_OBJECT( var_chunk_length );
            tmp_right_name_9 = var_chunk_length;
            tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 397;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_start;
                assert( old != NULL );
                var_start = tmp_assign_source_17;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( var_left_pad );
            tmp_assign_source_18 = var_left_pad;
            {
                PyObject *old = var_stop;
                assert( old != NULL );
                var_stop = tmp_assign_source_18;
                Py_INCREF( var_stop );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_start_name_3;
            PyObject *tmp_stop_name_3;
            PyObject *tmp_step_name_3;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 399;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_3;
            CHECK_OBJECT( var_start );
            tmp_start_name_3 = var_start;
            CHECK_OBJECT( var_stop );
            tmp_stop_name_3 = var_stop;
            tmp_step_name_3 = Py_None;
            tmp_args_element_name_7 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
            assert( !(tmp_args_element_name_7 == NULL) );
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_8 = par_axis;
            frame_816903115c0df5b018ae50cd2d03b0a7->m_frame.f_lineno = 399;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 399;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_pad_area == NULL );
            var_pad_area = tmp_assign_source_19;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( var_left_chunk );
            tmp_ass_subvalue_1 = var_left_chunk;
            CHECK_OBJECT( par_padded );
            tmp_ass_subscribed_1 = par_padded;
            CHECK_OBJECT( var_pad_area );
            tmp_ass_subscript_1 = var_pad_area;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 400;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            CHECK_OBJECT( var_left_pad );
            tmp_left_name_10 = var_left_pad;
            CHECK_OBJECT( var_chunk_length );
            tmp_right_name_10 = var_chunk_length;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_10, tmp_right_name_10 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 402;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_20 = tmp_left_name_10;
            var_left_pad = tmp_assign_source_20;

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_right_pad );
        tmp_compexpr_left_3 = var_right_pad;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;
            type_description_1 = "oooooooooooooooooo";
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
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_5 != NULL );
            CHECK_OBJECT( var_old_length );
            tmp_args_element_name_9 = var_old_length;
            CHECK_OBJECT( var_right_pad );
            tmp_args_element_name_10 = var_right_pad;
            frame_816903115c0df5b018ae50cd2d03b0a7->m_frame.f_lineno = 407;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_chunk_length;
                var_chunk_length = tmp_assign_source_21;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_left_name_11;
            PyObject *tmp_left_name_12;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_right_name_11;
            PyObject *tmp_right_name_12;
            CHECK_OBJECT( var_right_pad );
            tmp_operand_name_1 = var_right_pad;
            tmp_left_name_12 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            if ( tmp_left_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_edge_offset );
            tmp_right_name_11 = var_edge_offset;
            tmp_left_name_11 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_12, tmp_right_name_11 );
            Py_DECREF( tmp_left_name_12 );
            if ( tmp_left_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_12 = const_int_pos_2;
            tmp_assign_source_22 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_11, tmp_right_name_12 );
            Py_DECREF( tmp_left_name_11 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_start;
                var_start = tmp_assign_source_22;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_13;
            CHECK_OBJECT( var_start );
            tmp_left_name_13 = var_start;
            CHECK_OBJECT( var_chunk_length );
            tmp_right_name_13 = var_chunk_length;
            tmp_assign_source_23 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 410;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_stop;
                var_stop = tmp_assign_source_23;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_start_name_4;
            PyObject *tmp_stop_name_4;
            PyObject *tmp_step_name_4;
            PyObject *tmp_args_element_name_12;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 411;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_4;
            CHECK_OBJECT( var_start );
            tmp_start_name_4 = var_start;
            CHECK_OBJECT( var_stop );
            tmp_stop_name_4 = var_stop;
            tmp_step_name_4 = const_int_neg_1;
            tmp_args_element_name_11 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
            assert( !(tmp_args_element_name_11 == NULL) );
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_12 = par_axis;
            frame_816903115c0df5b018ae50cd2d03b0a7->m_frame.f_lineno = 411;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 411;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_right_slice == NULL );
            var_right_slice = tmp_assign_source_24;
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            CHECK_OBJECT( par_padded );
            tmp_subscribed_name_4 = par_padded;
            CHECK_OBJECT( var_right_slice );
            tmp_subscript_name_4 = var_right_slice;
            tmp_assign_source_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_right_chunk == NULL );
            var_right_chunk = tmp_assign_source_25;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( par_method );
            tmp_compexpr_left_4 = par_method;
            tmp_compexpr_right_4 = const_str_plain_odd;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooooooooooooo";
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
                PyObject *tmp_assign_source_26;
                PyObject *tmp_called_name_7;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_start_name_5;
                PyObject *tmp_left_name_14;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_right_name_14;
                PyObject *tmp_stop_name_5;
                PyObject *tmp_operand_name_3;
                PyObject *tmp_step_name_5;
                PyObject *tmp_args_element_name_14;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 416;
                    type_description_1 = "oooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_7 = tmp_mvar_value_5;
                CHECK_OBJECT( var_right_pad );
                tmp_operand_name_2 = var_right_pad;
                tmp_left_name_14 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
                if ( tmp_left_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 417;
                    type_description_1 = "oooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_14 = const_int_pos_1;
                tmp_start_name_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_14, tmp_right_name_14 );
                Py_DECREF( tmp_left_name_14 );
                if ( tmp_start_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 417;
                    type_description_1 = "oooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_right_pad );
                tmp_operand_name_3 = var_right_pad;
                tmp_stop_name_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
                if ( tmp_stop_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_start_name_5 );

                    exception_lineno = 417;
                    type_description_1 = "oooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_step_name_5 = Py_None;
                tmp_args_element_name_13 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
                Py_DECREF( tmp_start_name_5 );
                Py_DECREF( tmp_stop_name_5 );
                assert( !(tmp_args_element_name_13 == NULL) );
                CHECK_OBJECT( par_axis );
                tmp_args_element_name_14 = par_axis;
                frame_816903115c0df5b018ae50cd2d03b0a7->m_frame.f_lineno = 416;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                    tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_args_element_name_13 );
                if ( tmp_assign_source_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 416;
                    type_description_1 = "oooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_edge_slice;
                    var_edge_slice = tmp_assign_source_26;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_27;
                PyObject *tmp_left_name_15;
                PyObject *tmp_left_name_16;
                PyObject *tmp_right_name_15;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_right_name_16;
                tmp_left_name_16 = const_int_pos_2;
                CHECK_OBJECT( par_padded );
                tmp_subscribed_name_5 = par_padded;
                CHECK_OBJECT( var_edge_slice );
                tmp_subscript_name_5 = var_edge_slice;
                tmp_right_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                if ( tmp_right_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 418;
                    type_description_1 = "oooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_15 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_16, tmp_right_name_15 );
                Py_DECREF( tmp_right_name_15 );
                if ( tmp_left_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 418;
                    type_description_1 = "oooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_right_chunk );
                tmp_right_name_16 = var_right_chunk;
                tmp_assign_source_27 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_16 );
                Py_DECREF( tmp_left_name_15 );
                if ( tmp_assign_source_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 418;
                    type_description_1 = "oooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_right_chunk;
                    assert( old != NULL );
                    var_right_chunk = tmp_assign_source_27;
                    Py_DECREF( old );
                }

            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_left_name_17;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_source_name_2;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_right_name_17;
            CHECK_OBJECT( par_padded );
            tmp_source_name_2 = par_padded;
            tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
            if ( tmp_subscribed_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 421;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_6 = par_axis;
            tmp_left_name_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            Py_DECREF( tmp_subscribed_name_6 );
            if ( tmp_left_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 421;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_right_pad );
            tmp_right_name_17 = var_right_pad;
            tmp_assign_source_28 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_17 );
            Py_DECREF( tmp_left_name_17 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 421;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_start;
                assert( old != NULL );
                var_start = tmp_assign_source_28;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_left_name_18;
            PyObject *tmp_right_name_18;
            CHECK_OBJECT( var_start );
            tmp_left_name_18 = var_start;
            CHECK_OBJECT( var_chunk_length );
            tmp_right_name_18 = var_chunk_length;
            tmp_assign_source_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 422;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_stop;
                assert( old != NULL );
                var_stop = tmp_assign_source_29;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_start_name_6;
            PyObject *tmp_stop_name_6;
            PyObject *tmp_step_name_6;
            PyObject *tmp_args_element_name_16;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 423;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_8 = tmp_mvar_value_6;
            CHECK_OBJECT( var_start );
            tmp_start_name_6 = var_start;
            CHECK_OBJECT( var_stop );
            tmp_stop_name_6 = var_stop;
            tmp_step_name_6 = Py_None;
            tmp_args_element_name_15 = MAKE_SLICEOBJ3( tmp_start_name_6, tmp_stop_name_6, tmp_step_name_6 );
            assert( !(tmp_args_element_name_15 == NULL) );
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_16 = par_axis;
            frame_816903115c0df5b018ae50cd2d03b0a7->m_frame.f_lineno = 423;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_pad_area;
                var_pad_area = tmp_assign_source_30;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            CHECK_OBJECT( var_right_chunk );
            tmp_ass_subvalue_2 = var_right_chunk;
            CHECK_OBJECT( par_padded );
            tmp_ass_subscribed_2 = par_padded;
            CHECK_OBJECT( var_pad_area );
            tmp_ass_subscript_2 = var_pad_area;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 424;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_left_name_19;
            PyObject *tmp_right_name_19;
            CHECK_OBJECT( var_right_pad );
            tmp_left_name_19 = var_right_pad;
            CHECK_OBJECT( var_chunk_length );
            tmp_right_name_19 = var_chunk_length;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_19, tmp_right_name_19 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 426;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_31 = tmp_left_name_19;
            var_right_pad = tmp_assign_source_31;

        }
        branch_no_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_816903115c0df5b018ae50cd2d03b0a7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_816903115c0df5b018ae50cd2d03b0a7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_816903115c0df5b018ae50cd2d03b0a7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_816903115c0df5b018ae50cd2d03b0a7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_816903115c0df5b018ae50cd2d03b0a7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_816903115c0df5b018ae50cd2d03b0a7,
        type_description_1,
        par_padded,
        par_axis,
        par_width_pair,
        par_method,
        par_include_edge,
        var_left_pad,
        var_right_pad,
        var_old_length,
        var_edge_offset,
        var_chunk_length,
        var_stop,
        var_start,
        var_left_slice,
        var_left_chunk,
        var_edge_slice,
        var_pad_area,
        var_right_slice,
        var_right_chunk
    );


    // Release cached frame.
    if ( frame_816903115c0df5b018ae50cd2d03b0a7 == cache_frame_816903115c0df5b018ae50cd2d03b0a7 )
    {
        Py_DECREF( frame_816903115c0df5b018ae50cd2d03b0a7 );
    }
    cache_frame_816903115c0df5b018ae50cd2d03b0a7 = NULL;

    assertFrameObject( frame_816903115c0df5b018ae50cd2d03b0a7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_left_pad );
        tmp_tuple_element_1 = var_left_pad;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_right_pad );
        tmp_tuple_element_1 = var_right_pad;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_10__set_reflect_both );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_padded );
    Py_DECREF( par_padded );
    par_padded = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_width_pair );
    Py_DECREF( par_width_pair );
    par_width_pair = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_include_edge );
    Py_DECREF( par_include_edge );
    par_include_edge = NULL;

    CHECK_OBJECT( (PyObject *)var_left_pad );
    Py_DECREF( var_left_pad );
    var_left_pad = NULL;

    CHECK_OBJECT( (PyObject *)var_right_pad );
    Py_DECREF( var_right_pad );
    var_right_pad = NULL;

    CHECK_OBJECT( (PyObject *)var_old_length );
    Py_DECREF( var_old_length );
    var_old_length = NULL;

    CHECK_OBJECT( (PyObject *)var_edge_offset );
    Py_DECREF( var_edge_offset );
    var_edge_offset = NULL;

    Py_XDECREF( var_chunk_length );
    var_chunk_length = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_left_slice );
    var_left_slice = NULL;

    Py_XDECREF( var_left_chunk );
    var_left_chunk = NULL;

    Py_XDECREF( var_edge_slice );
    var_edge_slice = NULL;

    Py_XDECREF( var_pad_area );
    var_pad_area = NULL;

    Py_XDECREF( var_right_slice );
    var_right_slice = NULL;

    Py_XDECREF( var_right_chunk );
    var_right_chunk = NULL;

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

    CHECK_OBJECT( (PyObject *)par_padded );
    Py_DECREF( par_padded );
    par_padded = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_width_pair );
    Py_DECREF( par_width_pair );
    par_width_pair = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_include_edge );
    Py_DECREF( par_include_edge );
    par_include_edge = NULL;

    Py_XDECREF( var_left_pad );
    var_left_pad = NULL;

    Py_XDECREF( var_right_pad );
    var_right_pad = NULL;

    Py_XDECREF( var_old_length );
    var_old_length = NULL;

    Py_XDECREF( var_edge_offset );
    var_edge_offset = NULL;

    Py_XDECREF( var_chunk_length );
    var_chunk_length = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_left_slice );
    var_left_slice = NULL;

    Py_XDECREF( var_left_chunk );
    var_left_chunk = NULL;

    Py_XDECREF( var_edge_slice );
    var_edge_slice = NULL;

    Py_XDECREF( var_pad_area );
    var_pad_area = NULL;

    Py_XDECREF( var_right_slice );
    var_right_slice = NULL;

    Py_XDECREF( var_right_chunk );
    var_right_chunk = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_10__set_reflect_both );
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


static PyObject *impl_numpy$lib$arraypad$$$function_11__set_wrap_both( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_padded = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_width_pair = python_pars[ 2 ];
    PyObject *var_left_pad = NULL;
    PyObject *var_right_pad = NULL;
    PyObject *var_period = NULL;
    PyObject *var_new_left_pad = NULL;
    PyObject *var_new_right_pad = NULL;
    PyObject *var_right_slice = NULL;
    PyObject *var_right_chunk = NULL;
    PyObject *var_pad_area = NULL;
    PyObject *var_left_slice = NULL;
    PyObject *var_left_chunk = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3bf998e5c49f1e8e3bf35c6c2943ac19;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3bf998e5c49f1e8e3bf35c6c2943ac19 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3bf998e5c49f1e8e3bf35c6c2943ac19, codeobj_3bf998e5c49f1e8e3bf35c6c2943ac19, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3bf998e5c49f1e8e3bf35c6c2943ac19 = cache_frame_3bf998e5c49f1e8e3bf35c6c2943ac19;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3bf998e5c49f1e8e3bf35c6c2943ac19 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3bf998e5c49f1e8e3bf35c6c2943ac19 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_width_pair );
        tmp_iter_arg_1 = par_width_pair;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 451;
            type_description_1 = "ooooooooooooo";
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 451;
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 451;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 451;
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

            type_description_1 = "ooooooooooooo";
            exception_lineno = 451;
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
        assert( var_left_pad == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_left_pad = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_right_pad == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_right_pad = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_padded );
        tmp_source_name_1 = par_padded;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axis );
        tmp_subscript_name_1 = par_axis;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_right_pad );
        tmp_right_name_1 = var_right_pad;
        tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_left_pad );
        tmp_right_name_2 = var_left_pad;
        tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_period == NULL );
        var_period = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_int_0;
        assert( var_new_left_pad == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_new_left_pad = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_0;
        assert( var_new_right_pad == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_new_right_pad = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_left_pad );
        tmp_compexpr_left_1 = var_left_pad;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_start_name_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_stop_name_1;
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_step_name_1;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 466;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( var_right_pad );
            tmp_operand_name_1 = var_right_pad;
            tmp_left_name_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 467;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_2 != NULL );
            CHECK_OBJECT( var_period );
            tmp_args_element_name_2 = var_period;
            CHECK_OBJECT( var_left_pad );
            tmp_args_element_name_3 = var_left_pad;
            frame_3bf998e5c49f1e8e3bf35c6c2943ac19->m_frame.f_lineno = 467;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 467;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_start_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_start_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 467;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_right_pad );
            tmp_compexpr_left_2 = var_right_pad;
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_start_name_1 );

                exception_lineno = 468;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
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
            CHECK_OBJECT( var_right_pad );
            tmp_operand_name_2 = var_right_pad;
            tmp_stop_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
            if ( tmp_stop_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_start_name_1 );

                exception_lineno = 468;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_stop_name_1 = Py_None;
            Py_INCREF( tmp_stop_name_1 );
            condexpr_end_1:;
            tmp_step_name_1 = Py_None;
            tmp_args_element_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            Py_DECREF( tmp_start_name_1 );
            Py_DECREF( tmp_stop_name_1 );
            assert( !(tmp_args_element_name_1 == NULL) );
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_4 = par_axis;
            frame_3bf998e5c49f1e8e3bf35c6c2943ac19->m_frame.f_lineno = 466;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_4 };
                tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 466;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_right_slice == NULL );
            var_right_slice = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_padded );
            tmp_subscribed_name_2 = par_padded;
            CHECK_OBJECT( var_right_slice );
            tmp_subscript_name_2 = var_right_slice;
            tmp_assign_source_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 471;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_right_chunk == NULL );
            var_right_chunk = tmp_assign_source_10;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( var_left_pad );
            tmp_compexpr_left_3 = var_left_pad;
            CHECK_OBJECT( var_period );
            tmp_compexpr_right_3 = var_period;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 473;
                type_description_1 = "ooooooooooooo";
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
                PyObject *tmp_assign_source_11;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_start_name_2;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_stop_name_2;
                PyObject *tmp_step_name_2;
                PyObject *tmp_args_element_name_6;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 475;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_2;
                CHECK_OBJECT( var_left_pad );
                tmp_left_name_4 = var_left_pad;
                CHECK_OBJECT( var_period );
                tmp_right_name_4 = var_period;
                tmp_start_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
                if ( tmp_start_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 475;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_left_pad );
                tmp_stop_name_2 = var_left_pad;
                tmp_step_name_2 = Py_None;
                tmp_args_element_name_5 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                Py_DECREF( tmp_start_name_2 );
                assert( !(tmp_args_element_name_5 == NULL) );
                CHECK_OBJECT( par_axis );
                tmp_args_element_name_6 = par_axis;
                frame_3bf998e5c49f1e8e3bf35c6c2943ac19->m_frame.f_lineno = 475;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_5 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 475;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_pad_area == NULL );
                var_pad_area = tmp_assign_source_11;
            }
            {
                PyObject *tmp_assign_source_12;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                CHECK_OBJECT( var_left_pad );
                tmp_left_name_5 = var_left_pad;
                CHECK_OBJECT( var_period );
                tmp_right_name_5 = var_period;
                tmp_assign_source_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
                if ( tmp_assign_source_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 476;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_new_left_pad;
                    assert( old != NULL );
                    var_new_left_pad = tmp_assign_source_12;
                    Py_DECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_start_name_3;
                PyObject *tmp_stop_name_3;
                PyObject *tmp_step_name_3;
                PyObject *tmp_args_element_name_8;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 479;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_3;
                tmp_start_name_3 = Py_None;
                CHECK_OBJECT( var_left_pad );
                tmp_stop_name_3 = var_left_pad;
                tmp_step_name_3 = Py_None;
                tmp_args_element_name_7 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
                assert( !(tmp_args_element_name_7 == NULL) );
                CHECK_OBJECT( par_axis );
                tmp_args_element_name_8 = par_axis;
                frame_3bf998e5c49f1e8e3bf35c6c2943ac19->m_frame.f_lineno = 479;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_args_element_name_7 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 479;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_pad_area == NULL );
                var_pad_area = tmp_assign_source_13;
            }
            branch_end_2:;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( var_right_chunk );
            tmp_ass_subvalue_1 = var_right_chunk;
            CHECK_OBJECT( par_padded );
            tmp_ass_subscribed_1 = par_padded;
            CHECK_OBJECT( var_pad_area );
            tmp_ass_subscript_1 = var_pad_area;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 480;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_right_pad );
        tmp_compexpr_left_4 = var_right_pad;
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 482;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_start_name_4;
            PyObject *tmp_stop_name_4;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_step_name_4;
            PyObject *tmp_args_element_name_12;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 487;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_4;
            CHECK_OBJECT( var_left_pad );
            tmp_start_name_4 = var_left_pad;
            CHECK_OBJECT( var_left_pad );
            tmp_left_name_6 = var_left_pad;
            tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_6 != NULL );
            CHECK_OBJECT( var_period );
            tmp_args_element_name_10 = var_period;
            CHECK_OBJECT( var_right_pad );
            tmp_args_element_name_11 = var_right_pad;
            frame_3bf998e5c49f1e8e3bf35c6c2943ac19->m_frame.f_lineno = 488;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_right_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 488;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_stop_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_stop_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 488;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_4 = Py_None;
            tmp_args_element_name_9 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
            Py_DECREF( tmp_stop_name_4 );
            assert( !(tmp_args_element_name_9 == NULL) );
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_12 = par_axis;
            frame_3bf998e5c49f1e8e3bf35c6c2943ac19->m_frame.f_lineno = 487;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_12 };
                tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 487;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_left_slice == NULL );
            var_left_slice = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( par_padded );
            tmp_subscribed_name_3 = par_padded;
            CHECK_OBJECT( var_left_slice );
            tmp_subscript_name_3 = var_left_slice;
            tmp_assign_source_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 489;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_left_chunk == NULL );
            var_left_chunk = tmp_assign_source_15;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_right_pad );
            tmp_compexpr_left_5 = var_right_pad;
            CHECK_OBJECT( var_period );
            tmp_compexpr_right_5 = var_period;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 491;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_16;
                PyObject *tmp_called_name_7;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_start_name_5;
                PyObject *tmp_operand_name_3;
                PyObject *tmp_stop_name_5;
                PyObject *tmp_left_name_7;
                PyObject *tmp_operand_name_4;
                PyObject *tmp_right_name_7;
                PyObject *tmp_step_name_5;
                PyObject *tmp_args_element_name_14;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 493;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_7 = tmp_mvar_value_5;
                CHECK_OBJECT( var_right_pad );
                tmp_operand_name_3 = var_right_pad;
                tmp_start_name_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
                if ( tmp_start_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 494;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_right_pad );
                tmp_operand_name_4 = var_right_pad;
                tmp_left_name_7 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
                if ( tmp_left_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_start_name_5 );

                    exception_lineno = 494;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_period );
                tmp_right_name_7 = var_period;
                tmp_stop_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_left_name_7 );
                if ( tmp_stop_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_start_name_5 );

                    exception_lineno = 494;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_step_name_5 = Py_None;
                tmp_args_element_name_13 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
                Py_DECREF( tmp_start_name_5 );
                Py_DECREF( tmp_stop_name_5 );
                assert( !(tmp_args_element_name_13 == NULL) );
                CHECK_OBJECT( par_axis );
                tmp_args_element_name_14 = par_axis;
                frame_3bf998e5c49f1e8e3bf35c6c2943ac19->m_frame.f_lineno = 493;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_args_element_name_13 );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 493;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_pad_area;
                    var_pad_area = tmp_assign_source_16;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_8;
                CHECK_OBJECT( var_right_pad );
                tmp_left_name_8 = var_right_pad;
                CHECK_OBJECT( var_period );
                tmp_right_name_8 = var_period;
                tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
                if ( tmp_assign_source_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 495;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_new_right_pad;
                    assert( old != NULL );
                    var_new_right_pad = tmp_assign_source_17;
                    Py_DECREF( old );
                }

            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_assign_source_18;
                PyObject *tmp_called_name_8;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_15;
                PyObject *tmp_start_name_6;
                PyObject *tmp_operand_name_5;
                PyObject *tmp_stop_name_6;
                PyObject *tmp_step_name_6;
                PyObject *tmp_args_element_name_16;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__slice_at_axis );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_slice_at_axis" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 498;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_8 = tmp_mvar_value_6;
                CHECK_OBJECT( var_right_pad );
                tmp_operand_name_5 = var_right_pad;
                tmp_start_name_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_5 );
                if ( tmp_start_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 498;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_stop_name_6 = Py_None;
                tmp_step_name_6 = Py_None;
                tmp_args_element_name_15 = MAKE_SLICEOBJ3( tmp_start_name_6, tmp_stop_name_6, tmp_step_name_6 );
                Py_DECREF( tmp_start_name_6 );
                assert( !(tmp_args_element_name_15 == NULL) );
                CHECK_OBJECT( par_axis );
                tmp_args_element_name_16 = par_axis;
                frame_3bf998e5c49f1e8e3bf35c6c2943ac19->m_frame.f_lineno = 498;
                {
                    PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
                }

                Py_DECREF( tmp_args_element_name_15 );
                if ( tmp_assign_source_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 498;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_pad_area;
                    var_pad_area = tmp_assign_source_18;
                    Py_XDECREF( old );
                }

            }
            branch_end_4:;
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            CHECK_OBJECT( var_left_chunk );
            tmp_ass_subvalue_2 = var_left_chunk;
            CHECK_OBJECT( par_padded );
            tmp_ass_subscribed_2 = par_padded;
            CHECK_OBJECT( var_pad_area );
            tmp_ass_subscript_2 = var_pad_area;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 499;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_tuple_element_1;
        if ( var_new_left_pad == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_left_pad" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 501;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_new_left_pad;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( var_new_right_pad == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_right_pad" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 501;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_new_right_pad;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bf998e5c49f1e8e3bf35c6c2943ac19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bf998e5c49f1e8e3bf35c6c2943ac19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bf998e5c49f1e8e3bf35c6c2943ac19 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3bf998e5c49f1e8e3bf35c6c2943ac19, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3bf998e5c49f1e8e3bf35c6c2943ac19->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3bf998e5c49f1e8e3bf35c6c2943ac19, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3bf998e5c49f1e8e3bf35c6c2943ac19,
        type_description_1,
        par_padded,
        par_axis,
        par_width_pair,
        var_left_pad,
        var_right_pad,
        var_period,
        var_new_left_pad,
        var_new_right_pad,
        var_right_slice,
        var_right_chunk,
        var_pad_area,
        var_left_slice,
        var_left_chunk
    );


    // Release cached frame.
    if ( frame_3bf998e5c49f1e8e3bf35c6c2943ac19 == cache_frame_3bf998e5c49f1e8e3bf35c6c2943ac19 )
    {
        Py_DECREF( frame_3bf998e5c49f1e8e3bf35c6c2943ac19 );
    }
    cache_frame_3bf998e5c49f1e8e3bf35c6c2943ac19 = NULL;

    assertFrameObject( frame_3bf998e5c49f1e8e3bf35c6c2943ac19 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_11__set_wrap_both );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_padded );
    Py_DECREF( par_padded );
    par_padded = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_width_pair );
    Py_DECREF( par_width_pair );
    par_width_pair = NULL;

    CHECK_OBJECT( (PyObject *)var_left_pad );
    Py_DECREF( var_left_pad );
    var_left_pad = NULL;

    CHECK_OBJECT( (PyObject *)var_right_pad );
    Py_DECREF( var_right_pad );
    var_right_pad = NULL;

    CHECK_OBJECT( (PyObject *)var_period );
    Py_DECREF( var_period );
    var_period = NULL;

    Py_XDECREF( var_new_left_pad );
    var_new_left_pad = NULL;

    Py_XDECREF( var_new_right_pad );
    var_new_right_pad = NULL;

    Py_XDECREF( var_right_slice );
    var_right_slice = NULL;

    Py_XDECREF( var_right_chunk );
    var_right_chunk = NULL;

    Py_XDECREF( var_pad_area );
    var_pad_area = NULL;

    Py_XDECREF( var_left_slice );
    var_left_slice = NULL;

    Py_XDECREF( var_left_chunk );
    var_left_chunk = NULL;

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

    CHECK_OBJECT( (PyObject *)par_padded );
    Py_DECREF( par_padded );
    par_padded = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_width_pair );
    Py_DECREF( par_width_pair );
    par_width_pair = NULL;

    Py_XDECREF( var_left_pad );
    var_left_pad = NULL;

    Py_XDECREF( var_right_pad );
    var_right_pad = NULL;

    Py_XDECREF( var_period );
    var_period = NULL;

    Py_XDECREF( var_new_left_pad );
    var_new_left_pad = NULL;

    Py_XDECREF( var_new_right_pad );
    var_new_right_pad = NULL;

    Py_XDECREF( var_right_slice );
    var_right_slice = NULL;

    Py_XDECREF( var_right_chunk );
    var_right_chunk = NULL;

    Py_XDECREF( var_pad_area );
    var_pad_area = NULL;

    Py_XDECREF( var_left_slice );
    var_left_slice = NULL;

    Py_XDECREF( var_left_chunk );
    var_left_chunk = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_11__set_wrap_both );
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


static PyObject *impl_numpy$lib$arraypad$$$function_12__as_pairs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_ndim = python_pars[ 1 ];
    PyObject *par_as_index = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_0292ba3846fccf63e980a719a6af72db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0292ba3846fccf63e980a719a6af72db = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0292ba3846fccf63e980a719a6af72db, codeobj_0292ba3846fccf63e980a719a6af72db, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0292ba3846fccf63e980a719a6af72db = cache_frame_0292ba3846fccf63e980a719a6af72db;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0292ba3846fccf63e980a719a6af72db );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0292ba3846fccf63e980a719a6af72db ) == 2 ); // Frame stack

    // Framed code:
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_tuple_tuple_none_none_tuple_tuple;
            CHECK_OBJECT( par_ndim );
            tmp_right_name_1 = par_ndim;
            tmp_return_value = BINARY_OPERATION_MUL_TUPLE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 535;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 537;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_0292ba3846fccf63e980a719a6af72db->m_frame.f_lineno = 537;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_array, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 537;
            type_description_1 = "ooo";
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
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_as_index );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_as_index );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 538;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

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
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_2 = par_x;
            frame_0292ba3846fccf63e980a719a6af72db->m_frame.f_lineno = 539;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_source_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_round, call_args );
            }

            if ( tmp_source_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 539;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_astype );
            Py_DECREF( tmp_source_name_1 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 539;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 539;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_intp );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 539;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
            frame_0292ba3846fccf63e980a719a6af72db->m_frame.f_lineno = 539;
            tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 539;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert( old != NULL );
                par_x = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_x );
        tmp_source_name_3 = par_x;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 541;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 541;
            type_description_1 = "ooo";
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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_x );
            tmp_source_name_4 = par_x;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_size );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 546;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 546;
                type_description_1 = "ooo";
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
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_instance_3;
                CHECK_OBJECT( par_x );
                tmp_called_instance_3 = par_x;
                frame_0292ba3846fccf63e980a719a6af72db->m_frame.f_lineno = 548;
                tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_ravel );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 548;
                    type_description_1 = "ooo";
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
                nuitka_bool tmp_condition_result_5;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                int tmp_truth_name_2;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( par_as_index );
                tmp_truth_name_2 = CHECK_IF_TRUE( par_as_index );
                if ( tmp_truth_name_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 549;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                CHECK_OBJECT( par_x );
                tmp_compexpr_left_4 = par_x;
                tmp_compexpr_right_4 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 549;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_5 = tmp_and_right_value_1;
                goto and_end_1;
                and_left_1:;
                tmp_condition_result_5 = tmp_and_left_value_1;
                and_end_1:;
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
                    tmp_make_exception_arg_1 = const_str_digest_36c3e0ead60cb2e9773b4ea99207bccf;
                    frame_0292ba3846fccf63e980a719a6af72db->m_frame.f_lineno = 550;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_1 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_1 == NULL) );
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 550;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                branch_no_5:;
            }
            {
                PyObject *tmp_left_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT( par_x );
                tmp_subscribed_name_1 = par_x;
                tmp_subscript_name_1 = const_int_0;
                tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 551;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( par_x );
                tmp_subscribed_name_2 = par_x;
                tmp_subscript_name_2 = const_int_0;
                tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_tuple_element_2 );

                    exception_lineno = 551;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
                tmp_left_name_2 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_left_name_2, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( par_ndim );
                tmp_right_name_2 = par_ndim;
                tmp_return_value = BINARY_OPERATION_MUL_TUPLE_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 551;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_4:;
        }
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_5;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_x );
            tmp_source_name_5 = par_x;
            tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_size );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 553;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_5 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 553;
                type_description_1 = "ooo";
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
            CHECK_OBJECT( par_x );
            tmp_source_name_6 = par_x;
            tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_compexpr_left_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 553;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_6 = const_tuple_int_pos_2_int_pos_1_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_left_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 553;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
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
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_instance_4;
                CHECK_OBJECT( par_x );
                tmp_called_instance_4 = par_x;
                frame_0292ba3846fccf63e980a719a6af72db->m_frame.f_lineno = 558;
                tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_ravel );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 558;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_x;
                    assert( old != NULL );
                    par_x = tmp_assign_source_4;
                    Py_DECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_7;
                int tmp_and_left_truth_3;
                nuitka_bool tmp_and_left_value_3;
                nuitka_bool tmp_and_right_value_3;
                int tmp_truth_name_3;
                int tmp_or_left_truth_1;
                nuitka_bool tmp_or_left_value_1;
                nuitka_bool tmp_or_right_value_1;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                CHECK_OBJECT( par_as_index );
                tmp_truth_name_3 = CHECK_IF_TRUE( par_as_index );
                if ( tmp_truth_name_3 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 559;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_left_value_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                CHECK_OBJECT( par_x );
                tmp_subscribed_name_3 = par_x;
                tmp_subscript_name_3 = const_int_0;
                tmp_compexpr_left_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
                if ( tmp_compexpr_left_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 559;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_7 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                Py_DECREF( tmp_compexpr_left_7 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 559;
                    type_description_1 = "ooo";
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
                CHECK_OBJECT( par_x );
                tmp_subscribed_name_4 = par_x;
                tmp_subscript_name_4 = const_int_pos_1;
                tmp_compexpr_left_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
                if ( tmp_compexpr_left_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 559;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_8 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                Py_DECREF( tmp_compexpr_left_8 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 559;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_and_right_value_3 = tmp_or_right_value_1;
                goto or_end_1;
                or_left_1:;
                tmp_and_right_value_3 = tmp_or_left_value_1;
                or_end_1:;
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
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_make_exception_arg_2;
                    tmp_make_exception_arg_2 = const_str_digest_36c3e0ead60cb2e9773b4ea99207bccf;
                    frame_0292ba3846fccf63e980a719a6af72db->m_frame.f_lineno = 560;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_2 };
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_2 == NULL) );
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 560;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                branch_no_7:;
            }
            {
                PyObject *tmp_left_name_3;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscript_name_6;
                PyObject *tmp_right_name_3;
                CHECK_OBJECT( par_x );
                tmp_subscribed_name_5 = par_x;
                tmp_subscript_name_5 = const_int_0;
                tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 561;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_tuple_element_4, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( par_x );
                tmp_subscribed_name_6 = par_x;
                tmp_subscript_name_6 = const_int_pos_1;
                tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 1 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_tuple_element_4 );

                    exception_lineno = 561;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_tuple_element_4, 1, tmp_tuple_element_5 );
                tmp_left_name_3 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_left_name_3, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( par_ndim );
                tmp_right_name_3 = par_ndim;
                tmp_return_value = BINARY_OPERATION_MUL_TUPLE_OBJECT( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_3 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 561;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_6:;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        int tmp_truth_name_4;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT( par_as_index );
        tmp_truth_name_4 = CHECK_IF_TRUE( par_as_index );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 563;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_x );
        tmp_called_instance_5 = par_x;
        frame_0292ba3846fccf63e980a719a6af72db->m_frame.f_lineno = 563;
        tmp_compexpr_left_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_min );
        if ( tmp_compexpr_left_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 563;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        Py_DECREF( tmp_compexpr_left_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 563;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_8 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_8 = tmp_and_left_value_4;
        and_end_4:;
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_36c3e0ead60cb2e9773b4ea99207bccf;
            frame_0292ba3846fccf63e980a719a6af72db->m_frame.f_lineno = 564;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 564;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_8:;
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_tuple_element_6;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 568;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = tmp_mvar_value_4;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        CHECK_OBJECT( par_ndim );
        tmp_tuple_element_6 = par_ndim;
        tmp_args_element_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_6 );
        tmp_tuple_element_6 = const_int_pos_2;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_6 );
        frame_0292ba3846fccf63e980a719a6af72db->m_frame.f_lineno = 568;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_called_instance_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_broadcast_to, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_0292ba3846fccf63e980a719a6af72db->m_frame.f_lineno = 568;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_tolist );
        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0292ba3846fccf63e980a719a6af72db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0292ba3846fccf63e980a719a6af72db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0292ba3846fccf63e980a719a6af72db );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0292ba3846fccf63e980a719a6af72db, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0292ba3846fccf63e980a719a6af72db->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0292ba3846fccf63e980a719a6af72db, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0292ba3846fccf63e980a719a6af72db,
        type_description_1,
        par_x,
        par_ndim,
        par_as_index
    );


    // Release cached frame.
    if ( frame_0292ba3846fccf63e980a719a6af72db == cache_frame_0292ba3846fccf63e980a719a6af72db )
    {
        Py_DECREF( frame_0292ba3846fccf63e980a719a6af72db );
    }
    cache_frame_0292ba3846fccf63e980a719a6af72db = NULL;

    assertFrameObject( frame_0292ba3846fccf63e980a719a6af72db );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_12__as_pairs );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

    CHECK_OBJECT( (PyObject *)par_as_index );
    Py_DECREF( par_as_index );
    par_as_index = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

    CHECK_OBJECT( (PyObject *)par_as_index );
    Py_DECREF( par_as_index );
    par_as_index = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_12__as_pairs );
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


static PyObject *impl_numpy$lib$arraypad$$$function_13__pad_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_array = python_pars[ 0 ];
    PyObject *par_pad_width = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_array );
        tmp_tuple_element_1 = par_array;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_13__pad_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    CHECK_OBJECT( (PyObject *)par_pad_width );
    Py_DECREF( par_pad_width );
    par_pad_width = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_13__pad_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$arraypad$$$function_14_pad( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_array = python_pars[ 0 ];
    PyObject *par_pad_width = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    PyObject *var_function = NULL;
    PyObject *var_padded = NULL;
    PyObject *var__ = NULL;
    PyObject *var_axis = NULL;
    PyObject *var_view = NULL;
    PyObject *var_inds = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_allowed_kwargs = NULL;
    PyObject *var_unsupported_kwargs = NULL;
    PyObject *var_stat_functions = NULL;
    PyObject *var_original_area_slice = NULL;
    PyObject *var_axes = NULL;
    PyObject *var_values = NULL;
    PyObject *var_width_pair = NULL;
    PyObject *var_value_pair = NULL;
    PyObject *var_roi = NULL;
    PyObject *var_edge_pair = NULL;
    PyObject *var_end_values = NULL;
    PyObject *var_ramp_pair = NULL;
    PyObject *var_func = NULL;
    PyObject *var_length = NULL;
    PyObject *var_length_pair = NULL;
    PyObject *var_stat_pair = NULL;
    PyObject *var_method = NULL;
    PyObject *var_include_edge = NULL;
    PyObject *var_left_index = NULL;
    PyObject *var_right_index = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_for_loop_8__for_iterator = NULL;
    PyObject *tmp_for_loop_8__iter_value = NULL;
    PyObject *tmp_for_loop_9__for_iterator = NULL;
    PyObject *tmp_for_loop_9__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_tuple_unpack_11__element_1 = NULL;
    PyObject *tmp_tuple_unpack_11__element_2 = NULL;
    PyObject *tmp_tuple_unpack_11__source_iter = NULL;
    PyObject *tmp_tuple_unpack_12__element_1 = NULL;
    PyObject *tmp_tuple_unpack_12__element_2 = NULL;
    PyObject *tmp_tuple_unpack_12__source_iter = NULL;
    PyObject *tmp_tuple_unpack_13__element_1 = NULL;
    PyObject *tmp_tuple_unpack_13__element_2 = NULL;
    PyObject *tmp_tuple_unpack_13__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__element_3 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_tuple_unpack_9__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5c7ecefaee6e383339573fd2b91cb39a;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
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
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    static struct Nuitka_FrameObject *cache_frame_5c7ecefaee6e383339573fd2b91cb39a = NULL;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5c7ecefaee6e383339573fd2b91cb39a, codeobj_5c7ecefaee6e383339573fd2b91cb39a, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5c7ecefaee6e383339573fd2b91cb39a = cache_frame_5c7ecefaee6e383339573fd2b91cb39a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5c7ecefaee6e383339573fd2b91cb39a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5c7ecefaee6e383339573fd2b91cb39a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 786;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_array );
        tmp_args_element_name_1 = par_array;
        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 786;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 786;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_array;
            assert( old != NULL );
            par_array = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 787;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_pad_width );
        tmp_args_element_name_2 = par_pad_width;
        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 787;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 787;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_pad_width;
            assert( old != NULL );
            par_pad_width = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_pad_width );
        tmp_source_name_2 = par_pad_width;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 789;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_kind );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 789;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_i;
        tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 789;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 789;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_c04f8465d9a92ee9b38f5e390057f4fb;
            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 790;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 790;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__as_pairs );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__as_pairs );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_as_pairs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 793;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_pad_width );
        tmp_tuple_element_1 = par_pad_width;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_array );
        tmp_source_name_3 = par_array;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 793;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_a49cf6d67d73ee9b51dbb6169697ab19 );
        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 793;
        tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 793;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_pad_width;
            assert( old != NULL );
            par_pad_width = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        int tmp_truth_name_1;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_callable );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( par_mode );
        tmp_args_element_name_3 = par_mode;
        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 795;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 795;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 795;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( par_mode );
            tmp_assign_source_4 = par_mode;
            assert( var_function == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_function = tmp_assign_source_4;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__pad_simple );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pad_simple );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_pad_simple" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 799;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_3 = tmp_mvar_value_4;
            CHECK_OBJECT( par_array );
            tmp_tuple_element_2 = par_array;
            tmp_args_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_pad_width );
            tmp_tuple_element_2 = par_pad_width;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_e24c06a0a11b6d4526a84b33486b9123 );
            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 799;
            tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 799;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 799;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 799;
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 799;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        exception_lineno = 799;
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

                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 799;
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
            assert( var_padded == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_padded = tmp_assign_source_8;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
            assert( var__ == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var__ = tmp_assign_source_9;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( var_padded );
            tmp_source_name_4 = var_padded;
            tmp_xrange_low_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndim );
            if ( tmp_xrange_low_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 802;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
            Py_DECREF( tmp_xrange_low_1 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 802;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 802;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
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
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 802;
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
                PyObject *old = var_axis;
                var_axis = tmp_assign_source_12;
                Py_INCREF( var_axis );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 807;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_instance_3 = tmp_mvar_value_5;
            CHECK_OBJECT( var_padded );
            tmp_args_element_name_4 = var_padded;
            CHECK_OBJECT( var_axis );
            tmp_args_element_name_5 = var_axis;
            tmp_args_element_name_6 = const_int_neg_1;
            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 807;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_assign_source_13 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain_moveaxis, call_args );
            }

            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 807;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = var_view;
                var_view = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_ndindex );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ndindex );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ndindex" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 811;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_4 = tmp_mvar_value_6;
            CHECK_OBJECT( var_view );
            tmp_source_name_5 = var_view;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 811;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_subscript_name_1 = const_slice_none_int_neg_1_none;
            tmp_args_element_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 811;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 811;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 811;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = var_inds;
                var_inds = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_iter_arg_3;
                CHECK_OBJECT( var_inds );
                tmp_iter_arg_3 = var_inds;
                tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_3 );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 812;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = tmp_genexpr_1__$0;
                    tmp_genexpr_1__$0 = tmp_assign_source_16;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            tmp_assign_source_15 = numpy$lib$arraypad$$$function_14_pad$$$genexpr_1_genexpr_maker();

            ((struct Nuitka_GeneratorObject *)tmp_assign_source_15)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


            goto try_return_handler_5;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_14_pad );
            return NULL;
            // Return handler code:
            try_return_handler_5:;
            CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
            Py_DECREF( tmp_genexpr_1__$0 );
            tmp_genexpr_1__$0 = NULL;

            goto outline_result_1;
            // End of try:
            CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
            Py_DECREF( tmp_genexpr_1__$0 );
            tmp_genexpr_1__$0 = NULL;

            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_14_pad );
            return NULL;
            outline_result_1:;
            {
                PyObject *old = var_inds;
                assert( old != NULL );
                var_inds = tmp_assign_source_15;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT( var_inds );
            tmp_iter_arg_4 = var_inds;
            tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_4 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 813;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_for_loop_2__for_iterator;
                tmp_for_loop_2__for_iterator = tmp_assign_source_17;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_18 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 813;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_18;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_19 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_ind;
                var_ind = tmp_assign_source_19;
                Py_INCREF( var_ind );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            CHECK_OBJECT( var_function );
            tmp_called_name_5 = var_function;
            CHECK_OBJECT( var_view );
            tmp_subscribed_name_2 = var_view;
            CHECK_OBJECT( var_ind );
            tmp_subscript_name_2 = var_ind;
            tmp_args_element_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 814;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( par_pad_width );
            tmp_subscribed_name_3 = par_pad_width;
            CHECK_OBJECT( var_axis );
            tmp_subscript_name_3 = var_axis;
            tmp_args_element_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );

                exception_lineno = 814;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( var_axis );
            tmp_args_element_name_10 = var_axis;
            CHECK_OBJECT( par_kwargs );
            tmp_args_element_name_11 = par_kwargs;
            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 814;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 814;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 813;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
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

        goto try_except_handler_4;
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


            exception_lineno = 802;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
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

        CHECK_OBJECT( var_padded );
        tmp_return_value = var_padded;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = DEEP_COPY( const_dict_787eda1103da1ea39cbb770f6d104ce2 );
        assert( var_allowed_kwargs == NULL );
        var_allowed_kwargs = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_set_arg_2;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_key_name_1;
        CHECK_OBJECT( par_kwargs );
        tmp_set_arg_1 = par_kwargs;
        tmp_left_name_1 = PySet_New( tmp_set_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 831;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_allowed_kwargs );
        tmp_dict_name_1 = var_allowed_kwargs;
        CHECK_OBJECT( par_mode );
        tmp_key_name_1 = par_mode;
        tmp_set_arg_2 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_set_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 831;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_right_name_1 = PySet_New( tmp_set_arg_2 );
        Py_DECREF( tmp_set_arg_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 831;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_21 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        assert( !(tmp_assign_source_21 == NULL) );
        assert( var_unsupported_kwargs == NULL );
        var_unsupported_kwargs = tmp_assign_source_21;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_5c7ecefaee6e383339573fd2b91cb39a, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_5c7ecefaee6e383339573fd2b91cb39a, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 832;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
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
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_12;
            tmp_called_instance_4 = const_str_digest_3fe443fba0ae6931993411663f59f3df;
            CHECK_OBJECT( par_mode );
            tmp_args_element_name_12 = par_mode;
            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 833;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_make_exception_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_format, call_args );
            }

            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 833;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 833;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 833;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        goto branch_end_3;
        branch_no_3:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 830;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame) frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_8;
        branch_end_3:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_14_pad );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_5:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_unsupported_kwargs );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_unsupported_kwargs );
        assert( !(tmp_truth_name_2 == -1) );
        tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            tmp_called_instance_5 = const_str_digest_c4c43a43772e74668c61aa86a57b8af6;
            CHECK_OBJECT( par_mode );
            tmp_args_element_name_13 = par_mode;
            CHECK_OBJECT( var_unsupported_kwargs );
            tmp_args_element_name_14 = var_unsupported_kwargs;
            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 835;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                tmp_make_exception_arg_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_format, call_args );
            }

            if ( tmp_make_exception_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 835;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 835;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_3 );
            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 835;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_10;
        tmp_dict_key_1 = const_str_plain_maximum;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 838;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_7;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_max );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 838;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_minimum;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_assign_source_22 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 838;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_8;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_min );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_22 );

            exception_lineno = 838;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_22, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_mean;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_assign_source_22 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 839;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_9;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_mean );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_22 );

            exception_lineno = 839;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_22, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_median;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_assign_source_22 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 839;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_10;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_median );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_22 );

            exception_lineno = 839;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_22, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        assert( var_stat_functions == NULL );
        var_stat_functions = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__pad_simple );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pad_simple );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_pad_simple" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 843;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_name_6 = tmp_mvar_value_11;
        CHECK_OBJECT( par_array );
        tmp_args_element_name_15 = par_array;
        CHECK_OBJECT( par_pad_width );
        tmp_args_element_name_16 = par_pad_width;
        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 843;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
            tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 843;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 843;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 843;
            goto try_except_handler_10;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 843;
            goto try_except_handler_10;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_25;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 843;
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

            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 843;
            goto try_except_handler_10;
        }
    }
    goto try_end_6;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
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
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_26 = tmp_tuple_unpack_2__element_1;
        assert( var_padded == NULL );
        Py_INCREF( tmp_assign_source_26 );
        var_padded = tmp_assign_source_26;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_27 = tmp_tuple_unpack_2__element_2;
        assert( var_original_area_slice == NULL );
        Py_INCREF( tmp_assign_source_27 );
        var_original_area_slice = tmp_assign_source_27;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( var_padded );
        tmp_source_name_10 = var_padded;
        tmp_xrange_low_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ndim );
        if ( tmp_xrange_low_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 846;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = BUILTIN_XRANGE1( tmp_xrange_low_2 );
        Py_DECREF( tmp_xrange_low_2 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 846;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_axes == NULL );
        var_axes = tmp_assign_source_28;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_3 = par_mode;
        tmp_compexpr_right_3 = const_str_plain_constant;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 848;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_instance_6;
            CHECK_OBJECT( par_kwargs );
            tmp_called_instance_6 = par_kwargs;
            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 849;
            tmp_assign_source_29 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_constant_values_int_0_tuple, 0 ) );

            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 849;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_values == NULL );
            var_values = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_source_name_11;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__as_pairs );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__as_pairs );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_as_pairs" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 850;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_12;
            CHECK_OBJECT( var_values );
            tmp_args_element_name_17 = var_values;
            CHECK_OBJECT( var_padded );
            tmp_source_name_11 = var_padded;
            tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_ndim );
            if ( tmp_args_element_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 850;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 850;
            {
                PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
                tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_18 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 850;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_values;
                assert( old != NULL );
                var_values = tmp_assign_source_30;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_args_element_name_21;
            tmp_called_name_8 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT( var_axes );
            tmp_args_element_name_19 = var_axes;
            CHECK_OBJECT( par_pad_width );
            tmp_args_element_name_20 = par_pad_width;
            CHECK_OBJECT( var_values );
            tmp_args_element_name_21 = var_values;
            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 851;
            {
                PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
                tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
            }

            if ( tmp_iter_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 851;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_6 );
            Py_DECREF( tmp_iter_arg_6 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 851;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_3__for_iterator == NULL );
            tmp_for_loop_3__for_iterator = tmp_assign_source_31;
        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_32;
            CHECK_OBJECT( tmp_for_loop_3__for_iterator );
            tmp_next_source_3 = tmp_for_loop_3__for_iterator;
            tmp_assign_source_32 = ITERATOR_NEXT( tmp_next_source_3 );
            if ( tmp_assign_source_32 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 851;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_for_loop_3__iter_value;
                tmp_for_loop_3__iter_value = tmp_assign_source_32;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_iter_arg_7;
            CHECK_OBJECT( tmp_for_loop_3__iter_value );
            tmp_iter_arg_7 = tmp_for_loop_3__iter_value;
            tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_7 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 851;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__source_iter;
                tmp_tuple_unpack_3__source_iter = tmp_assign_source_33;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_5, 0, 3 );
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 851;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_1;
                tmp_tuple_unpack_3__element_1 = tmp_assign_source_34;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_35 = UNPACK_NEXT( tmp_unpack_6, 1, 3 );
            if ( tmp_assign_source_35 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 851;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_2;
                tmp_tuple_unpack_3__element_2 = tmp_assign_source_35;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_36 = UNPACK_NEXT( tmp_unpack_7, 2, 3 );
            if ( tmp_assign_source_36 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 851;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_3;
                tmp_tuple_unpack_3__element_3 = tmp_assign_source_36;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        exception_lineno = 851;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 851;
                goto try_except_handler_13;
            }
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_13:;
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

        goto try_except_handler_12;
        // End of try:
        try_end_8:;
        goto try_end_9;
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

        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        try_end_9:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        {
            PyObject *tmp_assign_source_37;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_37 = tmp_tuple_unpack_3__element_1;
            {
                PyObject *old = var_axis;
                var_axis = tmp_assign_source_37;
                Py_INCREF( var_axis );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_38;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_38 = tmp_tuple_unpack_3__element_2;
            {
                PyObject *old = var_width_pair;
                var_width_pair = tmp_assign_source_38;
                Py_INCREF( var_width_pair );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_assign_source_39;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
            tmp_assign_source_39 = tmp_tuple_unpack_3__element_3;
            {
                PyObject *old = var_value_pair;
                var_value_pair = tmp_assign_source_39;
                Py_INCREF( var_value_pair );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_args_element_name_24;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__view_roi );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__view_roi );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_view_roi" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 852;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }

            tmp_called_name_9 = tmp_mvar_value_13;
            CHECK_OBJECT( var_padded );
            tmp_args_element_name_22 = var_padded;
            CHECK_OBJECT( var_original_area_slice );
            tmp_args_element_name_23 = var_original_area_slice;
            CHECK_OBJECT( var_axis );
            tmp_args_element_name_24 = var_axis;
            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 852;
            {
                PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24 };
                tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
            }

            if ( tmp_assign_source_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 852;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            {
                PyObject *old = var_roi;
                var_roi = tmp_assign_source_40;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_args_element_name_28;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__set_pad_area );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__set_pad_area );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_set_pad_area" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 853;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }

            tmp_called_name_10 = tmp_mvar_value_14;
            CHECK_OBJECT( var_roi );
            tmp_args_element_name_25 = var_roi;
            CHECK_OBJECT( var_axis );
            tmp_args_element_name_26 = var_axis;
            CHECK_OBJECT( var_width_pair );
            tmp_args_element_name_27 = var_width_pair;
            CHECK_OBJECT( var_value_pair );
            tmp_args_element_name_28 = var_value_pair;
            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 853;
            {
                PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_10, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 853;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 851;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        goto loop_start_3;
        loop_end_3:;
        goto try_end_10;
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
        try_end_10:;
        Py_XDECREF( tmp_for_loop_3__iter_value );
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
        Py_DECREF( tmp_for_loop_3__for_iterator );
        tmp_for_loop_3__for_iterator = NULL;

        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( par_mode );
            tmp_compexpr_left_4 = par_mode;
            tmp_compexpr_right_4 = const_str_plain_empty;
            tmp_operand_name_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 855;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 855;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
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
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_source_name_12;
                CHECK_OBJECT( par_array );
                tmp_source_name_12 = par_array;
                tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_size );
                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 858;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_5 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 858;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
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
                {
                    PyObject *tmp_assign_source_41;
                    PyObject *tmp_iter_arg_8;
                    PyObject *tmp_called_name_11;
                    PyObject *tmp_args_element_name_29;
                    PyObject *tmp_args_element_name_30;
                    tmp_called_name_11 = (PyObject *)&PyZip_Type;
                    CHECK_OBJECT( var_axes );
                    tmp_args_element_name_29 = var_axes;
                    CHECK_OBJECT( par_pad_width );
                    tmp_args_element_name_30 = par_pad_width;
                    frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 862;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30 };
                        tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
                    }

                    if ( tmp_iter_arg_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 862;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_41 = MAKE_ITERATOR( tmp_iter_arg_8 );
                    Py_DECREF( tmp_iter_arg_8 );
                    if ( tmp_assign_source_41 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 862;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( tmp_for_loop_4__for_iterator == NULL );
                    tmp_for_loop_4__for_iterator = tmp_assign_source_41;
                }
                // Tried code:
                loop_start_4:;
                {
                    PyObject *tmp_next_source_4;
                    PyObject *tmp_assign_source_42;
                    CHECK_OBJECT( tmp_for_loop_4__for_iterator );
                    tmp_next_source_4 = tmp_for_loop_4__for_iterator;
                    tmp_assign_source_42 = ITERATOR_NEXT( tmp_next_source_4 );
                    if ( tmp_assign_source_42 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_4;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            exception_lineno = 862;
                            goto try_except_handler_14;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_4__iter_value;
                        tmp_for_loop_4__iter_value = tmp_assign_source_42;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_43;
                    PyObject *tmp_iter_arg_9;
                    CHECK_OBJECT( tmp_for_loop_4__iter_value );
                    tmp_iter_arg_9 = tmp_for_loop_4__iter_value;
                    tmp_assign_source_43 = MAKE_ITERATOR( tmp_iter_arg_9 );
                    if ( tmp_assign_source_43 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 862;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_15;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_4__source_iter;
                        tmp_tuple_unpack_4__source_iter = tmp_assign_source_43;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_44;
                    PyObject *tmp_unpack_8;
                    CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
                    tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
                    tmp_assign_source_44 = UNPACK_NEXT( tmp_unpack_8, 0, 2 );
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


                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        exception_lineno = 862;
                        goto try_except_handler_16;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_4__element_1;
                        tmp_tuple_unpack_4__element_1 = tmp_assign_source_44;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_45;
                    PyObject *tmp_unpack_9;
                    CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
                    tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
                    tmp_assign_source_45 = UNPACK_NEXT( tmp_unpack_9, 1, 2 );
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


                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        exception_lineno = 862;
                        goto try_except_handler_16;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_4__element_2;
                        tmp_tuple_unpack_4__element_2 = tmp_assign_source_45;
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

                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                exception_lineno = 862;
                                goto try_except_handler_16;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        exception_lineno = 862;
                        goto try_except_handler_16;
                    }
                }
                goto try_end_11;
                // Exception handler code:
                try_except_handler_16:;
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

                goto try_except_handler_15;
                // End of try:
                try_end_11:;
                goto try_end_12;
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

                Py_XDECREF( tmp_tuple_unpack_4__element_1 );
                tmp_tuple_unpack_4__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_4__element_2 );
                tmp_tuple_unpack_4__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_13;
                exception_value = exception_keeper_value_13;
                exception_tb = exception_keeper_tb_13;
                exception_lineno = exception_keeper_lineno_13;

                goto try_except_handler_14;
                // End of try:
                try_end_12:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
                Py_DECREF( tmp_tuple_unpack_4__source_iter );
                tmp_tuple_unpack_4__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_46;
                    CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
                    tmp_assign_source_46 = tmp_tuple_unpack_4__element_1;
                    {
                        PyObject *old = var_axis;
                        var_axis = tmp_assign_source_46;
                        Py_INCREF( var_axis );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_4__element_1 );
                tmp_tuple_unpack_4__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_47;
                    CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
                    tmp_assign_source_47 = tmp_tuple_unpack_4__element_2;
                    {
                        PyObject *old = var_width_pair;
                        var_width_pair = tmp_assign_source_47;
                        Py_INCREF( var_width_pair );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_4__element_2 );
                tmp_tuple_unpack_4__element_2 = NULL;

                {
                    nuitka_bool tmp_condition_result_8;
                    int tmp_and_left_truth_1;
                    nuitka_bool tmp_and_left_value_1;
                    nuitka_bool tmp_and_right_value_1;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_subscript_name_4;
                    PyObject *tmp_called_name_12;
                    PyObject *tmp_call_result_4;
                    PyObject *tmp_args_element_name_31;
                    int tmp_truth_name_3;
                    CHECK_OBJECT( par_array );
                    tmp_source_name_13 = par_array;
                    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_shape );
                    if ( tmp_subscribed_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 863;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_14;
                    }
                    CHECK_OBJECT( var_axis );
                    tmp_subscript_name_4 = var_axis;
                    tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                    Py_DECREF( tmp_subscribed_name_4 );
                    if ( tmp_compexpr_left_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 863;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_14;
                    }
                    tmp_compexpr_right_6 = const_int_0;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                    Py_DECREF( tmp_compexpr_left_6 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 863;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_14;
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
                    tmp_called_name_12 = LOOKUP_BUILTIN( const_str_plain_any );
                    assert( tmp_called_name_12 != NULL );
                    CHECK_OBJECT( var_width_pair );
                    tmp_args_element_name_31 = var_width_pair;
                    frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 863;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_31 };
                        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
                    }

                    if ( tmp_call_result_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 863;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_14;
                    }
                    tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_4 );
                    if ( tmp_truth_name_3 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_call_result_4 );

                        exception_lineno = 863;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_14;
                    }
                    tmp_and_right_value_1 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    Py_DECREF( tmp_call_result_4 );
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
                        PyObject *tmp_called_instance_7;
                        PyObject *tmp_args_element_name_32;
                        tmp_called_instance_7 = const_str_digest_b39de0d9d89a6ab08ca6ee2fd060a3c6;
                        CHECK_OBJECT( var_axis );
                        tmp_args_element_name_32 = var_axis;
                        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 865;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_32 };
                            tmp_make_exception_arg_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_format, call_args );
                        }

                        if ( tmp_make_exception_arg_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 865;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_14;
                        }
                        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 864;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_4 };
                            tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        Py_DECREF( tmp_make_exception_arg_4 );
                        assert( !(tmp_raise_type_4 == NULL) );
                        exception_type = tmp_raise_type_4;
                        exception_lineno = 864;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_14;
                    }
                    branch_no_8:;
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 862;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                goto loop_start_4;
                loop_end_4:;
                goto try_end_13;
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

                Py_XDECREF( tmp_for_loop_4__iter_value );
                tmp_for_loop_4__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
                Py_DECREF( tmp_for_loop_4__for_iterator );
                tmp_for_loop_4__for_iterator = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_14;
                exception_value = exception_keeper_value_14;
                exception_tb = exception_keeper_tb_14;
                exception_lineno = exception_keeper_lineno_14;

                goto frame_exception_exit_1;
                // End of try:
                try_end_13:;
                Py_XDECREF( tmp_for_loop_4__iter_value );
                tmp_for_loop_4__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
                Py_DECREF( tmp_for_loop_4__for_iterator );
                tmp_for_loop_4__for_iterator = NULL;

                goto branch_end_7;
                branch_no_7:;
                {
                    nuitka_bool tmp_condition_result_9;
                    PyObject *tmp_compexpr_left_7;
                    PyObject *tmp_compexpr_right_7;
                    CHECK_OBJECT( par_mode );
                    tmp_compexpr_left_7 = par_mode;
                    tmp_compexpr_right_7 = const_str_plain_edge;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 871;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
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
                        PyObject *tmp_assign_source_48;
                        PyObject *tmp_iter_arg_10;
                        PyObject *tmp_called_name_13;
                        PyObject *tmp_args_element_name_33;
                        PyObject *tmp_args_element_name_34;
                        tmp_called_name_13 = (PyObject *)&PyZip_Type;
                        CHECK_OBJECT( var_axes );
                        tmp_args_element_name_33 = var_axes;
                        CHECK_OBJECT( par_pad_width );
                        tmp_args_element_name_34 = par_pad_width;
                        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 872;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_33, tmp_args_element_name_34 };
                            tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
                        }

                        if ( tmp_iter_arg_10 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 872;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_48 = MAKE_ITERATOR( tmp_iter_arg_10 );
                        Py_DECREF( tmp_iter_arg_10 );
                        if ( tmp_assign_source_48 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 872;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( tmp_for_loop_5__for_iterator == NULL );
                        tmp_for_loop_5__for_iterator = tmp_assign_source_48;
                    }
                    // Tried code:
                    loop_start_5:;
                    {
                        PyObject *tmp_next_source_5;
                        PyObject *tmp_assign_source_49;
                        CHECK_OBJECT( tmp_for_loop_5__for_iterator );
                        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
                        tmp_assign_source_49 = ITERATOR_NEXT( tmp_next_source_5 );
                        if ( tmp_assign_source_49 == NULL )
                        {
                            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                            {

                                goto loop_end_5;
                            }
                            else
                            {

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                exception_lineno = 872;
                                goto try_except_handler_17;
                            }
                        }

                        {
                            PyObject *old = tmp_for_loop_5__iter_value;
                            tmp_for_loop_5__iter_value = tmp_assign_source_49;
                            Py_XDECREF( old );
                        }

                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_50;
                        PyObject *tmp_iter_arg_11;
                        CHECK_OBJECT( tmp_for_loop_5__iter_value );
                        tmp_iter_arg_11 = tmp_for_loop_5__iter_value;
                        tmp_assign_source_50 = MAKE_ITERATOR( tmp_iter_arg_11 );
                        if ( tmp_assign_source_50 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 872;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_18;
                        }
                        {
                            PyObject *old = tmp_tuple_unpack_5__source_iter;
                            tmp_tuple_unpack_5__source_iter = tmp_assign_source_50;
                            Py_XDECREF( old );
                        }

                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_51;
                        PyObject *tmp_unpack_10;
                        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
                        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
                        tmp_assign_source_51 = UNPACK_NEXT( tmp_unpack_10, 0, 2 );
                        if ( tmp_assign_source_51 == NULL )
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


                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            exception_lineno = 872;
                            goto try_except_handler_19;
                        }
                        {
                            PyObject *old = tmp_tuple_unpack_5__element_1;
                            tmp_tuple_unpack_5__element_1 = tmp_assign_source_51;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_52;
                        PyObject *tmp_unpack_11;
                        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
                        tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
                        tmp_assign_source_52 = UNPACK_NEXT( tmp_unpack_11, 1, 2 );
                        if ( tmp_assign_source_52 == NULL )
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


                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            exception_lineno = 872;
                            goto try_except_handler_19;
                        }
                        {
                            PyObject *old = tmp_tuple_unpack_5__element_2;
                            tmp_tuple_unpack_5__element_2 = tmp_assign_source_52;
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

                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    exception_lineno = 872;
                                    goto try_except_handler_19;
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

                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            exception_lineno = 872;
                            goto try_except_handler_19;
                        }
                    }
                    goto try_end_14;
                    // Exception handler code:
                    try_except_handler_19:;
                    exception_keeper_type_15 = exception_type;
                    exception_keeper_value_15 = exception_value;
                    exception_keeper_tb_15 = exception_tb;
                    exception_keeper_lineno_15 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
                    Py_DECREF( tmp_tuple_unpack_5__source_iter );
                    tmp_tuple_unpack_5__source_iter = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_15;
                    exception_value = exception_keeper_value_15;
                    exception_tb = exception_keeper_tb_15;
                    exception_lineno = exception_keeper_lineno_15;

                    goto try_except_handler_18;
                    // End of try:
                    try_end_14:;
                    goto try_end_15;
                    // Exception handler code:
                    try_except_handler_18:;
                    exception_keeper_type_16 = exception_type;
                    exception_keeper_value_16 = exception_value;
                    exception_keeper_tb_16 = exception_tb;
                    exception_keeper_lineno_16 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
                    tmp_tuple_unpack_5__element_1 = NULL;

                    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
                    tmp_tuple_unpack_5__element_2 = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_16;
                    exception_value = exception_keeper_value_16;
                    exception_tb = exception_keeper_tb_16;
                    exception_lineno = exception_keeper_lineno_16;

                    goto try_except_handler_17;
                    // End of try:
                    try_end_15:;
                    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
                    Py_DECREF( tmp_tuple_unpack_5__source_iter );
                    tmp_tuple_unpack_5__source_iter = NULL;

                    {
                        PyObject *tmp_assign_source_53;
                        CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
                        tmp_assign_source_53 = tmp_tuple_unpack_5__element_1;
                        {
                            PyObject *old = var_axis;
                            var_axis = tmp_assign_source_53;
                            Py_INCREF( var_axis );
                            Py_XDECREF( old );
                        }

                    }
                    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
                    tmp_tuple_unpack_5__element_1 = NULL;

                    {
                        PyObject *tmp_assign_source_54;
                        CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
                        tmp_assign_source_54 = tmp_tuple_unpack_5__element_2;
                        {
                            PyObject *old = var_width_pair;
                            var_width_pair = tmp_assign_source_54;
                            Py_INCREF( var_width_pair );
                            Py_XDECREF( old );
                        }

                    }
                    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
                    tmp_tuple_unpack_5__element_2 = NULL;

                    {
                        PyObject *tmp_assign_source_55;
                        PyObject *tmp_called_name_14;
                        PyObject *tmp_mvar_value_15;
                        PyObject *tmp_args_element_name_35;
                        PyObject *tmp_args_element_name_36;
                        PyObject *tmp_args_element_name_37;
                        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__view_roi );

                        if (unlikely( tmp_mvar_value_15 == NULL ))
                        {
                            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__view_roi );
                        }

                        if ( tmp_mvar_value_15 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_view_roi" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 873;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_17;
                        }

                        tmp_called_name_14 = tmp_mvar_value_15;
                        CHECK_OBJECT( var_padded );
                        tmp_args_element_name_35 = var_padded;
                        CHECK_OBJECT( var_original_area_slice );
                        tmp_args_element_name_36 = var_original_area_slice;
                        CHECK_OBJECT( var_axis );
                        tmp_args_element_name_37 = var_axis;
                        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 873;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_35, tmp_args_element_name_36, tmp_args_element_name_37 };
                            tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
                        }

                        if ( tmp_assign_source_55 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 873;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_17;
                        }
                        {
                            PyObject *old = var_roi;
                            var_roi = tmp_assign_source_55;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_56;
                        PyObject *tmp_called_name_15;
                        PyObject *tmp_mvar_value_16;
                        PyObject *tmp_args_element_name_38;
                        PyObject *tmp_args_element_name_39;
                        PyObject *tmp_args_element_name_40;
                        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__get_edges );

                        if (unlikely( tmp_mvar_value_16 == NULL ))
                        {
                            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_edges );
                        }

                        if ( tmp_mvar_value_16 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_edges" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 874;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_17;
                        }

                        tmp_called_name_15 = tmp_mvar_value_16;
                        CHECK_OBJECT( var_roi );
                        tmp_args_element_name_38 = var_roi;
                        CHECK_OBJECT( var_axis );
                        tmp_args_element_name_39 = var_axis;
                        CHECK_OBJECT( var_width_pair );
                        tmp_args_element_name_40 = var_width_pair;
                        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 874;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_38, tmp_args_element_name_39, tmp_args_element_name_40 };
                            tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_15, call_args );
                        }

                        if ( tmp_assign_source_56 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 874;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_17;
                        }
                        {
                            PyObject *old = var_edge_pair;
                            var_edge_pair = tmp_assign_source_56;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_called_name_16;
                        PyObject *tmp_mvar_value_17;
                        PyObject *tmp_call_result_5;
                        PyObject *tmp_args_element_name_41;
                        PyObject *tmp_args_element_name_42;
                        PyObject *tmp_args_element_name_43;
                        PyObject *tmp_args_element_name_44;
                        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__set_pad_area );

                        if (unlikely( tmp_mvar_value_17 == NULL ))
                        {
                            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__set_pad_area );
                        }

                        if ( tmp_mvar_value_17 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_set_pad_area" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 875;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_17;
                        }

                        tmp_called_name_16 = tmp_mvar_value_17;
                        CHECK_OBJECT( var_roi );
                        tmp_args_element_name_41 = var_roi;
                        CHECK_OBJECT( var_axis );
                        tmp_args_element_name_42 = var_axis;
                        CHECK_OBJECT( var_width_pair );
                        tmp_args_element_name_43 = var_width_pair;
                        CHECK_OBJECT( var_edge_pair );
                        tmp_args_element_name_44 = var_edge_pair;
                        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 875;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_41, tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_44 };
                            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_16, call_args );
                        }

                        if ( tmp_call_result_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 875;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_17;
                        }
                        Py_DECREF( tmp_call_result_5 );
                    }
                    if ( CONSIDER_THREADING() == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 872;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_17;
                    }
                    goto loop_start_5;
                    loop_end_5:;
                    goto try_end_16;
                    // Exception handler code:
                    try_except_handler_17:;
                    exception_keeper_type_17 = exception_type;
                    exception_keeper_value_17 = exception_value;
                    exception_keeper_tb_17 = exception_tb;
                    exception_keeper_lineno_17 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    Py_XDECREF( tmp_for_loop_5__iter_value );
                    tmp_for_loop_5__iter_value = NULL;

                    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
                    Py_DECREF( tmp_for_loop_5__for_iterator );
                    tmp_for_loop_5__for_iterator = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_17;
                    exception_value = exception_keeper_value_17;
                    exception_tb = exception_keeper_tb_17;
                    exception_lineno = exception_keeper_lineno_17;

                    goto frame_exception_exit_1;
                    // End of try:
                    try_end_16:;
                    Py_XDECREF( tmp_for_loop_5__iter_value );
                    tmp_for_loop_5__iter_value = NULL;

                    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
                    Py_DECREF( tmp_for_loop_5__for_iterator );
                    tmp_for_loop_5__for_iterator = NULL;

                    goto branch_end_9;
                    branch_no_9:;
                    {
                        nuitka_bool tmp_condition_result_10;
                        PyObject *tmp_compexpr_left_8;
                        PyObject *tmp_compexpr_right_8;
                        CHECK_OBJECT( par_mode );
                        tmp_compexpr_left_8 = par_mode;
                        tmp_compexpr_right_8 = const_str_plain_linear_ramp;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 877;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
                            PyObject *tmp_assign_source_57;
                            PyObject *tmp_called_instance_8;
                            CHECK_OBJECT( par_kwargs );
                            tmp_called_instance_8 = par_kwargs;
                            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 878;
                            tmp_assign_source_57 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_end_values_int_0_tuple, 0 ) );

                            if ( tmp_assign_source_57 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 878;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            assert( var_end_values == NULL );
                            var_end_values = tmp_assign_source_57;
                        }
                        {
                            PyObject *tmp_assign_source_58;
                            PyObject *tmp_called_name_17;
                            PyObject *tmp_mvar_value_18;
                            PyObject *tmp_args_element_name_45;
                            PyObject *tmp_args_element_name_46;
                            PyObject *tmp_source_name_14;
                            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__as_pairs );

                            if (unlikely( tmp_mvar_value_18 == NULL ))
                            {
                                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__as_pairs );
                            }

                            if ( tmp_mvar_value_18 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_as_pairs" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 879;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_called_name_17 = tmp_mvar_value_18;
                            CHECK_OBJECT( var_end_values );
                            tmp_args_element_name_45 = var_end_values;
                            CHECK_OBJECT( var_padded );
                            tmp_source_name_14 = var_padded;
                            tmp_args_element_name_46 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_ndim );
                            if ( tmp_args_element_name_46 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 879;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 879;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_45, tmp_args_element_name_46 };
                                tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
                            }

                            Py_DECREF( tmp_args_element_name_46 );
                            if ( tmp_assign_source_58 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 879;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            {
                                PyObject *old = var_end_values;
                                assert( old != NULL );
                                var_end_values = tmp_assign_source_58;
                                Py_DECREF( old );
                            }

                        }
                        {
                            PyObject *tmp_assign_source_59;
                            PyObject *tmp_iter_arg_12;
                            PyObject *tmp_called_name_18;
                            PyObject *tmp_args_element_name_47;
                            PyObject *tmp_args_element_name_48;
                            PyObject *tmp_args_element_name_49;
                            tmp_called_name_18 = (PyObject *)&PyZip_Type;
                            CHECK_OBJECT( var_axes );
                            tmp_args_element_name_47 = var_axes;
                            CHECK_OBJECT( par_pad_width );
                            tmp_args_element_name_48 = par_pad_width;
                            CHECK_OBJECT( var_end_values );
                            tmp_args_element_name_49 = var_end_values;
                            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 880;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_47, tmp_args_element_name_48, tmp_args_element_name_49 };
                                tmp_iter_arg_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_18, call_args );
                            }

                            if ( tmp_iter_arg_12 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 880;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_assign_source_59 = MAKE_ITERATOR( tmp_iter_arg_12 );
                            Py_DECREF( tmp_iter_arg_12 );
                            if ( tmp_assign_source_59 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 880;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            assert( tmp_for_loop_6__for_iterator == NULL );
                            tmp_for_loop_6__for_iterator = tmp_assign_source_59;
                        }
                        // Tried code:
                        loop_start_6:;
                        {
                            PyObject *tmp_next_source_6;
                            PyObject *tmp_assign_source_60;
                            CHECK_OBJECT( tmp_for_loop_6__for_iterator );
                            tmp_next_source_6 = tmp_for_loop_6__for_iterator;
                            tmp_assign_source_60 = ITERATOR_NEXT( tmp_next_source_6 );
                            if ( tmp_assign_source_60 == NULL )
                            {
                                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                                {

                                    goto loop_end_6;
                                }
                                else
                                {

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    exception_lineno = 880;
                                    goto try_except_handler_20;
                                }
                            }

                            {
                                PyObject *old = tmp_for_loop_6__iter_value;
                                tmp_for_loop_6__iter_value = tmp_assign_source_60;
                                Py_XDECREF( old );
                            }

                        }
                        // Tried code:
                        {
                            PyObject *tmp_assign_source_61;
                            PyObject *tmp_iter_arg_13;
                            CHECK_OBJECT( tmp_for_loop_6__iter_value );
                            tmp_iter_arg_13 = tmp_for_loop_6__iter_value;
                            tmp_assign_source_61 = MAKE_ITERATOR( tmp_iter_arg_13 );
                            if ( tmp_assign_source_61 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 880;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto try_except_handler_21;
                            }
                            {
                                PyObject *old = tmp_tuple_unpack_6__source_iter;
                                tmp_tuple_unpack_6__source_iter = tmp_assign_source_61;
                                Py_XDECREF( old );
                            }

                        }
                        // Tried code:
                        {
                            PyObject *tmp_assign_source_62;
                            PyObject *tmp_unpack_12;
                            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                            tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
                            tmp_assign_source_62 = UNPACK_NEXT( tmp_unpack_12, 0, 3 );
                            if ( tmp_assign_source_62 == NULL )
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


                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                exception_lineno = 880;
                                goto try_except_handler_22;
                            }
                            {
                                PyObject *old = tmp_tuple_unpack_6__element_1;
                                tmp_tuple_unpack_6__element_1 = tmp_assign_source_62;
                                Py_XDECREF( old );
                            }

                        }
                        {
                            PyObject *tmp_assign_source_63;
                            PyObject *tmp_unpack_13;
                            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                            tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
                            tmp_assign_source_63 = UNPACK_NEXT( tmp_unpack_13, 1, 3 );
                            if ( tmp_assign_source_63 == NULL )
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


                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                exception_lineno = 880;
                                goto try_except_handler_22;
                            }
                            {
                                PyObject *old = tmp_tuple_unpack_6__element_2;
                                tmp_tuple_unpack_6__element_2 = tmp_assign_source_63;
                                Py_XDECREF( old );
                            }

                        }
                        {
                            PyObject *tmp_assign_source_64;
                            PyObject *tmp_unpack_14;
                            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                            tmp_unpack_14 = tmp_tuple_unpack_6__source_iter;
                            tmp_assign_source_64 = UNPACK_NEXT( tmp_unpack_14, 2, 3 );
                            if ( tmp_assign_source_64 == NULL )
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


                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                exception_lineno = 880;
                                goto try_except_handler_22;
                            }
                            {
                                PyObject *old = tmp_tuple_unpack_6__element_3;
                                tmp_tuple_unpack_6__element_3 = tmp_assign_source_64;
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

                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        exception_lineno = 880;
                                        goto try_except_handler_22;
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

                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                exception_lineno = 880;
                                goto try_except_handler_22;
                            }
                        }
                        goto try_end_17;
                        // Exception handler code:
                        try_except_handler_22:;
                        exception_keeper_type_18 = exception_type;
                        exception_keeper_value_18 = exception_value;
                        exception_keeper_tb_18 = exception_tb;
                        exception_keeper_lineno_18 = exception_lineno;
                        exception_type = NULL;
                        exception_value = NULL;
                        exception_tb = NULL;
                        exception_lineno = 0;

                        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
                        Py_DECREF( tmp_tuple_unpack_6__source_iter );
                        tmp_tuple_unpack_6__source_iter = NULL;

                        // Re-raise.
                        exception_type = exception_keeper_type_18;
                        exception_value = exception_keeper_value_18;
                        exception_tb = exception_keeper_tb_18;
                        exception_lineno = exception_keeper_lineno_18;

                        goto try_except_handler_21;
                        // End of try:
                        try_end_17:;
                        goto try_end_18;
                        // Exception handler code:
                        try_except_handler_21:;
                        exception_keeper_type_19 = exception_type;
                        exception_keeper_value_19 = exception_value;
                        exception_keeper_tb_19 = exception_tb;
                        exception_keeper_lineno_19 = exception_lineno;
                        exception_type = NULL;
                        exception_value = NULL;
                        exception_tb = NULL;
                        exception_lineno = 0;

                        Py_XDECREF( tmp_tuple_unpack_6__element_1 );
                        tmp_tuple_unpack_6__element_1 = NULL;

                        Py_XDECREF( tmp_tuple_unpack_6__element_2 );
                        tmp_tuple_unpack_6__element_2 = NULL;

                        Py_XDECREF( tmp_tuple_unpack_6__element_3 );
                        tmp_tuple_unpack_6__element_3 = NULL;

                        // Re-raise.
                        exception_type = exception_keeper_type_19;
                        exception_value = exception_keeper_value_19;
                        exception_tb = exception_keeper_tb_19;
                        exception_lineno = exception_keeper_lineno_19;

                        goto try_except_handler_20;
                        // End of try:
                        try_end_18:;
                        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
                        Py_DECREF( tmp_tuple_unpack_6__source_iter );
                        tmp_tuple_unpack_6__source_iter = NULL;

                        {
                            PyObject *tmp_assign_source_65;
                            CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
                            tmp_assign_source_65 = tmp_tuple_unpack_6__element_1;
                            {
                                PyObject *old = var_axis;
                                var_axis = tmp_assign_source_65;
                                Py_INCREF( var_axis );
                                Py_XDECREF( old );
                            }

                        }
                        Py_XDECREF( tmp_tuple_unpack_6__element_1 );
                        tmp_tuple_unpack_6__element_1 = NULL;

                        {
                            PyObject *tmp_assign_source_66;
                            CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
                            tmp_assign_source_66 = tmp_tuple_unpack_6__element_2;
                            {
                                PyObject *old = var_width_pair;
                                var_width_pair = tmp_assign_source_66;
                                Py_INCREF( var_width_pair );
                                Py_XDECREF( old );
                            }

                        }
                        Py_XDECREF( tmp_tuple_unpack_6__element_2 );
                        tmp_tuple_unpack_6__element_2 = NULL;

                        {
                            PyObject *tmp_assign_source_67;
                            CHECK_OBJECT( tmp_tuple_unpack_6__element_3 );
                            tmp_assign_source_67 = tmp_tuple_unpack_6__element_3;
                            {
                                PyObject *old = var_value_pair;
                                var_value_pair = tmp_assign_source_67;
                                Py_INCREF( var_value_pair );
                                Py_XDECREF( old );
                            }

                        }
                        Py_XDECREF( tmp_tuple_unpack_6__element_3 );
                        tmp_tuple_unpack_6__element_3 = NULL;

                        {
                            PyObject *tmp_assign_source_68;
                            PyObject *tmp_called_name_19;
                            PyObject *tmp_mvar_value_19;
                            PyObject *tmp_args_element_name_50;
                            PyObject *tmp_args_element_name_51;
                            PyObject *tmp_args_element_name_52;
                            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__view_roi );

                            if (unlikely( tmp_mvar_value_19 == NULL ))
                            {
                                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__view_roi );
                            }

                            if ( tmp_mvar_value_19 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_view_roi" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 881;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto try_except_handler_20;
                            }

                            tmp_called_name_19 = tmp_mvar_value_19;
                            CHECK_OBJECT( var_padded );
                            tmp_args_element_name_50 = var_padded;
                            CHECK_OBJECT( var_original_area_slice );
                            tmp_args_element_name_51 = var_original_area_slice;
                            CHECK_OBJECT( var_axis );
                            tmp_args_element_name_52 = var_axis;
                            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 881;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_50, tmp_args_element_name_51, tmp_args_element_name_52 };
                                tmp_assign_source_68 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_19, call_args );
                            }

                            if ( tmp_assign_source_68 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 881;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto try_except_handler_20;
                            }
                            {
                                PyObject *old = var_roi;
                                var_roi = tmp_assign_source_68;
                                Py_XDECREF( old );
                            }

                        }
                        {
                            PyObject *tmp_assign_source_69;
                            PyObject *tmp_called_name_20;
                            PyObject *tmp_mvar_value_20;
                            PyObject *tmp_args_element_name_53;
                            PyObject *tmp_args_element_name_54;
                            PyObject *tmp_args_element_name_55;
                            PyObject *tmp_args_element_name_56;
                            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__get_linear_ramps );

                            if (unlikely( tmp_mvar_value_20 == NULL ))
                            {
                                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_linear_ramps );
                            }

                            if ( tmp_mvar_value_20 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_linear_ramps" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 882;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto try_except_handler_20;
                            }

                            tmp_called_name_20 = tmp_mvar_value_20;
                            CHECK_OBJECT( var_roi );
                            tmp_args_element_name_53 = var_roi;
                            CHECK_OBJECT( var_axis );
                            tmp_args_element_name_54 = var_axis;
                            CHECK_OBJECT( var_width_pair );
                            tmp_args_element_name_55 = var_width_pair;
                            CHECK_OBJECT( var_value_pair );
                            tmp_args_element_name_56 = var_value_pair;
                            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 882;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_53, tmp_args_element_name_54, tmp_args_element_name_55, tmp_args_element_name_56 };
                                tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_20, call_args );
                            }

                            if ( tmp_assign_source_69 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 882;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto try_except_handler_20;
                            }
                            {
                                PyObject *old = var_ramp_pair;
                                var_ramp_pair = tmp_assign_source_69;
                                Py_XDECREF( old );
                            }

                        }
                        {
                            PyObject *tmp_called_name_21;
                            PyObject *tmp_mvar_value_21;
                            PyObject *tmp_call_result_6;
                            PyObject *tmp_args_element_name_57;
                            PyObject *tmp_args_element_name_58;
                            PyObject *tmp_args_element_name_59;
                            PyObject *tmp_args_element_name_60;
                            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__set_pad_area );

                            if (unlikely( tmp_mvar_value_21 == NULL ))
                            {
                                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__set_pad_area );
                            }

                            if ( tmp_mvar_value_21 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_set_pad_area" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 883;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto try_except_handler_20;
                            }

                            tmp_called_name_21 = tmp_mvar_value_21;
                            CHECK_OBJECT( var_roi );
                            tmp_args_element_name_57 = var_roi;
                            CHECK_OBJECT( var_axis );
                            tmp_args_element_name_58 = var_axis;
                            CHECK_OBJECT( var_width_pair );
                            tmp_args_element_name_59 = var_width_pair;
                            CHECK_OBJECT( var_ramp_pair );
                            tmp_args_element_name_60 = var_ramp_pair;
                            frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 883;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_57, tmp_args_element_name_58, tmp_args_element_name_59, tmp_args_element_name_60 };
                                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_21, call_args );
                            }

                            if ( tmp_call_result_6 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 883;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto try_except_handler_20;
                            }
                            Py_DECREF( tmp_call_result_6 );
                        }
                        if ( CONSIDER_THREADING() == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 880;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_20;
                        }
                        goto loop_start_6;
                        loop_end_6:;
                        goto try_end_19;
                        // Exception handler code:
                        try_except_handler_20:;
                        exception_keeper_type_20 = exception_type;
                        exception_keeper_value_20 = exception_value;
                        exception_keeper_tb_20 = exception_tb;
                        exception_keeper_lineno_20 = exception_lineno;
                        exception_type = NULL;
                        exception_value = NULL;
                        exception_tb = NULL;
                        exception_lineno = 0;

                        Py_XDECREF( tmp_for_loop_6__iter_value );
                        tmp_for_loop_6__iter_value = NULL;

                        CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
                        Py_DECREF( tmp_for_loop_6__for_iterator );
                        tmp_for_loop_6__for_iterator = NULL;

                        // Re-raise.
                        exception_type = exception_keeper_type_20;
                        exception_value = exception_keeper_value_20;
                        exception_tb = exception_keeper_tb_20;
                        exception_lineno = exception_keeper_lineno_20;

                        goto frame_exception_exit_1;
                        // End of try:
                        try_end_19:;
                        Py_XDECREF( tmp_for_loop_6__iter_value );
                        tmp_for_loop_6__iter_value = NULL;

                        CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
                        Py_DECREF( tmp_for_loop_6__for_iterator );
                        tmp_for_loop_6__for_iterator = NULL;

                        goto branch_end_10;
                        branch_no_10:;
                        {
                            nuitka_bool tmp_condition_result_11;
                            PyObject *tmp_key_name_2;
                            PyObject *tmp_dict_name_2;
                            CHECK_OBJECT( par_mode );
                            tmp_key_name_2 = par_mode;
                            CHECK_OBJECT( var_stat_functions );
                            tmp_dict_name_2 = var_stat_functions;
                            tmp_res = PyDict_Contains( tmp_dict_name_2, tmp_key_name_2 );
                            if ( tmp_res == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 885;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
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
                                PyObject *tmp_assign_source_70;
                                PyObject *tmp_dict_name_3;
                                PyObject *tmp_key_name_3;
                                CHECK_OBJECT( var_stat_functions );
                                tmp_dict_name_3 = var_stat_functions;
                                CHECK_OBJECT( par_mode );
                                tmp_key_name_3 = par_mode;
                                tmp_assign_source_70 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
                                if ( tmp_assign_source_70 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 886;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                assert( var_func == NULL );
                                var_func = tmp_assign_source_70;
                            }
                            {
                                PyObject *tmp_assign_source_71;
                                PyObject *tmp_called_instance_9;
                                CHECK_OBJECT( par_kwargs );
                                tmp_called_instance_9 = par_kwargs;
                                frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 887;
                                tmp_assign_source_71 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_9, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_stat_length_none_tuple, 0 ) );

                                if ( tmp_assign_source_71 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 887;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                assert( var_length == NULL );
                                var_length = tmp_assign_source_71;
                            }
                            {
                                PyObject *tmp_assign_source_72;
                                PyObject *tmp_called_name_22;
                                PyObject *tmp_mvar_value_22;
                                PyObject *tmp_args_name_3;
                                PyObject *tmp_tuple_element_3;
                                PyObject *tmp_source_name_15;
                                PyObject *tmp_kw_name_3;
                                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__as_pairs );

                                if (unlikely( tmp_mvar_value_22 == NULL ))
                                {
                                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__as_pairs );
                                }

                                if ( tmp_mvar_value_22 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_as_pairs" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 888;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }

                                tmp_called_name_22 = tmp_mvar_value_22;
                                CHECK_OBJECT( var_length );
                                tmp_tuple_element_3 = var_length;
                                tmp_args_name_3 = PyTuple_New( 2 );
                                Py_INCREF( tmp_tuple_element_3 );
                                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
                                CHECK_OBJECT( var_padded );
                                tmp_source_name_15 = var_padded;
                                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_ndim );
                                if ( tmp_tuple_element_3 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                    Py_DECREF( tmp_args_name_3 );

                                    exception_lineno = 888;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
                                tmp_kw_name_3 = PyDict_Copy( const_dict_a49cf6d67d73ee9b51dbb6169697ab19 );
                                frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 888;
                                tmp_assign_source_72 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_3, tmp_kw_name_3 );
                                Py_DECREF( tmp_args_name_3 );
                                Py_DECREF( tmp_kw_name_3 );
                                if ( tmp_assign_source_72 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 888;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                {
                                    PyObject *old = var_length;
                                    assert( old != NULL );
                                    var_length = tmp_assign_source_72;
                                    Py_DECREF( old );
                                }

                            }
                            {
                                PyObject *tmp_assign_source_73;
                                PyObject *tmp_iter_arg_14;
                                PyObject *tmp_called_name_23;
                                PyObject *tmp_args_element_name_61;
                                PyObject *tmp_args_element_name_62;
                                PyObject *tmp_args_element_name_63;
                                tmp_called_name_23 = (PyObject *)&PyZip_Type;
                                CHECK_OBJECT( var_axes );
                                tmp_args_element_name_61 = var_axes;
                                CHECK_OBJECT( par_pad_width );
                                tmp_args_element_name_62 = par_pad_width;
                                CHECK_OBJECT( var_length );
                                tmp_args_element_name_63 = var_length;
                                frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 889;
                                {
                                    PyObject *call_args[] = { tmp_args_element_name_61, tmp_args_element_name_62, tmp_args_element_name_63 };
                                    tmp_iter_arg_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_23, call_args );
                                }

                                if ( tmp_iter_arg_14 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 889;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_assign_source_73 = MAKE_ITERATOR( tmp_iter_arg_14 );
                                Py_DECREF( tmp_iter_arg_14 );
                                if ( tmp_assign_source_73 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 889;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                assert( tmp_for_loop_7__for_iterator == NULL );
                                tmp_for_loop_7__for_iterator = tmp_assign_source_73;
                            }
                            // Tried code:
                            loop_start_7:;
                            {
                                PyObject *tmp_next_source_7;
                                PyObject *tmp_assign_source_74;
                                CHECK_OBJECT( tmp_for_loop_7__for_iterator );
                                tmp_next_source_7 = tmp_for_loop_7__for_iterator;
                                tmp_assign_source_74 = ITERATOR_NEXT( tmp_next_source_7 );
                                if ( tmp_assign_source_74 == NULL )
                                {
                                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                                    {

                                        goto loop_end_7;
                                    }
                                    else
                                    {

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        exception_lineno = 889;
                                        goto try_except_handler_23;
                                    }
                                }

                                {
                                    PyObject *old = tmp_for_loop_7__iter_value;
                                    tmp_for_loop_7__iter_value = tmp_assign_source_74;
                                    Py_XDECREF( old );
                                }

                            }
                            // Tried code:
                            {
                                PyObject *tmp_assign_source_75;
                                PyObject *tmp_iter_arg_15;
                                CHECK_OBJECT( tmp_for_loop_7__iter_value );
                                tmp_iter_arg_15 = tmp_for_loop_7__iter_value;
                                tmp_assign_source_75 = MAKE_ITERATOR( tmp_iter_arg_15 );
                                if ( tmp_assign_source_75 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 889;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto try_except_handler_24;
                                }
                                {
                                    PyObject *old = tmp_tuple_unpack_7__source_iter;
                                    tmp_tuple_unpack_7__source_iter = tmp_assign_source_75;
                                    Py_XDECREF( old );
                                }

                            }
                            // Tried code:
                            {
                                PyObject *tmp_assign_source_76;
                                PyObject *tmp_unpack_15;
                                CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
                                tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
                                tmp_assign_source_76 = UNPACK_NEXT( tmp_unpack_15, 0, 3 );
                                if ( tmp_assign_source_76 == NULL )
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


                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    exception_lineno = 889;
                                    goto try_except_handler_25;
                                }
                                {
                                    PyObject *old = tmp_tuple_unpack_7__element_1;
                                    tmp_tuple_unpack_7__element_1 = tmp_assign_source_76;
                                    Py_XDECREF( old );
                                }

                            }
                            {
                                PyObject *tmp_assign_source_77;
                                PyObject *tmp_unpack_16;
                                CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
                                tmp_unpack_16 = tmp_tuple_unpack_7__source_iter;
                                tmp_assign_source_77 = UNPACK_NEXT( tmp_unpack_16, 1, 3 );
                                if ( tmp_assign_source_77 == NULL )
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


                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    exception_lineno = 889;
                                    goto try_except_handler_25;
                                }
                                {
                                    PyObject *old = tmp_tuple_unpack_7__element_2;
                                    tmp_tuple_unpack_7__element_2 = tmp_assign_source_77;
                                    Py_XDECREF( old );
                                }

                            }
                            {
                                PyObject *tmp_assign_source_78;
                                PyObject *tmp_unpack_17;
                                CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
                                tmp_unpack_17 = tmp_tuple_unpack_7__source_iter;
                                tmp_assign_source_78 = UNPACK_NEXT( tmp_unpack_17, 2, 3 );
                                if ( tmp_assign_source_78 == NULL )
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


                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    exception_lineno = 889;
                                    goto try_except_handler_25;
                                }
                                {
                                    PyObject *old = tmp_tuple_unpack_7__element_3;
                                    tmp_tuple_unpack_7__element_3 = tmp_assign_source_78;
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

                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            exception_lineno = 889;
                                            goto try_except_handler_25;
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

                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    exception_lineno = 889;
                                    goto try_except_handler_25;
                                }
                            }
                            goto try_end_20;
                            // Exception handler code:
                            try_except_handler_25:;
                            exception_keeper_type_21 = exception_type;
                            exception_keeper_value_21 = exception_value;
                            exception_keeper_tb_21 = exception_tb;
                            exception_keeper_lineno_21 = exception_lineno;
                            exception_type = NULL;
                            exception_value = NULL;
                            exception_tb = NULL;
                            exception_lineno = 0;

                            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
                            Py_DECREF( tmp_tuple_unpack_7__source_iter );
                            tmp_tuple_unpack_7__source_iter = NULL;

                            // Re-raise.
                            exception_type = exception_keeper_type_21;
                            exception_value = exception_keeper_value_21;
                            exception_tb = exception_keeper_tb_21;
                            exception_lineno = exception_keeper_lineno_21;

                            goto try_except_handler_24;
                            // End of try:
                            try_end_20:;
                            goto try_end_21;
                            // Exception handler code:
                            try_except_handler_24:;
                            exception_keeper_type_22 = exception_type;
                            exception_keeper_value_22 = exception_value;
                            exception_keeper_tb_22 = exception_tb;
                            exception_keeper_lineno_22 = exception_lineno;
                            exception_type = NULL;
                            exception_value = NULL;
                            exception_tb = NULL;
                            exception_lineno = 0;

                            Py_XDECREF( tmp_tuple_unpack_7__element_1 );
                            tmp_tuple_unpack_7__element_1 = NULL;

                            Py_XDECREF( tmp_tuple_unpack_7__element_2 );
                            tmp_tuple_unpack_7__element_2 = NULL;

                            Py_XDECREF( tmp_tuple_unpack_7__element_3 );
                            tmp_tuple_unpack_7__element_3 = NULL;

                            // Re-raise.
                            exception_type = exception_keeper_type_22;
                            exception_value = exception_keeper_value_22;
                            exception_tb = exception_keeper_tb_22;
                            exception_lineno = exception_keeper_lineno_22;

                            goto try_except_handler_23;
                            // End of try:
                            try_end_21:;
                            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
                            Py_DECREF( tmp_tuple_unpack_7__source_iter );
                            tmp_tuple_unpack_7__source_iter = NULL;

                            {
                                PyObject *tmp_assign_source_79;
                                CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
                                tmp_assign_source_79 = tmp_tuple_unpack_7__element_1;
                                {
                                    PyObject *old = var_axis;
                                    var_axis = tmp_assign_source_79;
                                    Py_INCREF( var_axis );
                                    Py_XDECREF( old );
                                }

                            }
                            Py_XDECREF( tmp_tuple_unpack_7__element_1 );
                            tmp_tuple_unpack_7__element_1 = NULL;

                            {
                                PyObject *tmp_assign_source_80;
                                CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
                                tmp_assign_source_80 = tmp_tuple_unpack_7__element_2;
                                {
                                    PyObject *old = var_width_pair;
                                    var_width_pair = tmp_assign_source_80;
                                    Py_INCREF( var_width_pair );
                                    Py_XDECREF( old );
                                }

                            }
                            Py_XDECREF( tmp_tuple_unpack_7__element_2 );
                            tmp_tuple_unpack_7__element_2 = NULL;

                            {
                                PyObject *tmp_assign_source_81;
                                CHECK_OBJECT( tmp_tuple_unpack_7__element_3 );
                                tmp_assign_source_81 = tmp_tuple_unpack_7__element_3;
                                {
                                    PyObject *old = var_length_pair;
                                    var_length_pair = tmp_assign_source_81;
                                    Py_INCREF( var_length_pair );
                                    Py_XDECREF( old );
                                }

                            }
                            Py_XDECREF( tmp_tuple_unpack_7__element_3 );
                            tmp_tuple_unpack_7__element_3 = NULL;

                            {
                                PyObject *tmp_assign_source_82;
                                PyObject *tmp_called_name_24;
                                PyObject *tmp_mvar_value_23;
                                PyObject *tmp_args_element_name_64;
                                PyObject *tmp_args_element_name_65;
                                PyObject *tmp_args_element_name_66;
                                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__view_roi );

                                if (unlikely( tmp_mvar_value_23 == NULL ))
                                {
                                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__view_roi );
                                }

                                if ( tmp_mvar_value_23 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_view_roi" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 890;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto try_except_handler_23;
                                }

                                tmp_called_name_24 = tmp_mvar_value_23;
                                CHECK_OBJECT( var_padded );
                                tmp_args_element_name_64 = var_padded;
                                CHECK_OBJECT( var_original_area_slice );
                                tmp_args_element_name_65 = var_original_area_slice;
                                CHECK_OBJECT( var_axis );
                                tmp_args_element_name_66 = var_axis;
                                frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 890;
                                {
                                    PyObject *call_args[] = { tmp_args_element_name_64, tmp_args_element_name_65, tmp_args_element_name_66 };
                                    tmp_assign_source_82 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_24, call_args );
                                }

                                if ( tmp_assign_source_82 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 890;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto try_except_handler_23;
                                }
                                {
                                    PyObject *old = var_roi;
                                    var_roi = tmp_assign_source_82;
                                    Py_XDECREF( old );
                                }

                            }
                            {
                                PyObject *tmp_assign_source_83;
                                PyObject *tmp_called_name_25;
                                PyObject *tmp_mvar_value_24;
                                PyObject *tmp_args_element_name_67;
                                PyObject *tmp_args_element_name_68;
                                PyObject *tmp_args_element_name_69;
                                PyObject *tmp_args_element_name_70;
                                PyObject *tmp_args_element_name_71;
                                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__get_stats );

                                if (unlikely( tmp_mvar_value_24 == NULL ))
                                {
                                    tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_stats );
                                }

                                if ( tmp_mvar_value_24 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_stats" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 891;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto try_except_handler_23;
                                }

                                tmp_called_name_25 = tmp_mvar_value_24;
                                CHECK_OBJECT( var_roi );
                                tmp_args_element_name_67 = var_roi;
                                CHECK_OBJECT( var_axis );
                                tmp_args_element_name_68 = var_axis;
                                CHECK_OBJECT( var_width_pair );
                                tmp_args_element_name_69 = var_width_pair;
                                CHECK_OBJECT( var_length_pair );
                                tmp_args_element_name_70 = var_length_pair;
                                CHECK_OBJECT( var_func );
                                tmp_args_element_name_71 = var_func;
                                frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 891;
                                {
                                    PyObject *call_args[] = { tmp_args_element_name_67, tmp_args_element_name_68, tmp_args_element_name_69, tmp_args_element_name_70, tmp_args_element_name_71 };
                                    tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_25, call_args );
                                }

                                if ( tmp_assign_source_83 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 891;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto try_except_handler_23;
                                }
                                {
                                    PyObject *old = var_stat_pair;
                                    var_stat_pair = tmp_assign_source_83;
                                    Py_XDECREF( old );
                                }

                            }
                            {
                                PyObject *tmp_called_name_26;
                                PyObject *tmp_mvar_value_25;
                                PyObject *tmp_call_result_7;
                                PyObject *tmp_args_element_name_72;
                                PyObject *tmp_args_element_name_73;
                                PyObject *tmp_args_element_name_74;
                                PyObject *tmp_args_element_name_75;
                                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__set_pad_area );

                                if (unlikely( tmp_mvar_value_25 == NULL ))
                                {
                                    tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__set_pad_area );
                                }

                                if ( tmp_mvar_value_25 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_set_pad_area" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 892;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto try_except_handler_23;
                                }

                                tmp_called_name_26 = tmp_mvar_value_25;
                                CHECK_OBJECT( var_roi );
                                tmp_args_element_name_72 = var_roi;
                                CHECK_OBJECT( var_axis );
                                tmp_args_element_name_73 = var_axis;
                                CHECK_OBJECT( var_width_pair );
                                tmp_args_element_name_74 = var_width_pair;
                                CHECK_OBJECT( var_stat_pair );
                                tmp_args_element_name_75 = var_stat_pair;
                                frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 892;
                                {
                                    PyObject *call_args[] = { tmp_args_element_name_72, tmp_args_element_name_73, tmp_args_element_name_74, tmp_args_element_name_75 };
                                    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_26, call_args );
                                }

                                if ( tmp_call_result_7 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 892;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto try_except_handler_23;
                                }
                                Py_DECREF( tmp_call_result_7 );
                            }
                            if ( CONSIDER_THREADING() == false )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 889;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto try_except_handler_23;
                            }
                            goto loop_start_7;
                            loop_end_7:;
                            goto try_end_22;
                            // Exception handler code:
                            try_except_handler_23:;
                            exception_keeper_type_23 = exception_type;
                            exception_keeper_value_23 = exception_value;
                            exception_keeper_tb_23 = exception_tb;
                            exception_keeper_lineno_23 = exception_lineno;
                            exception_type = NULL;
                            exception_value = NULL;
                            exception_tb = NULL;
                            exception_lineno = 0;

                            Py_XDECREF( tmp_for_loop_7__iter_value );
                            tmp_for_loop_7__iter_value = NULL;

                            CHECK_OBJECT( (PyObject *)tmp_for_loop_7__for_iterator );
                            Py_DECREF( tmp_for_loop_7__for_iterator );
                            tmp_for_loop_7__for_iterator = NULL;

                            // Re-raise.
                            exception_type = exception_keeper_type_23;
                            exception_value = exception_keeper_value_23;
                            exception_tb = exception_keeper_tb_23;
                            exception_lineno = exception_keeper_lineno_23;

                            goto frame_exception_exit_1;
                            // End of try:
                            try_end_22:;
                            Py_XDECREF( tmp_for_loop_7__iter_value );
                            tmp_for_loop_7__iter_value = NULL;

                            CHECK_OBJECT( (PyObject *)tmp_for_loop_7__for_iterator );
                            Py_DECREF( tmp_for_loop_7__for_iterator );
                            tmp_for_loop_7__for_iterator = NULL;

                            goto branch_end_11;
                            branch_no_11:;
                            {
                                nuitka_bool tmp_condition_result_12;
                                PyObject *tmp_compexpr_left_9;
                                PyObject *tmp_compexpr_right_9;
                                CHECK_OBJECT( par_mode );
                                tmp_compexpr_left_9 = par_mode;
                                tmp_compexpr_right_9 = PySet_New( const_set_cc63bcba9d40711d2fe518d8993c5aa2 );
                                tmp_res = PySequence_Contains( tmp_compexpr_right_9, tmp_compexpr_left_9 );
                                Py_DECREF( tmp_compexpr_right_9 );
                                if ( tmp_res == -1 )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 894;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_condition_result_12 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                                    PyObject *tmp_assign_source_84;
                                    PyObject *tmp_called_instance_10;
                                    CHECK_OBJECT( par_kwargs );
                                    tmp_called_instance_10 = par_kwargs;
                                    frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 895;
                                    tmp_assign_source_84 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_10, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_reflect_type_str_plain_even_tuple, 0 ) );

                                    if ( tmp_assign_source_84 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 895;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    assert( var_method == NULL );
                                    var_method = tmp_assign_source_84;
                                }
                                {
                                    PyObject *tmp_assign_source_85;
                                    nuitka_bool tmp_condition_result_13;
                                    PyObject *tmp_compexpr_left_10;
                                    PyObject *tmp_compexpr_right_10;
                                    CHECK_OBJECT( par_mode );
                                    tmp_compexpr_left_10 = par_mode;
                                    tmp_compexpr_right_10 = const_str_plain_symmetric;
                                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                                    if ( tmp_res == -1 )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 896;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                    if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
                                    {
                                        goto condexpr_true_1;
                                    }
                                    else
                                    {
                                        goto condexpr_false_1;
                                    }
                                    condexpr_true_1:;
                                    tmp_assign_source_85 = Py_True;
                                    goto condexpr_end_1;
                                    condexpr_false_1:;
                                    tmp_assign_source_85 = Py_False;
                                    condexpr_end_1:;
                                    assert( var_include_edge == NULL );
                                    Py_INCREF( tmp_assign_source_85 );
                                    var_include_edge = tmp_assign_source_85;
                                }
                                {
                                    PyObject *tmp_assign_source_86;
                                    PyObject *tmp_iter_arg_16;
                                    PyObject *tmp_called_name_27;
                                    PyObject *tmp_args_element_name_76;
                                    PyObject *tmp_args_element_name_77;
                                    tmp_called_name_27 = (PyObject *)&PyZip_Type;
                                    CHECK_OBJECT( var_axes );
                                    tmp_args_element_name_76 = var_axes;
                                    CHECK_OBJECT( par_pad_width );
                                    tmp_args_element_name_77 = par_pad_width;
                                    frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 897;
                                    {
                                        PyObject *call_args[] = { tmp_args_element_name_76, tmp_args_element_name_77 };
                                        tmp_iter_arg_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_27, call_args );
                                    }

                                    if ( tmp_iter_arg_16 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 897;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_assign_source_86 = MAKE_ITERATOR( tmp_iter_arg_16 );
                                    Py_DECREF( tmp_iter_arg_16 );
                                    if ( tmp_assign_source_86 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 897;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    assert( tmp_for_loop_8__for_iterator == NULL );
                                    tmp_for_loop_8__for_iterator = tmp_assign_source_86;
                                }
                                // Tried code:
                                loop_start_8:;
                                {
                                    PyObject *tmp_next_source_8;
                                    PyObject *tmp_assign_source_87;
                                    CHECK_OBJECT( tmp_for_loop_8__for_iterator );
                                    tmp_next_source_8 = tmp_for_loop_8__for_iterator;
                                    tmp_assign_source_87 = ITERATOR_NEXT( tmp_next_source_8 );
                                    if ( tmp_assign_source_87 == NULL )
                                    {
                                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                                        {

                                            goto loop_end_8;
                                        }
                                        else
                                        {

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            exception_lineno = 897;
                                            goto try_except_handler_26;
                                        }
                                    }

                                    {
                                        PyObject *old = tmp_for_loop_8__iter_value;
                                        tmp_for_loop_8__iter_value = tmp_assign_source_87;
                                        Py_XDECREF( old );
                                    }

                                }
                                // Tried code:
                                {
                                    PyObject *tmp_assign_source_88;
                                    PyObject *tmp_iter_arg_17;
                                    CHECK_OBJECT( tmp_for_loop_8__iter_value );
                                    tmp_iter_arg_17 = tmp_for_loop_8__iter_value;
                                    tmp_assign_source_88 = MAKE_ITERATOR( tmp_iter_arg_17 );
                                    if ( tmp_assign_source_88 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 897;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_27;
                                    }
                                    {
                                        PyObject *old = tmp_tuple_unpack_8__source_iter;
                                        tmp_tuple_unpack_8__source_iter = tmp_assign_source_88;
                                        Py_XDECREF( old );
                                    }

                                }
                                // Tried code:
                                {
                                    PyObject *tmp_assign_source_89;
                                    PyObject *tmp_unpack_18;
                                    CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
                                    tmp_unpack_18 = tmp_tuple_unpack_8__source_iter;
                                    tmp_assign_source_89 = UNPACK_NEXT( tmp_unpack_18, 0, 2 );
                                    if ( tmp_assign_source_89 == NULL )
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


                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        exception_lineno = 897;
                                        goto try_except_handler_28;
                                    }
                                    {
                                        PyObject *old = tmp_tuple_unpack_8__element_1;
                                        tmp_tuple_unpack_8__element_1 = tmp_assign_source_89;
                                        Py_XDECREF( old );
                                    }

                                }
                                {
                                    PyObject *tmp_assign_source_90;
                                    PyObject *tmp_unpack_19;
                                    CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
                                    tmp_unpack_19 = tmp_tuple_unpack_8__source_iter;
                                    tmp_assign_source_90 = UNPACK_NEXT( tmp_unpack_19, 1, 2 );
                                    if ( tmp_assign_source_90 == NULL )
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


                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        exception_lineno = 897;
                                        goto try_except_handler_28;
                                    }
                                    {
                                        PyObject *old = tmp_tuple_unpack_8__element_2;
                                        tmp_tuple_unpack_8__element_2 = tmp_assign_source_90;
                                        Py_XDECREF( old );
                                    }

                                }
                                {
                                    PyObject *tmp_iterator_name_8;
                                    CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
                                    tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter;
                                    // Check if iterator has left-over elements.
                                    CHECK_OBJECT( tmp_iterator_name_8 ); assert( HAS_ITERNEXT( tmp_iterator_name_8 ) );

                                    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_8 )->tp_iternext)( tmp_iterator_name_8 );

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

                                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                                exception_lineno = 897;
                                                goto try_except_handler_28;
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

                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        exception_lineno = 897;
                                        goto try_except_handler_28;
                                    }
                                }
                                goto try_end_23;
                                // Exception handler code:
                                try_except_handler_28:;
                                exception_keeper_type_24 = exception_type;
                                exception_keeper_value_24 = exception_value;
                                exception_keeper_tb_24 = exception_tb;
                                exception_keeper_lineno_24 = exception_lineno;
                                exception_type = NULL;
                                exception_value = NULL;
                                exception_tb = NULL;
                                exception_lineno = 0;

                                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
                                Py_DECREF( tmp_tuple_unpack_8__source_iter );
                                tmp_tuple_unpack_8__source_iter = NULL;

                                // Re-raise.
                                exception_type = exception_keeper_type_24;
                                exception_value = exception_keeper_value_24;
                                exception_tb = exception_keeper_tb_24;
                                exception_lineno = exception_keeper_lineno_24;

                                goto try_except_handler_27;
                                // End of try:
                                try_end_23:;
                                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
                                Py_DECREF( tmp_tuple_unpack_8__source_iter );
                                tmp_tuple_unpack_8__source_iter = NULL;

                                {
                                    PyObject *tmp_assign_source_91;
                                    CHECK_OBJECT( tmp_tuple_unpack_8__element_1 );
                                    tmp_assign_source_91 = tmp_tuple_unpack_8__element_1;
                                    {
                                        PyObject *old = var_axis;
                                        var_axis = tmp_assign_source_91;
                                        Py_INCREF( var_axis );
                                        Py_XDECREF( old );
                                    }

                                }
                                Py_XDECREF( tmp_tuple_unpack_8__element_1 );
                                tmp_tuple_unpack_8__element_1 = NULL;

                                // Tried code:
                                {
                                    PyObject *tmp_assign_source_92;
                                    PyObject *tmp_iter_arg_18;
                                    CHECK_OBJECT( tmp_tuple_unpack_8__element_2 );
                                    tmp_iter_arg_18 = tmp_tuple_unpack_8__element_2;
                                    tmp_assign_source_92 = MAKE_ITERATOR( tmp_iter_arg_18 );
                                    if ( tmp_assign_source_92 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 897;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_29;
                                    }
                                    {
                                        PyObject *old = tmp_tuple_unpack_9__source_iter;
                                        tmp_tuple_unpack_9__source_iter = tmp_assign_source_92;
                                        Py_XDECREF( old );
                                    }

                                }
                                // Tried code:
                                {
                                    PyObject *tmp_assign_source_93;
                                    PyObject *tmp_unpack_20;
                                    CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
                                    tmp_unpack_20 = tmp_tuple_unpack_9__source_iter;
                                    tmp_assign_source_93 = UNPACK_NEXT( tmp_unpack_20, 0, 2 );
                                    if ( tmp_assign_source_93 == NULL )
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


                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        exception_lineno = 897;
                                        goto try_except_handler_30;
                                    }
                                    {
                                        PyObject *old = tmp_tuple_unpack_9__element_1;
                                        tmp_tuple_unpack_9__element_1 = tmp_assign_source_93;
                                        Py_XDECREF( old );
                                    }

                                }
                                {
                                    PyObject *tmp_assign_source_94;
                                    PyObject *tmp_unpack_21;
                                    CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
                                    tmp_unpack_21 = tmp_tuple_unpack_9__source_iter;
                                    tmp_assign_source_94 = UNPACK_NEXT( tmp_unpack_21, 1, 2 );
                                    if ( tmp_assign_source_94 == NULL )
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


                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        exception_lineno = 897;
                                        goto try_except_handler_30;
                                    }
                                    {
                                        PyObject *old = tmp_tuple_unpack_9__element_2;
                                        tmp_tuple_unpack_9__element_2 = tmp_assign_source_94;
                                        Py_XDECREF( old );
                                    }

                                }
                                {
                                    PyObject *tmp_iterator_name_9;
                                    CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
                                    tmp_iterator_name_9 = tmp_tuple_unpack_9__source_iter;
                                    // Check if iterator has left-over elements.
                                    CHECK_OBJECT( tmp_iterator_name_9 ); assert( HAS_ITERNEXT( tmp_iterator_name_9 ) );

                                    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_9 )->tp_iternext)( tmp_iterator_name_9 );

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

                                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                                exception_lineno = 897;
                                                goto try_except_handler_30;
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

                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        exception_lineno = 897;
                                        goto try_except_handler_30;
                                    }
                                }
                                goto try_end_24;
                                // Exception handler code:
                                try_except_handler_30:;
                                exception_keeper_type_25 = exception_type;
                                exception_keeper_value_25 = exception_value;
                                exception_keeper_tb_25 = exception_tb;
                                exception_keeper_lineno_25 = exception_lineno;
                                exception_type = NULL;
                                exception_value = NULL;
                                exception_tb = NULL;
                                exception_lineno = 0;

                                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_9__source_iter );
                                Py_DECREF( tmp_tuple_unpack_9__source_iter );
                                tmp_tuple_unpack_9__source_iter = NULL;

                                // Re-raise.
                                exception_type = exception_keeper_type_25;
                                exception_value = exception_keeper_value_25;
                                exception_tb = exception_keeper_tb_25;
                                exception_lineno = exception_keeper_lineno_25;

                                goto try_except_handler_29;
                                // End of try:
                                try_end_24:;
                                goto try_end_25;
                                // Exception handler code:
                                try_except_handler_29:;
                                exception_keeper_type_26 = exception_type;
                                exception_keeper_value_26 = exception_value;
                                exception_keeper_tb_26 = exception_tb;
                                exception_keeper_lineno_26 = exception_lineno;
                                exception_type = NULL;
                                exception_value = NULL;
                                exception_tb = NULL;
                                exception_lineno = 0;

                                Py_XDECREF( tmp_tuple_unpack_9__element_1 );
                                tmp_tuple_unpack_9__element_1 = NULL;

                                Py_XDECREF( tmp_tuple_unpack_9__element_2 );
                                tmp_tuple_unpack_9__element_2 = NULL;

                                // Re-raise.
                                exception_type = exception_keeper_type_26;
                                exception_value = exception_keeper_value_26;
                                exception_tb = exception_keeper_tb_26;
                                exception_lineno = exception_keeper_lineno_26;

                                goto try_except_handler_27;
                                // End of try:
                                try_end_25:;
                                goto try_end_26;
                                // Exception handler code:
                                try_except_handler_27:;
                                exception_keeper_type_27 = exception_type;
                                exception_keeper_value_27 = exception_value;
                                exception_keeper_tb_27 = exception_tb;
                                exception_keeper_lineno_27 = exception_lineno;
                                exception_type = NULL;
                                exception_value = NULL;
                                exception_tb = NULL;
                                exception_lineno = 0;

                                Py_XDECREF( tmp_tuple_unpack_8__element_1 );
                                tmp_tuple_unpack_8__element_1 = NULL;

                                Py_XDECREF( tmp_tuple_unpack_8__element_2 );
                                tmp_tuple_unpack_8__element_2 = NULL;

                                // Re-raise.
                                exception_type = exception_keeper_type_27;
                                exception_value = exception_keeper_value_27;
                                exception_tb = exception_keeper_tb_27;
                                exception_lineno = exception_keeper_lineno_27;

                                goto try_except_handler_26;
                                // End of try:
                                try_end_26:;
                                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_9__source_iter );
                                Py_DECREF( tmp_tuple_unpack_9__source_iter );
                                tmp_tuple_unpack_9__source_iter = NULL;

                                {
                                    PyObject *tmp_assign_source_95;
                                    CHECK_OBJECT( tmp_tuple_unpack_9__element_1 );
                                    tmp_assign_source_95 = tmp_tuple_unpack_9__element_1;
                                    {
                                        PyObject *old = var_left_index;
                                        var_left_index = tmp_assign_source_95;
                                        Py_INCREF( var_left_index );
                                        Py_XDECREF( old );
                                    }

                                }
                                Py_XDECREF( tmp_tuple_unpack_9__element_1 );
                                tmp_tuple_unpack_9__element_1 = NULL;

                                {
                                    PyObject *tmp_assign_source_96;
                                    CHECK_OBJECT( tmp_tuple_unpack_9__element_2 );
                                    tmp_assign_source_96 = tmp_tuple_unpack_9__element_2;
                                    {
                                        PyObject *old = var_right_index;
                                        var_right_index = tmp_assign_source_96;
                                        Py_INCREF( var_right_index );
                                        Py_XDECREF( old );
                                    }

                                }
                                Py_XDECREF( tmp_tuple_unpack_9__element_2 );
                                tmp_tuple_unpack_9__element_2 = NULL;

                                Py_XDECREF( tmp_tuple_unpack_8__element_2 );
                                tmp_tuple_unpack_8__element_2 = NULL;

                                {
                                    nuitka_bool tmp_condition_result_14;
                                    int tmp_and_left_truth_2;
                                    nuitka_bool tmp_and_left_value_2;
                                    nuitka_bool tmp_and_right_value_2;
                                    PyObject *tmp_compexpr_left_11;
                                    PyObject *tmp_compexpr_right_11;
                                    PyObject *tmp_subscribed_name_5;
                                    PyObject *tmp_source_name_16;
                                    PyObject *tmp_subscript_name_5;
                                    int tmp_or_left_truth_1;
                                    nuitka_bool tmp_or_left_value_1;
                                    nuitka_bool tmp_or_right_value_1;
                                    PyObject *tmp_compexpr_left_12;
                                    PyObject *tmp_compexpr_right_12;
                                    PyObject *tmp_compexpr_left_13;
                                    PyObject *tmp_compexpr_right_13;
                                    CHECK_OBJECT( par_array );
                                    tmp_source_name_16 = par_array;
                                    tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_shape );
                                    if ( tmp_subscribed_name_5 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 898;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_26;
                                    }
                                    CHECK_OBJECT( var_axis );
                                    tmp_subscript_name_5 = var_axis;
                                    tmp_compexpr_left_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                                    Py_DECREF( tmp_subscribed_name_5 );
                                    if ( tmp_compexpr_left_11 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 898;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_26;
                                    }
                                    tmp_compexpr_right_11 = const_int_pos_1;
                                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
                                    Py_DECREF( tmp_compexpr_left_11 );
                                    if ( tmp_res == -1 )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 898;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_26;
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
                                    CHECK_OBJECT( var_left_index );
                                    tmp_compexpr_left_12 = var_left_index;
                                    tmp_compexpr_right_12 = const_int_0;
                                    tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
                                    if ( tmp_res == -1 )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 898;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_26;
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
                                    CHECK_OBJECT( var_right_index );
                                    tmp_compexpr_left_13 = var_right_index;
                                    tmp_compexpr_right_13 = const_int_0;
                                    tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
                                    if ( tmp_res == -1 )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 898;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_26;
                                    }
                                    tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                    tmp_and_right_value_2 = tmp_or_right_value_1;
                                    goto or_end_1;
                                    or_left_1:;
                                    tmp_and_right_value_2 = tmp_or_left_value_1;
                                    or_end_1:;
                                    tmp_condition_result_14 = tmp_and_right_value_2;
                                    goto and_end_2;
                                    and_left_2:;
                                    tmp_condition_result_14 = tmp_and_left_value_2;
                                    and_end_2:;
                                    if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
                                    {
                                        goto branch_yes_13;
                                    }
                                    else
                                    {
                                        goto branch_no_13;
                                    }
                                    branch_yes_13:;
                                    {
                                        PyObject *tmp_assign_source_97;
                                        PyObject *tmp_called_name_28;
                                        PyObject *tmp_mvar_value_26;
                                        PyObject *tmp_args_element_name_78;
                                        PyObject *tmp_args_element_name_79;
                                        PyObject *tmp_args_element_name_80;
                                        PyObject *tmp_tuple_element_4;
                                        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__get_edges );

                                        if (unlikely( tmp_mvar_value_26 == NULL ))
                                        {
                                            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_edges );
                                        }

                                        if ( tmp_mvar_value_26 == NULL )
                                        {

                                            exception_type = PyExc_NameError;
                                            Py_INCREF( exception_type );
                                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_edges" );
                                            exception_tb = NULL;
                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                            CHAIN_EXCEPTION( exception_value );

                                            exception_lineno = 901;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_26;
                                        }

                                        tmp_called_name_28 = tmp_mvar_value_26;
                                        CHECK_OBJECT( var_padded );
                                        tmp_args_element_name_78 = var_padded;
                                        CHECK_OBJECT( var_axis );
                                        tmp_args_element_name_79 = var_axis;
                                        CHECK_OBJECT( var_left_index );
                                        tmp_tuple_element_4 = var_left_index;
                                        tmp_args_element_name_80 = PyTuple_New( 2 );
                                        Py_INCREF( tmp_tuple_element_4 );
                                        PyTuple_SET_ITEM( tmp_args_element_name_80, 0, tmp_tuple_element_4 );
                                        CHECK_OBJECT( var_right_index );
                                        tmp_tuple_element_4 = var_right_index;
                                        Py_INCREF( tmp_tuple_element_4 );
                                        PyTuple_SET_ITEM( tmp_args_element_name_80, 1, tmp_tuple_element_4 );
                                        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 901;
                                        {
                                            PyObject *call_args[] = { tmp_args_element_name_78, tmp_args_element_name_79, tmp_args_element_name_80 };
                                            tmp_assign_source_97 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_28, call_args );
                                        }

                                        Py_DECREF( tmp_args_element_name_80 );
                                        if ( tmp_assign_source_97 == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 901;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_26;
                                        }
                                        {
                                            PyObject *old = var_edge_pair;
                                            var_edge_pair = tmp_assign_source_97;
                                            Py_XDECREF( old );
                                        }

                                    }
                                    {
                                        PyObject *tmp_called_name_29;
                                        PyObject *tmp_mvar_value_27;
                                        PyObject *tmp_call_result_8;
                                        PyObject *tmp_args_element_name_81;
                                        PyObject *tmp_args_element_name_82;
                                        PyObject *tmp_args_element_name_83;
                                        PyObject *tmp_tuple_element_5;
                                        PyObject *tmp_args_element_name_84;
                                        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__set_pad_area );

                                        if (unlikely( tmp_mvar_value_27 == NULL ))
                                        {
                                            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__set_pad_area );
                                        }

                                        if ( tmp_mvar_value_27 == NULL )
                                        {

                                            exception_type = PyExc_NameError;
                                            Py_INCREF( exception_type );
                                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_set_pad_area" );
                                            exception_tb = NULL;
                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                            CHAIN_EXCEPTION( exception_value );

                                            exception_lineno = 902;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_26;
                                        }

                                        tmp_called_name_29 = tmp_mvar_value_27;
                                        CHECK_OBJECT( var_padded );
                                        tmp_args_element_name_81 = var_padded;
                                        CHECK_OBJECT( var_axis );
                                        tmp_args_element_name_82 = var_axis;
                                        CHECK_OBJECT( var_left_index );
                                        tmp_tuple_element_5 = var_left_index;
                                        tmp_args_element_name_83 = PyTuple_New( 2 );
                                        Py_INCREF( tmp_tuple_element_5 );
                                        PyTuple_SET_ITEM( tmp_args_element_name_83, 0, tmp_tuple_element_5 );
                                        CHECK_OBJECT( var_right_index );
                                        tmp_tuple_element_5 = var_right_index;
                                        Py_INCREF( tmp_tuple_element_5 );
                                        PyTuple_SET_ITEM( tmp_args_element_name_83, 1, tmp_tuple_element_5 );
                                        CHECK_OBJECT( var_edge_pair );
                                        tmp_args_element_name_84 = var_edge_pair;
                                        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 902;
                                        {
                                            PyObject *call_args[] = { tmp_args_element_name_81, tmp_args_element_name_82, tmp_args_element_name_83, tmp_args_element_name_84 };
                                            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_29, call_args );
                                        }

                                        Py_DECREF( tmp_args_element_name_83 );
                                        if ( tmp_call_result_8 == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 902;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_26;
                                        }
                                        Py_DECREF( tmp_call_result_8 );
                                    }
                                    goto loop_start_8;
                                    branch_no_13:;
                                }
                                {
                                    PyObject *tmp_assign_source_98;
                                    PyObject *tmp_called_name_30;
                                    PyObject *tmp_mvar_value_28;
                                    PyObject *tmp_args_element_name_85;
                                    PyObject *tmp_args_element_name_86;
                                    PyObject *tmp_args_element_name_87;
                                    tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__view_roi );

                                    if (unlikely( tmp_mvar_value_28 == NULL ))
                                    {
                                        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__view_roi );
                                    }

                                    if ( tmp_mvar_value_28 == NULL )
                                    {

                                        exception_type = PyExc_NameError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_view_roi" );
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                        CHAIN_EXCEPTION( exception_value );

                                        exception_lineno = 906;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_26;
                                    }

                                    tmp_called_name_30 = tmp_mvar_value_28;
                                    CHECK_OBJECT( var_padded );
                                    tmp_args_element_name_85 = var_padded;
                                    CHECK_OBJECT( var_original_area_slice );
                                    tmp_args_element_name_86 = var_original_area_slice;
                                    CHECK_OBJECT( var_axis );
                                    tmp_args_element_name_87 = var_axis;
                                    frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 906;
                                    {
                                        PyObject *call_args[] = { tmp_args_element_name_85, tmp_args_element_name_86, tmp_args_element_name_87 };
                                        tmp_assign_source_98 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_30, call_args );
                                    }

                                    if ( tmp_assign_source_98 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 906;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_26;
                                    }
                                    {
                                        PyObject *old = var_roi;
                                        var_roi = tmp_assign_source_98;
                                        Py_XDECREF( old );
                                    }

                                }
                                loop_start_9:;
                                {
                                    nuitka_bool tmp_condition_result_15;
                                    PyObject *tmp_operand_name_3;
                                    int tmp_or_left_truth_2;
                                    PyObject *tmp_or_left_value_2;
                                    PyObject *tmp_or_right_value_2;
                                    PyObject *tmp_compexpr_left_14;
                                    PyObject *tmp_compexpr_right_14;
                                    PyObject *tmp_compexpr_left_15;
                                    PyObject *tmp_compexpr_right_15;
                                    CHECK_OBJECT( var_left_index );
                                    tmp_compexpr_left_14 = var_left_index;
                                    tmp_compexpr_right_14 = const_int_0;
                                    tmp_or_left_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
                                    if ( tmp_or_left_value_2 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 907;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_26;
                                    }
                                    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
                                    if ( tmp_or_left_truth_2 == -1 )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                        Py_DECREF( tmp_or_left_value_2 );

                                        exception_lineno = 907;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_26;
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
                                    CHECK_OBJECT( var_right_index );
                                    tmp_compexpr_left_15 = var_right_index;
                                    tmp_compexpr_right_15 = const_int_0;
                                    tmp_or_right_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
                                    if ( tmp_or_right_value_2 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 907;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_26;
                                    }
                                    tmp_operand_name_3 = tmp_or_right_value_2;
                                    goto or_end_2;
                                    or_left_2:;
                                    tmp_operand_name_3 = tmp_or_left_value_2;
                                    or_end_2:;
                                    tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
                                    Py_DECREF( tmp_operand_name_3 );
                                    if ( tmp_res == -1 )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 907;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_26;
                                    }
                                    tmp_condition_result_15 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                    if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
                                    {
                                        goto branch_yes_14;
                                    }
                                    else
                                    {
                                        goto branch_no_14;
                                    }
                                    branch_yes_14:;
                                    goto loop_end_9;
                                    branch_no_14:;
                                }
                                // Tried code:
                                {
                                    PyObject *tmp_assign_source_99;
                                    PyObject *tmp_iter_arg_19;
                                    PyObject *tmp_called_name_31;
                                    PyObject *tmp_mvar_value_29;
                                    PyObject *tmp_args_element_name_88;
                                    PyObject *tmp_args_element_name_89;
                                    PyObject *tmp_args_element_name_90;
                                    PyObject *tmp_tuple_element_6;
                                    PyObject *tmp_args_element_name_91;
                                    PyObject *tmp_args_element_name_92;
                                    tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__set_reflect_both );

                                    if (unlikely( tmp_mvar_value_29 == NULL ))
                                    {
                                        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__set_reflect_both );
                                    }

                                    if ( tmp_mvar_value_29 == NULL )
                                    {

                                        exception_type = PyExc_NameError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_set_reflect_both" );
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                        CHAIN_EXCEPTION( exception_value );

                                        exception_lineno = 911;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_31;
                                    }

                                    tmp_called_name_31 = tmp_mvar_value_29;
                                    CHECK_OBJECT( var_roi );
                                    tmp_args_element_name_88 = var_roi;
                                    CHECK_OBJECT( var_axis );
                                    tmp_args_element_name_89 = var_axis;
                                    CHECK_OBJECT( var_left_index );
                                    tmp_tuple_element_6 = var_left_index;
                                    tmp_args_element_name_90 = PyTuple_New( 2 );
                                    Py_INCREF( tmp_tuple_element_6 );
                                    PyTuple_SET_ITEM( tmp_args_element_name_90, 0, tmp_tuple_element_6 );
                                    CHECK_OBJECT( var_right_index );
                                    tmp_tuple_element_6 = var_right_index;
                                    Py_INCREF( tmp_tuple_element_6 );
                                    PyTuple_SET_ITEM( tmp_args_element_name_90, 1, tmp_tuple_element_6 );
                                    CHECK_OBJECT( var_method );
                                    tmp_args_element_name_91 = var_method;
                                    CHECK_OBJECT( var_include_edge );
                                    tmp_args_element_name_92 = var_include_edge;
                                    frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 911;
                                    {
                                        PyObject *call_args[] = { tmp_args_element_name_88, tmp_args_element_name_89, tmp_args_element_name_90, tmp_args_element_name_91, tmp_args_element_name_92 };
                                        tmp_iter_arg_19 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_31, call_args );
                                    }

                                    Py_DECREF( tmp_args_element_name_90 );
                                    if ( tmp_iter_arg_19 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 911;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_31;
                                    }
                                    tmp_assign_source_99 = MAKE_ITERATOR( tmp_iter_arg_19 );
                                    Py_DECREF( tmp_iter_arg_19 );
                                    if ( tmp_assign_source_99 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 911;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_31;
                                    }
                                    {
                                        PyObject *old = tmp_tuple_unpack_10__source_iter;
                                        tmp_tuple_unpack_10__source_iter = tmp_assign_source_99;
                                        Py_XDECREF( old );
                                    }

                                }
                                // Tried code:
                                {
                                    PyObject *tmp_assign_source_100;
                                    PyObject *tmp_unpack_22;
                                    CHECK_OBJECT( tmp_tuple_unpack_10__source_iter );
                                    tmp_unpack_22 = tmp_tuple_unpack_10__source_iter;
                                    tmp_assign_source_100 = UNPACK_NEXT( tmp_unpack_22, 0, 2 );
                                    if ( tmp_assign_source_100 == NULL )
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


                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        exception_lineno = 911;
                                        goto try_except_handler_32;
                                    }
                                    {
                                        PyObject *old = tmp_tuple_unpack_10__element_1;
                                        tmp_tuple_unpack_10__element_1 = tmp_assign_source_100;
                                        Py_XDECREF( old );
                                    }

                                }
                                {
                                    PyObject *tmp_assign_source_101;
                                    PyObject *tmp_unpack_23;
                                    CHECK_OBJECT( tmp_tuple_unpack_10__source_iter );
                                    tmp_unpack_23 = tmp_tuple_unpack_10__source_iter;
                                    tmp_assign_source_101 = UNPACK_NEXT( tmp_unpack_23, 1, 2 );
                                    if ( tmp_assign_source_101 == NULL )
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


                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        exception_lineno = 911;
                                        goto try_except_handler_32;
                                    }
                                    {
                                        PyObject *old = tmp_tuple_unpack_10__element_2;
                                        tmp_tuple_unpack_10__element_2 = tmp_assign_source_101;
                                        Py_XDECREF( old );
                                    }

                                }
                                {
                                    PyObject *tmp_iterator_name_10;
                                    CHECK_OBJECT( tmp_tuple_unpack_10__source_iter );
                                    tmp_iterator_name_10 = tmp_tuple_unpack_10__source_iter;
                                    // Check if iterator has left-over elements.
                                    CHECK_OBJECT( tmp_iterator_name_10 ); assert( HAS_ITERNEXT( tmp_iterator_name_10 ) );

                                    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_10 )->tp_iternext)( tmp_iterator_name_10 );

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

                                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                                exception_lineno = 911;
                                                goto try_except_handler_32;
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

                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        exception_lineno = 911;
                                        goto try_except_handler_32;
                                    }
                                }
                                goto try_end_27;
                                // Exception handler code:
                                try_except_handler_32:;
                                exception_keeper_type_28 = exception_type;
                                exception_keeper_value_28 = exception_value;
                                exception_keeper_tb_28 = exception_tb;
                                exception_keeper_lineno_28 = exception_lineno;
                                exception_type = NULL;
                                exception_value = NULL;
                                exception_tb = NULL;
                                exception_lineno = 0;

                                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_10__source_iter );
                                Py_DECREF( tmp_tuple_unpack_10__source_iter );
                                tmp_tuple_unpack_10__source_iter = NULL;

                                // Re-raise.
                                exception_type = exception_keeper_type_28;
                                exception_value = exception_keeper_value_28;
                                exception_tb = exception_keeper_tb_28;
                                exception_lineno = exception_keeper_lineno_28;

                                goto try_except_handler_31;
                                // End of try:
                                try_end_27:;
                                goto try_end_28;
                                // Exception handler code:
                                try_except_handler_31:;
                                exception_keeper_type_29 = exception_type;
                                exception_keeper_value_29 = exception_value;
                                exception_keeper_tb_29 = exception_tb;
                                exception_keeper_lineno_29 = exception_lineno;
                                exception_type = NULL;
                                exception_value = NULL;
                                exception_tb = NULL;
                                exception_lineno = 0;

                                Py_XDECREF( tmp_tuple_unpack_10__element_1 );
                                tmp_tuple_unpack_10__element_1 = NULL;

                                Py_XDECREF( tmp_tuple_unpack_10__element_2 );
                                tmp_tuple_unpack_10__element_2 = NULL;

                                // Re-raise.
                                exception_type = exception_keeper_type_29;
                                exception_value = exception_keeper_value_29;
                                exception_tb = exception_keeper_tb_29;
                                exception_lineno = exception_keeper_lineno_29;

                                goto try_except_handler_26;
                                // End of try:
                                try_end_28:;
                                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_10__source_iter );
                                Py_DECREF( tmp_tuple_unpack_10__source_iter );
                                tmp_tuple_unpack_10__source_iter = NULL;

                                {
                                    PyObject *tmp_assign_source_102;
                                    CHECK_OBJECT( tmp_tuple_unpack_10__element_1 );
                                    tmp_assign_source_102 = tmp_tuple_unpack_10__element_1;
                                    {
                                        PyObject *old = var_left_index;
                                        assert( old != NULL );
                                        var_left_index = tmp_assign_source_102;
                                        Py_INCREF( var_left_index );
                                        Py_DECREF( old );
                                    }

                                }
                                Py_XDECREF( tmp_tuple_unpack_10__element_1 );
                                tmp_tuple_unpack_10__element_1 = NULL;

                                {
                                    PyObject *tmp_assign_source_103;
                                    CHECK_OBJECT( tmp_tuple_unpack_10__element_2 );
                                    tmp_assign_source_103 = tmp_tuple_unpack_10__element_2;
                                    {
                                        PyObject *old = var_right_index;
                                        assert( old != NULL );
                                        var_right_index = tmp_assign_source_103;
                                        Py_INCREF( var_right_index );
                                        Py_DECREF( old );
                                    }

                                }
                                Py_XDECREF( tmp_tuple_unpack_10__element_2 );
                                tmp_tuple_unpack_10__element_2 = NULL;

                                if ( CONSIDER_THREADING() == false )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 907;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto try_except_handler_26;
                                }
                                goto loop_start_9;
                                loop_end_9:;
                                if ( CONSIDER_THREADING() == false )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 897;
                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                    goto try_except_handler_26;
                                }
                                goto loop_start_8;
                                loop_end_8:;
                                goto try_end_29;
                                // Exception handler code:
                                try_except_handler_26:;
                                exception_keeper_type_30 = exception_type;
                                exception_keeper_value_30 = exception_value;
                                exception_keeper_tb_30 = exception_tb;
                                exception_keeper_lineno_30 = exception_lineno;
                                exception_type = NULL;
                                exception_value = NULL;
                                exception_tb = NULL;
                                exception_lineno = 0;

                                Py_XDECREF( tmp_for_loop_8__iter_value );
                                tmp_for_loop_8__iter_value = NULL;

                                CHECK_OBJECT( (PyObject *)tmp_for_loop_8__for_iterator );
                                Py_DECREF( tmp_for_loop_8__for_iterator );
                                tmp_for_loop_8__for_iterator = NULL;

                                // Re-raise.
                                exception_type = exception_keeper_type_30;
                                exception_value = exception_keeper_value_30;
                                exception_tb = exception_keeper_tb_30;
                                exception_lineno = exception_keeper_lineno_30;

                                goto frame_exception_exit_1;
                                // End of try:
                                try_end_29:;
                                Py_XDECREF( tmp_for_loop_8__iter_value );
                                tmp_for_loop_8__iter_value = NULL;

                                CHECK_OBJECT( (PyObject *)tmp_for_loop_8__for_iterator );
                                Py_DECREF( tmp_for_loop_8__for_iterator );
                                tmp_for_loop_8__for_iterator = NULL;

                                goto branch_end_12;
                                branch_no_12:;
                                {
                                    nuitka_bool tmp_condition_result_16;
                                    PyObject *tmp_compexpr_left_16;
                                    PyObject *tmp_compexpr_right_16;
                                    CHECK_OBJECT( par_mode );
                                    tmp_compexpr_left_16 = par_mode;
                                    tmp_compexpr_right_16 = const_str_plain_wrap;
                                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
                                    if ( tmp_res == -1 )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 916;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                    if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
                                    {
                                        goto branch_yes_15;
                                    }
                                    else
                                    {
                                        goto branch_no_15;
                                    }
                                    branch_yes_15:;
                                    {
                                        PyObject *tmp_assign_source_104;
                                        PyObject *tmp_iter_arg_20;
                                        PyObject *tmp_called_name_32;
                                        PyObject *tmp_args_element_name_93;
                                        PyObject *tmp_args_element_name_94;
                                        tmp_called_name_32 = (PyObject *)&PyZip_Type;
                                        CHECK_OBJECT( var_axes );
                                        tmp_args_element_name_93 = var_axes;
                                        CHECK_OBJECT( par_pad_width );
                                        tmp_args_element_name_94 = par_pad_width;
                                        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 917;
                                        {
                                            PyObject *call_args[] = { tmp_args_element_name_93, tmp_args_element_name_94 };
                                            tmp_iter_arg_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_32, call_args );
                                        }

                                        if ( tmp_iter_arg_20 == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 917;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto frame_exception_exit_1;
                                        }
                                        tmp_assign_source_104 = MAKE_ITERATOR( tmp_iter_arg_20 );
                                        Py_DECREF( tmp_iter_arg_20 );
                                        if ( tmp_assign_source_104 == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 917;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto frame_exception_exit_1;
                                        }
                                        assert( tmp_for_loop_9__for_iterator == NULL );
                                        tmp_for_loop_9__for_iterator = tmp_assign_source_104;
                                    }
                                    // Tried code:
                                    loop_start_10:;
                                    {
                                        PyObject *tmp_next_source_9;
                                        PyObject *tmp_assign_source_105;
                                        CHECK_OBJECT( tmp_for_loop_9__for_iterator );
                                        tmp_next_source_9 = tmp_for_loop_9__for_iterator;
                                        tmp_assign_source_105 = ITERATOR_NEXT( tmp_next_source_9 );
                                        if ( tmp_assign_source_105 == NULL )
                                        {
                                            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                                            {

                                                goto loop_end_10;
                                            }
                                            else
                                            {

                                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                                exception_lineno = 917;
                                                goto try_except_handler_33;
                                            }
                                        }

                                        {
                                            PyObject *old = tmp_for_loop_9__iter_value;
                                            tmp_for_loop_9__iter_value = tmp_assign_source_105;
                                            Py_XDECREF( old );
                                        }

                                    }
                                    // Tried code:
                                    {
                                        PyObject *tmp_assign_source_106;
                                        PyObject *tmp_iter_arg_21;
                                        CHECK_OBJECT( tmp_for_loop_9__iter_value );
                                        tmp_iter_arg_21 = tmp_for_loop_9__iter_value;
                                        tmp_assign_source_106 = MAKE_ITERATOR( tmp_iter_arg_21 );
                                        if ( tmp_assign_source_106 == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 917;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_34;
                                        }
                                        {
                                            PyObject *old = tmp_tuple_unpack_11__source_iter;
                                            tmp_tuple_unpack_11__source_iter = tmp_assign_source_106;
                                            Py_XDECREF( old );
                                        }

                                    }
                                    // Tried code:
                                    {
                                        PyObject *tmp_assign_source_107;
                                        PyObject *tmp_unpack_24;
                                        CHECK_OBJECT( tmp_tuple_unpack_11__source_iter );
                                        tmp_unpack_24 = tmp_tuple_unpack_11__source_iter;
                                        tmp_assign_source_107 = UNPACK_NEXT( tmp_unpack_24, 0, 2 );
                                        if ( tmp_assign_source_107 == NULL )
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


                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            exception_lineno = 917;
                                            goto try_except_handler_35;
                                        }
                                        {
                                            PyObject *old = tmp_tuple_unpack_11__element_1;
                                            tmp_tuple_unpack_11__element_1 = tmp_assign_source_107;
                                            Py_XDECREF( old );
                                        }

                                    }
                                    {
                                        PyObject *tmp_assign_source_108;
                                        PyObject *tmp_unpack_25;
                                        CHECK_OBJECT( tmp_tuple_unpack_11__source_iter );
                                        tmp_unpack_25 = tmp_tuple_unpack_11__source_iter;
                                        tmp_assign_source_108 = UNPACK_NEXT( tmp_unpack_25, 1, 2 );
                                        if ( tmp_assign_source_108 == NULL )
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


                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            exception_lineno = 917;
                                            goto try_except_handler_35;
                                        }
                                        {
                                            PyObject *old = tmp_tuple_unpack_11__element_2;
                                            tmp_tuple_unpack_11__element_2 = tmp_assign_source_108;
                                            Py_XDECREF( old );
                                        }

                                    }
                                    {
                                        PyObject *tmp_iterator_name_11;
                                        CHECK_OBJECT( tmp_tuple_unpack_11__source_iter );
                                        tmp_iterator_name_11 = tmp_tuple_unpack_11__source_iter;
                                        // Check if iterator has left-over elements.
                                        CHECK_OBJECT( tmp_iterator_name_11 ); assert( HAS_ITERNEXT( tmp_iterator_name_11 ) );

                                        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_11 )->tp_iternext)( tmp_iterator_name_11 );

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

                                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                                    exception_lineno = 917;
                                                    goto try_except_handler_35;
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

                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            exception_lineno = 917;
                                            goto try_except_handler_35;
                                        }
                                    }
                                    goto try_end_30;
                                    // Exception handler code:
                                    try_except_handler_35:;
                                    exception_keeper_type_31 = exception_type;
                                    exception_keeper_value_31 = exception_value;
                                    exception_keeper_tb_31 = exception_tb;
                                    exception_keeper_lineno_31 = exception_lineno;
                                    exception_type = NULL;
                                    exception_value = NULL;
                                    exception_tb = NULL;
                                    exception_lineno = 0;

                                    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_11__source_iter );
                                    Py_DECREF( tmp_tuple_unpack_11__source_iter );
                                    tmp_tuple_unpack_11__source_iter = NULL;

                                    // Re-raise.
                                    exception_type = exception_keeper_type_31;
                                    exception_value = exception_keeper_value_31;
                                    exception_tb = exception_keeper_tb_31;
                                    exception_lineno = exception_keeper_lineno_31;

                                    goto try_except_handler_34;
                                    // End of try:
                                    try_end_30:;
                                    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_11__source_iter );
                                    Py_DECREF( tmp_tuple_unpack_11__source_iter );
                                    tmp_tuple_unpack_11__source_iter = NULL;

                                    {
                                        PyObject *tmp_assign_source_109;
                                        CHECK_OBJECT( tmp_tuple_unpack_11__element_1 );
                                        tmp_assign_source_109 = tmp_tuple_unpack_11__element_1;
                                        {
                                            PyObject *old = var_axis;
                                            var_axis = tmp_assign_source_109;
                                            Py_INCREF( var_axis );
                                            Py_XDECREF( old );
                                        }

                                    }
                                    Py_XDECREF( tmp_tuple_unpack_11__element_1 );
                                    tmp_tuple_unpack_11__element_1 = NULL;

                                    // Tried code:
                                    {
                                        PyObject *tmp_assign_source_110;
                                        PyObject *tmp_iter_arg_22;
                                        CHECK_OBJECT( tmp_tuple_unpack_11__element_2 );
                                        tmp_iter_arg_22 = tmp_tuple_unpack_11__element_2;
                                        tmp_assign_source_110 = MAKE_ITERATOR( tmp_iter_arg_22 );
                                        if ( tmp_assign_source_110 == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 917;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_36;
                                        }
                                        {
                                            PyObject *old = tmp_tuple_unpack_12__source_iter;
                                            tmp_tuple_unpack_12__source_iter = tmp_assign_source_110;
                                            Py_XDECREF( old );
                                        }

                                    }
                                    // Tried code:
                                    {
                                        PyObject *tmp_assign_source_111;
                                        PyObject *tmp_unpack_26;
                                        CHECK_OBJECT( tmp_tuple_unpack_12__source_iter );
                                        tmp_unpack_26 = tmp_tuple_unpack_12__source_iter;
                                        tmp_assign_source_111 = UNPACK_NEXT( tmp_unpack_26, 0, 2 );
                                        if ( tmp_assign_source_111 == NULL )
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


                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            exception_lineno = 917;
                                            goto try_except_handler_37;
                                        }
                                        {
                                            PyObject *old = tmp_tuple_unpack_12__element_1;
                                            tmp_tuple_unpack_12__element_1 = tmp_assign_source_111;
                                            Py_XDECREF( old );
                                        }

                                    }
                                    {
                                        PyObject *tmp_assign_source_112;
                                        PyObject *tmp_unpack_27;
                                        CHECK_OBJECT( tmp_tuple_unpack_12__source_iter );
                                        tmp_unpack_27 = tmp_tuple_unpack_12__source_iter;
                                        tmp_assign_source_112 = UNPACK_NEXT( tmp_unpack_27, 1, 2 );
                                        if ( tmp_assign_source_112 == NULL )
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


                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            exception_lineno = 917;
                                            goto try_except_handler_37;
                                        }
                                        {
                                            PyObject *old = tmp_tuple_unpack_12__element_2;
                                            tmp_tuple_unpack_12__element_2 = tmp_assign_source_112;
                                            Py_XDECREF( old );
                                        }

                                    }
                                    {
                                        PyObject *tmp_iterator_name_12;
                                        CHECK_OBJECT( tmp_tuple_unpack_12__source_iter );
                                        tmp_iterator_name_12 = tmp_tuple_unpack_12__source_iter;
                                        // Check if iterator has left-over elements.
                                        CHECK_OBJECT( tmp_iterator_name_12 ); assert( HAS_ITERNEXT( tmp_iterator_name_12 ) );

                                        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_12 )->tp_iternext)( tmp_iterator_name_12 );

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

                                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                                    exception_lineno = 917;
                                                    goto try_except_handler_37;
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

                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            exception_lineno = 917;
                                            goto try_except_handler_37;
                                        }
                                    }
                                    goto try_end_31;
                                    // Exception handler code:
                                    try_except_handler_37:;
                                    exception_keeper_type_32 = exception_type;
                                    exception_keeper_value_32 = exception_value;
                                    exception_keeper_tb_32 = exception_tb;
                                    exception_keeper_lineno_32 = exception_lineno;
                                    exception_type = NULL;
                                    exception_value = NULL;
                                    exception_tb = NULL;
                                    exception_lineno = 0;

                                    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_12__source_iter );
                                    Py_DECREF( tmp_tuple_unpack_12__source_iter );
                                    tmp_tuple_unpack_12__source_iter = NULL;

                                    // Re-raise.
                                    exception_type = exception_keeper_type_32;
                                    exception_value = exception_keeper_value_32;
                                    exception_tb = exception_keeper_tb_32;
                                    exception_lineno = exception_keeper_lineno_32;

                                    goto try_except_handler_36;
                                    // End of try:
                                    try_end_31:;
                                    goto try_end_32;
                                    // Exception handler code:
                                    try_except_handler_36:;
                                    exception_keeper_type_33 = exception_type;
                                    exception_keeper_value_33 = exception_value;
                                    exception_keeper_tb_33 = exception_tb;
                                    exception_keeper_lineno_33 = exception_lineno;
                                    exception_type = NULL;
                                    exception_value = NULL;
                                    exception_tb = NULL;
                                    exception_lineno = 0;

                                    Py_XDECREF( tmp_tuple_unpack_12__element_1 );
                                    tmp_tuple_unpack_12__element_1 = NULL;

                                    Py_XDECREF( tmp_tuple_unpack_12__element_2 );
                                    tmp_tuple_unpack_12__element_2 = NULL;

                                    // Re-raise.
                                    exception_type = exception_keeper_type_33;
                                    exception_value = exception_keeper_value_33;
                                    exception_tb = exception_keeper_tb_33;
                                    exception_lineno = exception_keeper_lineno_33;

                                    goto try_except_handler_34;
                                    // End of try:
                                    try_end_32:;
                                    goto try_end_33;
                                    // Exception handler code:
                                    try_except_handler_34:;
                                    exception_keeper_type_34 = exception_type;
                                    exception_keeper_value_34 = exception_value;
                                    exception_keeper_tb_34 = exception_tb;
                                    exception_keeper_lineno_34 = exception_lineno;
                                    exception_type = NULL;
                                    exception_value = NULL;
                                    exception_tb = NULL;
                                    exception_lineno = 0;

                                    Py_XDECREF( tmp_tuple_unpack_11__element_1 );
                                    tmp_tuple_unpack_11__element_1 = NULL;

                                    Py_XDECREF( tmp_tuple_unpack_11__element_2 );
                                    tmp_tuple_unpack_11__element_2 = NULL;

                                    // Re-raise.
                                    exception_type = exception_keeper_type_34;
                                    exception_value = exception_keeper_value_34;
                                    exception_tb = exception_keeper_tb_34;
                                    exception_lineno = exception_keeper_lineno_34;

                                    goto try_except_handler_33;
                                    // End of try:
                                    try_end_33:;
                                    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_12__source_iter );
                                    Py_DECREF( tmp_tuple_unpack_12__source_iter );
                                    tmp_tuple_unpack_12__source_iter = NULL;

                                    {
                                        PyObject *tmp_assign_source_113;
                                        CHECK_OBJECT( tmp_tuple_unpack_12__element_1 );
                                        tmp_assign_source_113 = tmp_tuple_unpack_12__element_1;
                                        {
                                            PyObject *old = var_left_index;
                                            var_left_index = tmp_assign_source_113;
                                            Py_INCREF( var_left_index );
                                            Py_XDECREF( old );
                                        }

                                    }
                                    Py_XDECREF( tmp_tuple_unpack_12__element_1 );
                                    tmp_tuple_unpack_12__element_1 = NULL;

                                    {
                                        PyObject *tmp_assign_source_114;
                                        CHECK_OBJECT( tmp_tuple_unpack_12__element_2 );
                                        tmp_assign_source_114 = tmp_tuple_unpack_12__element_2;
                                        {
                                            PyObject *old = var_right_index;
                                            var_right_index = tmp_assign_source_114;
                                            Py_INCREF( var_right_index );
                                            Py_XDECREF( old );
                                        }

                                    }
                                    Py_XDECREF( tmp_tuple_unpack_12__element_2 );
                                    tmp_tuple_unpack_12__element_2 = NULL;

                                    Py_XDECREF( tmp_tuple_unpack_11__element_2 );
                                    tmp_tuple_unpack_11__element_2 = NULL;

                                    {
                                        PyObject *tmp_assign_source_115;
                                        PyObject *tmp_called_name_33;
                                        PyObject *tmp_mvar_value_30;
                                        PyObject *tmp_args_element_name_95;
                                        PyObject *tmp_args_element_name_96;
                                        PyObject *tmp_args_element_name_97;
                                        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__view_roi );

                                        if (unlikely( tmp_mvar_value_30 == NULL ))
                                        {
                                            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__view_roi );
                                        }

                                        if ( tmp_mvar_value_30 == NULL )
                                        {

                                            exception_type = PyExc_NameError;
                                            Py_INCREF( exception_type );
                                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_view_roi" );
                                            exception_tb = NULL;
                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                            CHAIN_EXCEPTION( exception_value );

                                            exception_lineno = 918;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_33;
                                        }

                                        tmp_called_name_33 = tmp_mvar_value_30;
                                        CHECK_OBJECT( var_padded );
                                        tmp_args_element_name_95 = var_padded;
                                        CHECK_OBJECT( var_original_area_slice );
                                        tmp_args_element_name_96 = var_original_area_slice;
                                        CHECK_OBJECT( var_axis );
                                        tmp_args_element_name_97 = var_axis;
                                        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 918;
                                        {
                                            PyObject *call_args[] = { tmp_args_element_name_95, tmp_args_element_name_96, tmp_args_element_name_97 };
                                            tmp_assign_source_115 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_33, call_args );
                                        }

                                        if ( tmp_assign_source_115 == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 918;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_33;
                                        }
                                        {
                                            PyObject *old = var_roi;
                                            var_roi = tmp_assign_source_115;
                                            Py_XDECREF( old );
                                        }

                                    }
                                    loop_start_11:;
                                    {
                                        nuitka_bool tmp_condition_result_17;
                                        PyObject *tmp_operand_name_4;
                                        int tmp_or_left_truth_3;
                                        PyObject *tmp_or_left_value_3;
                                        PyObject *tmp_or_right_value_3;
                                        PyObject *tmp_compexpr_left_17;
                                        PyObject *tmp_compexpr_right_17;
                                        PyObject *tmp_compexpr_left_18;
                                        PyObject *tmp_compexpr_right_18;
                                        CHECK_OBJECT( var_left_index );
                                        tmp_compexpr_left_17 = var_left_index;
                                        tmp_compexpr_right_17 = const_int_0;
                                        tmp_or_left_value_3 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
                                        if ( tmp_or_left_value_3 == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 919;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_33;
                                        }
                                        tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
                                        if ( tmp_or_left_truth_3 == -1 )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                            Py_DECREF( tmp_or_left_value_3 );

                                            exception_lineno = 919;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_33;
                                        }
                                        if ( tmp_or_left_truth_3 == 1 )
                                        {
                                            goto or_left_3;
                                        }
                                        else
                                        {
                                            goto or_right_3;
                                        }
                                        or_right_3:;
                                        Py_DECREF( tmp_or_left_value_3 );
                                        CHECK_OBJECT( var_right_index );
                                        tmp_compexpr_left_18 = var_right_index;
                                        tmp_compexpr_right_18 = const_int_0;
                                        tmp_or_right_value_3 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_18, tmp_compexpr_right_18 );
                                        if ( tmp_or_right_value_3 == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 919;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_33;
                                        }
                                        tmp_operand_name_4 = tmp_or_right_value_3;
                                        goto or_end_3;
                                        or_left_3:;
                                        tmp_operand_name_4 = tmp_or_left_value_3;
                                        or_end_3:;
                                        tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
                                        Py_DECREF( tmp_operand_name_4 );
                                        if ( tmp_res == -1 )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 919;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_33;
                                        }
                                        tmp_condition_result_17 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
                                        {
                                            goto branch_yes_16;
                                        }
                                        else
                                        {
                                            goto branch_no_16;
                                        }
                                        branch_yes_16:;
                                        goto loop_end_11;
                                        branch_no_16:;
                                    }
                                    // Tried code:
                                    {
                                        PyObject *tmp_assign_source_116;
                                        PyObject *tmp_iter_arg_23;
                                        PyObject *tmp_called_name_34;
                                        PyObject *tmp_mvar_value_31;
                                        PyObject *tmp_args_element_name_98;
                                        PyObject *tmp_args_element_name_99;
                                        PyObject *tmp_args_element_name_100;
                                        PyObject *tmp_tuple_element_7;
                                        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__set_wrap_both );

                                        if (unlikely( tmp_mvar_value_31 == NULL ))
                                        {
                                            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__set_wrap_both );
                                        }

                                        if ( tmp_mvar_value_31 == NULL )
                                        {

                                            exception_type = PyExc_NameError;
                                            Py_INCREF( exception_type );
                                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_set_wrap_both" );
                                            exception_tb = NULL;
                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                            CHAIN_EXCEPTION( exception_value );

                                            exception_lineno = 923;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_38;
                                        }

                                        tmp_called_name_34 = tmp_mvar_value_31;
                                        CHECK_OBJECT( var_roi );
                                        tmp_args_element_name_98 = var_roi;
                                        CHECK_OBJECT( var_axis );
                                        tmp_args_element_name_99 = var_axis;
                                        CHECK_OBJECT( var_left_index );
                                        tmp_tuple_element_7 = var_left_index;
                                        tmp_args_element_name_100 = PyTuple_New( 2 );
                                        Py_INCREF( tmp_tuple_element_7 );
                                        PyTuple_SET_ITEM( tmp_args_element_name_100, 0, tmp_tuple_element_7 );
                                        CHECK_OBJECT( var_right_index );
                                        tmp_tuple_element_7 = var_right_index;
                                        Py_INCREF( tmp_tuple_element_7 );
                                        PyTuple_SET_ITEM( tmp_args_element_name_100, 1, tmp_tuple_element_7 );
                                        frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame.f_lineno = 923;
                                        {
                                            PyObject *call_args[] = { tmp_args_element_name_98, tmp_args_element_name_99, tmp_args_element_name_100 };
                                            tmp_iter_arg_23 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_34, call_args );
                                        }

                                        Py_DECREF( tmp_args_element_name_100 );
                                        if ( tmp_iter_arg_23 == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 923;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_38;
                                        }
                                        tmp_assign_source_116 = MAKE_ITERATOR( tmp_iter_arg_23 );
                                        Py_DECREF( tmp_iter_arg_23 );
                                        if ( tmp_assign_source_116 == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 923;
                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            goto try_except_handler_38;
                                        }
                                        {
                                            PyObject *old = tmp_tuple_unpack_13__source_iter;
                                            tmp_tuple_unpack_13__source_iter = tmp_assign_source_116;
                                            Py_XDECREF( old );
                                        }

                                    }
                                    // Tried code:
                                    {
                                        PyObject *tmp_assign_source_117;
                                        PyObject *tmp_unpack_28;
                                        CHECK_OBJECT( tmp_tuple_unpack_13__source_iter );
                                        tmp_unpack_28 = tmp_tuple_unpack_13__source_iter;
                                        tmp_assign_source_117 = UNPACK_NEXT( tmp_unpack_28, 0, 2 );
                                        if ( tmp_assign_source_117 == NULL )
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


                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            exception_lineno = 923;
                                            goto try_except_handler_39;
                                        }
                                        {
                                            PyObject *old = tmp_tuple_unpack_13__element_1;
                                            tmp_tuple_unpack_13__element_1 = tmp_assign_source_117;
                                            Py_XDECREF( old );
                                        }

                                    }
                                    {
                                        PyObject *tmp_assign_source_118;
                                        PyObject *tmp_unpack_29;
                                        CHECK_OBJECT( tmp_tuple_unpack_13__source_iter );
                                        tmp_unpack_29 = tmp_tuple_unpack_13__source_iter;
                                        tmp_assign_source_118 = UNPACK_NEXT( tmp_unpack_29, 1, 2 );
                                        if ( tmp_assign_source_118 == NULL )
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


                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            exception_lineno = 923;
                                            goto try_except_handler_39;
                                        }
                                        {
                                            PyObject *old = tmp_tuple_unpack_13__element_2;
                                            tmp_tuple_unpack_13__element_2 = tmp_assign_source_118;
                                            Py_XDECREF( old );
                                        }

                                    }
                                    {
                                        PyObject *tmp_iterator_name_13;
                                        CHECK_OBJECT( tmp_tuple_unpack_13__source_iter );
                                        tmp_iterator_name_13 = tmp_tuple_unpack_13__source_iter;
                                        // Check if iterator has left-over elements.
                                        CHECK_OBJECT( tmp_iterator_name_13 ); assert( HAS_ITERNEXT( tmp_iterator_name_13 ) );

                                        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_13 )->tp_iternext)( tmp_iterator_name_13 );

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

                                                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                                                    exception_lineno = 923;
                                                    goto try_except_handler_39;
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

                                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                                            exception_lineno = 923;
                                            goto try_except_handler_39;
                                        }
                                    }
                                    goto try_end_34;
                                    // Exception handler code:
                                    try_except_handler_39:;
                                    exception_keeper_type_35 = exception_type;
                                    exception_keeper_value_35 = exception_value;
                                    exception_keeper_tb_35 = exception_tb;
                                    exception_keeper_lineno_35 = exception_lineno;
                                    exception_type = NULL;
                                    exception_value = NULL;
                                    exception_tb = NULL;
                                    exception_lineno = 0;

                                    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_13__source_iter );
                                    Py_DECREF( tmp_tuple_unpack_13__source_iter );
                                    tmp_tuple_unpack_13__source_iter = NULL;

                                    // Re-raise.
                                    exception_type = exception_keeper_type_35;
                                    exception_value = exception_keeper_value_35;
                                    exception_tb = exception_keeper_tb_35;
                                    exception_lineno = exception_keeper_lineno_35;

                                    goto try_except_handler_38;
                                    // End of try:
                                    try_end_34:;
                                    goto try_end_35;
                                    // Exception handler code:
                                    try_except_handler_38:;
                                    exception_keeper_type_36 = exception_type;
                                    exception_keeper_value_36 = exception_value;
                                    exception_keeper_tb_36 = exception_tb;
                                    exception_keeper_lineno_36 = exception_lineno;
                                    exception_type = NULL;
                                    exception_value = NULL;
                                    exception_tb = NULL;
                                    exception_lineno = 0;

                                    Py_XDECREF( tmp_tuple_unpack_13__element_1 );
                                    tmp_tuple_unpack_13__element_1 = NULL;

                                    Py_XDECREF( tmp_tuple_unpack_13__element_2 );
                                    tmp_tuple_unpack_13__element_2 = NULL;

                                    // Re-raise.
                                    exception_type = exception_keeper_type_36;
                                    exception_value = exception_keeper_value_36;
                                    exception_tb = exception_keeper_tb_36;
                                    exception_lineno = exception_keeper_lineno_36;

                                    goto try_except_handler_33;
                                    // End of try:
                                    try_end_35:;
                                    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_13__source_iter );
                                    Py_DECREF( tmp_tuple_unpack_13__source_iter );
                                    tmp_tuple_unpack_13__source_iter = NULL;

                                    {
                                        PyObject *tmp_assign_source_119;
                                        CHECK_OBJECT( tmp_tuple_unpack_13__element_1 );
                                        tmp_assign_source_119 = tmp_tuple_unpack_13__element_1;
                                        {
                                            PyObject *old = var_left_index;
                                            assert( old != NULL );
                                            var_left_index = tmp_assign_source_119;
                                            Py_INCREF( var_left_index );
                                            Py_DECREF( old );
                                        }

                                    }
                                    Py_XDECREF( tmp_tuple_unpack_13__element_1 );
                                    tmp_tuple_unpack_13__element_1 = NULL;

                                    {
                                        PyObject *tmp_assign_source_120;
                                        CHECK_OBJECT( tmp_tuple_unpack_13__element_2 );
                                        tmp_assign_source_120 = tmp_tuple_unpack_13__element_2;
                                        {
                                            PyObject *old = var_right_index;
                                            assert( old != NULL );
                                            var_right_index = tmp_assign_source_120;
                                            Py_INCREF( var_right_index );
                                            Py_DECREF( old );
                                        }

                                    }
                                    Py_XDECREF( tmp_tuple_unpack_13__element_2 );
                                    tmp_tuple_unpack_13__element_2 = NULL;

                                    if ( CONSIDER_THREADING() == false )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 919;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_33;
                                    }
                                    goto loop_start_11;
                                    loop_end_11:;
                                    if ( CONSIDER_THREADING() == false )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 917;
                                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                                        goto try_except_handler_33;
                                    }
                                    goto loop_start_10;
                                    loop_end_10:;
                                    goto try_end_36;
                                    // Exception handler code:
                                    try_except_handler_33:;
                                    exception_keeper_type_37 = exception_type;
                                    exception_keeper_value_37 = exception_value;
                                    exception_keeper_tb_37 = exception_tb;
                                    exception_keeper_lineno_37 = exception_lineno;
                                    exception_type = NULL;
                                    exception_value = NULL;
                                    exception_tb = NULL;
                                    exception_lineno = 0;

                                    Py_XDECREF( tmp_for_loop_9__iter_value );
                                    tmp_for_loop_9__iter_value = NULL;

                                    CHECK_OBJECT( (PyObject *)tmp_for_loop_9__for_iterator );
                                    Py_DECREF( tmp_for_loop_9__for_iterator );
                                    tmp_for_loop_9__for_iterator = NULL;

                                    // Re-raise.
                                    exception_type = exception_keeper_type_37;
                                    exception_value = exception_keeper_value_37;
                                    exception_tb = exception_keeper_tb_37;
                                    exception_lineno = exception_keeper_lineno_37;

                                    goto frame_exception_exit_1;
                                    // End of try:
                                    try_end_36:;
                                    Py_XDECREF( tmp_for_loop_9__iter_value );
                                    tmp_for_loop_9__iter_value = NULL;

                                    CHECK_OBJECT( (PyObject *)tmp_for_loop_9__for_iterator );
                                    Py_DECREF( tmp_for_loop_9__for_iterator );
                                    tmp_for_loop_9__for_iterator = NULL;

                                    branch_no_15:;
                                }
                                branch_end_12:;
                            }
                            branch_end_11:;
                        }
                        branch_end_10:;
                    }
                    branch_end_9:;
                }
                branch_end_7:;
            }
            branch_no_6:;
        }
        branch_end_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c7ecefaee6e383339573fd2b91cb39a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c7ecefaee6e383339573fd2b91cb39a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c7ecefaee6e383339573fd2b91cb39a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5c7ecefaee6e383339573fd2b91cb39a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5c7ecefaee6e383339573fd2b91cb39a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5c7ecefaee6e383339573fd2b91cb39a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5c7ecefaee6e383339573fd2b91cb39a,
        type_description_1,
        par_array,
        par_pad_width,
        par_mode,
        par_kwargs,
        var_function,
        var_padded,
        var__,
        var_axis,
        var_view,
        var_inds,
        var_ind,
        var_allowed_kwargs,
        var_unsupported_kwargs,
        var_stat_functions,
        var_original_area_slice,
        var_axes,
        var_values,
        var_width_pair,
        var_value_pair,
        var_roi,
        var_edge_pair,
        var_end_values,
        var_ramp_pair,
        var_func,
        var_length,
        var_length_pair,
        var_stat_pair,
        var_method,
        var_include_edge,
        var_left_index,
        var_right_index
    );


    // Release cached frame.
    if ( frame_5c7ecefaee6e383339573fd2b91cb39a == cache_frame_5c7ecefaee6e383339573fd2b91cb39a )
    {
        Py_DECREF( frame_5c7ecefaee6e383339573fd2b91cb39a );
    }
    cache_frame_5c7ecefaee6e383339573fd2b91cb39a = NULL;

    assertFrameObject( frame_5c7ecefaee6e383339573fd2b91cb39a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_padded );
    tmp_return_value = var_padded;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_14_pad );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    CHECK_OBJECT( (PyObject *)par_pad_width );
    Py_DECREF( par_pad_width );
    par_pad_width = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_function );
    var_function = NULL;

    CHECK_OBJECT( (PyObject *)var_padded );
    Py_DECREF( var_padded );
    var_padded = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_axis );
    var_axis = NULL;

    Py_XDECREF( var_view );
    var_view = NULL;

    Py_XDECREF( var_inds );
    var_inds = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_allowed_kwargs );
    var_allowed_kwargs = NULL;

    Py_XDECREF( var_unsupported_kwargs );
    var_unsupported_kwargs = NULL;

    Py_XDECREF( var_stat_functions );
    var_stat_functions = NULL;

    Py_XDECREF( var_original_area_slice );
    var_original_area_slice = NULL;

    Py_XDECREF( var_axes );
    var_axes = NULL;

    Py_XDECREF( var_values );
    var_values = NULL;

    Py_XDECREF( var_width_pair );
    var_width_pair = NULL;

    Py_XDECREF( var_value_pair );
    var_value_pair = NULL;

    Py_XDECREF( var_roi );
    var_roi = NULL;

    Py_XDECREF( var_edge_pair );
    var_edge_pair = NULL;

    Py_XDECREF( var_end_values );
    var_end_values = NULL;

    Py_XDECREF( var_ramp_pair );
    var_ramp_pair = NULL;

    Py_XDECREF( var_func );
    var_func = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    Py_XDECREF( var_length_pair );
    var_length_pair = NULL;

    Py_XDECREF( var_stat_pair );
    var_stat_pair = NULL;

    Py_XDECREF( var_method );
    var_method = NULL;

    Py_XDECREF( var_include_edge );
    var_include_edge = NULL;

    Py_XDECREF( var_left_index );
    var_left_index = NULL;

    Py_XDECREF( var_right_index );
    var_right_index = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    CHECK_OBJECT( (PyObject *)par_pad_width );
    Py_DECREF( par_pad_width );
    par_pad_width = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_function );
    var_function = NULL;

    Py_XDECREF( var_padded );
    var_padded = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_axis );
    var_axis = NULL;

    Py_XDECREF( var_view );
    var_view = NULL;

    Py_XDECREF( var_inds );
    var_inds = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_allowed_kwargs );
    var_allowed_kwargs = NULL;

    Py_XDECREF( var_unsupported_kwargs );
    var_unsupported_kwargs = NULL;

    Py_XDECREF( var_stat_functions );
    var_stat_functions = NULL;

    Py_XDECREF( var_original_area_slice );
    var_original_area_slice = NULL;

    Py_XDECREF( var_axes );
    var_axes = NULL;

    Py_XDECREF( var_values );
    var_values = NULL;

    Py_XDECREF( var_width_pair );
    var_width_pair = NULL;

    Py_XDECREF( var_value_pair );
    var_value_pair = NULL;

    Py_XDECREF( var_roi );
    var_roi = NULL;

    Py_XDECREF( var_edge_pair );
    var_edge_pair = NULL;

    Py_XDECREF( var_end_values );
    var_end_values = NULL;

    Py_XDECREF( var_ramp_pair );
    var_ramp_pair = NULL;

    Py_XDECREF( var_func );
    var_func = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    Py_XDECREF( var_length_pair );
    var_length_pair = NULL;

    Py_XDECREF( var_stat_pair );
    var_stat_pair = NULL;

    Py_XDECREF( var_method );
    var_method = NULL;

    Py_XDECREF( var_include_edge );
    var_include_edge = NULL;

    Py_XDECREF( var_left_index );
    var_left_index = NULL;

    Py_XDECREF( var_right_index );
    var_right_index = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraypad$$$function_14_pad );
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



struct numpy$lib$arraypad$$$function_14_pad$$$genexpr_1_genexpr_locals {
    PyObject *var_ind;
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

static PyObject *numpy$lib$arraypad$$$function_14_pad$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$lib$arraypad$$$function_14_pad$$$genexpr_1_genexpr_locals *generator_heap = (struct numpy$lib$arraypad$$$function_14_pad$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_ind = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_0ddc48bff55e022bf9845decca10c27e, module_numpy$lib$arraypad, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 812;
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
            PyObject *old = generator_heap->var_ind;
            generator_heap->var_ind = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_ind );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_ind );
        tmp_left_name_1 = generator_heap->var_ind;
        tmp_right_name_1 = const_tuple_ellipsis_tuple;
        tmp_expression_name_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 812;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 812;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 812;
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
            generator_heap->var_ind
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

    Py_XDECREF( generator_heap->var_ind );
    generator_heap->var_ind = NULL;

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

    Py_XDECREF( generator_heap->var_ind );
    generator_heap->var_ind = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$lib$arraypad$$$function_14_pad$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$lib$arraypad$$$function_14_pad$$$genexpr_1_genexpr_context,
        module_numpy$lib$arraypad,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_fd096b3979fb57a7dd585a7ce3a49e25,
#endif
        codeobj_0ddc48bff55e022bf9845decca10c27e,
        1,
        sizeof(struct numpy$lib$arraypad$$$function_14_pad$$$genexpr_1_genexpr_locals)
    );
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_10__set_reflect_both( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraypad$$$function_10__set_reflect_both,
        const_str_plain__set_reflect_both,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_816903115c0df5b018ae50cd2d03b0a7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraypad,
        const_str_digest_ad624d1305f637d8804820a52da6da65,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_11__set_wrap_both(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraypad$$$function_11__set_wrap_both,
        const_str_plain__set_wrap_both,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3bf998e5c49f1e8e3bf35c6c2943ac19,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraypad,
        const_str_digest_5b795b900cf96d0f8f23d5f0ae069a60,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_12__as_pairs( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraypad$$$function_12__as_pairs,
        const_str_plain__as_pairs,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0292ba3846fccf63e980a719a6af72db,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraypad,
        const_str_digest_9cd59190d3d3f277685a8eabead5a4ec,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_13__pad_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraypad$$$function_13__pad_dispatcher,
        const_str_plain__pad_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7b7ba7ce1a1bc345441714050682c0cb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraypad,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_14_pad( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraypad$$$function_14_pad,
        const_str_plain_pad,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5c7ecefaee6e383339573fd2b91cb39a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraypad,
        const_str_digest_4a7013c58a5c32ba604f88ac016cc633,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_1__linear_ramp( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraypad$$$function_1__linear_ramp,
        const_str_plain__linear_ramp,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cbe67b8a590002c1c916d5b14fe40f45,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraypad,
        const_str_digest_d67a0cdf56e6b04c2b1f7c4b730d405c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_2__round_if_needed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraypad$$$function_2__round_if_needed,
        const_str_plain__round_if_needed,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2dfd93cbbaaab0c3018b108a71f88f7d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraypad,
        const_str_digest_aeffe88638b8c9e1d7edff4ace7508bd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_3__slice_at_axis(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraypad$$$function_3__slice_at_axis,
        const_str_plain__slice_at_axis,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_80a35ca459f0049c71e4a793fbe711a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraypad,
        const_str_digest_2cf78271d53ae2a150daec7a0d550fa6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_4__view_roi(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraypad$$$function_4__view_roi,
        const_str_plain__view_roi,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2049da0257c62b281f466fecb1fcc4ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraypad,
        const_str_digest_063706e0993ba59758cd0ad89bf21d17,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_5__pad_simple( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraypad$$$function_5__pad_simple,
        const_str_plain__pad_simple,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2e6454f9960b52c46fc2a25e9cb2052d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraypad,
        const_str_digest_b9c9459e9fda1e023a6ba9f3cec1a14a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_6__set_pad_area(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraypad$$$function_6__set_pad_area,
        const_str_plain__set_pad_area,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9ce0a7b0af291c2c02816648a6db2e77,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraypad,
        const_str_digest_d25154b4821daa338eaf0c798dee972e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_7__get_edges(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraypad$$$function_7__get_edges,
        const_str_plain__get_edges,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8a9237d69410a61035d187d3b48dcf2e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraypad,
        const_str_digest_003c6ddae0231acf717e666fbe77d653,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_8__get_linear_ramps(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraypad$$$function_8__get_linear_ramps,
        const_str_plain__get_linear_ramps,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f5bf3db56db940f0ea37a4457b09261b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraypad,
        const_str_digest_16e2e549868032d8ab73d52222cd0476,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraypad$$$function_9__get_stats(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraypad$$$function_9__get_stats,
        const_str_plain__get_stats,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1ae55446c2a08ed2e0d3d3419c90af42,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraypad,
        const_str_digest_615f15f1cdffbaa9f5621fb3f332af66,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$arraypad =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.arraypad",
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

MOD_INIT_DECL( numpy$lib$arraypad )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$arraypad );
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
    puts("numpy.lib.arraypad: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.arraypad: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.arraypad: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$lib$arraypad" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$arraypad = Py_InitModule4(
        "numpy.lib.arraypad",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$lib$arraypad = PyModule_Create( &mdef_numpy$lib$arraypad );
#endif

    moduledict_numpy$lib$arraypad = MODULE_DICT( module_numpy$lib$arraypad );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$lib$arraypad,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$lib$arraypad,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$arraypad,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$arraypad,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$lib$arraypad );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_56946dabfb133fa3f913eb1fae93705b, module_numpy$lib$arraypad );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_85e58f59a4954e39289d0ac285ad56b9;
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
        tmp_assign_source_1 = const_str_digest_624983e6bb2a2fba0a932a1309512e6b;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_85e58f59a4954e39289d0ac285ad56b9 = MAKE_MODULE_FRAME( codeobj_85e58f59a4954e39289d0ac285ad56b9, module_numpy$lib$arraypad );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_85e58f59a4954e39289d0ac285ad56b9 );
    assert( Py_REFCNT( frame_85e58f59a4954e39289d0ac285ad56b9 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_85e58f59a4954e39289d0ac285ad56b9->m_frame.f_lineno = 6;
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


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$arraypad;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_85e58f59a4954e39289d0ac285ad56b9->m_frame.f_lineno = 8;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_3ebbb82d9800d0665e0803be07081408;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$arraypad;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_array_function_dispatch_tuple;
        tmp_level_name_2 = const_int_0;
        frame_85e58f59a4954e39289d0ac285ad56b9->m_frame.f_lineno = 9;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_array_function_dispatch );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_array_function_dispatch, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib$arraypad;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_ndindex_tuple;
        tmp_level_name_3 = const_int_0;
        frame_85e58f59a4954e39289d0ac285ad56b9->m_frame.f_lineno = 10;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_ndindex );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_ndindex, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = LIST_COPY( const_list_str_plain_pad_list );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_12 = MAKE_FUNCTION_numpy$lib$arraypad$$$function_1__linear_ramp( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__linear_ramp, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_numpy$lib$arraypad$$$function_2__round_if_needed(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__round_if_needed, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_numpy$lib$arraypad$$$function_3__slice_at_axis(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__slice_at_axis, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_numpy$lib$arraypad$$$function_4__view_roi(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__view_roi, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$arraypad$$$function_5__pad_simple( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__pad_simple, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_numpy$lib$arraypad$$$function_6__set_pad_area(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__set_pad_area, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$arraypad$$$function_7__get_edges(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__get_edges, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_numpy$lib$arraypad$$$function_8__get_linear_ramps(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__get_linear_ramps, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_numpy$lib$arraypad$$$function_9__get_stats(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__get_stats, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_21 = MAKE_FUNCTION_numpy$lib$arraypad$$$function_10__set_reflect_both( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__set_reflect_both, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_numpy$lib$arraypad$$$function_11__set_wrap_both(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__set_wrap_both, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_23 = MAKE_FUNCTION_numpy$lib$arraypad$$$function_12__as_pairs( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__as_pairs, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_24 = MAKE_FUNCTION_numpy$lib$arraypad$$$function_13__pad_dispatcher( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__pad_dispatcher, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_defaults_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 579;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain__pad_dispatcher );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pad_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_tuple_element_1 = tmp_mvar_value_4;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6e6659be28864e39bad7cab4409b7e16 );
        frame_85e58f59a4954e39289d0ac285ad56b9->m_frame.f_lineno = 579;
        tmp_called_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 579;

            goto frame_exception_exit_1;
        }
        tmp_defaults_6 = const_tuple_str_plain_constant_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_args_element_name_1 = MAKE_FUNCTION_numpy$lib$arraypad$$$function_14_pad( tmp_defaults_6 );



        frame_85e58f59a4954e39289d0ac285ad56b9->m_frame.f_lineno = 579;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 579;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain_pad, tmp_assign_source_25 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_85e58f59a4954e39289d0ac285ad56b9 );
#endif
    popFrameStack();

    assertFrameObject( frame_85e58f59a4954e39289d0ac285ad56b9 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_85e58f59a4954e39289d0ac285ad56b9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_85e58f59a4954e39289d0ac285ad56b9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_85e58f59a4954e39289d0ac285ad56b9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_85e58f59a4954e39289d0ac285ad56b9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraypad, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$lib$arraypad );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
