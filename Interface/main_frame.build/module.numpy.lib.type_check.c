/* Generated code for Python module 'numpy.lib.type_check'
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

/* The "_module_numpy$lib$type_check" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$type_check;
PyDictObject *moduledict_numpy$lib$type_check;

/* The declarations of module constants used, if any. */
static PyObject *const_list_7408997311a16cd973ccb73960eae3bc_list;
extern PyObject *const_str_plain_float_;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_2c2f03b41c77c8842fe2c6d0834f1b1f;
static PyObject *const_str_plain_asscalar;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_array;
static PyObject *const_str_plain__imag_dispatcher;
extern PyObject *const_tuple_str_plain_val_tuple;
static PyObject *const_tuple_true_float_0_0_none_none_tuple;
extern PyObject *const_str_plain_precision;
extern PyObject *const_str_plain_intersection;
extern PyObject *const_str_plain_D;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain_getlimits_tuple;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_double;
static PyObject *const_str_plain__nan_to_num_dispatcher;
static PyObject *const_tuple_str_plain_char_tuple;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_dict_6e6659be28864e39bad7cab4409b7e16;
extern PyObject *const_tuple_str_plain_arrays_tuple;
extern PyObject *const_str_plain_where;
extern PyObject *const_str_plain_single;
static PyObject *const_str_digest_41ac8cc745b24f37d042da1c7414ea95;
static PyObject *const_str_digest_793dd2dc20fd2ea802f720223d7272d8;
static PyObject *const_str_plain__real_dispatcher;
extern PyObject *const_str_plain_xtype;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_getlimits;
extern PyObject *const_str_plain_common_type;
extern PyObject *const_str_plain_longdouble;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_type_;
extern PyObject *const_str_plain_nan_to_num;
static PyObject *const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple;
static PyObject *const_tuple_str_plain_GDFgdf_str_plain_d_tuple;
static PyObject *const_str_plain_idx_nan;
extern PyObject *const_str_plain_eps;
extern PyObject *const_tuple_str_plain_overrides_tuple;
static PyObject *const_str_plain_idx_neginf;
extern PyObject *const_str_plain_typecodes;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_str_plain_numpy_tuple;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_csingle;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_nan;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_str;
extern PyObject *const_tuple_none_none_none_none_tuple;
static PyObject *const_str_digest_4597cf420c1bfdcbc1c8ec3199b90183;
extern PyObject *const_str_plain_numpy;
static PyObject *const_tuple_str_plain_a_str_plain_tol_tuple;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_item;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_asanyarray;
extern PyObject *const_str_plain_isnan;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_str_digest_7ba543784f99e89f93fecfed2aa5dab4;
extern PyObject *const_str_plain_typename;
static PyObject *const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple;
static PyObject *const_str_plain_idx_posinf;
extern PyObject *const_dict_2254aca578e492e580f4e46a40647b9b;
extern PyObject *const_str_plain_all;
static PyObject *const_str_digest_7885000a00bdf1f3d628e5c7a32a9436;
extern PyObject *const_str_plain_imag;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_str_plain_l;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_9e0e8d72e024d4088e01ffb6a368b640;
extern PyObject *const_str_plain_isposinf;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain_isneginf;
static PyObject *const_str_digest_7b8c7fecc703afcf5444e965a3ac45e4;
static PyObject *const_str_plain_posinf;
extern PyObject *const_str_plain_set_module;
extern PyObject *const_str_plain__nx;
static PyObject *const_str_plain__asscalar_dispatcher;
static PyObject *const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_str_digest_6a797a370830505dc73095dcc7cdf3f1;
static PyObject *const_str_plain_typeset;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_tuple_int_pos_100_tuple;
extern PyObject *const_str_plain_integer;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_plain_iscomplex;
extern PyObject *const_str_plain_absolute;
static PyObject *const_str_plain__asfarray_dispatcher;
extern PyObject *const_str_plain_half;
static PyObject *const_str_plain_array_precision;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_f;
static PyObject *const_str_plain__getmaxmin;
static PyObject *const_str_plain_array_type;
extern PyObject *const_str_plain_arrays;
extern PyObject *const_str_plain_overrides;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_isneginf_str_plain_isposinf_tuple;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain_finfo;
static PyObject *const_str_digest_801bbb008f631b9f9660e58e0293029d;
extern PyObject *const_str_plain_F;
static PyObject *const_str_plain_maxf;
static PyObject *const_tuple_40791bdf9ce5d817d2618c6e1e162387_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_core;
extern PyObject *const_str_plain_dest;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_str_plain__real_if_close_dispatcher;
extern PyObject *const_str_digest_f06b0863ac057f993e0b6697d72eaf86;
extern PyObject *const_tuple_str_plain_a_str_plain_dtype_tuple;
static PyObject *const_str_plain__is_type_dispatcher;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_str_plain_set_module_tuple;
extern PyObject *const_str_plain_isrealobj;
extern PyObject *const_str_digest_aa3423acdb6152e259f846c9911226b3;
static PyObject *const_str_digest_d08af0c6d2567c06c1d32bd76943a25a;
extern PyObject *const_str_plain_d;
static PyObject *const_str_digest_7deaed6b107680e5ebb892f9ce1dfa6e;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_bbcff49e4f32c47e1e46f107590704b7;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_subok;
static PyObject *const_tuple_c7d0236eae4b85260fa70fff7875c094_tuple;
extern PyObject *const_str_plain_functools;
static PyObject *const_tuple_str_plain_x_str_plain_dtype_str_plain_type__tuple;
static PyObject *const_str_digest_3b4c0c12f6833fe1bbb4274681095c66;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_plain_minf;
static PyObject *const_tuple_d90070d6671420666815ccd79d20f45c_tuple;
static PyObject *const_str_plain__namefromtype;
extern PyObject *const_str_plain_array_function_dispatch;
extern PyObject *const_str_plain_complexfloating;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_partial;
extern PyObject *const_str_plain_mintypecode;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_ufunclike;
extern PyObject *const_str_plain_isreal;
extern PyObject *const_tuple_str_plain_t_tuple;
extern PyObject *const_str_plain_iscomplexobj;
static PyObject *const_str_plain__common_type_dispatcher;
static PyObject *const_str_digest_ab582a7e6e5828b02fa08acded487c19;
extern PyObject *const_int_pos_3;
static PyObject *const_str_digest_399d8bf4edd5c7d2add9b2763d48c854;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_inexact;
extern PyObject *const_str_plain_is_complex;
extern PyObject *const_str_plain_clongdouble;
extern PyObject *const_tuple_str_plain_a_tuple;
static PyObject *const_str_plain_GDFgdf;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_module;
extern PyObject *const_str_digest_3ebbb82d9800d0665e0803be07081408;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_e3514d8506119d8a98cf424c15eacbea;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_sort;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_1e27710593c2824ace25472480ca8477_tuple;
static PyObject *const_str_digest_1dbf3a4cccc9e0c8c3337fc4f3ae68df;
static PyObject *const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple;
extern PyObject *const_str_plain_neginf;
static PyObject *const_str_plain__typecodes_by_elsize;
static PyObject *const_str_digest_319fcf66f386c3009026359f595c3662;
static PyObject *const_str_plain_real_if_close;
extern PyObject *const_str_plain_cdouble;
extern PyObject *const_str_plain_copyto;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_isscalar;
extern PyObject *const_str_plain_ax;
extern PyObject *const_int_pos_100;
static PyObject *const_tuple_str_plain_t_str_plain_typeset_tuple;
static PyObject *const_str_plain_typechars;
extern PyObject *const_str_plain_asfarray;
static PyObject *const_dict_6641313163263c73f169be4f088d77be;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_list_7408997311a16cd973ccb73960eae3bc_list = PyList_New( 13 );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 0, const_str_plain_iscomplexobj ); Py_INCREF( const_str_plain_iscomplexobj );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 1, const_str_plain_isrealobj ); Py_INCREF( const_str_plain_isrealobj );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 2, const_str_plain_imag ); Py_INCREF( const_str_plain_imag );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 3, const_str_plain_iscomplex ); Py_INCREF( const_str_plain_iscomplex );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 4, const_str_plain_isreal ); Py_INCREF( const_str_plain_isreal );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 5, const_str_plain_nan_to_num ); Py_INCREF( const_str_plain_nan_to_num );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 6, const_str_plain_real ); Py_INCREF( const_str_plain_real );
    const_str_plain_real_if_close = UNSTREAM_STRING_ASCII( &constant_bin[ 3111511 ], 13, 1 );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 7, const_str_plain_real_if_close ); Py_INCREF( const_str_plain_real_if_close );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 8, const_str_plain_typename ); Py_INCREF( const_str_plain_typename );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 9, const_str_plain_asfarray ); Py_INCREF( const_str_plain_asfarray );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 10, const_str_plain_mintypecode ); Py_INCREF( const_str_plain_mintypecode );
    const_str_plain_asscalar = UNSTREAM_STRING_ASCII( &constant_bin[ 3294630 ], 8, 1 );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 11, const_str_plain_asscalar ); Py_INCREF( const_str_plain_asscalar );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 12, const_str_plain_common_type ); Py_INCREF( const_str_plain_common_type );
    const_str_digest_2c2f03b41c77c8842fe2c6d0834f1b1f = UNSTREAM_STRING_ASCII( &constant_bin[ 3294638 ], 1257, 0 );
    const_str_plain__imag_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 3295895 ], 16, 1 );
    const_tuple_true_float_0_0_none_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_true_float_0_0_none_none_tuple, 0, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_true_float_0_0_none_none_tuple, 1, const_float_0_0 ); Py_INCREF( const_float_0_0 );
    PyTuple_SET_ITEM( const_tuple_true_float_0_0_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_true_float_0_0_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_plain__nan_to_num_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 3295911 ], 22, 1 );
    const_tuple_str_plain_char_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_char_tuple, 0, const_str_plain_char ); Py_INCREF( const_str_plain_char );
    const_str_digest_41ac8cc745b24f37d042da1c7414ea95 = UNSTREAM_STRING_ASCII( &constant_bin[ 3295933 ], 3431, 0 );
    const_str_digest_793dd2dc20fd2ea802f720223d7272d8 = UNSTREAM_STRING_ASCII( &constant_bin[ 3299364 ], 663, 0 );
    const_str_plain__real_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 3300027 ], 16, 1 );
    const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 1, const_str_plain_copy ); Py_INCREF( const_str_plain_copy );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 2, const_str_plain_nan ); Py_INCREF( const_str_plain_nan );
    const_str_plain_posinf = UNSTREAM_STRING_ASCII( &constant_bin[ 3111643 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 3, const_str_plain_posinf ); Py_INCREF( const_str_plain_posinf );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 4, const_str_plain_neginf ); Py_INCREF( const_str_plain_neginf );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 5, const_str_plain_xtype ); Py_INCREF( const_str_plain_xtype );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 6, const_str_plain_isscalar ); Py_INCREF( const_str_plain_isscalar );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 7, const_str_plain_iscomplex ); Py_INCREF( const_str_plain_iscomplex );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 8, const_str_plain_dest ); Py_INCREF( const_str_plain_dest );
    const_str_plain_maxf = UNSTREAM_STRING_ASCII( &constant_bin[ 1546049 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 9, const_str_plain_maxf ); Py_INCREF( const_str_plain_maxf );
    const_str_plain_minf = UNSTREAM_STRING_ASCII( &constant_bin[ 1208817 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 10, const_str_plain_minf ); Py_INCREF( const_str_plain_minf );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 11, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_str_plain_idx_nan = UNSTREAM_STRING_ASCII( &constant_bin[ 3300043 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 12, const_str_plain_idx_nan ); Py_INCREF( const_str_plain_idx_nan );
    const_str_plain_idx_posinf = UNSTREAM_STRING_ASCII( &constant_bin[ 3300050 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 13, const_str_plain_idx_posinf ); Py_INCREF( const_str_plain_idx_posinf );
    const_str_plain_idx_neginf = UNSTREAM_STRING_ASCII( &constant_bin[ 3300060 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 14, const_str_plain_idx_neginf ); Py_INCREF( const_str_plain_idx_neginf );
    const_tuple_str_plain_GDFgdf_str_plain_d_tuple = PyTuple_New( 2 );
    const_str_plain_GDFgdf = UNSTREAM_STRING_ASCII( &constant_bin[ 3295341 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_GDFgdf_str_plain_d_tuple, 0, const_str_plain_GDFgdf ); Py_INCREF( const_str_plain_GDFgdf );
    PyTuple_SET_ITEM( const_tuple_str_plain_GDFgdf_str_plain_d_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_str_digest_4597cf420c1bfdcbc1c8ec3199b90183 = UNSTREAM_STRING_ASCII( &constant_bin[ 3300070 ], 648, 0 );
    const_tuple_str_plain_a_str_plain_tol_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_tol_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_tol_tuple, 1, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    const_str_digest_7ba543784f99e89f93fecfed2aa5dab4 = UNSTREAM_STRING_ASCII( &constant_bin[ 3300718 ], 43, 0 );
    const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple, 1, const_str_plain_ax ); Py_INCREF( const_str_plain_ax );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple, 2, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_digest_7885000a00bdf1f3d628e5c7a32a9436 = UNSTREAM_STRING_ASCII( &constant_bin[ 3300761 ], 1093, 0 );
    const_str_digest_9e0e8d72e024d4088e01ffb6a368b640 = UNSTREAM_STRING_ASCII( &constant_bin[ 3301854 ], 669, 0 );
    const_str_digest_7b8c7fecc703afcf5444e965a3ac45e4 = UNSTREAM_STRING_ASCII( &constant_bin[ 3302523 ], 458, 0 );
    const_str_plain__asscalar_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 3302981 ], 20, 1 );
    const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 1, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 2, const_str_plain_getlimits ); Py_INCREF( const_str_plain_getlimits );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 3, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_digest_6a797a370830505dc73095dcc7cdf3f1 = UNSTREAM_STRING_ASCII( &constant_bin[ 3303001 ], 17, 0 );
    const_str_plain_typeset = UNSTREAM_STRING_ASCII( &constant_bin[ 3295200 ], 7, 1 );
    const_str_plain__asfarray_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 3303018 ], 20, 1 );
    const_str_plain_array_precision = UNSTREAM_STRING_ASCII( &constant_bin[ 3303038 ], 15, 1 );
    const_str_plain__getmaxmin = UNSTREAM_STRING_ASCII( &constant_bin[ 872928 ], 10, 1 );
    const_str_plain_array_type = UNSTREAM_STRING_ASCII( &constant_bin[ 34884 ], 10, 1 );
    const_tuple_str_plain_isneginf_str_plain_isposinf_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_isneginf_str_plain_isposinf_tuple, 0, const_str_plain_isneginf ); Py_INCREF( const_str_plain_isneginf );
    PyTuple_SET_ITEM( const_tuple_str_plain_isneginf_str_plain_isposinf_tuple, 1, const_str_plain_isposinf ); Py_INCREF( const_str_plain_isposinf );
    const_str_digest_801bbb008f631b9f9660e58e0293029d = UNSTREAM_STRING_ASCII( &constant_bin[ 3303053 ], 721, 0 );
    const_tuple_40791bdf9ce5d817d2618c6e1e162387_tuple = PyTuple_New( 6 );
    const_str_plain_typechars = UNSTREAM_STRING_ASCII( &constant_bin[ 2407396 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_40791bdf9ce5d817d2618c6e1e162387_tuple, 0, const_str_plain_typechars ); Py_INCREF( const_str_plain_typechars );
    PyTuple_SET_ITEM( const_tuple_40791bdf9ce5d817d2618c6e1e162387_tuple, 1, const_str_plain_typeset ); Py_INCREF( const_str_plain_typeset );
    PyTuple_SET_ITEM( const_tuple_40791bdf9ce5d817d2618c6e1e162387_tuple, 2, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    PyTuple_SET_ITEM( const_tuple_40791bdf9ce5d817d2618c6e1e162387_tuple, 3, const_str_plain_typecodes ); Py_INCREF( const_str_plain_typecodes );
    PyTuple_SET_ITEM( const_tuple_40791bdf9ce5d817d2618c6e1e162387_tuple, 4, const_str_plain_intersection ); Py_INCREF( const_str_plain_intersection );
    PyTuple_SET_ITEM( const_tuple_40791bdf9ce5d817d2618c6e1e162387_tuple, 5, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    const_str_plain__real_if_close_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 3303774 ], 25, 1 );
    const_str_plain__is_type_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 3303799 ], 19, 1 );
    const_str_digest_d08af0c6d2567c06c1d32bd76943a25a = UNSTREAM_STRING_ASCII( &constant_bin[ 3303818 ], 601, 0 );
    const_str_digest_7deaed6b107680e5ebb892f9ce1dfa6e = UNSTREAM_STRING_ASCII( &constant_bin[ 3304419 ], 23, 0 );
    const_str_digest_bbcff49e4f32c47e1e46f107590704b7 = UNSTREAM_STRING_ASCII( &constant_bin[ 3304442 ], 68, 0 );
    const_tuple_c7d0236eae4b85260fa70fff7875c094_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_c7d0236eae4b85260fa70fff7875c094_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_c7d0236eae4b85260fa70fff7875c094_tuple, 1, const_str_plain_asanyarray ); Py_INCREF( const_str_plain_asanyarray );
    PyTuple_SET_ITEM( const_tuple_c7d0236eae4b85260fa70fff7875c094_tuple, 2, const_str_plain_isnan ); Py_INCREF( const_str_plain_isnan );
    PyTuple_SET_ITEM( const_tuple_c7d0236eae4b85260fa70fff7875c094_tuple, 3, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    const_tuple_str_plain_x_str_plain_dtype_str_plain_type__tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_dtype_str_plain_type__tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_dtype_str_plain_type__tuple, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_dtype_str_plain_type__tuple, 2, const_str_plain_type_ ); Py_INCREF( const_str_plain_type_ );
    const_str_digest_3b4c0c12f6833fe1bbb4274681095c66 = UNSTREAM_STRING_ASCII( &constant_bin[ 3304510 ], 1092, 0 );
    const_tuple_d90070d6671420666815ccd79d20f45c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d90070d6671420666815ccd79d20f45c_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_d90070d6671420666815ccd79d20f45c_tuple, 1, const_str_plain_copy ); Py_INCREF( const_str_plain_copy );
    PyTuple_SET_ITEM( const_tuple_d90070d6671420666815ccd79d20f45c_tuple, 2, const_str_plain_nan ); Py_INCREF( const_str_plain_nan );
    PyTuple_SET_ITEM( const_tuple_d90070d6671420666815ccd79d20f45c_tuple, 3, const_str_plain_posinf ); Py_INCREF( const_str_plain_posinf );
    PyTuple_SET_ITEM( const_tuple_d90070d6671420666815ccd79d20f45c_tuple, 4, const_str_plain_neginf ); Py_INCREF( const_str_plain_neginf );
    const_str_plain__namefromtype = UNSTREAM_STRING_ASCII( &constant_bin[ 3305602 ], 13, 1 );
    const_str_plain__common_type_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 3305615 ], 23, 1 );
    const_str_digest_ab582a7e6e5828b02fa08acded487c19 = UNSTREAM_STRING_ASCII( &constant_bin[ 3305638 ], 29, 0 );
    const_str_digest_399d8bf4edd5c7d2add9b2763d48c854 = UNSTREAM_STRING_ASCII( &constant_bin[ 3305667 ], 562, 0 );
    const_str_digest_e3514d8506119d8a98cf424c15eacbea = UNSTREAM_STRING_ASCII( &constant_bin[ 3306229 ], 586, 0 );
    const_tuple_1e27710593c2824ace25472480ca8477_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 1, const_str_plain_is_complex ); Py_INCREF( const_str_plain_is_complex );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 2, const_str_plain_precision ); Py_INCREF( const_str_plain_precision );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 3, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 4, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 5, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_str_digest_1dbf3a4cccc9e0c8c3337fc4f3ae68df = UNSTREAM_STRING_ASCII( &constant_bin[ 3306815 ], 971, 0 );
    const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple, 1, const_str_plain_getlimits ); Py_INCREF( const_str_plain_getlimits );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple, 2, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_plain__typecodes_by_elsize = UNSTREAM_STRING_ASCII( &constant_bin[ 3307786 ], 20, 1 );
    const_str_digest_319fcf66f386c3009026359f595c3662 = UNSTREAM_STRING_ASCII( &constant_bin[ 3307806 ], 64, 0 );
    const_tuple_str_plain_t_str_plain_typeset_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_typeset_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_typeset_tuple, 1, const_str_plain_typeset ); Py_INCREF( const_str_plain_typeset );
    const_dict_6641313163263c73f169be4f088d77be = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 3307870 ], 414 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$type_check( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2e01913ff7a9237fadff9d1b5333cb65;
static PyCodeObject *codeobj_8966777aad3875eb8942f20f036a79ad;
static PyCodeObject *codeobj_77720dc6f881e8d9fefe27783e4d52a8;
static PyCodeObject *codeobj_2538fc9526d8e156be106fe5b812e5ff;
static PyCodeObject *codeobj_741440661dcdae4464c142bcf87ec0de;
static PyCodeObject *codeobj_fbb4c0a3df4762ee15aa86a36d0197f3;
static PyCodeObject *codeobj_bf7bfe6051852d61d86491a15baf16c2;
static PyCodeObject *codeobj_2c049661eb0291dc55e2d4efcf44e46a;
static PyCodeObject *codeobj_73d351448254ae6eb038e604f5e27f8e;
static PyCodeObject *codeobj_f2680ad13d43bd3094936e328594aacc;
static PyCodeObject *codeobj_17b41f5eac1fefb76d8471e1a00ff915;
static PyCodeObject *codeobj_9e31a8b9dcb46e2ebc57669239c3d828;
static PyCodeObject *codeobj_6357e89a03d0ced2d5fa05fb7ca045f4;
static PyCodeObject *codeobj_15fa4c7e12ee51f39121cf7f6f8045b4;
static PyCodeObject *codeobj_fd7f74d0436731f48f9360cc03dbb5a2;
static PyCodeObject *codeobj_1a4031e1d5d27677ce52f2bc57b002bd;
static PyCodeObject *codeobj_1635c19098cfd9be816a3b611bccd44a;
static PyCodeObject *codeobj_a73fc3996788235ac437369fde582a42;
static PyCodeObject *codeobj_96bafb4817df10dc28536218c4e5aac5;
static PyCodeObject *codeobj_66e753f40418a44c2ebabc9bf7bc4e84;
static PyCodeObject *codeobj_79582205fbad22463448435c5005137b;
static PyCodeObject *codeobj_d2c6e90ddef14fe8f0c18d19bcd205d4;
static PyCodeObject *codeobj_19d51b1e942411e63a756849f6342738;
static PyCodeObject *codeobj_959ef1b43a0b9495bb3f57d129bc65de;
static PyCodeObject *codeobj_3b2c5df92f673f224863aeefb42aae8f;
static PyCodeObject *codeobj_ef3aa5b2675ab463922d9c91b8aef0da;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_7deaed6b107680e5ebb892f9ce1dfa6e );
    codeobj_2e01913ff7a9237fadff9d1b5333cb65 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 71, const_tuple_str_plain_t_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8966777aad3875eb8942f20f036a79ad = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 73, const_tuple_str_plain_t_str_plain_typeset_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_77720dc6f881e8d9fefe27783e4d52a8 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 78, const_tuple_str_plain_t_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2538fc9526d8e156be106fe5b812e5ff = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ab582a7e6e5828b02fa08acded487c19, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_741440661dcdae4464c142bcf87ec0de = MAKE_CODEOBJ( module_filename_obj, const_str_plain__asfarray_dispatcher, 83, const_tuple_str_plain_a_str_plain_dtype_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fbb4c0a3df4762ee15aa86a36d0197f3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__asscalar_dispatcher, 543, const_tuple_str_plain_a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bf7bfe6051852d61d86491a15baf16c2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__common_type_dispatcher, 669, const_tuple_str_plain_arrays_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_2c049661eb0291dc55e2d4efcf44e46a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__getmaxmin, 360, const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_73d351448254ae6eb038e604f5e27f8e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__imag_dispatcher, 166, const_tuple_str_plain_val_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f2680ad13d43bd3094936e328594aacc = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_type_dispatcher, 209, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_17b41f5eac1fefb76d8471e1a00ff915 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nan_to_num_dispatcher, 366, const_tuple_d90070d6671420666815ccd79d20f45c_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9e31a8b9dcb46e2ebc57669239c3d828 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__real_dispatcher, 120, const_tuple_str_plain_val_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6357e89a03d0ced2d5fa05fb7ca045f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__real_if_close_dispatcher, 483, const_tuple_str_plain_a_str_plain_tol_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_15fa4c7e12ee51f39121cf7f6f8045b4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asfarray, 87, const_tuple_str_plain_a_str_plain_dtype_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fd7f74d0436731f48f9360cc03dbb5a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asscalar, 550, const_tuple_str_plain_a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1a4031e1d5d27677ce52f2bc57b002bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_common_type, 673, const_tuple_1e27710593c2824ace25472480ca8477_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_1635c19098cfd9be816a3b611bccd44a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_imag, 170, const_tuple_str_plain_val_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a73fc3996788235ac437369fde582a42 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iscomplex, 213, const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_96bafb4817df10dc28536218c4e5aac5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iscomplexobj, 282, const_tuple_str_plain_x_str_plain_dtype_str_plain_type__tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_66e753f40418a44c2ebabc9bf7bc4e84 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isreal, 250, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_79582205fbad22463448435c5005137b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isrealobj, 323, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d2c6e90ddef14fe8f0c18d19bcd205d4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mintypecode, 27, const_tuple_40791bdf9ce5d817d2618c6e1e162387_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_19d51b1e942411e63a756849f6342738 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nan_to_num, 370, const_tuple_5060d8ef5a25d64f4b6c9c6ca4018a55_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_959ef1b43a0b9495bb3f57d129bc65de = MAKE_CODEOBJ( module_filename_obj, const_str_plain_real, 124, const_tuple_str_plain_val_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3b2c5df92f673f224863aeefb42aae8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_real_if_close, 487, const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ef3aa5b2675ab463922d9c91b8aef0da = MAKE_CODEOBJ( module_filename_obj, const_str_plain_typename, 603, const_tuple_str_plain_char_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_10_isreal(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_11_iscomplexobj(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_12_isrealobj(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_13__getmaxmin(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_14__nan_to_num_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_15_nan_to_num( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_16__real_if_close_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_17_real_if_close( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_18__asscalar_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_19_asscalar(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_1_mintypecode( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_20_typename(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_21__common_type_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_22_common_type(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_2__asfarray_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_3_asfarray( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_4__real_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_5_real(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_6__imag_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_7_imag(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_8__is_type_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_9_iscomplex(  );


// The module function definitions.
static PyObject *impl_numpy$lib$type_check$$$function_1_mintypecode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_typechars = python_pars[ 0 ];
    PyObject *par_typeset = python_pars[ 1 ];
    PyObject *par_default = python_pars[ 2 ];
    PyObject *var_typecodes = NULL;
    PyObject *var_intersection = NULL;
    PyObject *var_l = NULL;
    PyObject *outline_0_var_t = NULL;
    PyObject *outline_1_var_t = NULL;
    PyObject *outline_2_var_t = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_d2c6e90ddef14fe8f0c18d19bcd205d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_2e01913ff7a9237fadff9d1b5333cb65_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_2e01913ff7a9237fadff9d1b5333cb65_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_8966777aad3875eb8942f20f036a79ad_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_8966777aad3875eb8942f20f036a79ad_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_77720dc6f881e8d9fefe27783e4d52a8_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_77720dc6f881e8d9fefe27783e4d52a8_4 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_d2c6e90ddef14fe8f0c18d19bcd205d4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d2c6e90ddef14fe8f0c18d19bcd205d4, codeobj_d2c6e90ddef14fe8f0c18d19bcd205d4, module_numpy$lib$type_check, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d2c6e90ddef14fe8f0c18d19bcd205d4 = cache_frame_d2c6e90ddef14fe8f0c18d19bcd205d4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d2c6e90ddef14fe8f0c18d19bcd205d4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d2c6e90ddef14fe8f0c18d19bcd205d4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_typechars );
            tmp_iter_arg_1 = par_typechars;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "oooooo";
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
        MAKE_OR_REUSE_FRAME( cache_frame_2e01913ff7a9237fadff9d1b5333cb65_2, codeobj_2e01913ff7a9237fadff9d1b5333cb65, module_numpy$lib$type_check, sizeof(void *) );
        frame_2e01913ff7a9237fadff9d1b5333cb65_2 = cache_frame_2e01913ff7a9237fadff9d1b5333cb65_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_2e01913ff7a9237fadff9d1b5333cb65_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_2e01913ff7a9237fadff9d1b5333cb65_2 ) == 2 ); // Frame stack

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
                    exception_lineno = 71;
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
                PyObject *old = outline_0_var_t;
                outline_0_var_t = tmp_assign_source_5;
                Py_INCREF( outline_0_var_t );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            int tmp_or_left_truth_1;
            PyObject *tmp_or_left_value_1;
            PyObject *tmp_or_right_value_1;
            int tmp_and_left_truth_1;
            PyObject *tmp_and_left_value_1;
            PyObject *tmp_and_right_value_1;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT( outline_0_var_t );
            tmp_isinstance_inst_1 = outline_0_var_t;
            tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_and_left_value_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
            if ( tmp_and_left_truth_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_2 = "o";
                goto try_except_handler_3;
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
            CHECK_OBJECT( outline_0_var_t );
            tmp_and_right_value_1 = outline_0_var_t;
            tmp_or_left_value_1 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_or_left_value_1 = tmp_and_left_value_1;
            and_end_1:;
            tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
            if ( tmp_or_left_truth_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_2 = "o";
                goto try_except_handler_3;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asarray );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 71;
                type_description_2 = "o";
                goto try_except_handler_3;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( outline_0_var_t );
            tmp_args_element_name_1 = outline_0_var_t;
            frame_2e01913ff7a9237fadff9d1b5333cb65_2->m_frame.f_lineno = 71;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_source_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_char );
            Py_DECREF( tmp_source_name_1 );
            if ( tmp_or_right_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_append_value_1 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            Py_INCREF( tmp_or_left_value_1 );
            tmp_append_value_1 = tmp_or_left_value_1;
            or_end_1:;
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
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
        NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
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
        RESTORE_FRAME_EXCEPTION( frame_2e01913ff7a9237fadff9d1b5333cb65_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_2e01913ff7a9237fadff9d1b5333cb65_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_2e01913ff7a9237fadff9d1b5333cb65_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_2e01913ff7a9237fadff9d1b5333cb65_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_2e01913ff7a9237fadff9d1b5333cb65_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_2e01913ff7a9237fadff9d1b5333cb65_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_2e01913ff7a9237fadff9d1b5333cb65_2,
            type_description_2,
            outline_0_var_t
        );


        // Release cached frame.
        if ( frame_2e01913ff7a9237fadff9d1b5333cb65_2 == cache_frame_2e01913ff7a9237fadff9d1b5333cb65_2 )
        {
            Py_DECREF( frame_2e01913ff7a9237fadff9d1b5333cb65_2 );
        }
        cache_frame_2e01913ff7a9237fadff9d1b5333cb65_2 = NULL;

        assertFrameObject( frame_2e01913ff7a9237fadff9d1b5333cb65_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_t );
        outline_0_var_t = NULL;

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

        Py_XDECREF( outline_0_var_t );
        outline_0_var_t = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
        return NULL;
        outline_exception_1:;
        exception_lineno = 71;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert( var_typecodes == NULL );
        var_typecodes = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_6;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( var_typecodes );
            tmp_iter_arg_2 = var_typecodes;
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            assert( tmp_listcomp_2__$0 == NULL );
            tmp_listcomp_2__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = PyList_New( 0 );
            assert( tmp_listcomp_2__contraction == NULL );
            tmp_listcomp_2__contraction = tmp_assign_source_8;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_8966777aad3875eb8942f20f036a79ad_3, codeobj_8966777aad3875eb8942f20f036a79ad, module_numpy$lib$type_check, sizeof(void *)+sizeof(void *) );
        frame_8966777aad3875eb8942f20f036a79ad_3 = cache_frame_8966777aad3875eb8942f20f036a79ad_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_8966777aad3875eb8942f20f036a79ad_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_8966777aad3875eb8942f20f036a79ad_3 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_listcomp_2__$0 );
            tmp_next_source_2 = tmp_listcomp_2__$0;
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
                    type_description_2 = "oo";
                    exception_lineno = 73;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
            tmp_assign_source_10 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_t;
                outline_1_var_t = tmp_assign_source_10;
                Py_INCREF( outline_1_var_t );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( outline_1_var_t );
            tmp_compexpr_left_1 = outline_1_var_t;
            CHECK_OBJECT( par_typeset );
            tmp_compexpr_right_1 = par_typeset;
            tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_2 = "oo";
                goto try_except_handler_5;
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
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                CHECK_OBJECT( tmp_listcomp_2__contraction );
                tmp_append_list_2 = tmp_listcomp_2__contraction;
                CHECK_OBJECT( outline_1_var_t );
                tmp_append_value_2 = outline_1_var_t;
                assert( PyList_Check( tmp_append_list_2 ) );
                tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 73;
                    type_description_2 = "oo";
                    goto try_except_handler_5;
                }
            }
            branch_no_1:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_2 = "oo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_listcomp_2__contraction );
        tmp_assign_source_6 = tmp_listcomp_2__contraction;
        Py_INCREF( tmp_assign_source_6 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
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
        RESTORE_FRAME_EXCEPTION( frame_8966777aad3875eb8942f20f036a79ad_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_8966777aad3875eb8942f20f036a79ad_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8966777aad3875eb8942f20f036a79ad_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_8966777aad3875eb8942f20f036a79ad_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_8966777aad3875eb8942f20f036a79ad_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_8966777aad3875eb8942f20f036a79ad_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_8966777aad3875eb8942f20f036a79ad_3,
            type_description_2,
            outline_1_var_t,
            par_typeset
        );


        // Release cached frame.
        if ( frame_8966777aad3875eb8942f20f036a79ad_3 == cache_frame_8966777aad3875eb8942f20f036a79ad_3 )
        {
            Py_DECREF( frame_8966777aad3875eb8942f20f036a79ad_3 );
        }
        cache_frame_8966777aad3875eb8942f20f036a79ad_3 = NULL;

        assertFrameObject( frame_8966777aad3875eb8942f20f036a79ad_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF( outline_1_var_t );
        outline_1_var_t = NULL;

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

        Py_XDECREF( outline_1_var_t );
        outline_1_var_t = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
        return NULL;
        outline_exception_2:;
        exception_lineno = 73;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert( var_intersection == NULL );
        var_intersection = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_intersection );
        tmp_operand_name_1 = var_intersection;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oooooo";
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
        CHECK_OBJECT( par_default );
        tmp_return_value = par_default;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_2 = const_str_plain_F;
        CHECK_OBJECT( var_intersection );
        tmp_compexpr_right_2 = var_intersection;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oooooo";
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
        tmp_compexpr_left_3 = const_str_plain_d;
        CHECK_OBJECT( var_intersection );
        tmp_compexpr_right_3 = var_intersection;
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_return_value = const_str_plain_D;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_11;
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( var_intersection );
            tmp_iter_arg_3 = var_intersection;
            tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_1 = "oooooo";
                goto try_except_handler_6;
            }
            assert( tmp_listcomp_3__$0 == NULL );
            tmp_listcomp_3__$0 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = PyList_New( 0 );
            assert( tmp_listcomp_3__contraction == NULL );
            tmp_listcomp_3__contraction = tmp_assign_source_13;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_77720dc6f881e8d9fefe27783e4d52a8_4, codeobj_77720dc6f881e8d9fefe27783e4d52a8, module_numpy$lib$type_check, sizeof(void *) );
        frame_77720dc6f881e8d9fefe27783e4d52a8_4 = cache_frame_77720dc6f881e8d9fefe27783e4d52a8_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_77720dc6f881e8d9fefe27783e4d52a8_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_77720dc6f881e8d9fefe27783e4d52a8_4 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_listcomp_3__$0 );
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_3 );
            if ( tmp_assign_source_14 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 78;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_listcomp_3__iter_value_0 );
            tmp_assign_source_15 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_t;
                outline_2_var_t = tmp_assign_source_15;
                Py_INCREF( outline_2_var_t );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( tmp_listcomp_3__contraction );
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__typecodes_by_elsize );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typecodes_by_elsize );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_typecodes_by_elsize" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 78;
                type_description_2 = "o";
                goto try_except_handler_7;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( outline_2_var_t );
            tmp_args_element_name_2 = outline_2_var_t;
            frame_77720dc6f881e8d9fefe27783e4d52a8_4->m_frame.f_lineno = 78;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_index, call_args );
            }

            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_append_value_3 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_append_value_3, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( outline_2_var_t );
            tmp_tuple_element_1 = outline_2_var_t;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_append_value_3, 1, tmp_tuple_element_1 );
            assert( PyList_Check( tmp_append_list_3 ) );
            tmp_res = PyList_Append( tmp_append_list_3, tmp_append_value_3 );
            Py_DECREF( tmp_append_value_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT( tmp_listcomp_3__contraction );
        tmp_assign_source_11 = tmp_listcomp_3__contraction;
        Py_INCREF( tmp_assign_source_11 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_3__$0 );
        Py_DECREF( tmp_listcomp_3__$0 );
        tmp_listcomp_3__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_3__contraction );
        Py_DECREF( tmp_listcomp_3__contraction );
        tmp_listcomp_3__contraction = NULL;

        Py_XDECREF( tmp_listcomp_3__iter_value_0 );
        tmp_listcomp_3__iter_value_0 = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_listcomp_3__$0 );
        Py_DECREF( tmp_listcomp_3__$0 );
        tmp_listcomp_3__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_3__contraction );
        Py_DECREF( tmp_listcomp_3__contraction );
        tmp_listcomp_3__contraction = NULL;

        Py_XDECREF( tmp_listcomp_3__iter_value_0 );
        tmp_listcomp_3__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_4;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_77720dc6f881e8d9fefe27783e4d52a8_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_return_exit_4:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_77720dc6f881e8d9fefe27783e4d52a8_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_77720dc6f881e8d9fefe27783e4d52a8_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_77720dc6f881e8d9fefe27783e4d52a8_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_77720dc6f881e8d9fefe27783e4d52a8_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_77720dc6f881e8d9fefe27783e4d52a8_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_77720dc6f881e8d9fefe27783e4d52a8_4,
            type_description_2,
            outline_2_var_t
        );


        // Release cached frame.
        if ( frame_77720dc6f881e8d9fefe27783e4d52a8_4 == cache_frame_77720dc6f881e8d9fefe27783e4d52a8_4 )
        {
            Py_DECREF( frame_77720dc6f881e8d9fefe27783e4d52a8_4 );
        }
        cache_frame_77720dc6f881e8d9fefe27783e4d52a8_4 = NULL;

        assertFrameObject( frame_77720dc6f881e8d9fefe27783e4d52a8_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
        skip_nested_handling_3:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF( outline_2_var_t );
        outline_2_var_t = NULL;

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

        Py_XDECREF( outline_2_var_t );
        outline_2_var_t = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
        return NULL;
        outline_exception_3:;
        exception_lineno = 78;
        goto frame_exception_exit_1;
        outline_result_3:;
        assert( var_l == NULL );
        var_l = tmp_assign_source_11;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_l );
        tmp_called_instance_2 = var_l;
        frame_d2c6e90ddef14fe8f0c18d19bcd205d4->m_frame.f_lineno = 79;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_sort );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_l );
        tmp_subscribed_name_2 = var_l;
        tmp_subscript_name_1 = const_int_0;
        tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_1, 0 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_2, 1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d2c6e90ddef14fe8f0c18d19bcd205d4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d2c6e90ddef14fe8f0c18d19bcd205d4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d2c6e90ddef14fe8f0c18d19bcd205d4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d2c6e90ddef14fe8f0c18d19bcd205d4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d2c6e90ddef14fe8f0c18d19bcd205d4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d2c6e90ddef14fe8f0c18d19bcd205d4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d2c6e90ddef14fe8f0c18d19bcd205d4,
        type_description_1,
        par_typechars,
        par_typeset,
        par_default,
        var_typecodes,
        var_intersection,
        var_l
    );


    // Release cached frame.
    if ( frame_d2c6e90ddef14fe8f0c18d19bcd205d4 == cache_frame_d2c6e90ddef14fe8f0c18d19bcd205d4 )
    {
        Py_DECREF( frame_d2c6e90ddef14fe8f0c18d19bcd205d4 );
    }
    cache_frame_d2c6e90ddef14fe8f0c18d19bcd205d4 = NULL;

    assertFrameObject( frame_d2c6e90ddef14fe8f0c18d19bcd205d4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_4:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_typechars );
    Py_DECREF( par_typechars );
    par_typechars = NULL;

    CHECK_OBJECT( (PyObject *)par_typeset );
    Py_DECREF( par_typeset );
    par_typeset = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    CHECK_OBJECT( (PyObject *)var_typecodes );
    Py_DECREF( var_typecodes );
    var_typecodes = NULL;

    CHECK_OBJECT( (PyObject *)var_intersection );
    Py_DECREF( var_intersection );
    var_intersection = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

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

    CHECK_OBJECT( (PyObject *)par_typechars );
    Py_DECREF( par_typechars );
    par_typechars = NULL;

    CHECK_OBJECT( (PyObject *)par_typeset );
    Py_DECREF( par_typeset );
    par_typeset = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_typecodes );
    var_typecodes = NULL;

    Py_XDECREF( var_intersection );
    var_intersection = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
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


