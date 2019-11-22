/* Generated code for Python module 'scipy.sparse.sputils'
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

/* The "_module_scipy$sparse$sputils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$sputils;
PyDictObject *moduledict_scipy$sparse$sputils;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain_int32;
extern PyObject *const_str_plain_check_contents;
extern PyObject *const_str_plain_new_size;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_catch_warnings;
extern PyObject *const_str_plain_array;
static PyObject *const_str_digest_75321477487d0e0e2729069304ce544b;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_itemsize;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_tuple_str_plain_args_str_plain_t_tuple;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_arg;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain___exit__;
static PyObject *const_str_digest_23ca6266112cf1254a59ac0f84cd4036;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_double;
static PyObject *const_str_digest_bb90606f61407051aad3e8d5eead8a32;
static PyObject *const_str_digest_700d988edb15325db824235698de3f91;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_default;
static PyObject *const_tuple_str_digest_444b3f70e2b6c6c8dd9e7f2aa1afff1b_tuple;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_upcast_scalar;
static PyObject *const_str_digest_d13ed9eab59afe1e8851087bbb3dcd3d;
extern PyObject *const_str_plain_single;
extern PyObject *const_str_plain_ignore;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_newdtype;
extern PyObject *const_str_plain_size;
static PyObject *const_str_digest_1a1c38eeefdc51597d030d58facbc619;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_specified;
static PyObject *const_str_plain_int32max;
extern PyObject *const_str_plain_longdouble;
extern PyObject *const_str_plain_astype;
static PyObject *const_str_digest_ca63a74f042191b990c135d3186a60e5;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_bmat;
extern PyObject *const_str_plain_int_;
extern PyObject *const_str_plain_newshape;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_newbyteorder;
static PyObject *const_str_digest_5c8ca8ae0494d22e5ddf1c16e3a7b36c;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_current_size;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_dict_6ccf1996a79e7bc95b345c0d39aef510;
extern PyObject *const_str_plain_csingle;
extern PyObject *const_str_plain_uintc;
extern PyObject *const_str_plain_issequence;
static PyObject *const_str_plain_negative_indexes;
static PyObject *const_str_plain_shape_iter;
static PyObject *const_str_digest_ecc13e648ad01d5b8cb01ee6773bde3b;
static PyObject *const_tuple_str_plain_axis_str_plain_axis_type_tuple;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_validateaxis;
extern PyObject *const_str_plain_ulonglong;
extern PyObject *const_str_plain_upcast;
static PyObject *const_tuple_str_plain_args_str_plain_t_str_plain_upcast_tuple;
extern PyObject *const_str_plain_get_index_dtype;
extern PyObject *const_str_plain_t;
extern PyObject *const_int_neg_2;
extern PyObject *const_str_plain_filterwarnings;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_int;
static PyObject *const_str_plain_err_shape;
static PyObject *const_tuple_str_plain_arr_str_plain_maxval_str_plain_minval_tuple;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_str_plain_isscalarlike;
extern PyObject *const_str_plain_check_reshape_kwargs;
extern PyObject *const_str_plain_get_sum_dtype;
extern PyObject *const_str_digest_310bac4e5484d58e9a35019eb5bebddf;
static PyObject *const_str_digest_225c50c482cc48465a38ad9e277fbd0b;
extern PyObject *const_str_plain_asmatrix;
extern PyObject *const_str_plain_keys;
static PyObject *const_str_plain_supported_dtypes;
extern PyObject *const_str_plain_isdense;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_str_plain_upcast_char;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_arr;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_matrix;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple;
extern PyObject *const_str_plain_prod;
static PyObject *const_str_digest_4e80d523d5bc1b4c708ade3f48a6e696;
static PyObject *const_tuple_str_plain_copy_false_tuple;
extern PyObject *const_str_plain_name;
static PyObject *const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple;
extern PyObject *const_str_plain_int64;
extern PyObject *const_str_plain_object_;
static PyObject *const_str_digest_55742bc8be64912e9f2d9c44983513de;
extern PyObject *const_str_plain_minval;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_find_common_type;
static PyObject *const_str_digest_463da0b5529fa93bf58248718119d95b;
extern PyObject *const_str_plain_intc;
static PyObject *const_str_digest_4c918105a153fc99f794f526fb57f1fc;
extern PyObject *const_str_plain_integer;
extern PyObject *const_str_plain_int8;
static PyObject *const_str_plain_unspecified;
extern PyObject *const_str_plain_native;
static PyObject *const_str_digest_27f6b5bd32404089ad0cb4a5145e3291;
static PyObject *const_str_digest_ad9aa71b76a96150aa308f60b18214ef;
static PyObject *const_str_plain_current_shape;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_skip;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_uint;
static PyObject *const_str_plain_nonneg;
extern PyObject *const_str_plain_check_shape;
static PyObject *const_list_94454c6cbe82d8f7cc716cbc93da97e8_list;
extern PyObject *const_str_plain_arrays;
extern PyObject *const_str_plain_pop;
extern PyObject *const_int_0;
extern PyObject *const_tuple_int_pos_1_int_pos_1_tuple;
static PyObject *const_str_digest_fb49046a3a23b128421505e73aa5de12;
static PyObject *const_tuple_324497c5d53eca8fa3139fc7ffb9d4b3_tuple;
extern PyObject *const_str_plain_record;
extern PyObject *const_str_digest_b154d9a32d645430293e9aa4df65c702;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arg_tuple;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_tuple_empty_none_false_tuple;
extern PyObject *const_tuple_str_plain_dtype_tuple;
extern PyObject *const_str_plain_downcast_intp_index;
extern PyObject *const_str_plain_longlong;
extern PyObject *const_str_plain_new_shape;
static PyObject *const_str_plain_ismatrix;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_maxval;
extern PyObject *const_tuple_type_list_type_tuple_tuple;
static PyObject *const_str_digest_8612e73c36b53222b2e9d10813deecd0;
extern PyObject *const_tuple_str_plain_order_str_plain_C_tuple;
extern PyObject *const_str_plain_typeDict;
extern PyObject *const_str_plain_iinfo;
static PyObject *const_str_digest_50561ca9c0061d5d53ac674468841db2;
static PyObject *const_tuple_str_plain_x_str_plain_loose_int_tuple;
extern PyObject *const_str_plain_intp;
static PyObject *const_str_digest_444b3f70e2b6c6c8dd9e7f2aa1afff1b;
extern PyObject *const_tuple_type_TypeError_type_ValueError_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_tuple_str_plain_native_tuple;
extern PyObject *const_str_plain_ushort;
extern PyObject *const_dict_aae7649b9175b1ed5738500d56e46831;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_abf027c9ce998ed72e7bfe3d1c90d789;
static PyObject *const_tuple_str_plain_i_str_plain_x_tuple;
extern PyObject *const_str_plain_getdtype;
extern PyObject *const_str_plain_kind;
extern PyObject *const_tuple_str_plain_A_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_to_native;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_axis;
extern PyObject *const_list_int_0_list;
extern PyObject *const_str_plain_M;
extern PyObject *const_tuple_str_plain_t_tuple;
static PyObject *const_str_digest_93449dcfdf0bac85fc9e15149437426f;
extern PyObject *const_str_plain_remainder;
static PyObject *const_str_digest_f61b3caca5b0568d507100fbe03b8c41;
static PyObject *const_tuple_str_plain_ignore_str_digest_830e68f2d7752b1bf5d5136be0dc4157_tuple;
static PyObject *const_str_plain_axis_type;
static PyObject *const_str_digest_517a92fde430a2642ef14b40ee4e00f4;
extern PyObject *const_str_plain_uint8;
extern PyObject *const_tuple_list_int_0_list_tuple;
extern PyObject *const_str_plain_short;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_digest_5a70f207981e1043b6e3d35f9f70b27d;
extern PyObject *const_str_plain_isintlike;
static PyObject *const_str_digest_9ce560d9d30b15f6f0d58730bf67ec75;
static PyObject *const_str_digest_c98ea283ad808c1618a73d2401927f1e;
extern PyObject *const_str_plain_clongdouble;
static PyObject *const_str_digest_830e68f2d7752b1bf5d5136be0dc4157;
extern PyObject *const_str_plain_scalar;
static PyObject *const_str_digest_603b086b677424a0199f1f7ad3d99660;
static PyObject *const_str_plain_int32min;
static PyObject *const_tuple_str_plain_x_str_plain_nonneg_str_plain_M_str_plain_N_tuple;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_operator;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_isshape;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_plain_kwargs_str_plain_order_str_plain_copy_tuple;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_fc028243e2d5fb6bb8e7e0dd2135785e;
static PyObject *const_str_digest_48c813afdf7b38992257e860c025a82f;
static PyObject *const_str_plain__upcast_memo;
extern PyObject *const_str_plain_format;
static PyObject *const_tuple_str_plain_dtype_str_plain_scalar_tuple;
extern PyObject *const_str_plain_cdouble;
extern PyObject *const_str_plain_isscalar;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_tuple_8184260cc043e8f5c8fb2254b02a4e99_tuple;
extern PyObject *const_str_plain_can_cast;
static PyObject *const_str_plain_loose_int;
extern PyObject *const_str_plain_order;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_75321477487d0e0e2729069304ce544b = UNSTREAM_STRING_ASCII( &constant_bin[ 5536228 ], 106, 0 );
    const_tuple_str_plain_args_str_plain_t_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_t_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_t_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_digest_23ca6266112cf1254a59ac0f84cd4036 = UNSTREAM_STRING_ASCII( &constant_bin[ 5536334 ], 48, 0 );
    const_str_digest_bb90606f61407051aad3e8d5eead8a32 = UNSTREAM_STRING_ASCII( &constant_bin[ 5536382 ], 411, 0 );
    const_str_digest_700d988edb15325db824235698de3f91 = UNSTREAM_STRING_ASCII( &constant_bin[ 5536793 ], 38, 0 );
    const_tuple_str_digest_444b3f70e2b6c6c8dd9e7f2aa1afff1b_tuple = PyTuple_New( 1 );
    const_str_digest_444b3f70e2b6c6c8dd9e7f2aa1afff1b = UNSTREAM_STRING_ASCII( &constant_bin[ 5536831 ], 48, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_444b3f70e2b6c6c8dd9e7f2aa1afff1b_tuple, 0, const_str_digest_444b3f70e2b6c6c8dd9e7f2aa1afff1b ); Py_INCREF( const_str_digest_444b3f70e2b6c6c8dd9e7f2aa1afff1b );
    const_str_digest_d13ed9eab59afe1e8851087bbb3dcd3d = UNSTREAM_STRING_ASCII( &constant_bin[ 3565924 ], 30, 0 );
    const_str_digest_1a1c38eeefdc51597d030d58facbc619 = UNSTREAM_STRING_ASCII( &constant_bin[ 5536879 ], 35, 0 );
    const_str_plain_specified = UNSTREAM_STRING_ASCII( &constant_bin[ 10028 ], 9, 1 );
    const_str_plain_int32max = UNSTREAM_STRING_ASCII( &constant_bin[ 5536914 ], 8, 1 );
    const_str_digest_ca63a74f042191b990c135d3186a60e5 = UNSTREAM_STRING_ASCII( &constant_bin[ 5536922 ], 44, 0 );
    const_str_digest_5c8ca8ae0494d22e5ddf1c16e3a7b36c = UNSTREAM_STRING_ASCII( &constant_bin[ 5536966 ], 29, 0 );
    const_str_plain_current_size = UNSTREAM_STRING_ASCII( &constant_bin[ 5536995 ], 12, 1 );
    const_str_plain_negative_indexes = UNSTREAM_STRING_ASCII( &constant_bin[ 5537007 ], 16, 1 );
    const_str_plain_shape_iter = UNSTREAM_STRING_ASCII( &constant_bin[ 5537023 ], 10, 1 );
    const_str_digest_ecc13e648ad01d5b8cb01ee6773bde3b = UNSTREAM_STRING_ASCII( &constant_bin[ 5537033 ], 44, 0 );
    const_tuple_str_plain_axis_str_plain_axis_type_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_axis_str_plain_axis_type_tuple, 0, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_str_plain_axis_type = UNSTREAM_STRING_ASCII( &constant_bin[ 5537077 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_axis_str_plain_axis_type_tuple, 1, const_str_plain_axis_type ); Py_INCREF( const_str_plain_axis_type );
    const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list = PyList_New( 15 );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 0, const_str_plain_bool ); Py_INCREF( const_str_plain_bool );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 1, const_str_plain_int8 ); Py_INCREF( const_str_plain_int8 );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 2, const_str_plain_uint8 ); Py_INCREF( const_str_plain_uint8 );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 3, const_str_plain_short ); Py_INCREF( const_str_plain_short );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 4, const_str_plain_ushort ); Py_INCREF( const_str_plain_ushort );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 5, const_str_plain_intc ); Py_INCREF( const_str_plain_intc );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 6, const_str_plain_uintc ); Py_INCREF( const_str_plain_uintc );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 7, const_str_plain_longlong ); Py_INCREF( const_str_plain_longlong );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 8, const_str_plain_ulonglong ); Py_INCREF( const_str_plain_ulonglong );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 9, const_str_plain_single ); Py_INCREF( const_str_plain_single );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 10, const_str_plain_double ); Py_INCREF( const_str_plain_double );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 11, const_str_plain_longdouble ); Py_INCREF( const_str_plain_longdouble );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 12, const_str_plain_csingle ); Py_INCREF( const_str_plain_csingle );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 13, const_str_plain_cdouble ); Py_INCREF( const_str_plain_cdouble );
    PyList_SET_ITEM( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list, 14, const_str_plain_clongdouble ); Py_INCREF( const_str_plain_clongdouble );
    const_tuple_str_plain_args_str_plain_t_str_plain_upcast_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_t_str_plain_upcast_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_t_str_plain_upcast_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_t_str_plain_upcast_tuple, 2, const_str_plain_upcast ); Py_INCREF( const_str_plain_upcast );
    const_str_plain_err_shape = UNSTREAM_STRING_ASCII( &constant_bin[ 5537086 ], 9, 1 );
    const_tuple_str_plain_arr_str_plain_maxval_str_plain_minval_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_maxval_str_plain_minval_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_maxval_str_plain_minval_tuple, 1, const_str_plain_maxval ); Py_INCREF( const_str_plain_maxval );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_maxval_str_plain_minval_tuple, 2, const_str_plain_minval ); Py_INCREF( const_str_plain_minval );
    const_str_digest_225c50c482cc48465a38ad9e277fbd0b = UNSTREAM_STRING_ASCII( &constant_bin[ 5537095 ], 158, 0 );
    const_str_plain_supported_dtypes = UNSTREAM_STRING_ASCII( &constant_bin[ 5537253 ], 16, 1 );
    const_str_digest_4e80d523d5bc1b4c708ade3f48a6e696 = UNSTREAM_STRING_ASCII( &constant_bin[ 5537269 ], 550, 0 );
    const_tuple_str_plain_copy_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_copy_false_tuple, 0, const_str_plain_copy ); Py_INCREF( const_str_plain_copy );
    PyTuple_SET_ITEM( const_tuple_str_plain_copy_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    const_str_plain_current_shape = UNSTREAM_STRING_ASCII( &constant_bin[ 5537819 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple, 1, const_str_plain_current_shape ); Py_INCREF( const_str_plain_current_shape );
    PyTuple_SET_ITEM( const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple, 2, const_str_plain_shape_iter ); Py_INCREF( const_str_plain_shape_iter );
    PyTuple_SET_ITEM( const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple, 3, const_str_plain_new_shape ); Py_INCREF( const_str_plain_new_shape );
    PyTuple_SET_ITEM( const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple, 4, const_str_plain_current_size ); Py_INCREF( const_str_plain_current_size );
    PyTuple_SET_ITEM( const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple, 5, const_str_plain_negative_indexes ); Py_INCREF( const_str_plain_negative_indexes );
    PyTuple_SET_ITEM( const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple, 6, const_str_plain_new_size ); Py_INCREF( const_str_plain_new_size );
    PyTuple_SET_ITEM( const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple, 7, const_str_plain_skip ); Py_INCREF( const_str_plain_skip );
    PyTuple_SET_ITEM( const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple, 8, const_str_plain_specified ); Py_INCREF( const_str_plain_specified );
    const_str_plain_unspecified = UNSTREAM_STRING_ASCII( &constant_bin[ 445077 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple, 9, const_str_plain_unspecified ); Py_INCREF( const_str_plain_unspecified );
    PyTuple_SET_ITEM( const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple, 10, const_str_plain_remainder ); Py_INCREF( const_str_plain_remainder );
    PyTuple_SET_ITEM( const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple, 11, const_str_plain_err_shape ); Py_INCREF( const_str_plain_err_shape );
    const_str_digest_55742bc8be64912e9f2d9c44983513de = UNSTREAM_STRING_ASCII( &constant_bin[ 5537832 ], 51, 0 );
    const_str_digest_463da0b5529fa93bf58248718119d95b = UNSTREAM_STRING_ASCII( &constant_bin[ 5537883 ], 23, 0 );
    const_str_digest_4c918105a153fc99f794f526fb57f1fc = UNSTREAM_STRING_ASCII( &constant_bin[ 5537906 ], 122, 0 );
    const_str_digest_27f6b5bd32404089ad0cb4a5145e3291 = UNSTREAM_STRING_ASCII( &constant_bin[ 5538028 ], 45, 0 );
    const_str_digest_ad9aa71b76a96150aa308f60b18214ef = UNSTREAM_STRING_ASCII( &constant_bin[ 5538073 ], 319, 0 );
    const_str_plain_nonneg = UNSTREAM_STRING_ASCII( &constant_bin[ 934758 ], 6, 1 );
    const_list_94454c6cbe82d8f7cc716cbc93da97e8_list = PyList_New( 9 );
    PyList_SET_ITEM( const_list_94454c6cbe82d8f7cc716cbc93da97e8_list, 0, const_str_plain_upcast ); Py_INCREF( const_str_plain_upcast );
    PyList_SET_ITEM( const_list_94454c6cbe82d8f7cc716cbc93da97e8_list, 1, const_str_plain_getdtype ); Py_INCREF( const_str_plain_getdtype );
    PyList_SET_ITEM( const_list_94454c6cbe82d8f7cc716cbc93da97e8_list, 2, const_str_plain_isscalarlike ); Py_INCREF( const_str_plain_isscalarlike );
    PyList_SET_ITEM( const_list_94454c6cbe82d8f7cc716cbc93da97e8_list, 3, const_str_plain_isintlike ); Py_INCREF( const_str_plain_isintlike );
    PyList_SET_ITEM( const_list_94454c6cbe82d8f7cc716cbc93da97e8_list, 4, const_str_plain_isshape ); Py_INCREF( const_str_plain_isshape );
    PyList_SET_ITEM( const_list_94454c6cbe82d8f7cc716cbc93da97e8_list, 5, const_str_plain_issequence ); Py_INCREF( const_str_plain_issequence );
    PyList_SET_ITEM( const_list_94454c6cbe82d8f7cc716cbc93da97e8_list, 6, const_str_plain_isdense ); Py_INCREF( const_str_plain_isdense );
    const_str_plain_ismatrix = UNSTREAM_STRING_ASCII( &constant_bin[ 5538392 ], 8, 1 );
    PyList_SET_ITEM( const_list_94454c6cbe82d8f7cc716cbc93da97e8_list, 7, const_str_plain_ismatrix ); Py_INCREF( const_str_plain_ismatrix );
    PyList_SET_ITEM( const_list_94454c6cbe82d8f7cc716cbc93da97e8_list, 8, const_str_plain_get_sum_dtype ); Py_INCREF( const_str_plain_get_sum_dtype );
    const_str_digest_fb49046a3a23b128421505e73aa5de12 = UNSTREAM_STRING_ASCII( &constant_bin[ 5538400 ], 29, 0 );
    const_tuple_324497c5d53eca8fa3139fc7ffb9d4b3_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_324497c5d53eca8fa3139fc7ffb9d4b3_tuple, 0, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_324497c5d53eca8fa3139fc7ffb9d4b3_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_324497c5d53eca8fa3139fc7ffb9d4b3_tuple, 2, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    PyTuple_SET_ITEM( const_tuple_324497c5d53eca8fa3139fc7ffb9d4b3_tuple, 3, const_str_plain_newdtype ); Py_INCREF( const_str_plain_newdtype );
    const_tuple_tuple_empty_none_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_none_false_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_none_false_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_none_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_str_digest_8612e73c36b53222b2e9d10813deecd0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5538429 ], 56, 0 );
    const_str_digest_50561ca9c0061d5d53ac674468841db2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5538485 ], 115, 0 );
    const_tuple_str_plain_x_str_plain_loose_int_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_loose_int_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_loose_int = UNSTREAM_STRING_ASCII( &constant_bin[ 5538600 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_loose_int_tuple, 1, const_str_plain_loose_int ); Py_INCREF( const_str_plain_loose_int );
    const_tuple_str_plain_native_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_native_tuple, 0, const_str_plain_native ); Py_INCREF( const_str_plain_native );
    const_str_digest_abf027c9ce998ed72e7bfe3d1c90d789 = UNSTREAM_STRING_ASCII( &constant_bin[ 5538609 ], 57, 0 );
    const_tuple_str_plain_i_str_plain_x_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_x_tuple, 0, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_x_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_digest_93449dcfdf0bac85fc9e15149437426f = UNSTREAM_STRING_ASCII( &constant_bin[ 5538666 ], 108, 0 );
    const_str_digest_f61b3caca5b0568d507100fbe03b8c41 = UNSTREAM_STRING_ASCII( &constant_bin[ 5538774 ], 339, 0 );
    const_tuple_str_plain_ignore_str_digest_830e68f2d7752b1bf5d5136be0dc4157_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ignore_str_digest_830e68f2d7752b1bf5d5136be0dc4157_tuple, 0, const_str_plain_ignore ); Py_INCREF( const_str_plain_ignore );
    const_str_digest_830e68f2d7752b1bf5d5136be0dc4157 = UNSTREAM_STRING_ASCII( &constant_bin[ 5539113 ], 50, 0 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ignore_str_digest_830e68f2d7752b1bf5d5136be0dc4157_tuple, 1, const_str_digest_830e68f2d7752b1bf5d5136be0dc4157 ); Py_INCREF( const_str_digest_830e68f2d7752b1bf5d5136be0dc4157 );
    const_str_digest_517a92fde430a2642ef14b40ee4e00f4 = UNSTREAM_STRING_ASCII( &constant_bin[ 5539163 ], 32, 0 );
    const_str_digest_5a70f207981e1043b6e3d35f9f70b27d = UNSTREAM_STRING_ASCII( &constant_bin[ 5539195 ], 35, 0 );
    const_str_digest_9ce560d9d30b15f6f0d58730bf67ec75 = UNSTREAM_STRING_ASCII( &constant_bin[ 5539230 ], 47, 0 );
    const_str_digest_c98ea283ad808c1618a73d2401927f1e = UNSTREAM_STRING_ASCII( &constant_bin[ 5539277 ], 56, 0 );
    const_str_digest_603b086b677424a0199f1f7ad3d99660 = UNSTREAM_STRING_ASCII( &constant_bin[ 5539333 ], 37, 0 );
    const_str_plain_int32min = UNSTREAM_STRING_ASCII( &constant_bin[ 5539370 ], 8, 1 );
    const_tuple_str_plain_x_str_plain_nonneg_str_plain_M_str_plain_N_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_nonneg_str_plain_M_str_plain_N_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_nonneg_str_plain_M_str_plain_N_tuple, 1, const_str_plain_nonneg ); Py_INCREF( const_str_plain_nonneg );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_nonneg_str_plain_M_str_plain_N_tuple, 2, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_nonneg_str_plain_M_str_plain_N_tuple, 3, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    const_tuple_str_plain_kwargs_str_plain_order_str_plain_copy_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_kwargs_str_plain_order_str_plain_copy_tuple, 0, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_str_plain_kwargs_str_plain_order_str_plain_copy_tuple, 1, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_str_plain_kwargs_str_plain_order_str_plain_copy_tuple, 2, const_str_plain_copy ); Py_INCREF( const_str_plain_copy );
    const_str_digest_fc028243e2d5fb6bb8e7e0dd2135785e = UNSTREAM_STRING_ASCII( &constant_bin[ 5539378 ], 30, 0 );
    const_str_digest_48c813afdf7b38992257e860c025a82f = UNSTREAM_STRING_ASCII( &constant_bin[ 5539408 ], 96, 0 );
    const_str_plain__upcast_memo = UNSTREAM_STRING_ASCII( &constant_bin[ 5539504 ], 12, 1 );
    const_tuple_str_plain_dtype_str_plain_scalar_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dtype_str_plain_scalar_tuple, 0, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_str_plain_dtype_str_plain_scalar_tuple, 1, const_str_plain_scalar ); Py_INCREF( const_str_plain_scalar );
    const_tuple_8184260cc043e8f5c8fb2254b02a4e99_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_8184260cc043e8f5c8fb2254b02a4e99_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    PyTuple_SET_ITEM( const_tuple_8184260cc043e8f5c8fb2254b02a4e99_tuple, 1, const_str_plain_maxval ); Py_INCREF( const_str_plain_maxval );
    PyTuple_SET_ITEM( const_tuple_8184260cc043e8f5c8fb2254b02a4e99_tuple, 2, const_str_plain_check_contents ); Py_INCREF( const_str_plain_check_contents );
    PyTuple_SET_ITEM( const_tuple_8184260cc043e8f5c8fb2254b02a4e99_tuple, 3, const_str_plain_int32min ); Py_INCREF( const_str_plain_int32min );
    PyTuple_SET_ITEM( const_tuple_8184260cc043e8f5c8fb2254b02a4e99_tuple, 4, const_str_plain_int32max ); Py_INCREF( const_str_plain_int32max );
    PyTuple_SET_ITEM( const_tuple_8184260cc043e8f5c8fb2254b02a4e99_tuple, 5, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_8184260cc043e8f5c8fb2254b02a4e99_tuple, 6, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_8184260cc043e8f5c8fb2254b02a4e99_tuple, 7, const_str_plain_minval ); Py_INCREF( const_str_plain_minval );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$sparse$sputils( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8bc6439af4fdda7bc33f2d636b0d9c9e;
static PyCodeObject *codeobj_85fb82bc5d10e712978e936a3a62ab34;
static PyCodeObject *codeobj_0efc4cbf3df2bdd8bc1f52ee432be6d3;
static PyCodeObject *codeobj_24ca064a56e263c82cc462663d46873a;
static PyCodeObject *codeobj_3030603a90fc4d78b5dcfc6b56378020;
static PyCodeObject *codeobj_01ca340a36e42cb2a2ee14fee1e9a2d0;
static PyCodeObject *codeobj_68e95c7cdd48a814cabe8fefca85b334;
static PyCodeObject *codeobj_fcab81a8ca789dc26d17b7b0469aa7fd;
static PyCodeObject *codeobj_2a7dbd12d36a9938ef53dc18fba59b7a;
static PyCodeObject *codeobj_697bdd098fb74dfbba292888d518c129;
static PyCodeObject *codeobj_e3337b33170f0892e4603771bde36e02;
static PyCodeObject *codeobj_7b324050016ceaa7e83502dbd5050c3f;
static PyCodeObject *codeobj_007facfcd7c2abb80f919ba00b5820fc;
static PyCodeObject *codeobj_7ae266d7101a881934bd80a3334089ea;
static PyCodeObject *codeobj_c26188fe2ae85ef1fbcd31dcfe0d9a5a;
static PyCodeObject *codeobj_6f50ca83aed62a3c9822f5990acf5505;
static PyCodeObject *codeobj_e550827aa4f9c510a0d090d7e1d49afd;
static PyCodeObject *codeobj_5a17d896f5e190852e08d41634c60eb2;
static PyCodeObject *codeobj_5b2d0a62e278ba14a901f426c66362c4;
static PyCodeObject *codeobj_81a87b8e86518cc5f25368624c6dc607;
static PyCodeObject *codeobj_3b4ad2b7f1c9c5c6073b5c80fdaef8c0;
static PyCodeObject *codeobj_eb154f84a54f9b36d8a223d064ec48f8;
static PyCodeObject *codeobj_01c58817fe566496de7e4e4b19383faa;
static PyCodeObject *codeobj_f216a71d6308a2a509ab4377986927ea;
static PyCodeObject *codeobj_aae53ddececf5a1e7aa61bec6adbf841;
static PyCodeObject *codeobj_105e5bfda041430774e7ab3437ec0ada;
static PyCodeObject *codeobj_95c83887c493fc1b20496fe902537642;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_463da0b5529fa93bf58248718119d95b );
    codeobj_8bc6439af4fdda7bc33f2d636b0d9c9e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 277, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arg_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_85fb82bc5d10e712978e936a3a62ab34 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 279, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arg_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0efc4cbf3df2bdd8bc1f52ee432be6d3 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 303, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_24ca064a56e263c82cc462663d46873a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 312, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arg_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3030603a90fc4d78b5dcfc6b56378020 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 16, const_tuple_str_plain_x_tuple, 1, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_01ca340a36e42cb2a2ee14fee1e9a2d0 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 292, const_tuple_str_plain_i_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_68e95c7cdd48a814cabe8fefca85b334 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_5c8ca8ae0494d22e5ddf1c16e3a7b36c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_fcab81a8ca789dc26d17b7b0469aa7fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asmatrix, 352, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_2a7dbd12d36a9938ef53dc18fba59b7a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bmat, 359, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_697bdd098fb74dfbba292888d518c129 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_reshape_kwargs, 325, const_tuple_str_plain_kwargs_str_plain_order_str_plain_copy_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e3337b33170f0892e4603771bde36e02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_shape, 266, const_tuple_713e6ec4d7ce59947768e83ed4d6621c_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7b324050016ceaa7e83502dbd5050c3f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_downcast_intp_index, 72, const_tuple_str_plain_arr_str_plain_maxval_str_plain_minval_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_007facfcd7c2abb80f919ba00b5820fc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_index_dtype, 120, const_tuple_8184260cc043e8f5c8fb2254b02a4e99_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7ae266d7101a881934bd80a3334089ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_sum_dtype, 173, const_tuple_str_plain_dtype_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c26188fe2ae85ef1fbcd31dcfe0d9a5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getdtype, 96, const_tuple_324497c5d53eca8fa3139fc7ffb9d4b3_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6f50ca83aed62a3c9822f5990acf5505 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isdense, 239, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e550827aa4f9c510a0d090d7e1d49afd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isintlike, 187, const_tuple_str_plain_x_str_plain_loose_int_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5a17d896f5e190852e08d41634c60eb2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ismatrix, 233, const_tuple_str_plain_t_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5b2d0a62e278ba14a901f426c66362c4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isscalarlike, 182, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_81a87b8e86518cc5f25368624c6dc607 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_issequence, 227, const_tuple_str_plain_t_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3b4ad2b7f1c9c5c6073b5c80fdaef8c0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isshape, 209, const_tuple_str_plain_x_str_plain_nonneg_str_plain_M_str_plain_N_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eb154f84a54f9b36d8a223d064ec48f8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_matrix, 345, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_01c58817fe566496de7e4e4b19383faa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_to_native, 92, const_tuple_str_plain_A_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f216a71d6308a2a509ab4377986927ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_upcast, 21, const_tuple_str_plain_args_str_plain_t_str_plain_upcast_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_aae53ddececf5a1e7aa61bec6adbf841 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_upcast_char, 55, const_tuple_str_plain_args_str_plain_t_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_105e5bfda041430774e7ab3437ec0ada = MAKE_CODEOBJ( module_filename_obj, const_str_plain_upcast_scalar, 65, const_tuple_str_plain_dtype_str_plain_scalar_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_95c83887c493fc1b20496fe902537642 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_validateaxis, 243, const_tuple_str_plain_axis_str_plain_axis_type_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_1_genexpr_maker( void );


static PyObject *scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_2_genexpr_maker( void );


static PyObject *scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_3_genexpr_maker( void );


static PyObject *scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_4_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_10_isintlike(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_11_isshape( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_12_issequence(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_13_ismatrix(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_14_isdense(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_15_validateaxis(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_16_check_shape( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_17_check_reshape_kwargs(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_18_matrix(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_19_asmatrix(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_1_upcast(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_20_bmat(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_2_upcast_char(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_3_upcast_scalar(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_4_downcast_intp_index(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_5_to_native(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_6_getdtype( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_7_get_index_dtype( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_8_get_sum_dtype(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_9_isscalarlike(  );


// The module function definitions.
static PyObject *impl_scipy$sparse$sputils$$$function_1_upcast( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *var_t = NULL;
    PyObject *var_upcast = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_f216a71d6308a2a509ab4377986927ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_f216a71d6308a2a509ab4377986927ea = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f216a71d6308a2a509ab4377986927ea, codeobj_f216a71d6308a2a509ab4377986927ea, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f216a71d6308a2a509ab4377986927ea = cache_frame_f216a71d6308a2a509ab4377986927ea;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f216a71d6308a2a509ab4377986927ea );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f216a71d6308a2a509ab4377986927ea ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_hash_arg_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain__upcast_memo );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__upcast_memo );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_upcast_memo" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_args );
        tmp_hash_arg_1 = par_args;
        tmp_args_element_name_1 = BUILTIN_HASH( tmp_hash_arg_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 41;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f216a71d6308a2a509ab4377986927ea->m_frame.f_lineno = 41;
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


            exception_lineno = 41;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_t == NULL );
        var_t = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_t );
        tmp_compexpr_left_1 = var_t;
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
        CHECK_OBJECT( var_t );
        tmp_return_value = var_t;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_args );
        tmp_args_element_name_2 = par_args;
        tmp_args_element_name_3 = PyList_New( 0 );
        frame_f216a71d6308a2a509ab4377986927ea->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_find_common_type, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_upcast == NULL );
        var_upcast = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_supported_dtypes );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_supported_dtypes );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "supported_dtypes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = tmp_mvar_value_3;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 47;
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
            PyObject *old = var_t;
            assert( old != NULL );
            var_t = tmp_assign_source_5;
            Py_INCREF( var_t );
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        int tmp_truth_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 48;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_upcast );
        tmp_args_element_name_4 = var_upcast;
        CHECK_OBJECT( var_t );
        tmp_args_element_name_5 = var_t;
        frame_f216a71d6308a2a509ab4377986927ea->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_can_cast, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 48;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_hash_arg_2;
            CHECK_OBJECT( var_t );
            tmp_ass_subvalue_1 = var_t;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain__upcast_memo );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__upcast_memo );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_upcast_memo" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 49;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_ass_subscribed_1 = tmp_mvar_value_5;
            CHECK_OBJECT( par_args );
            tmp_hash_arg_2 = par_args;
            tmp_ass_subscript_1 = BUILTIN_HASH( tmp_hash_arg_2 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
        }
        CHECK_OBJECT( var_t );
        tmp_return_value = var_t;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_2;
        branch_no_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_1 = const_str_digest_603b086b677424a0199f1f7ad3d99660;
        CHECK_OBJECT( par_args );
        tmp_tuple_element_1 = par_args;
        tmp_right_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_make_exception_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f216a71d6308a2a509ab4377986927ea->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
        }

        Py_DECREF( tmp_make_exception_arg_1 );
        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 52;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f216a71d6308a2a509ab4377986927ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f216a71d6308a2a509ab4377986927ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f216a71d6308a2a509ab4377986927ea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f216a71d6308a2a509ab4377986927ea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f216a71d6308a2a509ab4377986927ea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f216a71d6308a2a509ab4377986927ea, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f216a71d6308a2a509ab4377986927ea,
        type_description_1,
        par_args,
        var_t,
        var_upcast
    );


    // Release cached frame.
    if ( frame_f216a71d6308a2a509ab4377986927ea == cache_frame_f216a71d6308a2a509ab4377986927ea )
    {
        Py_DECREF( frame_f216a71d6308a2a509ab4377986927ea );
    }
    cache_frame_f216a71d6308a2a509ab4377986927ea = NULL;

    assertFrameObject( frame_f216a71d6308a2a509ab4377986927ea );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_1_upcast );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_t );
    Py_DECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_upcast );
    var_upcast = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_upcast );
    var_upcast = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_1_upcast );
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


static PyObject *impl_scipy$sparse$sputils$$$function_2_upcast_char( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *var_t = NULL;
    struct Nuitka_FrameObject *frame_aae53ddececf5a1e7aa61bec6adbf841;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_aae53ddececf5a1e7aa61bec6adbf841 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aae53ddececf5a1e7aa61bec6adbf841, codeobj_aae53ddececf5a1e7aa61bec6adbf841, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *) );
    frame_aae53ddececf5a1e7aa61bec6adbf841 = cache_frame_aae53ddececf5a1e7aa61bec6adbf841;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aae53ddececf5a1e7aa61bec6adbf841 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aae53ddececf5a1e7aa61bec6adbf841 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain__upcast_memo );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__upcast_memo );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_upcast_memo" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_args );
        tmp_args_element_name_1 = par_args;
        frame_aae53ddececf5a1e7aa61bec6adbf841->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_t == NULL );
        var_t = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_t );
        tmp_compexpr_left_1 = var_t;
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
        CHECK_OBJECT( var_t );
        tmp_return_value = var_t;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_upcast );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_upcast );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "upcast" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_2;
        tmp_called_name_1 = (PyObject *)&PyMap_Type;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_args );
        tmp_args_element_name_3 = par_args;
        frame_aae53ddececf5a1e7aa61bec6adbf841->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_dircall_arg2_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_2 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_t;
            assert( old != NULL );
            var_t = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_t );
        tmp_ass_subvalue_1 = var_t;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain__upcast_memo );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__upcast_memo );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_upcast_memo" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = tmp_mvar_value_4;
        CHECK_OBJECT( par_args );
        tmp_ass_subscript_1 = par_args;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aae53ddececf5a1e7aa61bec6adbf841 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aae53ddececf5a1e7aa61bec6adbf841 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aae53ddececf5a1e7aa61bec6adbf841 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aae53ddececf5a1e7aa61bec6adbf841, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aae53ddececf5a1e7aa61bec6adbf841->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aae53ddececf5a1e7aa61bec6adbf841, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aae53ddececf5a1e7aa61bec6adbf841,
        type_description_1,
        par_args,
        var_t
    );


    // Release cached frame.
    if ( frame_aae53ddececf5a1e7aa61bec6adbf841 == cache_frame_aae53ddececf5a1e7aa61bec6adbf841 )
    {
        Py_DECREF( frame_aae53ddececf5a1e7aa61bec6adbf841 );
    }
    cache_frame_aae53ddececf5a1e7aa61bec6adbf841 = NULL;

    assertFrameObject( frame_aae53ddececf5a1e7aa61bec6adbf841 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_t );
    tmp_return_value = var_t;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_2_upcast_char );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_t );
    Py_DECREF( var_t );
    var_t = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_2_upcast_char );
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


static PyObject *impl_scipy$sparse$sputils$$$function_3_upcast_scalar( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtype = python_pars[ 0 ];
    PyObject *par_scalar = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_105e5bfda041430774e7ab3437ec0ada;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_105e5bfda041430774e7ab3437ec0ada = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_105e5bfda041430774e7ab3437ec0ada, codeobj_105e5bfda041430774e7ab3437ec0ada, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *) );
    frame_105e5bfda041430774e7ab3437ec0ada = cache_frame_105e5bfda041430774e7ab3437ec0ada;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_105e5bfda041430774e7ab3437ec0ada );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_105e5bfda041430774e7ab3437ec0ada ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = DEEP_COPY( const_tuple_list_int_0_list_tuple );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( par_dtype );
        tmp_dict_value_1 = par_dtype;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_105e5bfda041430774e7ab3437ec0ada->m_frame.f_lineno = 69;
        tmp_left_name_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_scalar );
        tmp_right_name_1 = par_scalar;
        tmp_source_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_105e5bfda041430774e7ab3437ec0ada );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_105e5bfda041430774e7ab3437ec0ada );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_105e5bfda041430774e7ab3437ec0ada );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_105e5bfda041430774e7ab3437ec0ada, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_105e5bfda041430774e7ab3437ec0ada->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_105e5bfda041430774e7ab3437ec0ada, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_105e5bfda041430774e7ab3437ec0ada,
        type_description_1,
        par_dtype,
        par_scalar
    );


    // Release cached frame.
    if ( frame_105e5bfda041430774e7ab3437ec0ada == cache_frame_105e5bfda041430774e7ab3437ec0ada )
    {
        Py_DECREF( frame_105e5bfda041430774e7ab3437ec0ada );
    }
    cache_frame_105e5bfda041430774e7ab3437ec0ada = NULL;

    assertFrameObject( frame_105e5bfda041430774e7ab3437ec0ada );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_3_upcast_scalar );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_scalar );
    Py_DECREF( par_scalar );
    par_scalar = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_scalar );
    Py_DECREF( par_scalar );
    par_scalar = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_3_upcast_scalar );
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


static PyObject *impl_scipy$sparse$sputils$$$function_4_downcast_intp_index( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
    PyObject *var_maxval = NULL;
    PyObject *var_minval = NULL;
    struct Nuitka_FrameObject *frame_7b324050016ceaa7e83502dbd5050c3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7b324050016ceaa7e83502dbd5050c3f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7b324050016ceaa7e83502dbd5050c3f, codeobj_7b324050016ceaa7e83502dbd5050c3f, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7b324050016ceaa7e83502dbd5050c3f = cache_frame_7b324050016ceaa7e83502dbd5050c3f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7b324050016ceaa7e83502dbd5050c3f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7b324050016ceaa7e83502dbd5050c3f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_arr );
        tmp_source_name_2 = par_arr;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_itemsize );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_2;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_intp );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7b324050016ceaa7e83502dbd5050c3f->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_itemsize );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooo";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_arr );
            tmp_source_name_6 = par_arr;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_size );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                type_description_1 = "ooo";
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_7;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_3;
                CHECK_OBJECT( par_arr );
                tmp_source_name_7 = par_arr;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_astype );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 81;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_3 == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 81;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_8 = tmp_mvar_value_3;
                tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_intp );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 81;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_7b324050016ceaa7e83502dbd5050c3f->m_frame.f_lineno = 81;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 81;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_arr );
            tmp_called_instance_1 = par_arr;
            frame_7b324050016ceaa7e83502dbd5050c3f->m_frame.f_lineno = 82;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_max );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_maxval == NULL );
            var_maxval = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT( par_arr );
            tmp_called_instance_2 = par_arr;
            frame_7b324050016ceaa7e83502dbd5050c3f->m_frame.f_lineno = 83;
            tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_min );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_minval == NULL );
            var_minval = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_3;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_9;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_11;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_12;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_13;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_7;
            CHECK_OBJECT( var_maxval );
            tmp_compexpr_left_3 = var_maxval;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 84;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_10 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_iinfo );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 84;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_11 = tmp_mvar_value_5;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_intp );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 84;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_7b324050016ceaa7e83502dbd5050c3f->m_frame.f_lineno = 84;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_source_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_source_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_max );
            Py_DECREF( tmp_source_name_9 );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
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
            CHECK_OBJECT( var_minval );
            tmp_compexpr_left_4 = var_minval;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 84;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_13 = tmp_mvar_value_6;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_iinfo );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 84;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_14 = tmp_mvar_value_7;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_intp );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 84;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_7b324050016ceaa7e83502dbd5050c3f->m_frame.f_lineno = 84;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_source_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_source_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_min );
            Py_DECREF( tmp_source_name_12 );
            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                tmp_make_exception_arg_1 = const_str_digest_4c918105a153fc99f794f526fb57f1fc;
                frame_7b324050016ceaa7e83502dbd5050c3f->m_frame.f_lineno = 85;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 85;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_15;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_8;
            CHECK_OBJECT( par_arr );
            tmp_source_name_15 = par_arr;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_astype );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_called_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 88;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_16 = tmp_mvar_value_8;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_intp );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 88;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_7b324050016ceaa7e83502dbd5050c3f->m_frame.f_lineno = 88;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b324050016ceaa7e83502dbd5050c3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b324050016ceaa7e83502dbd5050c3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b324050016ceaa7e83502dbd5050c3f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7b324050016ceaa7e83502dbd5050c3f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7b324050016ceaa7e83502dbd5050c3f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7b324050016ceaa7e83502dbd5050c3f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7b324050016ceaa7e83502dbd5050c3f,
        type_description_1,
        par_arr,
        var_maxval,
        var_minval
    );


    // Release cached frame.
    if ( frame_7b324050016ceaa7e83502dbd5050c3f == cache_frame_7b324050016ceaa7e83502dbd5050c3f )
    {
        Py_DECREF( frame_7b324050016ceaa7e83502dbd5050c3f );
    }
    cache_frame_7b324050016ceaa7e83502dbd5050c3f = NULL;

    assertFrameObject( frame_7b324050016ceaa7e83502dbd5050c3f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_arr );
    tmp_return_value = par_arr;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_4_downcast_intp_index );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    Py_XDECREF( var_maxval );
    var_maxval = NULL;

    Py_XDECREF( var_minval );
    var_minval = NULL;

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

    Py_XDECREF( var_maxval );
    var_maxval = NULL;

    Py_XDECREF( var_minval );
    var_minval = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_4_downcast_intp_index );
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


static PyObject *impl_scipy$sparse$sputils$$$function_5_to_native( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_01c58817fe566496de7e4e4b19383faa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_01c58817fe566496de7e4e4b19383faa = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_01c58817fe566496de7e4e4b19383faa, codeobj_01c58817fe566496de7e4e4b19383faa, module_scipy$sparse$sputils, sizeof(void *) );
    frame_01c58817fe566496de7e4e4b19383faa = cache_frame_01c58817fe566496de7e4e4b19383faa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_01c58817fe566496de7e4e4b19383faa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_01c58817fe566496de7e4e4b19383faa ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_01c58817fe566496de7e4e4b19383faa->m_frame.f_lineno = 93;
        tmp_dict_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_newbyteorder, &PyTuple_GET_ITEM( const_tuple_str_plain_native_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_01c58817fe566496de7e4e4b19383faa->m_frame.f_lineno = 93;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_01c58817fe566496de7e4e4b19383faa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_01c58817fe566496de7e4e4b19383faa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_01c58817fe566496de7e4e4b19383faa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_01c58817fe566496de7e4e4b19383faa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_01c58817fe566496de7e4e4b19383faa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_01c58817fe566496de7e4e4b19383faa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_01c58817fe566496de7e4e4b19383faa,
        type_description_1,
        par_A
    );


    // Release cached frame.
    if ( frame_01c58817fe566496de7e4e4b19383faa == cache_frame_01c58817fe566496de7e4e4b19383faa )
    {
        Py_DECREF( frame_01c58817fe566496de7e4e4b19383faa );
    }
    cache_frame_01c58817fe566496de7e4e4b19383faa = NULL;

    assertFrameObject( frame_01c58817fe566496de7e4e4b19383faa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_5_to_native );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_5_to_native );
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


static PyObject *impl_scipy$sparse$sputils$$$function_6_getdtype( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtype = python_pars[ 0 ];
    PyObject *par_a = python_pars[ 1 ];
    PyObject *par_default = python_pars[ 2 ];
    PyObject *var_newdtype = NULL;
    struct Nuitka_FrameObject *frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a;
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
    static struct Nuitka_FrameObject *cache_frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a, codeobj_c26188fe2ae85ef1fbcd31dcfe0d9a5a, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a = cache_frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_dtype );
        tmp_compexpr_left_1 = par_dtype;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            assert( var_newdtype == NULL );
            var_newdtype = tmp_assign_source_1;
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
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = PyExc_AttributeError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;
                type_description_1 = "oooo";
                goto try_except_handler_3;
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
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( par_default );
                tmp_compexpr_left_3 = par_default;
                tmp_compexpr_right_3 = Py_None;
                tmp_condition_result_3 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_called_instance_1;
                    PyObject *tmp_mvar_value_1;
                    PyObject *tmp_args_element_name_1;
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 109;
                        type_description_1 = "oooo";
                        goto try_except_handler_3;
                    }

                    tmp_called_instance_1 = tmp_mvar_value_1;
                    CHECK_OBJECT( par_default );
                    tmp_args_element_name_1 = par_default;
                    frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a->m_frame.f_lineno = 109;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_1 };
                        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, call_args );
                    }

                    if ( tmp_assign_source_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 109;
                        type_description_1 = "oooo";
                        goto try_except_handler_3;
                    }
                    assert( var_newdtype == NULL );
                    var_newdtype = tmp_assign_source_2;
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_make_exception_arg_1;
                    tmp_make_exception_arg_1 = const_str_digest_fb49046a3a23b128421505e73aa5de12;
                    frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a->m_frame.f_lineno = 111;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_1 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                    }

                    assert( !(tmp_raise_type_1 == NULL) );
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 111;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
                }
                branch_end_3:;
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 105;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a->m_frame) frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooo";
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
        NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_6_getdtype );
        return NULL;
        // End of try:
        try_end_1:;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 113;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_dtype );
            tmp_args_element_name_2 = par_dtype;
            frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a->m_frame.f_lineno = 113;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dtype, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 113;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_newdtype == NULL );
            var_newdtype = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( var_newdtype );
            tmp_compexpr_left_4 = var_newdtype;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 114;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_object_ );
            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;
                type_description_1 = "oooo";
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
                PyObject *tmp_called_instance_3;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_call_result_1;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_warnings );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 115;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_3 = tmp_mvar_value_4;
                frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a->m_frame.f_lineno = 115;
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_warn, &PyTuple_GET_ITEM( const_tuple_str_digest_444b3f70e2b6c6c8dd9e7f2aa1afff1b_tuple, 0 ) );

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 115;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_no_4:;
        }
        branch_end_1:;
    }
    if ( var_newdtype == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "newdtype" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_newdtype;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a,
        type_description_1,
        par_dtype,
        par_a,
        par_default,
        var_newdtype
    );


    // Release cached frame.
    if ( frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a == cache_frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a )
    {
        Py_DECREF( frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a );
    }
    cache_frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a = NULL;

    assertFrameObject( frame_c26188fe2ae85ef1fbcd31dcfe0d9a5a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_6_getdtype );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_newdtype );
    var_newdtype = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_newdtype );
    var_newdtype = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_6_getdtype );
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


static PyObject *impl_scipy$sparse$sputils$$$function_7_get_index_dtype( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    PyObject *par_maxval = python_pars[ 1 ];
    PyObject *par_check_contents = python_pars[ 2 ];
    PyObject *var_int32min = NULL;
    PyObject *var_int32max = NULL;
    PyObject *var_dtype = NULL;
    PyObject *var_arr = NULL;
    PyObject *var_minval = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_007facfcd7c2abb80f919ba00b5820fc;
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
    static struct Nuitka_FrameObject *cache_frame_007facfcd7c2abb80f919ba00b5820fc = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_007facfcd7c2abb80f919ba00b5820fc, codeobj_007facfcd7c2abb80f919ba00b5820fc, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_007facfcd7c2abb80f919ba00b5820fc = cache_frame_007facfcd7c2abb80f919ba00b5820fc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_007facfcd7c2abb80f919ba00b5820fc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_007facfcd7c2abb80f919ba00b5820fc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 142;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_iinfo );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 142;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_int32 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 142;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_007facfcd7c2abb80f919ba00b5820fc->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_min );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_int32min == NULL );
        var_int32min = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 143;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_iinfo );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 143;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_4;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_int32 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 143;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_007facfcd7c2abb80f919ba00b5820fc->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_max );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_int32max == NULL );
        var_int32max = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 145;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_5;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_intc );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dtype == NULL );
        var_dtype = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_maxval );
        tmp_compexpr_left_1 = par_maxval;
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_maxval );
            tmp_compexpr_left_2 = par_maxval;
            CHECK_OBJECT( var_int32max );
            tmp_compexpr_right_2 = var_int32max;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 147;
                type_description_1 = "oooooooo";
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
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_6;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 148;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_8 = tmp_mvar_value_6;
                tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_int64 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 148;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_dtype;
                    assert( old != NULL );
                    var_dtype = tmp_assign_source_4;
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_7;
        CHECK_OBJECT( par_arrays );
        tmp_isinstance_inst_1 = par_arrays;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 150;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_7;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_arrays );
            tmp_tuple_element_1 = par_arrays;
            tmp_assign_source_5 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
            {
                PyObject *old = par_arrays;
                assert( old != NULL );
                par_arrays = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_arrays );
        tmp_iter_arg_1 = par_arrays;
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                exception_lineno = 153;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_8 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_arr;
            var_arr = tmp_assign_source_8;
            Py_INCREF( var_arr );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 154;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_8;
        CHECK_OBJECT( var_arr );
        tmp_args_element_name_3 = var_arr;
        frame_007facfcd7c2abb80f919ba00b5820fc->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_arr;
            assert( old != NULL );
            var_arr = tmp_assign_source_9;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_11;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 155;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_10 = tmp_mvar_value_9;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_can_cast );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_arr );
        tmp_source_name_11 = var_arr;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_dtype );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 155;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 155;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_12 = tmp_mvar_value_10;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_int32 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 155;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_007facfcd7c2abb80f919ba00b5820fc->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
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
            nuitka_bool tmp_condition_result_5;
            int tmp_truth_name_1;
            CHECK_OBJECT( par_check_contents );
            tmp_truth_name_1 = CHECK_IF_TRUE( par_check_contents );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 156;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_source_name_13;
                CHECK_OBJECT( var_arr );
                tmp_source_name_13 = var_arr;
                tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_size );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 157;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                tmp_compexpr_right_3 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 157;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
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
                goto loop_start_1;
                goto branch_end_6;
                branch_no_6:;
                {
                    nuitka_bool tmp_condition_result_7;
                    PyObject *tmp_called_name_4;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_mvar_value_11;
                    PyObject *tmp_call_result_1;
                    PyObject *tmp_args_element_name_6;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_args_element_name_7;
                    PyObject *tmp_source_name_16;
                    PyObject *tmp_mvar_value_12;
                    int tmp_truth_name_2;
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 160;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_2;
                    }

                    tmp_source_name_14 = tmp_mvar_value_11;
                    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_issubdtype );
                    if ( tmp_called_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 160;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_arr );
                    tmp_source_name_15 = var_arr;
                    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_dtype );
                    if ( tmp_args_element_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );

                        exception_lineno = 160;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

                    if (unlikely( tmp_mvar_value_12 == NULL ))
                    {
                        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                    }

                    if ( tmp_mvar_value_12 == NULL )
                    {
                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_args_element_name_6 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 160;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_2;
                    }

                    tmp_source_name_16 = tmp_mvar_value_12;
                    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_integer );
                    if ( tmp_args_element_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_args_element_name_6 );

                        exception_lineno = 160;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_2;
                    }
                    frame_007facfcd7c2abb80f919ba00b5820fc->m_frame.f_lineno = 160;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                    }

                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_element_name_6 );
                    Py_DECREF( tmp_args_element_name_7 );
                    if ( tmp_call_result_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 160;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
                    if ( tmp_truth_name_2 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_call_result_1 );

                        exception_lineno = 160;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_condition_result_7 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_assign_source_10;
                        PyObject *tmp_called_instance_2;
                        CHECK_OBJECT( var_arr );
                        tmp_called_instance_2 = var_arr;
                        frame_007facfcd7c2abb80f919ba00b5820fc->m_frame.f_lineno = 161;
                        tmp_assign_source_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_max );
                        if ( tmp_assign_source_10 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 161;
                            type_description_1 = "oooooooo";
                            goto try_except_handler_2;
                        }
                        {
                            PyObject *old = par_maxval;
                            assert( old != NULL );
                            par_maxval = tmp_assign_source_10;
                            Py_DECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_11;
                        PyObject *tmp_called_instance_3;
                        CHECK_OBJECT( var_arr );
                        tmp_called_instance_3 = var_arr;
                        frame_007facfcd7c2abb80f919ba00b5820fc->m_frame.f_lineno = 162;
                        tmp_assign_source_11 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_min );
                        if ( tmp_assign_source_11 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 162;
                            type_description_1 = "oooooooo";
                            goto try_except_handler_2;
                        }
                        {
                            PyObject *old = var_minval;
                            var_minval = tmp_assign_source_11;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        nuitka_bool tmp_condition_result_8;
                        int tmp_and_left_truth_1;
                        nuitka_bool tmp_and_left_value_1;
                        nuitka_bool tmp_and_right_value_1;
                        PyObject *tmp_compexpr_left_4;
                        PyObject *tmp_compexpr_right_4;
                        PyObject *tmp_compexpr_left_5;
                        PyObject *tmp_compexpr_right_5;
                        CHECK_OBJECT( var_minval );
                        tmp_compexpr_left_4 = var_minval;
                        CHECK_OBJECT( var_int32min );
                        tmp_compexpr_right_4 = var_int32min;
                        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 163;
                            type_description_1 = "oooooooo";
                            goto try_except_handler_2;
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
                        CHECK_OBJECT( par_maxval );
                        tmp_compexpr_left_5 = par_maxval;
                        CHECK_OBJECT( var_int32max );
                        tmp_compexpr_right_5 = var_int32max;
                        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 163;
                            type_description_1 = "oooooooo";
                            goto try_except_handler_2;
                        }
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
                        goto loop_start_1;
                        branch_no_8:;
                    }
                    branch_no_7:;
                }
                branch_end_6:;
            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_source_name_17;
            PyObject *tmp_mvar_value_13;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 167;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_17 = tmp_mvar_value_13;
            tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_int64 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 167;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_dtype;
                var_dtype = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        goto loop_end_1;
        branch_no_4:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
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

    if ( var_dtype == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_dtype;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_007facfcd7c2abb80f919ba00b5820fc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_007facfcd7c2abb80f919ba00b5820fc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_007facfcd7c2abb80f919ba00b5820fc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_007facfcd7c2abb80f919ba00b5820fc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_007facfcd7c2abb80f919ba00b5820fc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_007facfcd7c2abb80f919ba00b5820fc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_007facfcd7c2abb80f919ba00b5820fc,
        type_description_1,
        par_arrays,
        par_maxval,
        par_check_contents,
        var_int32min,
        var_int32max,
        var_dtype,
        var_arr,
        var_minval
    );


    // Release cached frame.
    if ( frame_007facfcd7c2abb80f919ba00b5820fc == cache_frame_007facfcd7c2abb80f919ba00b5820fc )
    {
        Py_DECREF( frame_007facfcd7c2abb80f919ba00b5820fc );
    }
    cache_frame_007facfcd7c2abb80f919ba00b5820fc = NULL;

    assertFrameObject( frame_007facfcd7c2abb80f919ba00b5820fc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_7_get_index_dtype );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    Py_XDECREF( par_maxval );
    par_maxval = NULL;

    CHECK_OBJECT( (PyObject *)par_check_contents );
    Py_DECREF( par_check_contents );
    par_check_contents = NULL;

    CHECK_OBJECT( (PyObject *)var_int32min );
    Py_DECREF( var_int32min );
    var_int32min = NULL;

    CHECK_OBJECT( (PyObject *)var_int32max );
    Py_DECREF( var_int32max );
    var_int32max = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    Py_XDECREF( var_minval );
    var_minval = NULL;

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

    Py_XDECREF( par_arrays );
    par_arrays = NULL;

    Py_XDECREF( par_maxval );
    par_maxval = NULL;

    CHECK_OBJECT( (PyObject *)par_check_contents );
    Py_DECREF( par_check_contents );
    par_check_contents = NULL;

    Py_XDECREF( var_int32min );
    var_int32min = NULL;

    Py_XDECREF( var_int32max );
    var_int32max = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    Py_XDECREF( var_minval );
    var_minval = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_7_get_index_dtype );
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


static PyObject *impl_scipy$sparse$sputils$$$function_8_get_sum_dtype( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtype = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7ae266d7101a881934bd80a3334089ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7ae266d7101a881934bd80a3334089ea = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7ae266d7101a881934bd80a3334089ea, codeobj_7ae266d7101a881934bd80a3334089ea, module_scipy$sparse$sputils, sizeof(void *) );
    frame_7ae266d7101a881934bd80a3334089ea = cache_frame_7ae266d7101a881934bd80a3334089ea;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7ae266d7101a881934bd80a3334089ea );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7ae266d7101a881934bd80a3334089ea ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_dtype );
        tmp_source_name_1 = par_dtype;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_kind );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_u;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "o";
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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_can_cast );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_1 = par_dtype;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_uint );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7ae266d7101a881934bd80a3334089ea->m_frame.f_lineno = 175;
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


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 176;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_3;
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_uint );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_5;
        int tmp_truth_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 177;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_4;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_can_cast );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_3 = par_dtype;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 177;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_5;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_int_ );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 177;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7ae266d7101a881934bd80a3334089ea->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 177;
            type_description_1 = "o";
            goto frame_exception_exit_1;
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
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 178;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_6;
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_int_ );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ae266d7101a881934bd80a3334089ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ae266d7101a881934bd80a3334089ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ae266d7101a881934bd80a3334089ea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7ae266d7101a881934bd80a3334089ea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7ae266d7101a881934bd80a3334089ea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7ae266d7101a881934bd80a3334089ea, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7ae266d7101a881934bd80a3334089ea,
        type_description_1,
        par_dtype
    );


    // Release cached frame.
    if ( frame_7ae266d7101a881934bd80a3334089ea == cache_frame_7ae266d7101a881934bd80a3334089ea )
    {
        Py_DECREF( frame_7ae266d7101a881934bd80a3334089ea );
    }
    cache_frame_7ae266d7101a881934bd80a3334089ea = NULL;

    assertFrameObject( frame_7ae266d7101a881934bd80a3334089ea );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_dtype );
    tmp_return_value = par_dtype;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_8_get_sum_dtype );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_8_get_sum_dtype );
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


static PyObject *impl_scipy$sparse$sputils$$$function_9_isscalarlike( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_5b2d0a62e278ba14a901f426c66362c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5b2d0a62e278ba14a901f426c66362c4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5b2d0a62e278ba14a901f426c66362c4, codeobj_5b2d0a62e278ba14a901f426c66362c4, module_scipy$sparse$sputils, sizeof(void *) );
    frame_5b2d0a62e278ba14a901f426c66362c4 = cache_frame_5b2d0a62e278ba14a901f426c66362c4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5b2d0a62e278ba14a901f426c66362c4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5b2d0a62e278ba14a901f426c66362c4 ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_5b2d0a62e278ba14a901f426c66362c4->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isscalar, call_args );
        }

        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 184;
            type_description_1 = "o";
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_isdense );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isdense );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isdense" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_5b2d0a62e278ba14a901f426c66362c4->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_and_left_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_and_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 184;
            type_description_1 = "o";
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
        CHECK_OBJECT( par_x );
        tmp_source_name_1 = par_x;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b2d0a62e278ba14a901f426c66362c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b2d0a62e278ba14a901f426c66362c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b2d0a62e278ba14a901f426c66362c4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5b2d0a62e278ba14a901f426c66362c4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5b2d0a62e278ba14a901f426c66362c4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5b2d0a62e278ba14a901f426c66362c4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5b2d0a62e278ba14a901f426c66362c4,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_5b2d0a62e278ba14a901f426c66362c4 == cache_frame_5b2d0a62e278ba14a901f426c66362c4 )
    {
        Py_DECREF( frame_5b2d0a62e278ba14a901f426c66362c4 );
    }
    cache_frame_5b2d0a62e278ba14a901f426c66362c4 = NULL;

    assertFrameObject( frame_5b2d0a62e278ba14a901f426c66362c4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_9_isscalarlike );
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
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_9_isscalarlike );
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


static PyObject *impl_scipy$sparse$sputils$$$function_10_isintlike( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    nuitka_bool var_loose_int = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_e550827aa4f9c510a0d090d7e1d49afd;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_e550827aa4f9c510a0d090d7e1d49afd = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e550827aa4f9c510a0d090d7e1d49afd, codeobj_e550827aa4f9c510a0d090d7e1d49afd, module_scipy$sparse$sputils, sizeof(nuitka_bool)+sizeof(void *) );
    frame_e550827aa4f9c510a0d090d7e1d49afd = cache_frame_e550827aa4f9c510a0d090d7e1d49afd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e550827aa4f9c510a0d090d7e1d49afd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e550827aa4f9c510a0d090d7e1d49afd ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 193;
            type_description_1 = "ob";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_e550827aa4f9c510a0d090d7e1d49afd->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ndim, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ob";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ob";
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_operator );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "operator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 196;
            type_description_1 = "ob";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_e550827aa4f9c510a0d090d7e1d49afd->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_index, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "ob";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
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
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_e550827aa4f9c510a0d090d7e1d49afd, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_e550827aa4f9c510a0d090d7e1d49afd, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = const_tuple_type_TypeError_type_ValueError_tuple;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ob";
            goto try_except_handler_3;
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
            nuitka_bool tmp_assign_source_1;
            PyObject *tmp_value_name_1;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_int_arg_1;
            CHECK_OBJECT( par_x );
            tmp_int_arg_1 = par_x;
            tmp_compexpr_left_3 = PyNumber_Int( tmp_int_arg_1 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "ob";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( par_x );
            tmp_compexpr_right_3 = par_x;
            tmp_value_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_value_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "ob";
                goto try_except_handler_4;
            }
            tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
            Py_DECREF( tmp_value_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "ob";
                goto try_except_handler_4;
            }
            tmp_assign_source_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            var_loose_int = tmp_assign_source_1;
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

        // Preserve existing published exception.
        exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_1 );
        exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_1 );
        exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_1 );

        if ( exception_keeper_tb_2 == NULL )
        {
            exception_keeper_tb_2 = MAKE_TRACEBACK( frame_e550827aa4f9c510a0d090d7e1d49afd, exception_keeper_lineno_2 );
        }
        else if ( exception_keeper_lineno_2 != 0 )
        {
            exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_e550827aa4f9c510a0d090d7e1d49afd, exception_keeper_lineno_2 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
        PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
        PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_4 = const_tuple_type_TypeError_type_ValueError_tuple;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "ob";
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
            tmp_return_value = Py_False;
            Py_INCREF( tmp_return_value );
            goto try_return_handler_5;
            goto branch_end_3;
            branch_no_3:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 198;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_e550827aa4f9c510a0d090d7e1d49afd->m_frame) frame_e550827aa4f9c510a0d090d7e1d49afd->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ob";
            goto try_except_handler_5;
            branch_end_3:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_10_isintlike );
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        goto try_return_handler_3;
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

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_3;
        // End of try:
        // End of try:
        try_end_2:;
        {
            nuitka_bool tmp_condition_result_4;
            assert( var_loose_int != NUITKA_BOOL_UNASSIGNED);
            tmp_condition_result_4 = var_loose_int;
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_1;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_mvar_value_4;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_warnings );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 203;
                    type_description_1 = "ob";
                    goto try_except_handler_3;
                }

                tmp_source_name_1 = tmp_mvar_value_3;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 203;
                    type_description_1 = "ob";
                    goto try_except_handler_3;
                }
                tmp_args_element_name_3 = const_str_digest_55742bc8be64912e9f2d9c44983513de;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_called_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 204;
                    type_description_1 = "ob";
                    goto try_except_handler_3;
                }

                tmp_args_element_name_4 = tmp_mvar_value_4;
                frame_e550827aa4f9c510a0d090d7e1d49afd->m_frame.f_lineno = 203;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_called_name_1 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 203;
                    type_description_1 = "ob";
                    goto try_except_handler_3;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_4:;
        }
        assert( var_loose_int != NUITKA_BOOL_UNASSIGNED);
        tmp_return_value = ( var_loose_int == NUITKA_BOOL_TRUE ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 195;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_e550827aa4f9c510a0d090d7e1d49afd->m_frame) frame_e550827aa4f9c510a0d090d7e1d49afd->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ob";
        goto try_except_handler_3;
        branch_end_2:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_10_isintlike );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e550827aa4f9c510a0d090d7e1d49afd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e550827aa4f9c510a0d090d7e1d49afd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e550827aa4f9c510a0d090d7e1d49afd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e550827aa4f9c510a0d090d7e1d49afd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e550827aa4f9c510a0d090d7e1d49afd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e550827aa4f9c510a0d090d7e1d49afd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e550827aa4f9c510a0d090d7e1d49afd,
        type_description_1,
        par_x,
        (int)var_loose_int
    );


    // Release cached frame.
    if ( frame_e550827aa4f9c510a0d090d7e1d49afd == cache_frame_e550827aa4f9c510a0d090d7e1d49afd )
    {
        Py_DECREF( frame_e550827aa4f9c510a0d090d7e1d49afd );
    }
    cache_frame_e550827aa4f9c510a0d090d7e1d49afd = NULL;

    assertFrameObject( frame_e550827aa4f9c510a0d090d7e1d49afd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_10_isintlike );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_10_isintlike );
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


static PyObject *impl_scipy$sparse$sputils$$$function_11_isshape( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_nonneg = python_pars[ 1 ];
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0, codeobj_3b4ad2b7f1c9c5c6073b5c80fdaef8c0, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0 = cache_frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_x );
        tmp_iter_arg_1 = par_x;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oooo";
            goto try_except_handler_3;
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


            type_description_1 = "oooo";
            exception_lineno = 216;
            goto try_except_handler_4;
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


            type_description_1 = "oooo";
            exception_lineno = 216;
            goto try_except_handler_4;
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

                    type_description_1 = "oooo";
                    exception_lineno = 216;
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

            type_description_1 = "oooo";
            exception_lineno = 216;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0, exception_keeper_lineno_3 );
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
        tmp_compexpr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto try_except_handler_5;
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_5;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 214;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0->m_frame) frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooo";
        goto try_except_handler_5;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_11_isshape );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;
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
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_isintlike );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintlike );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isintlike" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_M );
        tmp_args_element_name_1 = var_M;
        frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_isintlike );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintlike );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isintlike" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_N );
        tmp_args_element_name_2 = var_N;
        frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 221;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT( var_M );
            tmp_args_element_name_3 = var_M;
            frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0->m_frame.f_lineno = 221;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ndim, call_args );
            }

            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
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


                exception_lineno = 221;
                type_description_1 = "oooo";
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
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 221;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_4;
            CHECK_OBJECT( var_N );
            tmp_args_element_name_4 = var_N;
            frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0->m_frame.f_lineno = 221;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_compexpr_left_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_ndim, call_args );
            }

            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "oooo";
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
                nuitka_bool tmp_condition_result_4;
                int tmp_or_left_truth_1;
                nuitka_bool tmp_or_left_value_1;
                nuitka_bool tmp_or_right_value_1;
                PyObject *tmp_operand_name_1;
                int tmp_and_left_truth_3;
                nuitka_bool tmp_and_left_value_3;
                nuitka_bool tmp_and_right_value_3;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                CHECK_OBJECT( par_nonneg );
                tmp_operand_name_1 = par_nonneg;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_or_left_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                CHECK_OBJECT( var_M );
                tmp_compexpr_left_4 = var_M;
                tmp_compexpr_right_4 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "oooo";
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
                CHECK_OBJECT( var_N );
                tmp_compexpr_left_5 = var_N;
                tmp_compexpr_right_5 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_or_right_value_1 = tmp_and_right_value_3;
                goto and_end_3;
                and_left_3:;
                tmp_or_right_value_1 = tmp_and_left_value_3;
                and_end_3:;
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
                tmp_return_value = Py_True;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                branch_no_4:;
            }
            branch_no_3:;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0,
        type_description_1,
        par_x,
        par_nonneg,
        var_M,
        var_N
    );


    // Release cached frame.
    if ( frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0 == cache_frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0 )
    {
        Py_DECREF( frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0 );
    }
    cache_frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0 = NULL;

    assertFrameObject( frame_3b4ad2b7f1c9c5c6073b5c80fdaef8c0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_11_isshape );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_nonneg );
    Py_DECREF( par_nonneg );
    par_nonneg = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_nonneg );
    Py_DECREF( par_nonneg );
    par_nonneg = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_11_isshape );
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


static PyObject *impl_scipy$sparse$sputils$$$function_12_issequence( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_81a87b8e86518cc5f25368624c6dc607;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_81a87b8e86518cc5f25368624c6dc607 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_81a87b8e86518cc5f25368624c6dc607, codeobj_81a87b8e86518cc5f25368624c6dc607, module_scipy$sparse$sputils, sizeof(void *) );
    frame_81a87b8e86518cc5f25368624c6dc607 = cache_frame_81a87b8e86518cc5f25368624c6dc607;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_81a87b8e86518cc5f25368624c6dc607 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_81a87b8e86518cc5f25368624c6dc607 ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_t );
        tmp_isinstance_inst_1 = par_t;
        tmp_isinstance_cls_1 = const_tuple_type_list_type_tuple_tuple;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "o";
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
        CHECK_OBJECT( par_t );
        tmp_len_arg_1 = par_t;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_or_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_or_left_value_2 == NULL) );
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_2 );

            exception_lineno = 229;
            type_description_1 = "o";
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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_isscalar );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_t );
        tmp_subscribed_name_1 = par_t;
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_81a87b8e86518cc5f25368624c6dc607->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_or_right_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_or_right_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_and_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_or_left_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF( tmp_and_left_value_1 );
        tmp_or_left_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 230;
            type_description_1 = "o";
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
        CHECK_OBJECT( par_t );
        tmp_isinstance_inst_2 = par_t;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        Py_DECREF( tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "o";
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
        CHECK_OBJECT( par_t );
        tmp_source_name_3 = par_t;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_and_right_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_and_right_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        Py_INCREF( tmp_and_left_value_2 );
        tmp_or_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81a87b8e86518cc5f25368624c6dc607 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_81a87b8e86518cc5f25368624c6dc607 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81a87b8e86518cc5f25368624c6dc607 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_81a87b8e86518cc5f25368624c6dc607, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_81a87b8e86518cc5f25368624c6dc607->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_81a87b8e86518cc5f25368624c6dc607, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_81a87b8e86518cc5f25368624c6dc607,
        type_description_1,
        par_t
    );


    // Release cached frame.
    if ( frame_81a87b8e86518cc5f25368624c6dc607 == cache_frame_81a87b8e86518cc5f25368624c6dc607 )
    {
        Py_DECREF( frame_81a87b8e86518cc5f25368624c6dc607 );
    }
    cache_frame_81a87b8e86518cc5f25368624c6dc607 = NULL;

    assertFrameObject( frame_81a87b8e86518cc5f25368624c6dc607 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_12_issequence );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_12_issequence );
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


static PyObject *impl_scipy$sparse$sputils$$$function_13_ismatrix( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_5a17d896f5e190852e08d41634c60eb2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5a17d896f5e190852e08d41634c60eb2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a17d896f5e190852e08d41634c60eb2, codeobj_5a17d896f5e190852e08d41634c60eb2, module_scipy$sparse$sputils, sizeof(void *) );
    frame_5a17d896f5e190852e08d41634c60eb2 = cache_frame_5a17d896f5e190852e08d41634c60eb2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a17d896f5e190852e08d41634c60eb2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a17d896f5e190852e08d41634c60eb2 ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_t );
        tmp_isinstance_inst_1 = par_t;
        tmp_isinstance_cls_1 = const_tuple_type_list_type_tuple_tuple;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "o";
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
        CHECK_OBJECT( par_t );
        tmp_len_arg_1 = par_t;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_and_left_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_and_left_value_2 == NULL) );
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_2 );

            exception_lineno = 235;
            type_description_1 = "o";
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
        Py_DECREF( tmp_and_left_value_2 );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_issequence );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issequence );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issequence" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 235;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_t );
        tmp_subscribed_name_1 = par_t;
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5a17d896f5e190852e08d41634c60eb2->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_and_right_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_and_right_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_or_left_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF( tmp_and_left_value_1 );
        tmp_or_left_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 236;
            type_description_1 = "o";
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
        CHECK_OBJECT( par_t );
        tmp_isinstance_inst_2 = par_t;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        Py_DECREF( tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
        if ( tmp_and_left_truth_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_3 == 1 )
        {
            goto and_right_3;
        }
        else
        {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT( par_t );
        tmp_source_name_2 = par_t;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_2;
        tmp_and_right_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_and_right_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        Py_INCREF( tmp_and_left_value_3 );
        tmp_or_right_value_1 = tmp_and_left_value_3;
        and_end_3:;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a17d896f5e190852e08d41634c60eb2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a17d896f5e190852e08d41634c60eb2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a17d896f5e190852e08d41634c60eb2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a17d896f5e190852e08d41634c60eb2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a17d896f5e190852e08d41634c60eb2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a17d896f5e190852e08d41634c60eb2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a17d896f5e190852e08d41634c60eb2,
        type_description_1,
        par_t
    );


    // Release cached frame.
    if ( frame_5a17d896f5e190852e08d41634c60eb2 == cache_frame_5a17d896f5e190852e08d41634c60eb2 )
    {
        Py_DECREF( frame_5a17d896f5e190852e08d41634c60eb2 );
    }
    cache_frame_5a17d896f5e190852e08d41634c60eb2 = NULL;

    assertFrameObject( frame_5a17d896f5e190852e08d41634c60eb2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_13_ismatrix );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_13_ismatrix );
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


static PyObject *impl_scipy$sparse$sputils$$$function_14_isdense( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_6f50ca83aed62a3c9822f5990acf5505;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6f50ca83aed62a3c9822f5990acf5505 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6f50ca83aed62a3c9822f5990acf5505, codeobj_6f50ca83aed62a3c9822f5990acf5505, module_scipy$sparse$sputils, sizeof(void *) );
    frame_6f50ca83aed62a3c9822f5990acf5505 = cache_frame_6f50ca83aed62a3c9822f5990acf5505;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6f50ca83aed62a3c9822f5990acf5505 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6f50ca83aed62a3c9822f5990acf5505 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_isinstance_inst_1 = par_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f50ca83aed62a3c9822f5990acf5505 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f50ca83aed62a3c9822f5990acf5505 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f50ca83aed62a3c9822f5990acf5505 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6f50ca83aed62a3c9822f5990acf5505, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6f50ca83aed62a3c9822f5990acf5505->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6f50ca83aed62a3c9822f5990acf5505, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6f50ca83aed62a3c9822f5990acf5505,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_6f50ca83aed62a3c9822f5990acf5505 == cache_frame_6f50ca83aed62a3c9822f5990acf5505 )
    {
        Py_DECREF( frame_6f50ca83aed62a3c9822f5990acf5505 );
    }
    cache_frame_6f50ca83aed62a3c9822f5990acf5505 = NULL;

    assertFrameObject( frame_6f50ca83aed62a3c9822f5990acf5505 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_14_isdense );
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
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_14_isdense );
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


static PyObject *impl_scipy$sparse$sputils$$$function_15_validateaxis( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_axis = python_pars[ 0 ];
    PyObject *var_axis_type = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_95c83887c493fc1b20496fe902537642;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_95c83887c493fc1b20496fe902537642 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_95c83887c493fc1b20496fe902537642, codeobj_95c83887c493fc1b20496fe902537642, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *) );
    frame_95c83887c493fc1b20496fe902537642 = cache_frame_95c83887c493fc1b20496fe902537642;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_95c83887c493fc1b20496fe902537642 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_95c83887c493fc1b20496fe902537642 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_1 = par_axis;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_type_arg_1;
            CHECK_OBJECT( par_axis );
            tmp_type_arg_1 = par_axis;
            tmp_assign_source_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_1 == NULL) );
            assert( var_axis_type == NULL );
            var_axis_type = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_axis_type );
            tmp_compexpr_left_2 = var_axis_type;
            tmp_compexpr_right_2 = (PyObject *)&PyTuple_Type;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_93449dcfdf0bac85fc9e15149437426f;
                frame_95c83887c493fc1b20496fe902537642->m_frame.f_lineno = 252;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 252;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 258;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_issubdtype );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 258;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 258;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( var_axis_type );
            tmp_args_element_name_2 = var_axis_type;
            frame_95c83887c493fc1b20496fe902537642->m_frame.f_lineno = 258;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 258;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 258;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_integer );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 258;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_95c83887c493fc1b20496fe902537642->m_frame.f_lineno = 258;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 258;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 258;
                type_description_1 = "oo";
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_3;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_source_name_4;
                tmp_source_name_3 = const_str_digest_1a1c38eeefdc51597d030d58facbc619;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
                assert( !(tmp_called_name_2 == NULL) );
                tmp_dict_key_1 = const_str_plain_name;
                CHECK_OBJECT( var_axis_type );
                tmp_source_name_4 = var_axis_type;
                tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                if ( tmp_dict_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 260;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                Py_DECREF( tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                frame_95c83887c493fc1b20496fe902537642->m_frame.f_lineno = 259;
                tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_make_exception_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 259;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                frame_95c83887c493fc1b20496fe902537642->m_frame.f_lineno = 259;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_2 );
                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 259;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_2;
            {
                PyObject *tmp_assign_source_2;
                CHECK_OBJECT( par_axis );
                tmp_assign_source_2 = par_axis;
                assert( tmp_comparison_chain_1__operand_2 == NULL );
                Py_INCREF( tmp_assign_source_2 );
                tmp_comparison_chain_1__operand_2 = tmp_assign_source_2;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                tmp_compexpr_left_3 = const_int_neg_2;
                CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
                tmp_compexpr_right_3 = tmp_comparison_chain_1__operand_2;
                tmp_assign_source_3 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 262;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }
                assert( tmp_comparison_chain_1__comparison_result == NULL );
                tmp_comparison_chain_1__comparison_result = tmp_assign_source_3;
            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_operand_name_3;
                CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
                tmp_operand_name_3 = tmp_comparison_chain_1__comparison_result;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 262;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_5;
                }
                else
                {
                    goto branch_no_5;
                }
                branch_yes_5:;
                CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
                tmp_operand_name_2 = tmp_comparison_chain_1__comparison_result;
                Py_INCREF( tmp_operand_name_2 );
                goto try_return_handler_2;
                branch_no_5:;
            }
            {
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
                tmp_compexpr_left_4 = tmp_comparison_chain_1__operand_2;
                tmp_compexpr_right_4 = const_int_pos_1;
                tmp_operand_name_2 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_operand_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 262;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }
                goto try_return_handler_2;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_15_validateaxis );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
            Py_DECREF( tmp_comparison_chain_1__operand_2 );
            tmp_comparison_chain_1__operand_2 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
            Py_DECREF( tmp_comparison_chain_1__comparison_result );
            tmp_comparison_chain_1__comparison_result = NULL;

            goto outline_result_1;
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

            CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
            Py_DECREF( tmp_comparison_chain_1__operand_2 );
            tmp_comparison_chain_1__operand_2 = NULL;

            Py_XDECREF( tmp_comparison_chain_1__comparison_result );
            tmp_comparison_chain_1__comparison_result = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_15_validateaxis );
            return NULL;
            outline_result_1:;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;
                type_description_1 = "oo";
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_310bac4e5484d58e9a35019eb5bebddf;
                frame_95c83887c493fc1b20496fe902537642->m_frame.f_lineno = 263;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 263;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            branch_no_4:;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95c83887c493fc1b20496fe902537642 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95c83887c493fc1b20496fe902537642 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_95c83887c493fc1b20496fe902537642, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_95c83887c493fc1b20496fe902537642->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_95c83887c493fc1b20496fe902537642, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_95c83887c493fc1b20496fe902537642,
        type_description_1,
        par_axis,
        var_axis_type
    );


    // Release cached frame.
    if ( frame_95c83887c493fc1b20496fe902537642 == cache_frame_95c83887c493fc1b20496fe902537642 )
    {
        Py_DECREF( frame_95c83887c493fc1b20496fe902537642 );
    }
    cache_frame_95c83887c493fc1b20496fe902537642 = NULL;

    assertFrameObject( frame_95c83887c493fc1b20496fe902537642 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_15_validateaxis );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_axis_type );
    var_axis_type = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_axis_type );
    var_axis_type = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_15_validateaxis );
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


static PyObject *impl_scipy$sparse$sputils$$$function_16_check_shape( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_current_shape = python_pars[ 1 ];
    PyObject *var_shape_iter = NULL;
    PyObject *var_new_shape = NULL;
    PyObject *var_current_size = NULL;
    PyObject *var_negative_indexes = NULL;
    PyObject *var_new_size = NULL;
    PyObject *var_skip = NULL;
    PyObject *var_specified = NULL;
    PyObject *var_unspecified = NULL;
    PyObject *var_remainder = NULL;
    PyObject *var_err_shape = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_genexpr_3__$0 = NULL;
    PyObject *tmp_genexpr_4__$0 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e3337b33170f0892e4603771bde36e02;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_FrameObject *frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_e3337b33170f0892e4603771bde36e02 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e3337b33170f0892e4603771bde36e02, codeobj_e3337b33170f0892e4603771bde36e02, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e3337b33170f0892e4603771bde36e02 = cache_frame_e3337b33170f0892e4603771bde36e02;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e3337b33170f0892e4603771bde36e02 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e3337b33170f0892e4603771bde36e02 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_args );
        tmp_len_arg_1 = par_args;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
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
            tmp_make_exception_arg_1 = const_str_digest_8612e73c36b53222b2e9d10813deecd0;
            frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = 269;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 269;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_len_arg_2;
            CHECK_OBJECT( par_args );
            tmp_len_arg_2 = par_args;
            tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 271;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
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
                nuitka_bool tmp_assign_source_1;
                tmp_assign_source_1 = NUITKA_BOOL_TRUE;
                tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;
            }
            // Tried code:
            // Tried code:
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                CHECK_OBJECT( par_args );
                tmp_subscribed_name_1 = par_args;
                tmp_subscript_name_1 = const_int_0;
                tmp_iter_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
                if ( tmp_iter_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 273;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_3;
                }
                tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
                Py_DECREF( tmp_iter_arg_1 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 273;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_3;
                }
                assert( var_shape_iter == NULL );
                var_shape_iter = tmp_assign_source_2;
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

            {
                nuitka_bool tmp_assign_source_3;
                tmp_assign_source_3 = NUITKA_BOOL_FALSE;
                tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
            }
            // Preserve existing published exception.
            exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
            Py_XINCREF( exception_preserved_type_1 );
            exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
            Py_XINCREF( exception_preserved_value_1 );
            exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
            Py_XINCREF( exception_preserved_tb_1 );

            if ( exception_keeper_tb_1 == NULL )
            {
                exception_keeper_tb_1 = MAKE_TRACEBACK( frame_e3337b33170f0892e4603771bde36e02, exception_keeper_lineno_1 );
            }
            else if ( exception_keeper_lineno_1 != 0 )
            {
                exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_e3337b33170f0892e4603771bde36e02, exception_keeper_lineno_1 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
            PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            // Tried code:
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_3 = PyExc_TypeError;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 274;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_4;
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
                    PyObject *tmp_assign_source_4;
                    PyObject *tmp_tuple_element_1;
                    PyObject *tmp_called_name_1;
                    PyObject *tmp_source_name_1;
                    PyObject *tmp_mvar_value_1;
                    PyObject *tmp_args_element_name_1;
                    PyObject *tmp_subscribed_name_2;
                    PyObject *tmp_subscript_name_2;
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_operator );

                    if (unlikely( tmp_mvar_value_1 == NULL ))
                    {
                        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
                    }

                    if ( tmp_mvar_value_1 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "operator" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 275;
                        type_description_1 = "oooooooooooo";
                        goto try_except_handler_4;
                    }

                    tmp_source_name_1 = tmp_mvar_value_1;
                    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_index );
                    if ( tmp_called_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 275;
                        type_description_1 = "oooooooooooo";
                        goto try_except_handler_4;
                    }
                    CHECK_OBJECT( par_args );
                    tmp_subscribed_name_2 = par_args;
                    tmp_subscript_name_2 = const_int_0;
                    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
                    if ( tmp_args_element_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_1 );

                        exception_lineno = 275;
                        type_description_1 = "oooooooooooo";
                        goto try_except_handler_4;
                    }
                    frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = 275;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_1 };
                        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                    }

                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_args_element_name_1 );
                    if ( tmp_tuple_element_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 275;
                        type_description_1 = "oooooooooooo";
                        goto try_except_handler_4;
                    }
                    tmp_assign_source_4 = PyTuple_New( 1 );
                    PyTuple_SET_ITEM( tmp_assign_source_4, 0, tmp_tuple_element_1 );
                    assert( var_new_shape == NULL );
                    var_new_shape = tmp_assign_source_4;
                }
                goto branch_end_3;
                branch_no_3:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 272;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_e3337b33170f0892e4603771bde36e02->m_frame) frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
                branch_end_3:;
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

            // Restore previous exception.
            SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto try_except_handler_2;
            // End of try:
            try_end_2:;
            // Restore previous exception.
            SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
            goto try_end_1;
            // exception handler codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_16_check_shape );
            return NULL;
            // End of try:
            try_end_1:;
            {
                nuitka_bool tmp_condition_result_4;
                nuitka_bool tmp_compexpr_left_4;
                nuitka_bool tmp_compexpr_right_4;
                assert( tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
                tmp_compexpr_left_4 = tmp_try_except_1__unhandled_indicator;
                tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
                tmp_condition_result_4 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_5;
                    PyObject *tmp_tuple_arg_1;
                    {
                        PyObject *tmp_assign_source_6;
                        PyObject *tmp_iter_arg_2;
                        if ( var_shape_iter == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "shape_iter" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 277;
                            type_description_1 = "oooooooooooo";
                            goto try_except_handler_2;
                        }

                        tmp_iter_arg_2 = var_shape_iter;
                        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
                        if ( tmp_assign_source_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 277;
                            type_description_1 = "oooooooooooo";
                            goto try_except_handler_2;
                        }
                        assert( tmp_genexpr_1__$0 == NULL );
                        tmp_genexpr_1__$0 = tmp_assign_source_6;
                    }
                    // Tried code:
                    tmp_tuple_arg_1 = scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_1_genexpr_maker();

                    ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


                    goto try_return_handler_5;
                    // tried codes exits in all cases
                    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_16_check_shape );
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
                    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_16_check_shape );
                    return NULL;
                    outline_result_1:;
                    tmp_assign_source_5 = PySequence_Tuple( tmp_tuple_arg_1 );
                    Py_DECREF( tmp_tuple_arg_1 );
                    if ( tmp_assign_source_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 277;
                        type_description_1 = "oooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_new_shape;
                        var_new_shape = tmp_assign_source_5;
                        Py_XDECREF( old );
                    }

                }
                branch_no_4:;
            }
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

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_1;
            // End of try:
            try_end_3:;
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_tuple_arg_2;
                {
                    PyObject *tmp_assign_source_8;
                    PyObject *tmp_iter_arg_3;
                    CHECK_OBJECT( par_args );
                    tmp_iter_arg_3 = par_args;
                    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_3 );
                    if ( tmp_assign_source_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 279;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( tmp_genexpr_2__$0 == NULL );
                    tmp_genexpr_2__$0 = tmp_assign_source_8;
                }
                // Tried code:
                tmp_tuple_arg_2 = scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_2_genexpr_maker();

                ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_2)->m_closure[0] = PyCell_NEW0( tmp_genexpr_2__$0 );


                goto try_return_handler_6;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_16_check_shape );
                return NULL;
                // Return handler code:
                try_return_handler_6:;
                CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
                Py_DECREF( tmp_genexpr_2__$0 );
                tmp_genexpr_2__$0 = NULL;

                goto outline_result_2;
                // End of try:
                CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
                Py_DECREF( tmp_genexpr_2__$0 );
                tmp_genexpr_2__$0 = NULL;

                // Return statement must have exited already.
                NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_16_check_shape );
                return NULL;
                outline_result_2:;
                tmp_assign_source_7 = PySequence_Tuple( tmp_tuple_arg_2 );
                Py_DECREF( tmp_tuple_arg_2 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 279;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_new_shape == NULL );
                var_new_shape = tmp_assign_source_7;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_current_shape );
        tmp_compexpr_left_5 = par_current_shape;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_len_arg_3;
            if ( var_new_shape == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_shape" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 282;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_len_arg_3 = var_new_shape;
            tmp_compexpr_left_6 = BUILTIN_LEN( tmp_len_arg_3 );
            if ( tmp_compexpr_left_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_6 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_ca63a74f042191b990c135d3186a60e5;
                frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = 283;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 283;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_6;
            branch_no_6:;
            {
                nuitka_bool tmp_condition_result_7;
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
                if ( var_new_shape == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_shape" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 284;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_3 = var_new_shape;
                tmp_subscript_name_3 = const_int_0;
                tmp_compexpr_left_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
                if ( tmp_compexpr_left_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 284;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_7 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                Py_DECREF( tmp_compexpr_left_7 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 284;
                    type_description_1 = "oooooooooooo";
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
                if ( var_new_shape == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_shape" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 284;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_4 = var_new_shape;
                tmp_subscript_name_4 = const_int_pos_1;
                tmp_compexpr_left_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
                if ( tmp_compexpr_left_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 284;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_8 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                Py_DECREF( tmp_compexpr_left_8 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 284;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_7 = tmp_or_right_value_1;
                goto or_end_1;
                or_left_1:;
                tmp_condition_result_7 = tmp_or_left_value_1;
                or_end_1:;
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
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_make_exception_arg_3;
                    tmp_make_exception_arg_3 = const_str_digest_5a70f207981e1043b6e3d35f9f70b27d;
                    frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = 285;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_3 };
                        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_3 == NULL) );
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 285;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_7:;
            }
            branch_end_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 289;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_prod );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 289;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_current_shape );
            tmp_tuple_element_2 = par_current_shape;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
            frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = 289;
            tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 289;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_current_size == NULL );
            var_current_size = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            // Tried code:
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_iter_arg_4;
                PyObject *tmp_called_name_3;
                PyObject *tmp_args_element_name_2;
                tmp_called_name_3 = (PyObject *)&PyEnum_Type;
                if ( var_new_shape == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "new_shape" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 292;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_7;
                }

                tmp_args_element_name_2 = var_new_shape;
                frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = 292;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                if ( tmp_iter_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 292;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_4 );
                Py_DECREF( tmp_iter_arg_4 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 292;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_7;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_11;
            }
            {
                PyObject *tmp_assign_source_12;
                tmp_assign_source_12 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_12;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2, codeobj_01ca340a36e42cb2a2ee14fee1e9a2d0, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *) );
            frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2 = cache_frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_13;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_1 = tmp_listcomp_1__$0;
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
                        type_description_2 = "oo";
                        exception_lineno = 292;
                        goto try_except_handler_8;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_iter_arg_5;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_iter_arg_5 = tmp_listcomp_1__iter_value_0;
                tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_5 );
                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 292;
                    type_description_2 = "oo";
                    goto try_except_handler_9;
                }
                {
                    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_14;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_unpack_1;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__source_iter );
                tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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


                    type_description_2 = "oo";
                    exception_lineno = 292;
                    goto try_except_handler_10;
                }
                {
                    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_15;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_unpack_2;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__source_iter );
                tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
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


                    type_description_2 = "oo";
                    exception_lineno = 292;
                    goto try_except_handler_10;
                }
                {
                    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_16;
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
                            exception_lineno = 292;
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

                    type_description_2 = "oo";
                    exception_lineno = 292;
                    goto try_except_handler_10;
                }
            }
            goto try_end_4;
            // Exception handler code:
            try_except_handler_10:;
            exception_keeper_type_4 = exception_type;
            exception_keeper_value_4 = exception_value;
            exception_keeper_tb_4 = exception_tb;
            exception_keeper_lineno_4 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_listcomp$tuple_unpack_1__source_iter );
            Py_DECREF( tmp_listcomp$tuple_unpack_1__source_iter );
            tmp_listcomp$tuple_unpack_1__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto try_except_handler_9;
            // End of try:
            try_end_4:;
            goto try_end_5;
            // Exception handler code:
            try_except_handler_9:;
            exception_keeper_type_5 = exception_type;
            exception_keeper_value_5 = exception_value;
            exception_keeper_tb_5 = exception_tb;
            exception_keeper_lineno_5 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_1 );
            tmp_listcomp$tuple_unpack_1__element_1 = NULL;

            Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_2 );
            tmp_listcomp$tuple_unpack_1__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_5;
            exception_value = exception_keeper_value_5;
            exception_tb = exception_keeper_tb_5;
            exception_lineno = exception_keeper_lineno_5;

            goto try_except_handler_8;
            // End of try:
            try_end_5:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp$tuple_unpack_1__source_iter );
            Py_DECREF( tmp_listcomp$tuple_unpack_1__source_iter );
            tmp_listcomp$tuple_unpack_1__source_iter = NULL;

            {
                PyObject *tmp_assign_source_17;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__element_1 );
                tmp_assign_source_17 = tmp_listcomp$tuple_unpack_1__element_1;
                {
                    PyObject *old = outline_0_var_i;
                    outline_0_var_i = tmp_assign_source_17;
                    Py_INCREF( outline_0_var_i );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_1 );
            tmp_listcomp$tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_18;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__element_2 );
                tmp_assign_source_18 = tmp_listcomp$tuple_unpack_1__element_2;
                {
                    PyObject *old = outline_0_var_x;
                    outline_0_var_x = tmp_assign_source_18;
                    Py_INCREF( outline_0_var_x );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_2 );
            tmp_listcomp$tuple_unpack_1__element_2 = NULL;

            {
                nuitka_bool tmp_condition_result_8;
                PyObject *tmp_compexpr_left_9;
                PyObject *tmp_compexpr_right_9;
                CHECK_OBJECT( outline_0_var_x );
                tmp_compexpr_left_9 = outline_0_var_x;
                tmp_compexpr_right_9 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 292;
                    type_description_2 = "oo";
                    goto try_except_handler_8;
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
                    PyObject *tmp_append_list_1;
                    PyObject *tmp_append_value_1;
                    CHECK_OBJECT( tmp_listcomp_1__contraction );
                    tmp_append_list_1 = tmp_listcomp_1__contraction;
                    CHECK_OBJECT( outline_0_var_i );
                    tmp_append_value_1 = outline_0_var_i;
                    assert( PyList_Check( tmp_append_list_1 ) );
                    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 292;
                        type_description_2 = "oo";
                        goto try_except_handler_8;
                    }
                }
                branch_no_8:;
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 292;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_assign_source_10 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_assign_source_10 );
            goto try_return_handler_8;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_16_check_shape );
            return NULL;
            // Return handler code:
            try_return_handler_8:;
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
            try_except_handler_8:;
            exception_keeper_type_6 = exception_type;
            exception_keeper_value_6 = exception_value;
            exception_keeper_tb_6 = exception_tb;
            exception_keeper_lineno_6 = exception_lineno;
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
            exception_type = exception_keeper_type_6;
            exception_value = exception_keeper_value_6;
            exception_tb = exception_keeper_tb_6;
            exception_lineno = exception_keeper_lineno_6;

            goto frame_exception_exit_2;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_7;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2,
                type_description_2,
                outline_0_var_i,
                outline_0_var_x
            );


            // Release cached frame.
            if ( frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2 == cache_frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2 )
            {
                Py_DECREF( frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2 );
            }
            cache_frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2 = NULL;

            assertFrameObject( frame_01ca340a36e42cb2a2ee14fee1e9a2d0_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_7;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_16_check_shape );
            return NULL;
            // Return handler code:
            try_return_handler_7:;
            Py_XDECREF( outline_0_var_i );
            outline_0_var_i = NULL;

            Py_XDECREF( outline_0_var_x );
            outline_0_var_x = NULL;

            goto outline_result_3;
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

            Py_XDECREF( outline_0_var_i );
            outline_0_var_i = NULL;

            Py_XDECREF( outline_0_var_x );
            outline_0_var_x = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_16_check_shape );
            return NULL;
            outline_exception_1:;
            exception_lineno = 292;
            goto frame_exception_exit_1;
            outline_result_3:;
            assert( var_negative_indexes == NULL );
            var_negative_indexes = tmp_assign_source_10;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            PyObject *tmp_len_arg_4;
            CHECK_OBJECT( var_negative_indexes );
            tmp_len_arg_4 = var_negative_indexes;
            tmp_compexpr_left_10 = BUILTIN_LEN( tmp_len_arg_4 );
            if ( tmp_compexpr_left_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 293;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_10 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
            Py_DECREF( tmp_compexpr_left_10 );
            assert( !(tmp_res == -1) );
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
                PyObject *tmp_assign_source_19;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_kw_name_2;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 294;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_3 = tmp_mvar_value_3;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_prod );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 294;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                if ( var_new_shape == NULL )
                {
                    Py_DECREF( tmp_called_name_4 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_shape" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 294;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_3 = var_new_shape;
                tmp_args_name_2 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
                tmp_kw_name_2 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
                frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = 294;
                tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_assign_source_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 294;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_new_size == NULL );
                var_new_size = tmp_assign_source_19;
            }
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_compexpr_left_11;
                PyObject *tmp_compexpr_right_11;
                CHECK_OBJECT( var_new_size );
                tmp_compexpr_left_11 = var_new_size;
                CHECK_OBJECT( var_current_size );
                tmp_compexpr_right_11 = var_current_size;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 295;
                    type_description_1 = "oooooooooooo";
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
                    PyObject *tmp_raise_type_4;
                    PyObject *tmp_make_exception_arg_4;
                    PyObject *tmp_called_name_5;
                    PyObject *tmp_source_name_4;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_args_element_name_4;
                    tmp_source_name_4 = const_str_digest_27f6b5bd32404089ad0cb4a5145e3291;
                    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_format );
                    assert( !(tmp_called_name_5 == NULL) );
                    CHECK_OBJECT( var_current_size );
                    tmp_args_element_name_3 = var_current_size;
                    if ( var_new_shape == NULL )
                    {
                        Py_DECREF( tmp_called_name_5 );
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_shape" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 297;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_args_element_name_4 = var_new_shape;
                    frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = 296;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                        tmp_make_exception_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
                    }

                    Py_DECREF( tmp_called_name_5 );
                    if ( tmp_make_exception_arg_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 296;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = 296;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_4 };
                        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_4 );
                    assert( !(tmp_raise_type_4 == NULL) );
                    exception_type = tmp_raise_type_4;
                    exception_lineno = 296;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_10:;
            }
            goto branch_end_9;
            branch_no_9:;
            {
                nuitka_bool tmp_condition_result_11;
                PyObject *tmp_compexpr_left_12;
                PyObject *tmp_compexpr_right_12;
                PyObject *tmp_len_arg_5;
                CHECK_OBJECT( var_negative_indexes );
                tmp_len_arg_5 = var_negative_indexes;
                tmp_compexpr_left_12 = BUILTIN_LEN( tmp_len_arg_5 );
                if ( tmp_compexpr_left_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 298;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_12 = const_int_pos_1;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
                Py_DECREF( tmp_compexpr_left_12 );
                assert( !(tmp_res == -1) );
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
                    PyObject *tmp_assign_source_20;
                    PyObject *tmp_subscribed_name_5;
                    PyObject *tmp_subscript_name_5;
                    CHECK_OBJECT( var_negative_indexes );
                    tmp_subscribed_name_5 = var_negative_indexes;
                    tmp_subscript_name_5 = const_int_0;
                    tmp_assign_source_20 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
                    if ( tmp_assign_source_20 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 299;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_skip == NULL );
                    var_skip = tmp_assign_source_20;
                }
                {
                    PyObject *tmp_assign_source_21;
                    PyObject *tmp_called_name_6;
                    PyObject *tmp_source_name_5;
                    PyObject *tmp_mvar_value_4;
                    PyObject *tmp_args_element_name_5;
                    PyObject *tmp_left_name_1;
                    PyObject *tmp_subscribed_name_6;
                    PyObject *tmp_subscript_name_6;
                    PyObject *tmp_start_name_1;
                    PyObject *tmp_stop_name_1;
                    PyObject *tmp_step_name_1;
                    PyObject *tmp_right_name_1;
                    PyObject *tmp_subscribed_name_7;
                    PyObject *tmp_subscript_name_7;
                    PyObject *tmp_start_name_2;
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_right_name_2;
                    PyObject *tmp_stop_name_2;
                    PyObject *tmp_step_name_2;
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 300;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_5 = tmp_mvar_value_4;
                    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_prod );
                    if ( tmp_called_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 300;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    if ( var_new_shape == NULL )
                    {
                        Py_DECREF( tmp_called_name_6 );
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_shape" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 300;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_subscribed_name_6 = var_new_shape;
                    tmp_start_name_1 = const_int_0;
                    CHECK_OBJECT( var_skip );
                    tmp_stop_name_1 = var_skip;
                    tmp_step_name_1 = Py_None;
                    tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                    assert( !(tmp_subscript_name_6 == NULL) );
                    tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                    Py_DECREF( tmp_subscript_name_6 );
                    if ( tmp_left_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_6 );

                        exception_lineno = 300;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    if ( var_new_shape == NULL )
                    {
                        Py_DECREF( tmp_called_name_6 );
                        Py_DECREF( tmp_left_name_1 );
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_shape" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 300;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_subscribed_name_7 = var_new_shape;
                    CHECK_OBJECT( var_skip );
                    tmp_left_name_2 = var_skip;
                    tmp_right_name_2 = const_int_pos_1;
                    tmp_start_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
                    if ( tmp_start_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_6 );
                        Py_DECREF( tmp_left_name_1 );

                        exception_lineno = 300;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_stop_name_2 = Py_None;
                    tmp_step_name_2 = Py_None;
                    tmp_subscript_name_7 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                    Py_DECREF( tmp_start_name_2 );
                    assert( !(tmp_subscript_name_7 == NULL) );
                    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                    Py_DECREF( tmp_subscript_name_7 );
                    if ( tmp_right_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_6 );
                        Py_DECREF( tmp_left_name_1 );

                        exception_lineno = 300;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                    Py_DECREF( tmp_left_name_1 );
                    Py_DECREF( tmp_right_name_1 );
                    if ( tmp_args_element_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_6 );

                        exception_lineno = 300;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = 300;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_5 };
                        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
                    }

                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_args_element_name_5 );
                    if ( tmp_assign_source_21 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 300;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_specified == NULL );
                    var_specified = tmp_assign_source_21;
                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_22;
                    PyObject *tmp_iter_arg_6;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    CHECK_OBJECT( var_current_size );
                    tmp_left_name_3 = var_current_size;
                    CHECK_OBJECT( var_specified );
                    tmp_right_name_3 = var_specified;
                    tmp_iter_arg_6 = BUILTIN_DIVMOD( tmp_left_name_3, tmp_right_name_3 );
                    if ( tmp_iter_arg_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 301;
                        type_description_1 = "oooooooooooo";
                        goto try_except_handler_11;
                    }
                    tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_6 );
                    Py_DECREF( tmp_iter_arg_6 );
                    if ( tmp_assign_source_22 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 301;
                        type_description_1 = "oooooooooooo";
                        goto try_except_handler_11;
                    }
                    assert( tmp_tuple_unpack_1__source_iter == NULL );
                    tmp_tuple_unpack_1__source_iter = tmp_assign_source_22;
                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_23;
                    PyObject *tmp_unpack_3;
                    CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
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


                        type_description_1 = "oooooooooooo";
                        exception_lineno = 301;
                        goto try_except_handler_12;
                    }
                    assert( tmp_tuple_unpack_1__element_1 == NULL );
                    tmp_tuple_unpack_1__element_1 = tmp_assign_source_23;
                }
                {
                    PyObject *tmp_assign_source_24;
                    PyObject *tmp_unpack_4;
                    CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
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


                        type_description_1 = "oooooooooooo";
                        exception_lineno = 301;
                        goto try_except_handler_12;
                    }
                    assert( tmp_tuple_unpack_1__element_2 == NULL );
                    tmp_tuple_unpack_1__element_2 = tmp_assign_source_24;
                }
                {
                    PyObject *tmp_iterator_name_2;
                    CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                    tmp_iterator_name_2 = tmp_tuple_unpack_1__source_iter;
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
                                exception_lineno = 301;
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

                        type_description_1 = "oooooooooooo";
                        exception_lineno = 301;
                        goto try_except_handler_12;
                    }
                }
                goto try_end_6;
                // Exception handler code:
                try_except_handler_12:;
                exception_keeper_type_8 = exception_type;
                exception_keeper_value_8 = exception_value;
                exception_keeper_tb_8 = exception_tb;
                exception_keeper_lineno_8 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
                Py_DECREF( tmp_tuple_unpack_1__source_iter );
                tmp_tuple_unpack_1__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_8;
                exception_value = exception_keeper_value_8;
                exception_tb = exception_keeper_tb_8;
                exception_lineno = exception_keeper_lineno_8;

                goto try_except_handler_11;
                // End of try:
                try_end_6:;
                goto try_end_7;
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

                Py_XDECREF( tmp_tuple_unpack_1__element_1 );
                tmp_tuple_unpack_1__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_1__element_2 );
                tmp_tuple_unpack_1__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_9;
                exception_value = exception_keeper_value_9;
                exception_tb = exception_keeper_tb_9;
                exception_lineno = exception_keeper_lineno_9;

                goto frame_exception_exit_1;
                // End of try:
                try_end_7:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
                Py_DECREF( tmp_tuple_unpack_1__source_iter );
                tmp_tuple_unpack_1__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_25;
                    CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
                    tmp_assign_source_25 = tmp_tuple_unpack_1__element_1;
                    assert( var_unspecified == NULL );
                    Py_INCREF( tmp_assign_source_25 );
                    var_unspecified = tmp_assign_source_25;
                }
                Py_XDECREF( tmp_tuple_unpack_1__element_1 );
                tmp_tuple_unpack_1__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_26;
                    CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
                    tmp_assign_source_26 = tmp_tuple_unpack_1__element_2;
                    assert( var_remainder == NULL );
                    Py_INCREF( tmp_assign_source_26 );
                    var_remainder = tmp_assign_source_26;
                }
                Py_XDECREF( tmp_tuple_unpack_1__element_2 );
                tmp_tuple_unpack_1__element_2 = NULL;

                {
                    nuitka_bool tmp_condition_result_12;
                    PyObject *tmp_compexpr_left_13;
                    PyObject *tmp_compexpr_right_13;
                    CHECK_OBJECT( var_remainder );
                    tmp_compexpr_left_13 = var_remainder;
                    tmp_compexpr_right_13 = const_int_0;
                    tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 302;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_assign_source_27;
                        PyObject *tmp_tuple_arg_3;
                        {
                            PyObject *tmp_assign_source_28;
                            PyObject *tmp_iter_arg_7;
                            if ( var_new_shape == NULL )
                            {

                                exception_type = PyExc_UnboundLocalError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_shape" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 303;
                                type_description_1 = "oooooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_iter_arg_7 = var_new_shape;
                            tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_7 );
                            if ( tmp_assign_source_28 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 303;
                                type_description_1 = "oooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            assert( tmp_genexpr_3__$0 == NULL );
                            tmp_genexpr_3__$0 = tmp_assign_source_28;
                        }
                        // Tried code:
                        tmp_tuple_arg_3 = scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_3_genexpr_maker();

                        ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_3)->m_closure[0] = PyCell_NEW0( tmp_genexpr_3__$0 );


                        goto try_return_handler_13;
                        // tried codes exits in all cases
                        NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_16_check_shape );
                        return NULL;
                        // Return handler code:
                        try_return_handler_13:;
                        CHECK_OBJECT( (PyObject *)tmp_genexpr_3__$0 );
                        Py_DECREF( tmp_genexpr_3__$0 );
                        tmp_genexpr_3__$0 = NULL;

                        goto outline_result_4;
                        // End of try:
                        CHECK_OBJECT( (PyObject *)tmp_genexpr_3__$0 );
                        Py_DECREF( tmp_genexpr_3__$0 );
                        tmp_genexpr_3__$0 = NULL;

                        // Return statement must have exited already.
                        NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_16_check_shape );
                        return NULL;
                        outline_result_4:;
                        tmp_assign_source_27 = PySequence_Tuple( tmp_tuple_arg_3 );
                        Py_DECREF( tmp_tuple_arg_3 );
                        if ( tmp_assign_source_27 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 303;
                            type_description_1 = "oooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_err_shape == NULL );
                        var_err_shape = tmp_assign_source_27;
                    }
                    {
                        PyObject *tmp_raise_type_5;
                        PyObject *tmp_make_exception_arg_5;
                        PyObject *tmp_called_instance_1;
                        PyObject *tmp_args_element_name_6;
                        PyObject *tmp_args_element_name_7;
                        tmp_called_instance_1 = const_str_digest_27f6b5bd32404089ad0cb4a5145e3291;
                        CHECK_OBJECT( var_current_size );
                        tmp_args_element_name_6 = var_current_size;
                        CHECK_OBJECT( var_err_shape );
                        tmp_args_element_name_7 = var_err_shape;
                        frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = 304;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                            tmp_make_exception_arg_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_format, call_args );
                        }

                        if ( tmp_make_exception_arg_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 304;
                            type_description_1 = "oooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = 304;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_5 };
                            tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        Py_DECREF( tmp_make_exception_arg_5 );
                        assert( !(tmp_raise_type_5 == NULL) );
                        exception_type = tmp_raise_type_5;
                        exception_lineno = 304;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_no_12:;
                }
                {
                    PyObject *tmp_assign_source_29;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_left_name_5;
                    PyObject *tmp_subscribed_name_8;
                    PyObject *tmp_subscript_name_8;
                    PyObject *tmp_start_name_3;
                    PyObject *tmp_stop_name_3;
                    PyObject *tmp_step_name_3;
                    PyObject *tmp_right_name_4;
                    PyObject *tmp_tuple_element_4;
                    PyObject *tmp_right_name_5;
                    PyObject *tmp_subscribed_name_9;
                    PyObject *tmp_subscript_name_9;
                    PyObject *tmp_start_name_4;
                    PyObject *tmp_left_name_6;
                    PyObject *tmp_right_name_6;
                    PyObject *tmp_stop_name_4;
                    PyObject *tmp_step_name_4;
                    if ( var_new_shape == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_shape" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 306;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_subscribed_name_8 = var_new_shape;
                    tmp_start_name_3 = const_int_0;
                    CHECK_OBJECT( var_skip );
                    tmp_stop_name_3 = var_skip;
                    tmp_step_name_3 = Py_None;
                    tmp_subscript_name_8 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
                    assert( !(tmp_subscript_name_8 == NULL) );
                    tmp_left_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
                    Py_DECREF( tmp_subscript_name_8 );
                    if ( tmp_left_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 306;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_unspecified );
                    tmp_tuple_element_4 = var_unspecified;
                    tmp_right_name_4 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_4 );
                    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_4 );
                    tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_5, tmp_right_name_4 );
                    Py_DECREF( tmp_left_name_5 );
                    Py_DECREF( tmp_right_name_4 );
                    if ( tmp_left_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 306;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    if ( var_new_shape == NULL )
                    {
                        Py_DECREF( tmp_left_name_4 );
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_shape" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 306;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_subscribed_name_9 = var_new_shape;
                    CHECK_OBJECT( var_skip );
                    tmp_left_name_6 = var_skip;
                    tmp_right_name_6 = const_int_pos_1;
                    tmp_start_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
                    if ( tmp_start_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_4 );

                        exception_lineno = 306;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_stop_name_4 = Py_None;
                    tmp_step_name_4 = Py_None;
                    tmp_subscript_name_9 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
                    Py_DECREF( tmp_start_name_4 );
                    assert( !(tmp_subscript_name_9 == NULL) );
                    tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
                    Py_DECREF( tmp_subscript_name_9 );
                    if ( tmp_right_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_4 );

                        exception_lineno = 306;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
                    Py_DECREF( tmp_left_name_4 );
                    Py_DECREF( tmp_right_name_5 );
                    if ( tmp_assign_source_29 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 306;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_new_shape;
                        var_new_shape = tmp_assign_source_29;
                        Py_XDECREF( old );
                    }

                }
                goto branch_end_11;
                branch_no_11:;
                {
                    PyObject *tmp_raise_type_6;
                    PyObject *tmp_make_exception_arg_6;
                    tmp_make_exception_arg_6 = const_str_digest_700d988edb15325db824235698de3f91;
                    frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = 308;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_6 };
                        tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_6 == NULL) );
                    exception_type = tmp_raise_type_6;
                    exception_lineno = 308;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_end_11:;
            }
            branch_end_9:;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_compexpr_left_14;
            PyObject *tmp_compexpr_right_14;
            PyObject *tmp_len_arg_6;
            if ( var_new_shape == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_shape" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 311;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_len_arg_6 = var_new_shape;
            tmp_compexpr_left_14 = BUILTIN_LEN( tmp_len_arg_6 );
            if ( tmp_compexpr_left_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_14 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
            Py_DECREF( tmp_compexpr_left_14 );
            assert( !(tmp_res == -1) );
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
                PyObject *tmp_assign_source_30;
                PyObject *tmp_tuple_arg_4;
                {
                    PyObject *tmp_assign_source_31;
                    PyObject *tmp_iter_arg_8;
                    if ( var_new_shape == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_shape" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 312;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_iter_arg_8 = var_new_shape;
                    tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_8 );
                    if ( tmp_assign_source_31 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 312;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( tmp_genexpr_4__$0 == NULL );
                    tmp_genexpr_4__$0 = tmp_assign_source_31;
                }
                // Tried code:
                tmp_tuple_arg_4 = scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_4_genexpr_maker();

                ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_4)->m_closure[0] = PyCell_NEW0( tmp_genexpr_4__$0 );


                goto try_return_handler_14;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_16_check_shape );
                return NULL;
                // Return handler code:
                try_return_handler_14:;
                CHECK_OBJECT( (PyObject *)tmp_genexpr_4__$0 );
                Py_DECREF( tmp_genexpr_4__$0 );
                tmp_genexpr_4__$0 = NULL;

                goto outline_result_5;
                // End of try:
                CHECK_OBJECT( (PyObject *)tmp_genexpr_4__$0 );
                Py_DECREF( tmp_genexpr_4__$0 );
                tmp_genexpr_4__$0 = NULL;

                // Return statement must have exited already.
                NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_16_check_shape );
                return NULL;
                outline_result_5:;
                tmp_assign_source_30 = PySequence_Tuple( tmp_tuple_arg_4 );
                Py_DECREF( tmp_tuple_arg_4 );
                if ( tmp_assign_source_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 312;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_new_shape;
                    var_new_shape = tmp_assign_source_30;
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_14;
                PyObject *tmp_compexpr_left_15;
                PyObject *tmp_compexpr_right_15;
                PyObject *tmp_len_arg_7;
                CHECK_OBJECT( var_new_shape );
                tmp_len_arg_7 = var_new_shape;
                tmp_compexpr_left_15 = BUILTIN_LEN( tmp_len_arg_7 );
                assert( !(tmp_compexpr_left_15 == NULL) );
                tmp_compexpr_right_15 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
                Py_DECREF( tmp_compexpr_left_15 );
                assert( !(tmp_res == -1) );
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
                    PyObject *tmp_assign_source_32;
                    tmp_assign_source_32 = const_tuple_int_pos_1_int_pos_1_tuple;
                    {
                        PyObject *old = var_new_shape;
                        assert( old != NULL );
                        var_new_shape = tmp_assign_source_32;
                        Py_INCREF( var_new_shape );
                        Py_DECREF( old );
                    }

                }
                goto branch_end_14;
                branch_no_14:;
                {
                    nuitka_bool tmp_condition_result_15;
                    PyObject *tmp_compexpr_left_16;
                    PyObject *tmp_compexpr_right_16;
                    PyObject *tmp_len_arg_8;
                    CHECK_OBJECT( var_new_shape );
                    tmp_len_arg_8 = var_new_shape;
                    tmp_compexpr_left_16 = BUILTIN_LEN( tmp_len_arg_8 );
                    assert( !(tmp_compexpr_left_16 == NULL) );
                    tmp_compexpr_right_16 = const_int_pos_1;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
                    Py_DECREF( tmp_compexpr_left_16 );
                    assert( !(tmp_res == -1) );
                    tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_assign_source_33;
                        PyObject *tmp_tuple_element_5;
                        PyObject *tmp_subscribed_name_10;
                        PyObject *tmp_subscript_name_10;
                        tmp_tuple_element_5 = const_int_pos_1;
                        tmp_assign_source_33 = PyTuple_New( 2 );
                        Py_INCREF( tmp_tuple_element_5 );
                        PyTuple_SET_ITEM( tmp_assign_source_33, 0, tmp_tuple_element_5 );
                        CHECK_OBJECT( var_new_shape );
                        tmp_subscribed_name_10 = var_new_shape;
                        tmp_subscript_name_10 = const_int_0;
                        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, 0 );
                        if ( tmp_tuple_element_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_assign_source_33 );

                            exception_lineno = 317;
                            type_description_1 = "oooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        PyTuple_SET_ITEM( tmp_assign_source_33, 1, tmp_tuple_element_5 );
                        {
                            PyObject *old = var_new_shape;
                            assert( old != NULL );
                            var_new_shape = tmp_assign_source_33;
                            Py_DECREF( old );
                        }

                    }
                    branch_no_15:;
                }
                branch_end_14:;
            }
            branch_no_13:;
        }
        branch_end_5:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_17;
        PyObject *tmp_compexpr_right_17;
        PyObject *tmp_len_arg_9;
        if ( var_new_shape == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_shape" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 319;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_9 = var_new_shape;
        tmp_compexpr_left_17 = BUILTIN_LEN( tmp_len_arg_9 );
        if ( tmp_compexpr_left_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_17 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
        Py_DECREF( tmp_compexpr_left_17 );
        assert( !(tmp_res == -1) );
        tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_7;
            PyObject *tmp_make_exception_arg_7;
            tmp_make_exception_arg_7 = const_str_digest_d13ed9eab59afe1e8851087bbb3dcd3d;
            frame_e3337b33170f0892e4603771bde36e02->m_frame.f_lineno = 320;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_7 };
                tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_7 == NULL) );
            exception_type = tmp_raise_type_7;
            exception_lineno = 320;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_16:;
    }
    if ( var_new_shape == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_shape" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 322;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_new_shape;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3337b33170f0892e4603771bde36e02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3337b33170f0892e4603771bde36e02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3337b33170f0892e4603771bde36e02 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e3337b33170f0892e4603771bde36e02, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e3337b33170f0892e4603771bde36e02->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e3337b33170f0892e4603771bde36e02, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e3337b33170f0892e4603771bde36e02,
        type_description_1,
        par_args,
        par_current_shape,
        var_shape_iter,
        var_new_shape,
        var_current_size,
        var_negative_indexes,
        var_new_size,
        var_skip,
        var_specified,
        var_unspecified,
        var_remainder,
        var_err_shape
    );


    // Release cached frame.
    if ( frame_e3337b33170f0892e4603771bde36e02 == cache_frame_e3337b33170f0892e4603771bde36e02 )
    {
        Py_DECREF( frame_e3337b33170f0892e4603771bde36e02 );
    }
    cache_frame_e3337b33170f0892e4603771bde36e02 = NULL;

    assertFrameObject( frame_e3337b33170f0892e4603771bde36e02 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_16_check_shape );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_current_shape );
    Py_DECREF( par_current_shape );
    par_current_shape = NULL;

    Py_XDECREF( var_shape_iter );
    var_shape_iter = NULL;

    Py_XDECREF( var_new_shape );
    var_new_shape = NULL;

    Py_XDECREF( var_current_size );
    var_current_size = NULL;

    Py_XDECREF( var_negative_indexes );
    var_negative_indexes = NULL;

    Py_XDECREF( var_new_size );
    var_new_size = NULL;

    Py_XDECREF( var_skip );
    var_skip = NULL;

    Py_XDECREF( var_specified );
    var_specified = NULL;

    Py_XDECREF( var_unspecified );
    var_unspecified = NULL;

    Py_XDECREF( var_remainder );
    var_remainder = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_current_shape );
    Py_DECREF( par_current_shape );
    par_current_shape = NULL;

    Py_XDECREF( var_shape_iter );
    var_shape_iter = NULL;

    Py_XDECREF( var_new_shape );
    var_new_shape = NULL;

    Py_XDECREF( var_current_size );
    var_current_size = NULL;

    Py_XDECREF( var_negative_indexes );
    var_negative_indexes = NULL;

    Py_XDECREF( var_new_size );
    var_new_size = NULL;

    Py_XDECREF( var_skip );
    var_skip = NULL;

    Py_XDECREF( var_specified );
    var_specified = NULL;

    Py_XDECREF( var_unspecified );
    var_unspecified = NULL;

    Py_XDECREF( var_remainder );
    var_remainder = NULL;

    Py_XDECREF( var_err_shape );
    var_err_shape = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_16_check_shape );
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



struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_1_genexpr_locals {
    PyObject *var_arg;
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

static PyObject *scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_1_genexpr_locals *generator_heap = (struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_arg = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_8bc6439af4fdda7bc33f2d636b0d9c9e, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 277;
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
            PyObject *old = generator_heap->var_arg;
            generator_heap->var_arg = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_arg );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_operator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "operator" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 277;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( generator_heap->var_arg );
        tmp_args_element_name_1 = generator_heap->var_arg;
        generator->m_frame->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_expression_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_index, call_args );
        }

        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 277;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 277;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 277;
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
            generator_heap->var_arg
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

    Py_XDECREF( generator_heap->var_arg );
    generator_heap->var_arg = NULL;

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

    Py_XDECREF( generator_heap->var_arg );
    generator_heap->var_arg = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_1_genexpr_context,
        module_scipy$sparse$sputils,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_fc028243e2d5fb6bb8e7e0dd2135785e,
#endif
        codeobj_8bc6439af4fdda7bc33f2d636b0d9c9e,
        1,
        sizeof(struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_1_genexpr_locals)
    );
}



struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_2_genexpr_locals {
    PyObject *var_arg;
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

static PyObject *scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_2_genexpr_locals *generator_heap = (struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_arg = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_85fb82bc5d10e712978e936a3a62ab34, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 279;
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
            PyObject *old = generator_heap->var_arg;
            generator_heap->var_arg = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_arg );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_operator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "operator" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 279;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( generator_heap->var_arg );
        tmp_args_element_name_1 = generator_heap->var_arg;
        generator->m_frame->m_frame.f_lineno = 279;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_expression_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_index, call_args );
        }

        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 279;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 279;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 279;
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
            generator_heap->var_arg
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

    Py_XDECREF( generator_heap->var_arg );
    generator_heap->var_arg = NULL;

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

    Py_XDECREF( generator_heap->var_arg );
    generator_heap->var_arg = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_2_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_2_genexpr_context,
        module_scipy$sparse$sputils,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_fc028243e2d5fb6bb8e7e0dd2135785e,
#endif
        codeobj_85fb82bc5d10e712978e936a3a62ab34,
        1,
        sizeof(struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_2_genexpr_locals)
    );
}



struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_3_genexpr_locals {
    PyObject *var_x;
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

static PyObject *scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_3_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_3_genexpr_locals *generator_heap = (struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_3_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_0efc4cbf3df2bdd8bc1f52ee432be6d3, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 303;
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
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_x );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_x );
        tmp_compexpr_left_1 = generator_heap->var_x;
        tmp_compexpr_right_1 = const_int_0;
        generator_heap->tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 303;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_expression_name_1 = const_str_plain_newshape;
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( generator_heap->var_x );
        tmp_expression_name_1 = generator_heap->var_x;
        condexpr_end_1:;
        Py_INCREF( tmp_expression_name_1 );
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 303;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 303;
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
            generator_heap->var_x
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

    Py_XDECREF( generator_heap->var_x );
    generator_heap->var_x = NULL;

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

    Py_XDECREF( generator_heap->var_x );
    generator_heap->var_x = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_3_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_3_genexpr_context,
        module_scipy$sparse$sputils,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_fc028243e2d5fb6bb8e7e0dd2135785e,
#endif
        codeobj_0efc4cbf3df2bdd8bc1f52ee432be6d3,
        1,
        sizeof(struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_3_genexpr_locals)
    );
}



struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_4_genexpr_locals {
    PyObject *var_arg;
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

static PyObject *scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_4_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_4_genexpr_locals *generator_heap = (struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_4_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_arg = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_24ca064a56e263c82cc462663d46873a, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 312;
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
            PyObject *old = generator_heap->var_arg;
            generator_heap->var_arg = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_arg );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( generator_heap->var_arg );
        tmp_compexpr_left_1 = generator_heap->var_arg;
        tmp_compexpr_right_1 = const_int_pos_1;
        generator_heap->tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 312;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
            CHECK_OBJECT( generator_heap->var_arg );
            tmp_expression_name_1 = generator_heap->var_arg;
            Py_INCREF( tmp_expression_name_1 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), NULL );
            generator->m_yield_return_index = 1;
            return tmp_expression_name_1;
            yield_return_1:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 312;
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


        generator_heap->exception_lineno = 312;
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
            generator_heap->var_arg
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

    Py_XDECREF( generator_heap->var_arg );
    generator_heap->var_arg = NULL;

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

    Py_XDECREF( generator_heap->var_arg );
    generator_heap->var_arg = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_4_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_4_genexpr_context,
        module_scipy$sparse$sputils,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_fc028243e2d5fb6bb8e7e0dd2135785e,
#endif
        codeobj_24ca064a56e263c82cc462663d46873a,
        1,
        sizeof(struct scipy$sparse$sputils$$$function_16_check_shape$$$genexpr_4_genexpr_locals)
    );
}


static PyObject *impl_scipy$sparse$sputils$$$function_17_check_reshape_kwargs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_kwargs = python_pars[ 0 ];
    PyObject *var_order = NULL;
    PyObject *var_copy = NULL;
    struct Nuitka_FrameObject *frame_697bdd098fb74dfbba292888d518c129;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_697bdd098fb74dfbba292888d518c129 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_697bdd098fb74dfbba292888d518c129, codeobj_697bdd098fb74dfbba292888d518c129, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_697bdd098fb74dfbba292888d518c129 = cache_frame_697bdd098fb74dfbba292888d518c129;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_697bdd098fb74dfbba292888d518c129 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_697bdd098fb74dfbba292888d518c129 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_1 = par_kwargs;
        frame_697bdd098fb74dfbba292888d518c129->m_frame.f_lineno = 334;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_order_str_plain_C_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_order == NULL );
        var_order = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_2 = par_kwargs;
        frame_697bdd098fb74dfbba292888d518c129->m_frame.f_lineno = 335;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_copy_false_tuple, 0 ) );

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 335;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_copy == NULL );
        var_copy = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_kwargs );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_kwargs );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_instance_3;
            tmp_source_name_1 = const_str_digest_9ce560d9d30b15f6f0d58730bf67ec75;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
            assert( !(tmp_called_name_1 == NULL) );
            tmp_source_name_2 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
            assert( !(tmp_called_name_2 == NULL) );
            CHECK_OBJECT( par_kwargs );
            tmp_called_instance_3 = par_kwargs;
            frame_697bdd098fb74dfbba292888d518c129->m_frame.f_lineno = 338;
            tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_keys );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 338;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_697bdd098fb74dfbba292888d518c129->m_frame.f_lineno = 338;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 338;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_697bdd098fb74dfbba292888d518c129->m_frame.f_lineno = 337;
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


                exception_lineno = 337;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_697bdd098fb74dfbba292888d518c129->m_frame.f_lineno = 337;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 337;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_697bdd098fb74dfbba292888d518c129 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_697bdd098fb74dfbba292888d518c129 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_697bdd098fb74dfbba292888d518c129, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_697bdd098fb74dfbba292888d518c129->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_697bdd098fb74dfbba292888d518c129, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_697bdd098fb74dfbba292888d518c129,
        type_description_1,
        par_kwargs,
        var_order,
        var_copy
    );


    // Release cached frame.
    if ( frame_697bdd098fb74dfbba292888d518c129 == cache_frame_697bdd098fb74dfbba292888d518c129 )
    {
        Py_DECREF( frame_697bdd098fb74dfbba292888d518c129 );
    }
    cache_frame_697bdd098fb74dfbba292888d518c129 = NULL;

    assertFrameObject( frame_697bdd098fb74dfbba292888d518c129 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_order );
        tmp_tuple_element_1 = var_order;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_copy );
        tmp_tuple_element_1 = var_copy;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_17_check_reshape_kwargs );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_order );
    Py_DECREF( var_order );
    var_order = NULL;

    CHECK_OBJECT( (PyObject *)var_copy );
    Py_DECREF( var_copy );
    var_copy = NULL;

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

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_copy );
    var_copy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_17_check_reshape_kwargs );
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


static PyObject *impl_scipy$sparse$sputils$$$function_18_matrix( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_eb154f84a54f9b36d8a223d064ec48f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_eb154f84a54f9b36d8a223d064ec48f8 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eb154f84a54f9b36d8a223d064ec48f8, codeobj_eb154f84a54f9b36d8a223d064ec48f8, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *) );
    frame_eb154f84a54f9b36d8a223d064ec48f8 = cache_frame_eb154f84a54f9b36d8a223d064ec48f8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eb154f84a54f9b36d8a223d064ec48f8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eb154f84a54f9b36d8a223d064ec48f8 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_warnings );

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

            exception_lineno = 346;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_catch_warnings );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_aae7649b9175b1ed5738500d56e46831 );
        frame_eb154f84a54f9b36d8a223d064ec48f8->m_frame.f_lineno = 346;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_eb154f84a54f9b36d8a223d064ec48f8->m_frame.f_lineno = 346;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_3 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___exit__ );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_warnings );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 347;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        frame_eb154f84a54f9b36d8a223d064ec48f8->m_frame.f_lineno = 347;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_filterwarnings, &PyTuple_GET_ITEM( const_tuple_str_plain_ignore_str_digest_830e68f2d7752b1bf5d5136be0dc4157_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 347;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 349;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_matrix );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        goto try_return_handler_3;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_18_matrix );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_eb154f84a54f9b36d8a223d064ec48f8, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_eb154f84a54f9b36d8a223d064ec48f8, exception_keeper_lineno_1 );
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
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oo";
            goto try_except_handler_5;
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
            nuitka_bool tmp_assign_source_5;
            tmp_assign_source_5 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_5;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_3 = tmp_with_1__exit;
            tmp_args_element_name_1 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_2 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_3 = EXC_TRACEBACK(PyThreadState_GET());
            frame_eb154f84a54f9b36d8a223d064ec48f8->m_frame.f_lineno = 346;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "oo";
                goto try_except_handler_5;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "oo";
                goto try_except_handler_5;
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 346;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_eb154f84a54f9b36d8a223d064ec48f8->m_frame) frame_eb154f84a54f9b36d8a223d064ec48f8->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oo";
            goto try_except_handler_5;
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 346;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_eb154f84a54f9b36d8a223d064ec48f8->m_frame) frame_eb154f84a54f9b36d8a223d064ec48f8->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_5;
        branch_end_1:;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_18_matrix );
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( tmp_with_1__exit );
        tmp_called_name_4 = tmp_with_1__exit;
        frame_eb154f84a54f9b36d8a223d064ec48f8->m_frame.f_lineno = 346;
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    goto try_return_handler_2;
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

    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_5 = tmp_with_1__exit;
            frame_eb154f84a54f9b36d8a223d064ec48f8->m_frame.f_lineno = 346;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 346;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_3:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
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
            PyObject *tmp_called_name_6;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_6 = tmp_with_1__exit;
            frame_eb154f84a54f9b36d8a223d064ec48f8->m_frame.f_lineno = 346;
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_4:;
    }
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb154f84a54f9b36d8a223d064ec48f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb154f84a54f9b36d8a223d064ec48f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb154f84a54f9b36d8a223d064ec48f8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb154f84a54f9b36d8a223d064ec48f8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb154f84a54f9b36d8a223d064ec48f8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb154f84a54f9b36d8a223d064ec48f8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eb154f84a54f9b36d8a223d064ec48f8,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_eb154f84a54f9b36d8a223d064ec48f8 == cache_frame_eb154f84a54f9b36d8a223d064ec48f8 )
    {
        Py_DECREF( frame_eb154f84a54f9b36d8a223d064ec48f8 );
    }
    cache_frame_eb154f84a54f9b36d8a223d064ec48f8 = NULL;

    assertFrameObject( frame_eb154f84a54f9b36d8a223d064ec48f8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_18_matrix );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_18_matrix );
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


static PyObject *impl_scipy$sparse$sputils$$$function_19_asmatrix( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_fcab81a8ca789dc26d17b7b0469aa7fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_fcab81a8ca789dc26d17b7b0469aa7fd = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fcab81a8ca789dc26d17b7b0469aa7fd, codeobj_fcab81a8ca789dc26d17b7b0469aa7fd, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *) );
    frame_fcab81a8ca789dc26d17b7b0469aa7fd = cache_frame_fcab81a8ca789dc26d17b7b0469aa7fd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fcab81a8ca789dc26d17b7b0469aa7fd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fcab81a8ca789dc26d17b7b0469aa7fd ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_warnings );

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

            exception_lineno = 353;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_catch_warnings );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_aae7649b9175b1ed5738500d56e46831 );
        frame_fcab81a8ca789dc26d17b7b0469aa7fd->m_frame.f_lineno = 353;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_fcab81a8ca789dc26d17b7b0469aa7fd->m_frame.f_lineno = 353;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_3 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___exit__ );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_warnings );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 354;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        frame_fcab81a8ca789dc26d17b7b0469aa7fd->m_frame.f_lineno = 354;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_filterwarnings, &PyTuple_GET_ITEM( const_tuple_str_plain_ignore_str_digest_830e68f2d7752b1bf5d5136be0dc4157_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 354;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 356;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_asmatrix );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        goto try_return_handler_3;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_19_asmatrix );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_fcab81a8ca789dc26d17b7b0469aa7fd, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_fcab81a8ca789dc26d17b7b0469aa7fd, exception_keeper_lineno_1 );
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
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "oo";
            goto try_except_handler_5;
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
            nuitka_bool tmp_assign_source_5;
            tmp_assign_source_5 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_5;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_3 = tmp_with_1__exit;
            tmp_args_element_name_1 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_2 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_3 = EXC_TRACEBACK(PyThreadState_GET());
            frame_fcab81a8ca789dc26d17b7b0469aa7fd->m_frame.f_lineno = 353;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 353;
                type_description_1 = "oo";
                goto try_except_handler_5;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 353;
                type_description_1 = "oo";
                goto try_except_handler_5;
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 353;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_fcab81a8ca789dc26d17b7b0469aa7fd->m_frame) frame_fcab81a8ca789dc26d17b7b0469aa7fd->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oo";
            goto try_except_handler_5;
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 353;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_fcab81a8ca789dc26d17b7b0469aa7fd->m_frame) frame_fcab81a8ca789dc26d17b7b0469aa7fd->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_5;
        branch_end_1:;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_19_asmatrix );
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( tmp_with_1__exit );
        tmp_called_name_4 = tmp_with_1__exit;
        frame_fcab81a8ca789dc26d17b7b0469aa7fd->m_frame.f_lineno = 353;
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    goto try_return_handler_2;
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

    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_5 = tmp_with_1__exit;
            frame_fcab81a8ca789dc26d17b7b0469aa7fd->m_frame.f_lineno = 353;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 353;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_3:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
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
            PyObject *tmp_called_name_6;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_6 = tmp_with_1__exit;
            frame_fcab81a8ca789dc26d17b7b0469aa7fd->m_frame.f_lineno = 353;
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 353;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_4:;
    }
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcab81a8ca789dc26d17b7b0469aa7fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcab81a8ca789dc26d17b7b0469aa7fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcab81a8ca789dc26d17b7b0469aa7fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fcab81a8ca789dc26d17b7b0469aa7fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fcab81a8ca789dc26d17b7b0469aa7fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fcab81a8ca789dc26d17b7b0469aa7fd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fcab81a8ca789dc26d17b7b0469aa7fd,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_fcab81a8ca789dc26d17b7b0469aa7fd == cache_frame_fcab81a8ca789dc26d17b7b0469aa7fd )
    {
        Py_DECREF( frame_fcab81a8ca789dc26d17b7b0469aa7fd );
    }
    cache_frame_fcab81a8ca789dc26d17b7b0469aa7fd = NULL;

    assertFrameObject( frame_fcab81a8ca789dc26d17b7b0469aa7fd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_19_asmatrix );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_19_asmatrix );
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


static PyObject *impl_scipy$sparse$sputils$$$function_20_bmat( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_2a7dbd12d36a9938ef53dc18fba59b7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_2a7dbd12d36a9938ef53dc18fba59b7a = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2a7dbd12d36a9938ef53dc18fba59b7a, codeobj_2a7dbd12d36a9938ef53dc18fba59b7a, module_scipy$sparse$sputils, sizeof(void *)+sizeof(void *) );
    frame_2a7dbd12d36a9938ef53dc18fba59b7a = cache_frame_2a7dbd12d36a9938ef53dc18fba59b7a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2a7dbd12d36a9938ef53dc18fba59b7a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2a7dbd12d36a9938ef53dc18fba59b7a ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_warnings );

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

            exception_lineno = 360;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_catch_warnings );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_aae7649b9175b1ed5738500d56e46831 );
        frame_2a7dbd12d36a9938ef53dc18fba59b7a->m_frame.f_lineno = 360;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_2a7dbd12d36a9938ef53dc18fba59b7a->m_frame.f_lineno = 360;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_3 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___exit__ );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_warnings );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 361;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        frame_2a7dbd12d36a9938ef53dc18fba59b7a->m_frame.f_lineno = 361;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_filterwarnings, &PyTuple_GET_ITEM( const_tuple_str_plain_ignore_str_digest_830e68f2d7752b1bf5d5136be0dc4157_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 363;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_bmat );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        goto try_return_handler_3;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_20_bmat );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_2a7dbd12d36a9938ef53dc18fba59b7a, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_2a7dbd12d36a9938ef53dc18fba59b7a, exception_keeper_lineno_1 );
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
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "oo";
            goto try_except_handler_5;
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
            nuitka_bool tmp_assign_source_5;
            tmp_assign_source_5 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_5;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_3 = tmp_with_1__exit;
            tmp_args_element_name_1 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_2 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_3 = EXC_TRACEBACK(PyThreadState_GET());
            frame_2a7dbd12d36a9938ef53dc18fba59b7a->m_frame.f_lineno = 360;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 360;
                type_description_1 = "oo";
                goto try_except_handler_5;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 360;
                type_description_1 = "oo";
                goto try_except_handler_5;
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 360;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_2a7dbd12d36a9938ef53dc18fba59b7a->m_frame) frame_2a7dbd12d36a9938ef53dc18fba59b7a->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oo";
            goto try_except_handler_5;
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 360;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_2a7dbd12d36a9938ef53dc18fba59b7a->m_frame) frame_2a7dbd12d36a9938ef53dc18fba59b7a->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_5;
        branch_end_1:;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_20_bmat );
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( tmp_with_1__exit );
        tmp_called_name_4 = tmp_with_1__exit;
        frame_2a7dbd12d36a9938ef53dc18fba59b7a->m_frame.f_lineno = 360;
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    goto try_return_handler_2;
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

    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_5 = tmp_with_1__exit;
            frame_2a7dbd12d36a9938ef53dc18fba59b7a->m_frame.f_lineno = 360;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 360;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_3:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
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
            PyObject *tmp_called_name_6;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_6 = tmp_with_1__exit;
            frame_2a7dbd12d36a9938ef53dc18fba59b7a->m_frame.f_lineno = 360;
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 360;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_4:;
    }
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a7dbd12d36a9938ef53dc18fba59b7a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a7dbd12d36a9938ef53dc18fba59b7a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a7dbd12d36a9938ef53dc18fba59b7a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2a7dbd12d36a9938ef53dc18fba59b7a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2a7dbd12d36a9938ef53dc18fba59b7a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2a7dbd12d36a9938ef53dc18fba59b7a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2a7dbd12d36a9938ef53dc18fba59b7a,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_2a7dbd12d36a9938ef53dc18fba59b7a == cache_frame_2a7dbd12d36a9938ef53dc18fba59b7a )
    {
        Py_DECREF( frame_2a7dbd12d36a9938ef53dc18fba59b7a );
    }
    cache_frame_2a7dbd12d36a9938ef53dc18fba59b7a = NULL;

    assertFrameObject( frame_2a7dbd12d36a9938ef53dc18fba59b7a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_20_bmat );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils$$$function_20_bmat );
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



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_10_isintlike(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_10_isintlike,
        const_str_plain_isintlike,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e550827aa4f9c510a0d090d7e1d49afd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        const_str_digest_50561ca9c0061d5d53ac674468841db2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_11_isshape( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_11_isshape,
        const_str_plain_isshape,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3b4ad2b7f1c9c5c6073b5c80fdaef8c0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        const_str_digest_75321477487d0e0e2729069304ce544b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_12_issequence(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_12_issequence,
        const_str_plain_issequence,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_81a87b8e86518cc5f25368624c6dc607,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_13_ismatrix(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_13_ismatrix,
        const_str_plain_ismatrix,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5a17d896f5e190852e08d41634c60eb2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_14_isdense(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_14_isdense,
        const_str_plain_isdense,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6f50ca83aed62a3c9822f5990acf5505,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_15_validateaxis(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_15_validateaxis,
        const_str_plain_validateaxis,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_95c83887c493fc1b20496fe902537642,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_16_check_shape( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_16_check_shape,
        const_str_plain_check_shape,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e3337b33170f0892e4603771bde36e02,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        const_str_digest_23ca6266112cf1254a59ac0f84cd4036,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_17_check_reshape_kwargs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_17_check_reshape_kwargs,
        const_str_plain_check_reshape_kwargs,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_697bdd098fb74dfbba292888d518c129,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        const_str_digest_ad9aa71b76a96150aa308f60b18214ef,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_18_matrix(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_18_matrix,
        const_str_plain_matrix,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eb154f84a54f9b36d8a223d064ec48f8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_19_asmatrix(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_19_asmatrix,
        const_str_plain_asmatrix,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fcab81a8ca789dc26d17b7b0469aa7fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_1_upcast(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_1_upcast,
        const_str_plain_upcast,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f216a71d6308a2a509ab4377986927ea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        const_str_digest_bb90606f61407051aad3e8d5eead8a32,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_20_bmat(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_20_bmat,
        const_str_plain_bmat,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2a7dbd12d36a9938ef53dc18fba59b7a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_2_upcast_char(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_2_upcast_char,
        const_str_plain_upcast_char,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_aae53ddececf5a1e7aa61bec6adbf841,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        const_str_digest_abf027c9ce998ed72e7bfe3d1c90d789,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_3_upcast_scalar(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_3_upcast_scalar,
        const_str_plain_upcast_scalar,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_105e5bfda041430774e7ab3437ec0ada,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        const_str_digest_48c813afdf7b38992257e860c025a82f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_4_downcast_intp_index(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_4_downcast_intp_index,
        const_str_plain_downcast_intp_index,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7b324050016ceaa7e83502dbd5050c3f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        const_str_digest_225c50c482cc48465a38ad9e277fbd0b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_5_to_native(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_5_to_native,
        const_str_plain_to_native,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_01c58817fe566496de7e4e4b19383faa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_6_getdtype( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_6_getdtype,
        const_str_plain_getdtype,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c26188fe2ae85ef1fbcd31dcfe0d9a5a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        const_str_digest_f61b3caca5b0568d507100fbe03b8c41,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_7_get_index_dtype( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_7_get_index_dtype,
        const_str_plain_get_index_dtype,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_007facfcd7c2abb80f919ba00b5820fc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        const_str_digest_4e80d523d5bc1b4c708ade3f48a6e696,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_8_get_sum_dtype(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_8_get_sum_dtype,
        const_str_plain_get_sum_dtype,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7ae266d7101a881934bd80a3334089ea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        const_str_digest_517a92fde430a2642ef14b40ee4e00f4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$sputils$$$function_9_isscalarlike(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$sputils$$$function_9_isscalarlike,
        const_str_plain_isscalarlike,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5b2d0a62e278ba14a901f426c66362c4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$sputils,
        const_str_digest_c98ea283ad808c1618a73d2401927f1e,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$sputils =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.sputils",
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

MOD_INIT_DECL( scipy$sparse$sputils )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$sputils );
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
    puts("scipy.sparse.sputils: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.sputils: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.sputils: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$sparse$sputils" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$sputils = Py_InitModule4(
        "scipy.sparse.sputils",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$sparse$sputils = PyModule_Create( &mdef_scipy$sparse$sputils );
#endif

    moduledict_scipy$sparse$sputils = MODULE_DICT( module_scipy$sparse$sputils );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$sparse$sputils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$sparse$sputils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$sputils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$sputils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$sparse$sputils );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_b154d9a32d645430293e9aa4df65c702, module_scipy$sparse$sputils );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_68e95c7cdd48a814cabe8fefca85b334;
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
    struct Nuitka_FrameObject *frame_3030603a90fc4d78b5dcfc6b56378020_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_3030603a90fc4d78b5dcfc6b56378020_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_ecc13e648ad01d5b8cb01ee6773bde3b;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_68e95c7cdd48a814cabe8fefca85b334 = MAKE_MODULE_FRAME( codeobj_68e95c7cdd48a814cabe8fefca85b334, module_scipy$sparse$sputils );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_68e95c7cdd48a814cabe8fefca85b334 );
    assert( Py_REFCNT( frame_68e95c7cdd48a814cabe8fefca85b334 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_68e95c7cdd48a814cabe8fefca85b334->m_frame.f_lineno = 4;
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_plain_operator;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$sputils;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_68e95c7cdd48a814cabe8fefca85b334->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_operator, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_warnings;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$sparse$sputils;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_68e95c7cdd48a814cabe8fefca85b334->m_frame.f_lineno = 7;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_numpy;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$sparse$sputils;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_68e95c7cdd48a814cabe8fefca85b334->m_frame.f_lineno = 8;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = LIST_COPY( const_list_94454c6cbe82d8f7cc716cbc93da97e8_list );
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = LIST_COPY( const_list_a194acf77f6c8f2e8812a2ee5283bbd8_list );
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_supported_dtypes, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_supported_dtypes );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_supported_dtypes );
            }

            CHECK_OBJECT( tmp_mvar_value_3 );
            tmp_iter_arg_1 = tmp_mvar_value_3;
            tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;

                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_15;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_3030603a90fc4d78b5dcfc6b56378020_2, codeobj_3030603a90fc4d78b5dcfc6b56378020, module_scipy$sparse$sputils, sizeof(void *) );
        frame_3030603a90fc4d78b5dcfc6b56378020_2 = cache_frame_3030603a90fc4d78b5dcfc6b56378020_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_3030603a90fc4d78b5dcfc6b56378020_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_3030603a90fc4d78b5dcfc6b56378020_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
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
                    type_description_2 = "o";
                    exception_lineno = 16;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_16;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_17 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_17;
                Py_INCREF( outline_0_var_x );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 16;
                type_description_2 = "o";
                goto try_except_handler_3;
            }

            tmp_source_name_1 = tmp_mvar_value_4;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_typeDict );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( outline_0_var_x );
            tmp_subscript_name_1 = outline_0_var_x;
            tmp_append_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;
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


                exception_lineno = 16;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_13 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_13 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils );
        return MOD_RETURN_VALUE( NULL );
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
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
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
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_3030603a90fc4d78b5dcfc6b56378020_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_3030603a90fc4d78b5dcfc6b56378020_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_3030603a90fc4d78b5dcfc6b56378020_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_3030603a90fc4d78b5dcfc6b56378020_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_3030603a90fc4d78b5dcfc6b56378020_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_3030603a90fc4d78b5dcfc6b56378020_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_3030603a90fc4d78b5dcfc6b56378020_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame.
        if ( frame_3030603a90fc4d78b5dcfc6b56378020_2 == cache_frame_3030603a90fc4d78b5dcfc6b56378020_2 )
        {
            Py_DECREF( frame_3030603a90fc4d78b5dcfc6b56378020_2 );
        }
        cache_frame_3030603a90fc4d78b5dcfc6b56378020_2 = NULL;

        assertFrameObject( frame_3030603a90fc4d78b5dcfc6b56378020_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_x );
        outline_0_var_x = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_x );
        outline_0_var_x = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$sparse$sputils );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 16;
        goto frame_exception_exit_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_supported_dtypes, tmp_assign_source_13 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_68e95c7cdd48a814cabe8fefca85b334 );
#endif
    popFrameStack();

    assertFrameObject( frame_68e95c7cdd48a814cabe8fefca85b334 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_68e95c7cdd48a814cabe8fefca85b334 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_68e95c7cdd48a814cabe8fefca85b334, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_68e95c7cdd48a814cabe8fefca85b334->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_68e95c7cdd48a814cabe8fefca85b334, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyDict_New();
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain__upcast_memo, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_1_upcast(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_upcast, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_2_upcast_char(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_upcast_char, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_3_upcast_scalar(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_upcast_scalar, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_4_downcast_intp_index(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_downcast_intp_index, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_5_to_native(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_to_native, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_24 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_6_getdtype( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_getdtype, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_tuple_empty_none_false_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_25 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_7_get_index_dtype( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_get_index_dtype, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_8_get_sum_dtype(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_get_sum_dtype, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_9_isscalarlike(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_isscalarlike, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_10_isintlike(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_isintlike, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_29 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_11_isshape( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_isshape, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_12_issequence(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_issequence, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_13_ismatrix(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_ismatrix, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_14_isdense(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_isdense, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_15_validateaxis(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_validateaxis, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_34 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_16_check_shape( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_check_shape, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_17_check_reshape_kwargs(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_check_reshape_kwargs, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_18_matrix(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_matrix, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_19_asmatrix(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_asmatrix, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_scipy$sparse$sputils$$$function_20_bmat(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain_bmat, tmp_assign_source_38 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$sputils, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$sputils );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