static PyObject *impl_numpy$lib$type_check$$$function_2__asfarray_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_2__asfarray_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_2__asfarray_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$type_check$$$function_3_asfarray( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_15fa4c7e12ee51f39121cf7f6f8045b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_15fa4c7e12ee51f39121cf7f6f8045b4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_15fa4c7e12ee51f39121cf7f6f8045b4, codeobj_15fa4c7e12ee51f39121cf7f6f8045b4, module_numpy$lib$type_check, sizeof(void *)+sizeof(void *) );
    frame_15fa4c7e12ee51f39121cf7f6f8045b4 = cache_frame_15fa4c7e12ee51f39121cf7f6f8045b4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_15fa4c7e12ee51f39121cf7f6f8045b4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_15fa4c7e12ee51f39121cf7f6f8045b4 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_issubdtype );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_1 = par_dtype;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inexact );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_15fa4c7e12ee51f39121cf7f6f8045b4->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

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

                exception_lineno = 116;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_float_ );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_dtype;
                assert( old != NULL );
                par_dtype = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( par_dtype );
        tmp_dict_value_1 = par_dtype;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_15fa4c7e12ee51f39121cf7f6f8045b4->m_frame.f_lineno = 117;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
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
    RESTORE_FRAME_EXCEPTION( frame_15fa4c7e12ee51f39121cf7f6f8045b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_15fa4c7e12ee51f39121cf7f6f8045b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_15fa4c7e12ee51f39121cf7f6f8045b4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_15fa4c7e12ee51f39121cf7f6f8045b4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_15fa4c7e12ee51f39121cf7f6f8045b4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_15fa4c7e12ee51f39121cf7f6f8045b4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_15fa4c7e12ee51f39121cf7f6f8045b4,
        type_description_1,
        par_a,
        par_dtype
    );


    // Release cached frame.
    if ( frame_15fa4c7e12ee51f39121cf7f6f8045b4 == cache_frame_15fa4c7e12ee51f39121cf7f6f8045b4 )
    {
        Py_DECREF( frame_15fa4c7e12ee51f39121cf7f6f8045b4 );
    }
    cache_frame_15fa4c7e12ee51f39121cf7f6f8045b4 = NULL;

    assertFrameObject( frame_15fa4c7e12ee51f39121cf7f6f8045b4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_3_asfarray );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_3_asfarray );
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


static PyObject *impl_numpy$lib$type_check$$$function_4__real_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_val );
        tmp_tuple_element_1 = par_val;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_4__real_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_4__real_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$type_check$$$function_5_real( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_959ef1b43a0b9495bb3f57d129bc65de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_959ef1b43a0b9495bb3f57d129bc65de = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_959ef1b43a0b9495bb3f57d129bc65de, codeobj_959ef1b43a0b9495bb3f57d129bc65de, module_numpy$lib$type_check, sizeof(void *) );
    frame_959ef1b43a0b9495bb3f57d129bc65de = cache_frame_959ef1b43a0b9495bb3f57d129bc65de;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_959ef1b43a0b9495bb3f57d129bc65de );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_959ef1b43a0b9495bb3f57d129bc65de ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_val );
        tmp_source_name_1 = par_val;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_real );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_5_real );
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_959ef1b43a0b9495bb3f57d129bc65de, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_959ef1b43a0b9495bb3f57d129bc65de, exception_keeper_lineno_1 );
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
        tmp_compexpr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "o";
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

                exception_lineno = 163;
                type_description_1 = "o";
                goto try_except_handler_3;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_val );
            tmp_args_element_name_1 = par_val;
            frame_959ef1b43a0b9495bb3f57d129bc65de->m_frame.f_lineno = 163;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "o";
                goto try_except_handler_3;
            }
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_real );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "o";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 160;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_959ef1b43a0b9495bb3f57d129bc65de->m_frame) frame_959ef1b43a0b9495bb3f57d129bc65de->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "o";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_5_real );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_959ef1b43a0b9495bb3f57d129bc65de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_959ef1b43a0b9495bb3f57d129bc65de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_959ef1b43a0b9495bb3f57d129bc65de );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_959ef1b43a0b9495bb3f57d129bc65de, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_959ef1b43a0b9495bb3f57d129bc65de->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_959ef1b43a0b9495bb3f57d129bc65de, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_959ef1b43a0b9495bb3f57d129bc65de,
        type_description_1,
        par_val
    );


    // Release cached frame.
    if ( frame_959ef1b43a0b9495bb3f57d129bc65de == cache_frame_959ef1b43a0b9495bb3f57d129bc65de )
    {
        Py_DECREF( frame_959ef1b43a0b9495bb3f57d129bc65de );
    }
    cache_frame_959ef1b43a0b9495bb3f57d129bc65de = NULL;

    assertFrameObject( frame_959ef1b43a0b9495bb3f57d129bc65de );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_5_real );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_5_real );
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


static PyObject *impl_numpy$lib$type_check$$$function_6__imag_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_val );
        tmp_tuple_element_1 = par_val;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_6__imag_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_6__imag_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$type_check$$$function_7_imag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_1635c19098cfd9be816a3b611bccd44a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_1635c19098cfd9be816a3b611bccd44a = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1635c19098cfd9be816a3b611bccd44a, codeobj_1635c19098cfd9be816a3b611bccd44a, module_numpy$lib$type_check, sizeof(void *) );
    frame_1635c19098cfd9be816a3b611bccd44a = cache_frame_1635c19098cfd9be816a3b611bccd44a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1635c19098cfd9be816a3b611bccd44a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1635c19098cfd9be816a3b611bccd44a ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_val );
        tmp_source_name_1 = par_val;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_imag );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_7_imag );
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_1635c19098cfd9be816a3b611bccd44a, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_1635c19098cfd9be816a3b611bccd44a, exception_keeper_lineno_1 );
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
        tmp_compexpr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "o";
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

                exception_lineno = 206;
                type_description_1 = "o";
                goto try_except_handler_3;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_val );
            tmp_args_element_name_1 = par_val;
            frame_1635c19098cfd9be816a3b611bccd44a->m_frame.f_lineno = 206;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "o";
                goto try_except_handler_3;
            }
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_imag );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "o";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 203;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_1635c19098cfd9be816a3b611bccd44a->m_frame) frame_1635c19098cfd9be816a3b611bccd44a->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "o";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_7_imag );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1635c19098cfd9be816a3b611bccd44a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1635c19098cfd9be816a3b611bccd44a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1635c19098cfd9be816a3b611bccd44a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1635c19098cfd9be816a3b611bccd44a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1635c19098cfd9be816a3b611bccd44a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1635c19098cfd9be816a3b611bccd44a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1635c19098cfd9be816a3b611bccd44a,
        type_description_1,
        par_val
    );


    // Release cached frame.
    if ( frame_1635c19098cfd9be816a3b611bccd44a == cache_frame_1635c19098cfd9be816a3b611bccd44a )
    {
        Py_DECREF( frame_1635c19098cfd9be816a3b611bccd44a );
    }
    cache_frame_1635c19098cfd9be816a3b611bccd44a = NULL;

    assertFrameObject( frame_1635c19098cfd9be816a3b611bccd44a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_7_imag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_7_imag );
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


static PyObject *impl_numpy$lib$type_check$$$function_8__is_type_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_8__is_type_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_8__is_type_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$type_check$$$function_9_iscomplex( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_ax = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_a73fc3996788235ac437369fde582a42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a73fc3996788235ac437369fde582a42 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a73fc3996788235ac437369fde582a42, codeobj_a73fc3996788235ac437369fde582a42, module_numpy$lib$type_check, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a73fc3996788235ac437369fde582a42 = cache_frame_a73fc3996788235ac437369fde582a42;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a73fc3996788235ac437369fde582a42 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a73fc3996788235ac437369fde582a42 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_a73fc3996788235ac437369fde582a42->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_ax == NULL );
        var_ax = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( var_ax );
        tmp_source_name_2 = var_ax;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_complexfloating );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a73fc3996788235ac437369fde582a42->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 244;
            type_description_1 = "ooo";
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
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( var_ax );
            tmp_source_name_4 = var_ax;
            tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_imag );
            if ( tmp_compexpr_left_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_1 = const_int_0;
            tmp_return_value = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            Py_DECREF( tmp_compexpr_left_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_zeros );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 246;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_ax );
        tmp_source_name_5 = var_ax;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = (PyObject *)&PyBool_Type;
        frame_a73fc3996788235ac437369fde582a42->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_2;
    }
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_res );
        tmp_subscribed_name_1 = var_res;
        tmp_subscript_name_1 = const_tuple_empty;
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a73fc3996788235ac437369fde582a42 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a73fc3996788235ac437369fde582a42 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a73fc3996788235ac437369fde582a42 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a73fc3996788235ac437369fde582a42, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a73fc3996788235ac437369fde582a42->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a73fc3996788235ac437369fde582a42, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a73fc3996788235ac437369fde582a42,
        type_description_1,
        par_x,
        var_ax,
        var_res
    );


    // Release cached frame.
    if ( frame_a73fc3996788235ac437369fde582a42 == cache_frame_a73fc3996788235ac437369fde582a42 )
    {
        Py_DECREF( frame_a73fc3996788235ac437369fde582a42 );
    }
    cache_frame_a73fc3996788235ac437369fde582a42 = NULL;

    assertFrameObject( frame_a73fc3996788235ac437369fde582a42 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_9_iscomplex );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_ax );
    Py_DECREF( var_ax );
    var_ax = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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

    Py_XDECREF( var_ax );
    var_ax = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_9_iscomplex );
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


static PyObject *impl_numpy$lib$type_check$$$function_10_isreal( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_66e753f40418a44c2ebabc9bf7bc4e84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_66e753f40418a44c2ebabc9bf7bc4e84 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_66e753f40418a44c2ebabc9bf7bc4e84, codeobj_66e753f40418a44c2ebabc9bf7bc4e84, module_numpy$lib$type_check, sizeof(void *) );
    frame_66e753f40418a44c2ebabc9bf7bc4e84 = cache_frame_66e753f40418a44c2ebabc9bf7bc4e84;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_66e753f40418a44c2ebabc9bf7bc4e84 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_66e753f40418a44c2ebabc9bf7bc4e84 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_imag );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_imag );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "imag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 279;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_66e753f40418a44c2ebabc9bf7bc4e84->m_frame.f_lineno = 279;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66e753f40418a44c2ebabc9bf7bc4e84 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_66e753f40418a44c2ebabc9bf7bc4e84 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66e753f40418a44c2ebabc9bf7bc4e84 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_66e753f40418a44c2ebabc9bf7bc4e84, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_66e753f40418a44c2ebabc9bf7bc4e84->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_66e753f40418a44c2ebabc9bf7bc4e84, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_66e753f40418a44c2ebabc9bf7bc4e84,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_66e753f40418a44c2ebabc9bf7bc4e84 == cache_frame_66e753f40418a44c2ebabc9bf7bc4e84 )
    {
        Py_DECREF( frame_66e753f40418a44c2ebabc9bf7bc4e84 );
    }
    cache_frame_66e753f40418a44c2ebabc9bf7bc4e84 = NULL;

    assertFrameObject( frame_66e753f40418a44c2ebabc9bf7bc4e84 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_10_isreal );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_10_isreal );
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


static PyObject *impl_numpy$lib$type_check$$$function_11_iscomplexobj( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_dtype = NULL;
    PyObject *var_type_ = NULL;
    struct Nuitka_FrameObject *frame_96bafb4817df10dc28536218c4e5aac5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_96bafb4817df10dc28536218c4e5aac5 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_96bafb4817df10dc28536218c4e5aac5, codeobj_96bafb4817df10dc28536218c4e5aac5, module_numpy$lib$type_check, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_96bafb4817df10dc28536218c4e5aac5 = cache_frame_96bafb4817df10dc28536218c4e5aac5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_96bafb4817df10dc28536218c4e5aac5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_96bafb4817df10dc28536218c4e5aac5 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_x );
        tmp_source_name_1 = par_x;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( var_dtype == NULL );
        var_dtype = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_dtype );
        tmp_source_name_2 = var_dtype;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_type );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( var_type_ == NULL );
        var_type_ = tmp_assign_source_2;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_96bafb4817df10dc28536218c4e5aac5, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_96bafb4817df10dc28536218c4e5aac5, exception_keeper_lineno_1 );
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
        tmp_compexpr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asarray );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 319;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_1 = par_x;
            frame_96bafb4817df10dc28536218c4e5aac5->m_frame.f_lineno = 319;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_type );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            assert( var_type_ == NULL );
            var_type_ = tmp_assign_source_3;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 315;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_96bafb4817df10dc28536218c4e5aac5->m_frame) frame_96bafb4817df10dc28536218c4e5aac5->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_3;
        branch_end_1:;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_11_iscomplexobj );
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_2 != NULL );
        if ( var_type_ == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "type_" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 320;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = var_type_;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

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

            exception_lineno = 320;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_2;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_complexfloating );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_96bafb4817df10dc28536218c4e5aac5->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_96bafb4817df10dc28536218c4e5aac5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_96bafb4817df10dc28536218c4e5aac5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_96bafb4817df10dc28536218c4e5aac5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_96bafb4817df10dc28536218c4e5aac5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_96bafb4817df10dc28536218c4e5aac5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_96bafb4817df10dc28536218c4e5aac5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_96bafb4817df10dc28536218c4e5aac5,
        type_description_1,
        par_x,
        var_dtype,
        var_type_
    );


    // Release cached frame.
    if ( frame_96bafb4817df10dc28536218c4e5aac5 == cache_frame_96bafb4817df10dc28536218c4e5aac5 )
    {
        Py_DECREF( frame_96bafb4817df10dc28536218c4e5aac5 );
    }
    cache_frame_96bafb4817df10dc28536218c4e5aac5 = NULL;

    assertFrameObject( frame_96bafb4817df10dc28536218c4e5aac5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_11_iscomplexobj );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_type_ );
    var_type_ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_type_ );
    var_type_ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_11_iscomplexobj );
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


static PyObject *impl_numpy$lib$type_check$$$function_12_isrealobj( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_79582205fbad22463448435c5005137b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_79582205fbad22463448435c5005137b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_79582205fbad22463448435c5005137b, codeobj_79582205fbad22463448435c5005137b, module_numpy$lib$type_check, sizeof(void *) );
    frame_79582205fbad22463448435c5005137b = cache_frame_79582205fbad22463448435c5005137b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_79582205fbad22463448435c5005137b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_79582205fbad22463448435c5005137b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_iscomplexobj );

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

            exception_lineno = 356;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_79582205fbad22463448435c5005137b->m_frame.f_lineno = 356;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res == 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79582205fbad22463448435c5005137b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_79582205fbad22463448435c5005137b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79582205fbad22463448435c5005137b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_79582205fbad22463448435c5005137b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_79582205fbad22463448435c5005137b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_79582205fbad22463448435c5005137b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_79582205fbad22463448435c5005137b,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_79582205fbad22463448435c5005137b == cache_frame_79582205fbad22463448435c5005137b )
    {
        Py_DECREF( frame_79582205fbad22463448435c5005137b );
    }
    cache_frame_79582205fbad22463448435c5005137b = NULL;

    assertFrameObject( frame_79582205fbad22463448435c5005137b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_12_isrealobj );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_12_isrealobj );
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


static PyObject *impl_numpy$lib$type_check$$$function_13__getmaxmin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *var_getlimits = NULL;
    PyObject *var_f = NULL;
    struct Nuitka_FrameObject *frame_2c049661eb0291dc55e2d4efcf44e46a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2c049661eb0291dc55e2d4efcf44e46a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2c049661eb0291dc55e2d4efcf44e46a, codeobj_2c049661eb0291dc55e2d4efcf44e46a, module_numpy$lib$type_check, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2c049661eb0291dc55e2d4efcf44e46a = cache_frame_2c049661eb0291dc55e2d4efcf44e46a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2c049661eb0291dc55e2d4efcf44e46a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2c049661eb0291dc55e2d4efcf44e46a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$type_check;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_getlimits_tuple;
        tmp_level_name_1 = const_int_0;
        frame_2c049661eb0291dc55e2d4efcf44e46a->m_frame.f_lineno = 361;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_getlimits );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_getlimits == NULL );
        var_getlimits = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_getlimits );
        tmp_called_instance_1 = var_getlimits;
        CHECK_OBJECT( par_t );
        tmp_args_element_name_1 = par_t;
        frame_2c049661eb0291dc55e2d4efcf44e46a->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_finfo, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_f == NULL );
        var_f = tmp_assign_source_2;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_f );
        tmp_source_name_1 = var_f;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_max );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_f );
        tmp_source_name_2 = var_f;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_min );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 363;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c049661eb0291dc55e2d4efcf44e46a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c049661eb0291dc55e2d4efcf44e46a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c049661eb0291dc55e2d4efcf44e46a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2c049661eb0291dc55e2d4efcf44e46a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2c049661eb0291dc55e2d4efcf44e46a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2c049661eb0291dc55e2d4efcf44e46a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2c049661eb0291dc55e2d4efcf44e46a,
        type_description_1,
        par_t,
        var_getlimits,
        var_f
    );


    // Release cached frame.
    if ( frame_2c049661eb0291dc55e2d4efcf44e46a == cache_frame_2c049661eb0291dc55e2d4efcf44e46a )
    {
        Py_DECREF( frame_2c049661eb0291dc55e2d4efcf44e46a );
    }
    cache_frame_2c049661eb0291dc55e2d4efcf44e46a = NULL;

    assertFrameObject( frame_2c049661eb0291dc55e2d4efcf44e46a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_13__getmaxmin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)var_getlimits );
    Py_DECREF( var_getlimits );
    var_getlimits = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    Py_XDECREF( var_getlimits );
    var_getlimits = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_13__getmaxmin );
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


static PyObject *impl_numpy$lib$type_check$$$function_14__nan_to_num_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_copy = python_pars[ 1 ];
    PyObject *par_nan = python_pars[ 2 ];
    PyObject *par_posinf = python_pars[ 3 ];
    PyObject *par_neginf = python_pars[ 4 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_14__nan_to_num_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    CHECK_OBJECT( (PyObject *)par_nan );
    Py_DECREF( par_nan );
    par_nan = NULL;

    CHECK_OBJECT( (PyObject *)par_posinf );
    Py_DECREF( par_posinf );
    par_posinf = NULL;

    CHECK_OBJECT( (PyObject *)par_neginf );
    Py_DECREF( par_neginf );
    par_neginf = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_14__nan_to_num_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$type_check$$$function_15_nan_to_num( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_copy = python_pars[ 1 ];
    PyObject *par_nan = python_pars[ 2 ];
    PyObject *par_posinf = python_pars[ 3 ];
    PyObject *par_neginf = python_pars[ 4 ];
    PyObject *var_xtype = NULL;
    PyObject *var_isscalar = NULL;
    PyObject *var_iscomplex = NULL;
    PyObject *var_dest = NULL;
    PyObject *var_maxf = NULL;
    PyObject *var_minf = NULL;
    PyObject *var_d = NULL;
    PyObject *var_idx_nan = NULL;
    PyObject *var_idx_posinf = NULL;
    PyObject *var_idx_neginf = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_19d51b1e942411e63a756849f6342738;
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
    static struct Nuitka_FrameObject *cache_frame_19d51b1e942411e63a756849f6342738 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_19d51b1e942411e63a756849f6342738, codeobj_19d51b1e942411e63a756849f6342738, module_numpy$lib$type_check, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_19d51b1e942411e63a756849f6342738 = cache_frame_19d51b1e942411e63a756849f6342738;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_19d51b1e942411e63a756849f6342738 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_19d51b1e942411e63a756849f6342738 ) == 2 ); // Frame stack

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
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 456;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_subok;
        tmp_dict_value_1 = Py_True;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_copy;
        CHECK_OBJECT( par_copy );
        tmp_dict_value_2 = par_copy;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_19d51b1e942411e63a756849f6342738->m_frame.f_lineno = 456;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_x );
        tmp_source_name_3 = par_x;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_type );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_xtype == NULL );
        var_xtype = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_x );
        tmp_source_name_4 = par_x;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 459;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_assign_source_3 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 459;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_isscalar == NULL );
        var_isscalar = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( var_xtype );
        tmp_args_element_name_1 = var_xtype;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

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

            exception_lineno = 461;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_inexact );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_19d51b1e942411e63a756849f6342738->m_frame.f_lineno = 461;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
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
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_isscalar );
            tmp_truth_name_1 = CHECK_IF_TRUE( var_isscalar );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 462;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_1;
            }
            else
            {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            CHECK_OBJECT( par_x );
            tmp_subscribed_name_1 = par_x;
            tmp_subscript_name_1 = const_tuple_empty;
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 462;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT( par_x );
            tmp_return_value = par_x;
            Py_INCREF( tmp_return_value );
            condexpr_end_1:;
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_3 != NULL );
        CHECK_OBJECT( var_xtype );
        tmp_args_element_name_3 = var_xtype;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

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

            exception_lineno = 464;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_3;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_complexfloating );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_19d51b1e942411e63a756849f6342738->m_frame.f_lineno = 464;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_iscomplex == NULL );
        var_iscomplex = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( var_iscomplex );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_iscomplex );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 466;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( par_x );
        tmp_source_name_7 = par_x;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_real );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 466;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_x );
        tmp_source_name_8 = par_x;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_imag );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_5 );

            exception_lineno = 466;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_assign_source_5, 1, tmp_tuple_element_2 );
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( par_x );
        tmp_tuple_element_3 = par_x;
        tmp_assign_source_5 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_3 );
        condexpr_end_2:;
        assert( var_dest == NULL );
        var_dest = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__getmaxmin );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__getmaxmin );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_getmaxmin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 467;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_x );
        tmp_source_name_10 = par_x;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_real );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 467;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_dtype );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 467;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_19d51b1e942411e63a756849f6342738->m_frame.f_lineno = 467;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 467;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 467;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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
            exception_lineno = 467;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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
            exception_lineno = 467;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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
                    exception_lineno = 467;
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
            exception_lineno = 467;
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
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        assert( var_maxf == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_maxf = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        assert( var_minf == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_minf = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_posinf );
        tmp_compexpr_left_2 = par_posinf;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_4 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( par_posinf );
            tmp_assign_source_11 = par_posinf;
            {
                PyObject *old = var_maxf;
                assert( old != NULL );
                var_maxf = tmp_assign_source_11;
                Py_INCREF( var_maxf );
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_neginf );
        tmp_compexpr_left_3 = par_neginf;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( par_neginf );
            tmp_assign_source_12 = par_neginf;
            {
                PyObject *old = var_minf;
                assert( old != NULL );
                var_minf = tmp_assign_source_12;
                Py_INCREF( var_minf );
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( var_dest );
        tmp_iter_arg_2 = var_dest;
        tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_13;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_14 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 472;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_15 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_15;
            Py_INCREF( var_d );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isnan );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isnan );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isnan" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 473;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( var_d );
        tmp_args_element_name_6 = var_d;
        frame_19d51b1e942411e63a756849f6342738->m_frame.f_lineno = 473;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 473;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_idx_nan;
            var_idx_nan = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isposinf );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isposinf );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isposinf" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 474;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        CHECK_OBJECT( var_d );
        tmp_args_element_name_7 = var_d;
        frame_19d51b1e942411e63a756849f6342738->m_frame.f_lineno = 474;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 474;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_idx_posinf;
            var_idx_posinf = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isneginf );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isneginf );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isneginf" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 475;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_7 = tmp_mvar_value_7;
        CHECK_OBJECT( var_d );
        tmp_args_element_name_8 = var_d;
        frame_19d51b1e942411e63a756849f6342738->m_frame.f_lineno = 475;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 475;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_idx_neginf;
            var_idx_neginf = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 476;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_11 = tmp_mvar_value_8;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_copyto );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_d );
        tmp_tuple_element_4 = var_d;
        tmp_args_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( par_nan );
        tmp_tuple_element_4 = par_nan;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
        tmp_dict_key_3 = const_str_plain_where;
        CHECK_OBJECT( var_idx_nan );
        tmp_dict_value_3 = var_idx_nan;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_19d51b1e942411e63a756849f6342738->m_frame.f_lineno = 476;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 477;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_12 = tmp_mvar_value_9;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_copyto );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 477;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_d );
        tmp_tuple_element_5 = var_d;
        tmp_args_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_maxf );
        tmp_tuple_element_5 = var_maxf;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
        tmp_dict_key_4 = const_str_plain_where;
        CHECK_OBJECT( var_idx_posinf );
        tmp_dict_value_4 = var_idx_posinf;
        tmp_kw_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_19d51b1e942411e63a756849f6342738->m_frame.f_lineno = 477;
        tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 477;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 478;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_13 = tmp_mvar_value_10;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_copyto );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 478;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_d );
        tmp_tuple_element_6 = var_d;
        tmp_args_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_minf );
        tmp_tuple_element_6 = var_minf;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
        tmp_dict_key_5 = const_str_plain_where;
        CHECK_OBJECT( var_idx_neginf );
        tmp_dict_value_5 = var_idx_neginf;
        tmp_kw_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        frame_19d51b1e942411e63a756849f6342738->m_frame.f_lineno = 478;
        tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 478;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 472;
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
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_isscalar );
        tmp_truth_name_3 = CHECK_IF_TRUE( var_isscalar );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 479;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_2 = par_x;
        tmp_subscript_name_2 = const_tuple_empty;
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 479;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( par_x );
        tmp_return_value = par_x;
        Py_INCREF( tmp_return_value );
        condexpr_end_3:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19d51b1e942411e63a756849f6342738 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_19d51b1e942411e63a756849f6342738 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19d51b1e942411e63a756849f6342738 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_19d51b1e942411e63a756849f6342738, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_19d51b1e942411e63a756849f6342738->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_19d51b1e942411e63a756849f6342738, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_19d51b1e942411e63a756849f6342738,
        type_description_1,
        par_x,
        par_copy,
        par_nan,
        par_posinf,
        par_neginf,
        var_xtype,
        var_isscalar,
        var_iscomplex,
        var_dest,
        var_maxf,
        var_minf,
        var_d,
        var_idx_nan,
        var_idx_posinf,
        var_idx_neginf
    );


    // Release cached frame.
    if ( frame_19d51b1e942411e63a756849f6342738 == cache_frame_19d51b1e942411e63a756849f6342738 )
    {
        Py_DECREF( frame_19d51b1e942411e63a756849f6342738 );
    }
    cache_frame_19d51b1e942411e63a756849f6342738 = NULL;

    assertFrameObject( frame_19d51b1e942411e63a756849f6342738 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_15_nan_to_num );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    CHECK_OBJECT( (PyObject *)par_nan );
    Py_DECREF( par_nan );
    par_nan = NULL;

    CHECK_OBJECT( (PyObject *)par_posinf );
    Py_DECREF( par_posinf );
    par_posinf = NULL;

    CHECK_OBJECT( (PyObject *)par_neginf );
    Py_DECREF( par_neginf );
    par_neginf = NULL;

    CHECK_OBJECT( (PyObject *)var_xtype );
    Py_DECREF( var_xtype );
    var_xtype = NULL;

    CHECK_OBJECT( (PyObject *)var_isscalar );
    Py_DECREF( var_isscalar );
    var_isscalar = NULL;

    Py_XDECREF( var_iscomplex );
    var_iscomplex = NULL;

    Py_XDECREF( var_dest );
    var_dest = NULL;

    Py_XDECREF( var_maxf );
    var_maxf = NULL;

    Py_XDECREF( var_minf );
    var_minf = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_idx_nan );
    var_idx_nan = NULL;

    Py_XDECREF( var_idx_posinf );
    var_idx_posinf = NULL;

    Py_XDECREF( var_idx_neginf );
    var_idx_neginf = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_copy );
    Py_DECREF( par_copy );
    par_copy = NULL;

    CHECK_OBJECT( (PyObject *)par_nan );
    Py_DECREF( par_nan );
    par_nan = NULL;

    CHECK_OBJECT( (PyObject *)par_posinf );
    Py_DECREF( par_posinf );
    par_posinf = NULL;

    CHECK_OBJECT( (PyObject *)par_neginf );
    Py_DECREF( par_neginf );
    par_neginf = NULL;

    Py_XDECREF( var_xtype );
    var_xtype = NULL;

    Py_XDECREF( var_isscalar );
    var_isscalar = NULL;

    Py_XDECREF( var_iscomplex );
    var_iscomplex = NULL;

    Py_XDECREF( var_dest );
    var_dest = NULL;

    Py_XDECREF( var_maxf );
    var_maxf = NULL;

    Py_XDECREF( var_minf );
    var_minf = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_idx_nan );
    var_idx_nan = NULL;

    Py_XDECREF( var_idx_posinf );
    var_idx_posinf = NULL;

    Py_XDECREF( var_idx_neginf );
    var_idx_neginf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_15_nan_to_num );
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


static PyObject *impl_numpy$lib$type_check$$$function_16__real_if_close_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_tol = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_16__real_if_close_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_16__real_if_close_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$type_check$$$function_17_real_if_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_tol = python_pars[ 1 ];
    PyObject *var_getlimits = NULL;
    PyObject *var_f = NULL;
    struct Nuitka_FrameObject *frame_3b2c5df92f673f224863aeefb42aae8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3b2c5df92f673f224863aeefb42aae8f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3b2c5df92f673f224863aeefb42aae8f, codeobj_3b2c5df92f673f224863aeefb42aae8f, module_numpy$lib$type_check, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3b2c5df92f673f224863aeefb42aae8f = cache_frame_3b2c5df92f673f224863aeefb42aae8f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3b2c5df92f673f224863aeefb42aae8f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3b2c5df92f673f224863aeefb42aae8f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_3b2c5df92f673f224863aeefb42aae8f->m_frame.f_lineno = 531;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( par_a );
        tmp_source_name_2 = par_a;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_complexfloating );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3b2c5df92f673f224863aeefb42aae8f->m_frame.f_lineno = 532;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 532;
            type_description_1 = "oooo";
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
        CHECK_OBJECT( par_a );
        tmp_return_value = par_a;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_left_1 = par_tol;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 534;
            type_description_1 = "oooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_import_name_from_1;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
            tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$type_check;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = const_tuple_str_plain_getlimits_tuple;
            tmp_level_name_1 = const_int_0;
            frame_3b2c5df92f673f224863aeefb42aae8f->m_frame.f_lineno = 535;
            tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            if ( tmp_import_name_from_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 535;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_getlimits );
            Py_DECREF( tmp_import_name_from_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 535;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_getlimits == NULL );
            var_getlimits = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( var_getlimits );
            tmp_source_name_4 = var_getlimits;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_finfo );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 536;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_a );
            tmp_source_name_6 = par_a;
            tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 536;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_type );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 536;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_3b2c5df92f673f224863aeefb42aae8f->m_frame.f_lineno = 536;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 536;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_f == NULL );
            var_f = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_7;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_f );
            tmp_source_name_7 = var_f;
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_eps );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 537;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_tol );
            tmp_right_name_1 = par_tol;
            tmp_assign_source_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 537;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_tol;
                assert( old != NULL );
                par_tol = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_10;
        int tmp_truth_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

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

            exception_lineno = 538;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_3;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_all );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 538;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 538;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_4;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_absolute );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 538;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_source_name_10 = par_a;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_imag );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 538;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3b2c5df92f673f224863aeefb42aae8f->m_frame.f_lineno = 538;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_compexpr_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 538;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_2 = par_tol;
        tmp_args_element_name_5 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 538;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3b2c5df92f673f224863aeefb42aae8f->m_frame.f_lineno = 538;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 538;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 538;
            type_description_1 = "oooo";
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( par_a );
            tmp_source_name_11 = par_a;
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_real );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 539;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_a;
                assert( old != NULL );
                par_a = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b2c5df92f673f224863aeefb42aae8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b2c5df92f673f224863aeefb42aae8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b2c5df92f673f224863aeefb42aae8f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b2c5df92f673f224863aeefb42aae8f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b2c5df92f673f224863aeefb42aae8f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b2c5df92f673f224863aeefb42aae8f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3b2c5df92f673f224863aeefb42aae8f,
        type_description_1,
        par_a,
        par_tol,
        var_getlimits,
        var_f
    );


    // Release cached frame.
    if ( frame_3b2c5df92f673f224863aeefb42aae8f == cache_frame_3b2c5df92f673f224863aeefb42aae8f )
    {
        Py_DECREF( frame_3b2c5df92f673f224863aeefb42aae8f );
    }
    cache_frame_3b2c5df92f673f224863aeefb42aae8f = NULL;

    assertFrameObject( frame_3b2c5df92f673f224863aeefb42aae8f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_a );
    tmp_return_value = par_a;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_17_real_if_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_getlimits );
    var_getlimits = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

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

    Py_XDECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_getlimits );
    var_getlimits = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_17_real_if_close );
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


static PyObject *impl_numpy$lib$type_check$$$function_18__asscalar_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_fbb4c0a3df4762ee15aa86a36d0197f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fbb4c0a3df4762ee15aa86a36d0197f3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fbb4c0a3df4762ee15aa86a36d0197f3, codeobj_fbb4c0a3df4762ee15aa86a36d0197f3, module_numpy$lib$type_check, sizeof(void *) );
    frame_fbb4c0a3df4762ee15aa86a36d0197f3 = cache_frame_fbb4c0a3df4762ee15aa86a36d0197f3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fbb4c0a3df4762ee15aa86a36d0197f3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fbb4c0a3df4762ee15aa86a36d0197f3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_warnings );

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

            exception_lineno = 545;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_str_digest_bbcff49e4f32c47e1e46f107590704b7;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 546;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
        frame_fbb4c0a3df4762ee15aa86a36d0197f3->m_frame.f_lineno = 545;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fbb4c0a3df4762ee15aa86a36d0197f3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fbb4c0a3df4762ee15aa86a36d0197f3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fbb4c0a3df4762ee15aa86a36d0197f3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fbb4c0a3df4762ee15aa86a36d0197f3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fbb4c0a3df4762ee15aa86a36d0197f3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fbb4c0a3df4762ee15aa86a36d0197f3,
        type_description_1,
        par_a
    );


    // Release cached frame.
    if ( frame_fbb4c0a3df4762ee15aa86a36d0197f3 == cache_frame_fbb4c0a3df4762ee15aa86a36d0197f3 )
    {
        Py_DECREF( frame_fbb4c0a3df4762ee15aa86a36d0197f3 );
    }
    cache_frame_fbb4c0a3df4762ee15aa86a36d0197f3 = NULL;

    assertFrameObject( frame_fbb4c0a3df4762ee15aa86a36d0197f3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_2 = par_a;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_18__asscalar_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_18__asscalar_dispatcher );
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


static PyObject *impl_numpy$lib$type_check$$$function_19_asscalar( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_fd7f74d0436731f48f9360cc03dbb5a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fd7f74d0436731f48f9360cc03dbb5a2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fd7f74d0436731f48f9360cc03dbb5a2, codeobj_fd7f74d0436731f48f9360cc03dbb5a2, module_numpy$lib$type_check, sizeof(void *) );
    frame_fd7f74d0436731f48f9360cc03dbb5a2 = cache_frame_fd7f74d0436731f48f9360cc03dbb5a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fd7f74d0436731f48f9360cc03dbb5a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fd7f74d0436731f48f9360cc03dbb5a2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_a );
        tmp_called_instance_1 = par_a;
        frame_fd7f74d0436731f48f9360cc03dbb5a2->m_frame.f_lineno = 575;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_item );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 575;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd7f74d0436731f48f9360cc03dbb5a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd7f74d0436731f48f9360cc03dbb5a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd7f74d0436731f48f9360cc03dbb5a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fd7f74d0436731f48f9360cc03dbb5a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fd7f74d0436731f48f9360cc03dbb5a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fd7f74d0436731f48f9360cc03dbb5a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fd7f74d0436731f48f9360cc03dbb5a2,
        type_description_1,
        par_a
    );


    // Release cached frame.
    if ( frame_fd7f74d0436731f48f9360cc03dbb5a2 == cache_frame_fd7f74d0436731f48f9360cc03dbb5a2 )
    {
        Py_DECREF( frame_fd7f74d0436731f48f9360cc03dbb5a2 );
    }
    cache_frame_fd7f74d0436731f48f9360cc03dbb5a2 = NULL;

    assertFrameObject( frame_fd7f74d0436731f48f9360cc03dbb5a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_19_asscalar );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_19_asscalar );
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


static PyObject *impl_numpy$lib$type_check$$$function_20_typename( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_char = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_ef3aa5b2675ab463922d9c91b8aef0da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ef3aa5b2675ab463922d9c91b8aef0da = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ef3aa5b2675ab463922d9c91b8aef0da, codeobj_ef3aa5b2675ab463922d9c91b8aef0da, module_numpy$lib$type_check, sizeof(void *) );
    frame_ef3aa5b2675ab463922d9c91b8aef0da = cache_frame_ef3aa5b2675ab463922d9c91b8aef0da;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ef3aa5b2675ab463922d9c91b8aef0da );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ef3aa5b2675ab463922d9c91b8aef0da ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__namefromtype );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__namefromtype );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_namefromtype" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 653;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_char );
        tmp_subscript_name_1 = par_char;
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 653;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef3aa5b2675ab463922d9c91b8aef0da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef3aa5b2675ab463922d9c91b8aef0da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef3aa5b2675ab463922d9c91b8aef0da );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ef3aa5b2675ab463922d9c91b8aef0da, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ef3aa5b2675ab463922d9c91b8aef0da->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ef3aa5b2675ab463922d9c91b8aef0da, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ef3aa5b2675ab463922d9c91b8aef0da,
        type_description_1,
        par_char
    );


    // Release cached frame.
    if ( frame_ef3aa5b2675ab463922d9c91b8aef0da == cache_frame_ef3aa5b2675ab463922d9c91b8aef0da )
    {
        Py_DECREF( frame_ef3aa5b2675ab463922d9c91b8aef0da );
    }
    cache_frame_ef3aa5b2675ab463922d9c91b8aef0da = NULL;

    assertFrameObject( frame_ef3aa5b2675ab463922d9c91b8aef0da );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_20_typename );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_char );
    Py_DECREF( par_char );
    par_char = NULL;

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

    CHECK_OBJECT( (PyObject *)par_char );
    Py_DECREF( par_char );
    par_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_20_typename );
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


static PyObject *impl_numpy$lib$type_check$$$function_21__common_type_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_arrays );
    tmp_return_value = par_arrays;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_21__common_type_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_21__common_type_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$type_check$$$function_22_common_type( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    PyObject *var_is_complex = NULL;
    PyObject *var_precision = NULL;
    PyObject *var_a = NULL;
    PyObject *var_t = NULL;
    PyObject *var_p = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1a4031e1d5d27677ce52f2bc57b002bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1a4031e1d5d27677ce52f2bc57b002bd = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_False;
        assert( var_is_complex == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_is_complex = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_0;
        assert( var_precision == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_precision = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1a4031e1d5d27677ce52f2bc57b002bd, codeobj_1a4031e1d5d27677ce52f2bc57b002bd, module_numpy$lib$type_check, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1a4031e1d5d27677ce52f2bc57b002bd = cache_frame_1a4031e1d5d27677ce52f2bc57b002bd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1a4031e1d5d27677ce52f2bc57b002bd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1a4031e1d5d27677ce52f2bc57b002bd ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_arrays );
        tmp_iter_arg_1 = par_arrays;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 712;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 712;
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
            PyObject *old = var_a;
            var_a = tmp_assign_source_5;
            Py_INCREF( var_a );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_a );
        tmp_source_name_2 = var_a;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 713;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 713;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_t;
            var_t = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_iscomplexobj );

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

            exception_lineno = 714;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_a );
        tmp_args_element_name_1 = var_a;
        frame_1a4031e1d5d27677ce52f2bc57b002bd->m_frame.f_lineno = 714;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 714;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 714;
            type_description_1 = "oooooo";
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
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = Py_True;
            {
                PyObject *old = var_is_complex;
                var_is_complex = tmp_assign_source_7;
                Py_INCREF( var_is_complex );
                Py_XDECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_2;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( var_t );
        tmp_args_element_name_2 = var_t;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

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

            exception_lineno = 716;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_integer );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 716;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_1a4031e1d5d27677ce52f2bc57b002bd->m_frame.f_lineno = 716;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 716;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 716;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
            tmp_assign_source_8 = const_int_pos_2;
            {
                PyObject *old = var_p;
                var_p = tmp_assign_source_8;
                Py_INCREF( var_p );
                Py_XDECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_precision );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_precision );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_precision" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 719;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT( var_t );
            tmp_args_element_name_4 = var_t;
            tmp_args_element_name_5 = Py_None;
            frame_1a4031e1d5d27677ce52f2bc57b002bd->m_frame.f_lineno = 719;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assign_source_9 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, call_args );
            }

            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 719;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_p;
                var_p = tmp_assign_source_9;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( var_p );
            tmp_compexpr_left_1 = var_p;
            tmp_compexpr_right_1 = Py_None;
            tmp_condition_result_3 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                tmp_make_exception_arg_1 = const_str_digest_7ba543784f99e89f93fecfed2aa5dab4;
                frame_1a4031e1d5d27677ce52f2bc57b002bd->m_frame.f_lineno = 721;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 721;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_3 != NULL );
        CHECK_OBJECT( var_precision );
        tmp_args_element_name_6 = var_precision;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_7 = var_p;
        frame_1a4031e1d5d27677ce52f2bc57b002bd->m_frame.f_lineno = 722;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 722;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_precision;
            assert( old != NULL );
            var_precision = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 712;
        type_description_1 = "oooooo";
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
        int tmp_truth_name_3;
        if ( var_is_complex == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "is_complex" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 723;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE( var_is_complex );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 723;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_type );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_type );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_type" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 724;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_2 = tmp_mvar_value_4;
            tmp_subscript_name_1 = const_int_pos_1;
            tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_1, 1 );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 724;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_precision );
            tmp_subscript_name_2 = var_precision;
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 724;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_subscript_name_4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_type );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_type );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_type" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 726;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_4 = tmp_mvar_value_5;
            tmp_subscript_name_3 = const_int_0;
            tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_3, 0 );
            if ( tmp_subscribed_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 726;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_precision );
            tmp_subscript_name_4 = var_precision;
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscribed_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 726;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a4031e1d5d27677ce52f2bc57b002bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a4031e1d5d27677ce52f2bc57b002bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a4031e1d5d27677ce52f2bc57b002bd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1a4031e1d5d27677ce52f2bc57b002bd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1a4031e1d5d27677ce52f2bc57b002bd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1a4031e1d5d27677ce52f2bc57b002bd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1a4031e1d5d27677ce52f2bc57b002bd,
        type_description_1,
        par_arrays,
        var_is_complex,
        var_precision,
        var_a,
        var_t,
        var_p
    );


    // Release cached frame.
    if ( frame_1a4031e1d5d27677ce52f2bc57b002bd == cache_frame_1a4031e1d5d27677ce52f2bc57b002bd )
    {
        Py_DECREF( frame_1a4031e1d5d27677ce52f2bc57b002bd );
    }
    cache_frame_1a4031e1d5d27677ce52f2bc57b002bd = NULL;

    assertFrameObject( frame_1a4031e1d5d27677ce52f2bc57b002bd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_22_common_type );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    Py_XDECREF( var_is_complex );
    var_is_complex = NULL;

    CHECK_OBJECT( (PyObject *)var_precision );
    Py_DECREF( var_precision );
    var_precision = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    Py_XDECREF( var_is_complex );
    var_is_complex = NULL;

    Py_XDECREF( var_precision );
    var_precision = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_22_common_type );
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



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_10_isreal(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_10_isreal,
        const_str_plain_isreal,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_66e753f40418a44c2ebabc9bf7bc4e84,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        const_str_digest_399d8bf4edd5c7d2add9b2763d48c854,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_11_iscomplexobj(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_11_iscomplexobj,
        const_str_plain_iscomplexobj,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_96bafb4817df10dc28536218c4e5aac5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        const_str_digest_793dd2dc20fd2ea802f720223d7272d8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_12_isrealobj(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_12_isrealobj,
        const_str_plain_isrealobj,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_79582205fbad22463448435c5005137b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        const_str_digest_4597cf420c1bfdcbc1c8ec3199b90183,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_13__getmaxmin(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_13__getmaxmin,
        const_str_plain__getmaxmin,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2c049661eb0291dc55e2d4efcf44e46a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_14__nan_to_num_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_14__nan_to_num_dispatcher,
        const_str_plain__nan_to_num_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_17b41f5eac1fefb76d8471e1a00ff915,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_15_nan_to_num( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_15_nan_to_num,
        const_str_plain_nan_to_num,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_19d51b1e942411e63a756849f6342738,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        const_str_digest_41ac8cc745b24f37d042da1c7414ea95,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_16__real_if_close_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_16__real_if_close_dispatcher,
        const_str_plain__real_if_close_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6357e89a03d0ced2d5fa05fb7ca045f4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_17_real_if_close( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_17_real_if_close,
        const_str_plain_real_if_close,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3b2c5df92f673f224863aeefb42aae8f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        const_str_digest_7885000a00bdf1f3d628e5c7a32a9436,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_18__asscalar_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_18__asscalar_dispatcher,
        const_str_plain__asscalar_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fbb4c0a3df4762ee15aa86a36d0197f3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_19_asscalar(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_19_asscalar,
        const_str_plain_asscalar,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fd7f74d0436731f48f9360cc03dbb5a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        const_str_digest_7b8c7fecc703afcf5444e965a3ac45e4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_1_mintypecode( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_1_mintypecode,
        const_str_plain_mintypecode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d2c6e90ddef14fe8f0c18d19bcd205d4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        const_str_digest_2c2f03b41c77c8842fe2c6d0834f1b1f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_20_typename(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_20_typename,
        const_str_plain_typename,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ef3aa5b2675ab463922d9c91b8aef0da,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        const_str_digest_3b4c0c12f6833fe1bbb4274681095c66,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_21__common_type_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_21__common_type_dispatcher,
        const_str_plain__common_type_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bf7bfe6051852d61d86491a15baf16c2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_22_common_type(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_22_common_type,
        const_str_plain_common_type,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1a4031e1d5d27677ce52f2bc57b002bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        const_str_digest_1dbf3a4cccc9e0c8c3337fc4f3ae68df,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_2__asfarray_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_2__asfarray_dispatcher,
        const_str_plain__asfarray_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_741440661dcdae4464c142bcf87ec0de,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_3_asfarray( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_3_asfarray,
        const_str_plain_asfarray,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_15fa4c7e12ee51f39121cf7f6f8045b4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        const_str_digest_e3514d8506119d8a98cf424c15eacbea,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_4__real_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_4__real_dispatcher,
        const_str_plain__real_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9e31a8b9dcb46e2ebc57669239c3d828,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_5_real(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_5_real,
        const_str_plain_real,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_959ef1b43a0b9495bb3f57d129bc65de,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        const_str_digest_801bbb008f631b9f9660e58e0293029d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_6__imag_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_6__imag_dispatcher,
        const_str_plain__imag_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_73d351448254ae6eb038e604f5e27f8e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_7_imag(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_7_imag,
        const_str_plain_imag,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1635c19098cfd9be816a3b611bccd44a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        const_str_digest_9e0e8d72e024d4088e01ffb6a368b640,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_8__is_type_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_8__is_type_dispatcher,
        const_str_plain__is_type_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f2680ad13d43bd3094936e328594aacc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_9_iscomplex(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_9_iscomplex,
        const_str_plain_iscomplex,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a73fc3996788235ac437369fde582a42,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$type_check,
        const_str_digest_d08af0c6d2567c06c1d32bd76943a25a,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$type_check =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.type_check",
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

MOD_INIT_DECL( numpy$lib$type_check )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$type_check );
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
    puts("numpy.lib.type_check: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.type_check: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.type_check: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$lib$type_check" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$type_check = Py_InitModule4(
        "numpy.lib.type_check",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$lib$type_check = PyModule_Create( &mdef_numpy$lib$type_check );
#endif

    moduledict_numpy$lib$type_check = MODULE_DICT( module_numpy$lib$type_check );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$lib$type_check,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$lib$type_check,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$type_check,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$type_check,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$lib$type_check );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_f06b0863ac057f993e0b6697d72eaf86, module_numpy$lib$type_check );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_2538fc9526d8e156be106fe5b812e5ff;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_319fcf66f386c3009026359f595c3662;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_2538fc9526d8e156be106fe5b812e5ff = MAKE_MODULE_FRAME( codeobj_2538fc9526d8e156be106fe5b812e5ff, module_numpy$lib$type_check );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2538fc9526d8e156be106fe5b812e5ff );
    assert( Py_REFCNT( frame_2538fc9526d8e156be106fe5b812e5ff ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 4;
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_plain_functools;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$type_check;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_warnings;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$type_check;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 6;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = LIST_COPY( const_list_7408997311a16cd973ccb73960eae3bc_list );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_aa3423acdb6152e259f846c9911226b3;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib$type_check;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 13;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_import_name_from_4 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_core );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_numeric );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_aa3423acdb6152e259f846c9911226b3;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$lib$type_check;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_c7d0236eae4b85260fa70fff7875c094_tuple;
        tmp_level_name_4 = const_int_0;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 14;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_asarray );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_asanyarray );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_isnan );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isnan, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_zeros );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_16 );
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
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_3ebbb82d9800d0665e0803be07081408;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$lib$type_check;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_set_module_tuple;
        tmp_level_name_5 = const_int_0;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 15;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_set_module );
        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_set_module, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_6 = (PyObject *)moduledict_numpy$lib$type_check;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_overrides_tuple;
        tmp_level_name_6 = const_int_0;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 16;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_overrides );
        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_overrides, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_ufunclike;
        tmp_globals_name_7 = (PyObject *)moduledict_numpy$lib$type_check;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_isneginf_str_plain_isposinf_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 17;
        tmp_assign_source_19 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_numpy$lib$type_check,
                const_str_plain_isneginf,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_isneginf );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isneginf, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_13 ) )
        {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_numpy$lib$type_check,
                const_str_plain_isposinf,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_isposinf );
        }

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isposinf, tmp_assign_source_21 );
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_functools );

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

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_partial );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_overrides );

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

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array_function_dispatch );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6e6659be28864e39bad7cab4409b7e16 );
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 20;
        tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_function_dispatch, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = const_str_digest_6a797a370830505dc73095dcc7cdf3f1;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__typecodes_by_elsize, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_defaults_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 27;
        tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_plain_numpy_tuple, 0 ) );

        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = const_tuple_str_plain_GDFgdf_str_plain_d_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_args_element_name_1 = MAKE_FUNCTION_numpy$lib$type_check$$$function_1_mintypecode( tmp_defaults_1 );



        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_mintypecode, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_25 = MAKE_FUNCTION_numpy$lib$type_check$$$function_2__asfarray_dispatcher( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__asfarray_dispatcher, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_6;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__asfarray_dispatcher );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__asfarray_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_7 );
        tmp_args_element_name_2 = tmp_mvar_value_7;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_called_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_8;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_float_ );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_2 );
        tmp_args_element_name_3 = MAKE_FUNCTION_numpy$lib$type_check$$$function_3_asfarray( tmp_defaults_3 );



        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asfarray, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_numpy$lib$type_check$$$function_4__real_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__real_dispatcher, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_9;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__real_dispatcher );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__real_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_10 );
        tmp_args_element_name_4 = tmp_mvar_value_10;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_called_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = MAKE_FUNCTION_numpy$lib$type_check$$$function_5_real(  );



        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_real, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_numpy$lib$type_check$$$function_6__imag_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__imag_dispatcher, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_11;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__imag_dispatcher );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__imag_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_12 );
        tmp_args_element_name_6 = tmp_mvar_value_12;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = MAKE_FUNCTION_numpy$lib$type_check$$$function_7_imag(  );



        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_imag, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_numpy$lib$type_check$$$function_8__is_type_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__is_type_dispatcher, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_13;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__is_type_dispatcher );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__is_type_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_14 );
        tmp_args_element_name_8 = tmp_mvar_value_14;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_called_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = MAKE_FUNCTION_numpy$lib$type_check$$$function_9_iscomplex(  );



        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_iscomplex, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_12;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_15;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__is_type_dispatcher );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__is_type_dispatcher );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_is_type_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_10 = tmp_mvar_value_16;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_called_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = MAKE_FUNCTION_numpy$lib$type_check$$$function_10_isreal(  );



        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isreal, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 282;

            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_17;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__is_type_dispatcher );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__is_type_dispatcher );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_is_type_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 282;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_12 = tmp_mvar_value_18;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_called_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = MAKE_FUNCTION_numpy$lib$type_check$$$function_11_iscomplexobj(  );



        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_iscomplexobj, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_16;
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 323;

            goto frame_exception_exit_1;
        }

        tmp_called_name_17 = tmp_mvar_value_19;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__is_type_dispatcher );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__is_type_dispatcher );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_is_type_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 323;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_14 = tmp_mvar_value_20;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_called_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        if ( tmp_called_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_15 = MAKE_FUNCTION_numpy$lib$type_check$$$function_12_isrealobj(  );



        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_15 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isrealobj, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_numpy$lib$type_check$$$function_13__getmaxmin(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__getmaxmin, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_37 = MAKE_FUNCTION_numpy$lib$type_check$$$function_14__nan_to_num_dispatcher( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nan_to_num_dispatcher, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_18;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_defaults_5;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 370;

            goto frame_exception_exit_1;
        }

        tmp_called_name_19 = tmp_mvar_value_21;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nan_to_num_dispatcher );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nan_to_num_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_22 );
        tmp_args_element_name_16 = tmp_mvar_value_22;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 370;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_called_name_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        if ( tmp_called_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_defaults_5 = const_tuple_true_float_0_0_none_none_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_args_element_name_17 = MAKE_FUNCTION_numpy$lib$type_check$$$function_15_nan_to_num( tmp_defaults_5 );



        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 370;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_nan_to_num, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_assign_source_39 = MAKE_FUNCTION_numpy$lib$type_check$$$function_16__real_if_close_dispatcher( tmp_defaults_6 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__real_if_close_dispatcher, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_20;
        PyObject *tmp_called_name_21;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_defaults_7;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 487;

            goto frame_exception_exit_1;
        }

        tmp_called_name_21 = tmp_mvar_value_23;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__real_if_close_dispatcher );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__real_if_close_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_24 );
        tmp_args_element_name_18 = tmp_mvar_value_24;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 487;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_called_name_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        if ( tmp_called_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        tmp_defaults_7 = const_tuple_int_pos_100_tuple;
        Py_INCREF( tmp_defaults_7 );
        tmp_args_element_name_19 = MAKE_FUNCTION_numpy$lib$type_check$$$function_17_real_if_close( tmp_defaults_7 );



        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 487;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
        }

        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_args_element_name_19 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_real_if_close, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_FUNCTION_numpy$lib$type_check$$$function_18__asscalar_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__asscalar_dispatcher, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_22;
        PyObject *tmp_called_name_23;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_21;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 550;

            goto frame_exception_exit_1;
        }

        tmp_called_name_23 = tmp_mvar_value_25;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__asscalar_dispatcher );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__asscalar_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_26 );
        tmp_args_element_name_20 = tmp_mvar_value_26;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 550;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_called_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
        }

        if ( tmp_called_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 550;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_21 = MAKE_FUNCTION_numpy$lib$type_check$$$function_19_asscalar(  );



        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 550;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
        }

        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_args_element_name_21 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 550;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asscalar, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = PyDict_Copy( const_dict_6641313163263c73f169be4f088d77be );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__namefromtype, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_name_24;
        PyObject *tmp_called_name_25;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_element_name_22;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 603;

            goto frame_exception_exit_1;
        }

        tmp_called_name_25 = tmp_mvar_value_27;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 603;
        tmp_called_name_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, &PyTuple_GET_ITEM( const_tuple_str_plain_numpy_tuple, 0 ) );

        if ( tmp_called_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 603;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_22 = MAKE_FUNCTION_numpy$lib$type_check$$$function_20_typename(  );



        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 603;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
        }

        Py_DECREF( tmp_called_name_24 );
        Py_DECREF( tmp_args_element_name_22 );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 603;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_typename, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_list_element_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_list_element_3;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_34;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 658;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_28;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_half );
        if ( tmp_list_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 658;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = PyList_New( 4 );
        PyList_SET_ITEM( tmp_list_element_1, 0, tmp_list_element_2 );
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_29 == NULL )
        {
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 658;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_29;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_single );
        if ( tmp_list_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_list_element_1 );

            exception_lineno = 658;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_list_element_1, 1, tmp_list_element_2 );
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_30 == NULL )
        {
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 658;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_30;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_double );
        if ( tmp_list_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_list_element_1 );

            exception_lineno = 658;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_list_element_1, 2, tmp_list_element_2 );
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_31 == NULL )
        {
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 658;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_31;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_longdouble );
        if ( tmp_list_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_list_element_1 );

            exception_lineno = 658;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_list_element_1, 3, tmp_list_element_2 );
        tmp_assign_source_45 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_assign_source_45, 0, tmp_list_element_1 );
        tmp_list_element_3 = Py_None;
        tmp_list_element_1 = PyList_New( 4 );
        Py_INCREF( tmp_list_element_3 );
        PyList_SET_ITEM( tmp_list_element_1, 0, tmp_list_element_3 );
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_32 == NULL )
        {
            Py_DECREF( tmp_assign_source_45 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 659;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_32;
        tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_csingle );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_45 );
            Py_DECREF( tmp_list_element_1 );

            exception_lineno = 659;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_list_element_1, 1, tmp_list_element_3 );
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_33 == NULL )
        {
            Py_DECREF( tmp_assign_source_45 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 659;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_33;
        tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_cdouble );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_45 );
            Py_DECREF( tmp_list_element_1 );

            exception_lineno = 659;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_list_element_1, 2, tmp_list_element_3 );
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_34 == NULL )
        {
            Py_DECREF( tmp_assign_source_45 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 659;

            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_34;
        tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_clongdouble );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_45 );
            Py_DECREF( tmp_list_element_1 );

            exception_lineno = 659;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_list_element_1, 3, tmp_list_element_3 );
        PyList_SET_ITEM( tmp_assign_source_45, 1, tmp_list_element_1 );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_type, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_36;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_37;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_38;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_39;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_40;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_41;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_35 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 660;

            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_35;
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_half );
        if ( tmp_dict_key_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 660;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = const_int_0;
        tmp_assign_source_46 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_assign_source_46, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_key_1 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_46 );

            exception_lineno = 660;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_36 == NULL )
        {
            Py_DECREF( tmp_assign_source_46 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 661;

            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_36;
        tmp_dict_key_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_single );
        if ( tmp_dict_key_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_46 );

            exception_lineno = 661;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = const_int_pos_1;
        tmp_res = PyDict_SetItem( tmp_assign_source_46, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_key_2 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_46 );

            exception_lineno = 660;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_37 == NULL ))
        {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_37 == NULL )
        {
            Py_DECREF( tmp_assign_source_46 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 662;

            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_37;
        tmp_dict_key_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_double );
        if ( tmp_dict_key_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_46 );

            exception_lineno = 662;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = const_int_pos_2;
        tmp_res = PyDict_SetItem( tmp_assign_source_46, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_key_3 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_46 );

            exception_lineno = 660;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_38 == NULL ))
        {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_38 == NULL )
        {
            Py_DECREF( tmp_assign_source_46 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 663;

            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_38;
        tmp_dict_key_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_longdouble );
        if ( tmp_dict_key_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_46 );

            exception_lineno = 663;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = const_int_pos_3;
        tmp_res = PyDict_SetItem( tmp_assign_source_46, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_key_4 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_46 );

            exception_lineno = 660;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_39 == NULL )
        {
            Py_DECREF( tmp_assign_source_46 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 664;

            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_39;
        tmp_dict_key_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_csingle );
        if ( tmp_dict_key_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_46 );

            exception_lineno = 664;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = const_int_pos_1;
        tmp_res = PyDict_SetItem( tmp_assign_source_46, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_key_5 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_46 );

            exception_lineno = 660;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_40 == NULL ))
        {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_40 == NULL )
        {
            Py_DECREF( tmp_assign_source_46 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 665;

            goto frame_exception_exit_1;
        }

        tmp_source_name_16 = tmp_mvar_value_40;
        tmp_dict_key_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_cdouble );
        if ( tmp_dict_key_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_46 );

            exception_lineno = 665;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = const_int_pos_2;
        tmp_res = PyDict_SetItem( tmp_assign_source_46, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_key_6 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_46 );

            exception_lineno = 660;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_41 == NULL ))
        {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_41 == NULL )
        {
            Py_DECREF( tmp_assign_source_46 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 666;

            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_41;
        tmp_dict_key_7 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_clongdouble );
        if ( tmp_dict_key_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_46 );

            exception_lineno = 666;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_7 = const_int_pos_3;
        tmp_res = PyDict_SetItem( tmp_assign_source_46, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_key_7 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_46 );

            exception_lineno = 660;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_precision, tmp_assign_source_46 );
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_FUNCTION_numpy$lib$type_check$$$function_21__common_type_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__common_type_dispatcher, tmp_assign_source_47 );
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_26;
        PyObject *tmp_called_name_27;
        PyObject *tmp_mvar_value_42;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_mvar_value_43;
        PyObject *tmp_args_element_name_24;
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_42 == NULL ))
        {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_42 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 673;

            goto frame_exception_exit_1;
        }

        tmp_called_name_27 = tmp_mvar_value_42;
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__common_type_dispatcher );

        if (unlikely( tmp_mvar_value_43 == NULL ))
        {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__common_type_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_43 );
        tmp_args_element_name_23 = tmp_mvar_value_43;
        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 673;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_called_name_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
        }

        if ( tmp_called_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 673;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_24 = MAKE_FUNCTION_numpy$lib$type_check$$$function_22_common_type(  );



        frame_2538fc9526d8e156be106fe5b812e5ff->m_frame.f_lineno = 673;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
        }

        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 673;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_common_type, tmp_assign_source_48 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2538fc9526d8e156be106fe5b812e5ff );
#endif
    popFrameStack();

    assertFrameObject( frame_2538fc9526d8e156be106fe5b812e5ff );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2538fc9526d8e156be106fe5b812e5ff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2538fc9526d8e156be106fe5b812e5ff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2538fc9526d8e156be106fe5b812e5ff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2538fc9526d8e156be106fe5b812e5ff, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$lib$type_check );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
