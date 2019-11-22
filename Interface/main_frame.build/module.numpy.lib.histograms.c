/* Generated code for Python module 'numpy.lib.histograms'
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

/* The "_module_numpy$lib$histograms" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$histograms;
PyDictObject *moduledict_numpy$lib$histograms;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_temp;
extern PyObject *const_str_plain_warn;
static PyObject *const_tuple_707a4481a62b09650e80b69d8214f005_tuple;
extern PyObject *const_str_plain_sample;
extern PyObject *const_str_plain_index;
static PyObject *const_str_digest_57ddb94ab4e2073718a48253623dc3d1;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_unsafe;
static PyObject *const_str_plain__hist_bin_scott;
extern PyObject *const_float_0_3333333333333333;
extern PyObject *const_str_plain_scott;
extern PyObject *const_str_plain_isfinite;
extern PyObject *const_str_plain_ones;
static PyObject *const_str_plain_first_edge;
static PyObject *const_str_digest_187e8a092d90bb33273f86353a526cfc;
extern PyObject *const_str_plain_i;
extern PyObject *const_slice_int_pos_1_none_none;
static PyObject *const_str_plain__hist_bin_auto;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_ab62ef9e1e0a621517e2efda8ed1e995;
static PyObject *const_str_digest_360a9460cd5e41f3703f9202eccb9a14;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_max;
static PyObject *const_str_digest_a38e70e8e4a2e434070548a8308bdd75;
extern PyObject *const_str_plain___exit__;
static PyObject *const_str_digest_de822264a87a8f251ed358c29ef1e728;
extern PyObject *const_str_plain_double;
static PyObject *const_str_plain__hist_bin_doane;
extern PyObject *const_slice_int_pos_1_int_neg_1_none;
extern PyObject *const_str_plain_edges;
extern PyObject *const_str_plain_any;
static PyObject *const_str_digest_6a2a9c963550ddc470865d4941def949;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_a;
static PyObject *const_str_digest_50a6a9653c3363fa6a6e91d089baf5f4;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
static PyObject *const_list_6b84c5450eba456fbc28d20051c0a10b_list;
extern PyObject *const_dict_6e6659be28864e39bad7cab4409b7e16;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain__ravel_and_check_weights;
static PyObject *const_tuple_slice_int_pos_1_int_neg_1_none_tuple;
static PyObject *const_tuple_dacc1dc377fca3f704875d128efd5c49_tuple;
static PyObject *const_str_digest_f441901e8ea0d0ddea5ee044a48aa25a;
extern PyObject *const_float_24_0;
static PyObject *const_tuple_str_plain_a_str_plain_bins_str_plain_range_str_plain_weights_tuple;
extern PyObject *const_str_plain_size;
static PyObject *const_str_digest_356e1443c2d562ea3a8727214b874ff1;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_ptp;
static PyObject *const_str_digest_0fd412be68fda30b7d8200dff02a084e;
extern PyObject *const_int_pos_25;
extern PyObject *const_str_plain_iqr;
extern PyObject *const_str_plain_linspace;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_float_0_5;
static PyObject *const_str_plain__unsigned_subtract;
static PyObject *const_str_digest_3e613db086e44e5d2faf08184ac1bd92;
extern PyObject *const_str_plain_auto;
extern PyObject *const_str_plain_int_;
extern PyObject *const_str_digest_65bec798bc2cd8b837759d8fe641668b;
static PyObject *const_str_plain_ptp_x;
extern PyObject *const_str_plain_suppress;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_tuple_type_TypeError_tuple;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_str_plain_subtract;
extern PyObject *const_tuple_int_pos_1_tuple;
static PyObject *const_str_digest_43c5c103d098849f38e4df490ac8ab24;
extern PyObject *const_tuple_str_plain_overrides_tuple;
static PyObject *const_str_plain_bin_edges;
extern PyObject *const_str_plain_contextlib;
extern PyObject *const_str_plain_VisibleDeprecationWarning;
static PyObject *const_str_plain__hist_bin_sturges;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_22e110f6413d0a15307c542631813fff_tuple;
static PyObject *const_str_plain_g1;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_uintc;
extern PyObject *const_str_plain_log2;
extern PyObject *const_str_plain_bincount;
static PyObject *const_list_int_pos_75_int_pos_25_list;
extern PyObject *const_str_plain_bool_;
extern PyObject *const_str_plain_sturges;
static PyObject *const_str_digest_35cf97b698f90eb4dcd3bafcdca25774;
extern PyObject *const_tuple_int_pos_10_none_none_tuple;
static PyObject *const_tuple_aaf871c924700b8086b528c5cd95aaf5_tuple;
extern PyObject *const_int_pos_75;
extern PyObject *const_str_plain_histogram_bin_edges;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_true_divide;
static PyObject *const_str_digest_b6553af7e853f5349ce1ed9ef52e2021;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_str_plain_sg1;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_digest_eb9aa7ba876fd396d9e99c470f069f32;
static PyObject *const_str_plain_last_edge;
extern PyObject *const_str_plain_ulonglong;
extern PyObject *const_str_plain_keep;
extern PyObject *const_str_plain_histogramdd;
extern PyObject *const_str_plain_pi;
extern PyObject *const_str_plain_n;
static PyObject *const_str_plain_bin_name;
static PyObject *const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple;
extern PyObject *const_str_plain_min;
static PyObject *const_str_plain_nbins_upper_bound;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_percentile;
extern PyObject *const_str_plain_int;
static PyObject *const_str_digest_cf00e012f8543c58ae37ef03e0d8130e;
extern PyObject *const_float_2_0;
extern PyObject *const_float_6_0;
static PyObject *const_str_plain__get_outer_edges;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_dict_2254aca578e492e580f4e46a40647b9b;
extern PyObject *const_str_plain_argsort;
static PyObject *const_tuple_88d02817c6c21266d0c0bae992674c02_tuple;
extern PyObject *const_str_plain_imag;
static PyObject *const_str_plain_hh;
extern PyObject *const_str_plain_fd;
static PyObject *const_tuple_7f350d7a8167592a73376b40e24bf170_tuple;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_normed;
extern PyObject *const_str_plain_casting;
extern PyObject *const_str_plain_endpoint;
static PyObject *const_str_plain_fd_bw;
extern PyObject *const_str_plain_asarray;
static PyObject *const_tuple_24a29fa5d953a2276bb398432ac6fa1f_tuple;
static PyObject *const_str_digest_8f4feae6666d6286958836942304ebb9;
extern PyObject *const_slice_int_neg_1_none_none;
extern PyObject *const_str_plain_prod;
static PyObject *const_str_plain_stone;
extern PyObject *const_str_plain_side;
extern PyObject *const_str_plain_power;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_density;
static PyObject *const_str_digest_501dd2c789346deefe2dddd8ff4becbd;
static PyObject *const_str_digest_65b356a128d857f2d8cc66bc4024af30;
extern PyObject *const_tuple_str_plain_basestring_tuple;
extern PyObject *const_str_plain_RuntimeWarning;
static PyObject *const_str_plain__histogramdd_dispatcher;
extern PyObject *const_str_plain_intc;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_str_plain_bins;
extern PyObject *const_str_plain_integer;
extern PyObject *const_str_plain_b;
static PyObject *const_str_plain_n_equal_bins;
extern PyObject *const_str_plain_result_type;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_plain_searchsorted;
static PyObject *const_str_digest_ebb66978bbbca4473fc0ea06c02391f4;
extern PyObject *const_str_plain_concatenate;
extern PyObject *const_str_plain_absolute;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_82fc790eee97164d630d703544b810e9;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_5edbc2f26ee97665f4b7769eeaba00a7;
extern PyObject *const_str_plain_uint;
extern PyObject *const_tuple_none_none_none_none_none_tuple;
static PyObject *const_str_digest_49dedb75c4afa2cec89418477bee7bcd;
static PyObject *const_str_plain__histogram_bin_edges_dispatcher;
static PyObject *const_str_digest_074dc1166c4eba46d59726e482e22620;
extern PyObject *const_str_plain_atleast_2d;
extern PyObject *const_tuple_type_float_tuple;
extern PyObject *const_str_plain_overrides;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ubyte;
static PyObject *const_str_plain_jhat;
static PyObject *const_str_plain__hist_bin_rice;
extern PyObject *const_str_plain_std;
extern PyObject *const_tuple_int_0_int_pos_1_tuple;
static PyObject *const_str_plain_sturges_bw;
static PyObject *const_str_plain__search_sorted_inclusive;
extern PyObject *const_str_plain_minlength;
extern PyObject *const_str_plain_complex;
extern PyObject *const_str_plain_logical_and;
extern PyObject *const_str_plain_histogram;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
extern PyObject *const_str_plain_ravel_multi_index;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_ravel;
extern PyObject *const_str_plain_longlong;
static PyObject *const_str_digest_2f1f044a6adcb783095a39e7ecd560fb;
static PyObject *const_str_plain__hist_bin_selectors;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_right;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_de203610522c75f882628dd603347dbe;
extern PyObject *const_str_plain_c;
static PyObject *const_tuple_0dd1d2a61ca352f8299afed087e57b44_tuple;
static PyObject *const_str_digest_253c3683e1ad1330633483d345accb51;
static PyObject *const_str_plain__get_bin_edges;
extern PyObject *const_str_plain_safe;
static PyObject *const_str_plain_p_k;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_40a2bb5021a5bbd5a28abb51a74b34f0;
static PyObject *const_str_digest_6f68ca161a0e83f1ffb1aef6f03cbb13;
static PyObject *const_str_plain__histogram_dispatcher;
extern PyObject *const_str_plain_intp;
extern PyObject *const_list_none_list;
static PyObject *const_str_plain__hist_bin_fd;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_9a8ad637f4ec3e8cc7e093bf1fe25cfc_tuple;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_ushort;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain__;
extern PyObject *const_dict_607b85ec57ab5596c680ca014e9c8645;
extern PyObject *const_str_plain_cumsum;
extern PyObject *const_str_plain_diff;
extern PyObject *const_str_plain_basestring;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_digest_fc92ac17c5c16f543ce66d47da76a47e;
static PyObject *const_tuple_str_plain_a_str_plain_weights_tuple;
extern PyObject *const_str_plain_dot;
extern PyObject *const_float_minus_0_3333333333333333;
extern PyObject *const_str_plain_functools;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_nbins;
extern PyObject *const_str_plain_kind;
extern PyObject *const_str_plain_array_function_dispatch;
static PyObject *const_tuple_e258eb649547c9f72ba5cdf191708e5a_tuple;
extern PyObject *const_str_plain_range;
static PyObject *const_str_digest_3cefa0bb3625752094038b41ef5e654c;
extern PyObject *const_str_plain_sigma;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_f67b6eddace5871d62bab883af23ebe9;
extern PyObject *const_str_plain_weights;
static PyObject *const_str_digest_ff1bd0df01b294d11a2a9c91b5393185;
extern PyObject *const_str_plain_partial;
extern PyObject *const_dict_2933d301529eaa80255c257221b5eda6;
extern PyObject *const_str_plain_doane;
extern PyObject *const_str_plain_reduce;
static PyObject *const_tuple_str_plain_x_str_plain_range_tuple;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_width;
extern PyObject *const_tuple_type_AttributeError_type_ValueError_tuple;
extern PyObject *const_str_plain_key;
extern PyObject *const_tuple_int_pos_10_none_none_none_none_tuple;
extern PyObject *const_str_plain_short;
extern PyObject *const_str_plain_uint8;
static PyObject *const_str_plain__hist_bin_sqrt;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_left;
static PyObject *const_tuple_ec601c4a36dd4abce9011f2da2c57e53_tuple;
static PyObject *const_str_digest_3ac33107d8ac658773af5f2131f3bb93;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_str_digest_0ce187624ef22ccd08ff04d3de49f4e9;
static PyObject *const_str_digest_8ef0880b58cb0f6b4eb16c9df002f1bc;
extern PyObject *const_str_plain_byte;
extern PyObject *const_slice_none_none_none;
static PyObject *const_str_digest_e61b87eca95aeb2f6c42cc2c5d2c6f6d;
static PyObject *const_str_digest_c36188fbce638baed40e442f74a20029;
static PyObject *const_tuple_str_plain_x_str_plain_range_str_plain_iqr_tuple;
extern PyObject *const_str_plain_mean;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_module;
static PyObject *const_str_digest_100ecf9040cd8cf695cf29d8f85c977d;
static PyObject *const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple;
static PyObject *const_str_plain__hist_bin_stone;
extern PyObject *const_str_plain_operator;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_sort;
extern PyObject *const_str_plain_rice;
static PyObject *const_str_plain_signed_to_unsigned;
static PyObject *const_str_digest_d638e651f53f18a53ca7c2ae72e035eb;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_9c192b0b2ac7cdcecbecf3341562cbf8;
static PyObject *const_str_digest_5e81e5bd90100da1751f53bffd9ecf28;
extern PyObject *const_str_plain_dt;
extern PyObject *const_str_plain_ceil;
extern PyObject *const_float_0_0;
static PyObject *const_tuple_str_plain_a_str_plain_v_tuple;
extern PyObject *const_int_pos_65536;
static PyObject *const_str_plain_bin_type;
extern PyObject *const_int_pos_100;
static PyObject *const_str_plain__range;
extern PyObject *const_str_plain_can_cast;
static PyObject *const_str_digest_be7969379f6251acfa304dfca2dad1ad;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_707a4481a62b09650e80b69d8214f005_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_707a4481a62b09650e80b69d8214f005_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_707a4481a62b09650e80b69d8214f005_tuple, 1, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    const_str_plain_sg1 = UNSTREAM_STRING_ASCII( &constant_bin[ 3069335 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_707a4481a62b09650e80b69d8214f005_tuple, 2, const_str_plain_sg1 ); Py_INCREF( const_str_plain_sg1 );
    PyTuple_SET_ITEM( const_tuple_707a4481a62b09650e80b69d8214f005_tuple, 3, const_str_plain_sigma ); Py_INCREF( const_str_plain_sigma );
    PyTuple_SET_ITEM( const_tuple_707a4481a62b09650e80b69d8214f005_tuple, 4, const_str_plain_temp ); Py_INCREF( const_str_plain_temp );
    const_str_plain_g1 = UNSTREAM_STRING_ASCII( &constant_bin[ 458580 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_707a4481a62b09650e80b69d8214f005_tuple, 5, const_str_plain_g1 ); Py_INCREF( const_str_plain_g1 );
    const_str_digest_57ddb94ab4e2073718a48253623dc3d1 = UNSTREAM_STRING_ASCII( &constant_bin[ 3069338 ], 70, 0 );
    const_str_plain__hist_bin_scott = UNSTREAM_STRING_ASCII( &constant_bin[ 3069408 ], 15, 1 );
    const_str_plain_first_edge = UNSTREAM_STRING_ASCII( &constant_bin[ 3069423 ], 10, 1 );
    const_str_digest_187e8a092d90bb33273f86353a526cfc = UNSTREAM_STRING_ASCII( &constant_bin[ 3069433 ], 48, 0 );
    const_str_plain__hist_bin_auto = UNSTREAM_STRING_ASCII( &constant_bin[ 3069481 ], 14, 1 );
    const_str_digest_ab62ef9e1e0a621517e2efda8ed1e995 = UNSTREAM_STRING_ASCII( &constant_bin[ 3069495 ], 40, 0 );
    const_str_digest_360a9460cd5e41f3703f9202eccb9a14 = UNSTREAM_STRING_ASCII( &constant_bin[ 3069535 ], 1252, 0 );
    const_str_digest_a38e70e8e4a2e434070548a8308bdd75 = UNSTREAM_STRING_ASCII( &constant_bin[ 3070787 ], 834, 0 );
    const_str_digest_de822264a87a8f251ed358c29ef1e728 = UNSTREAM_STRING_ASCII( &constant_bin[ 3071621 ], 40, 0 );
    const_str_plain__hist_bin_doane = UNSTREAM_STRING_ASCII( &constant_bin[ 3071661 ], 15, 1 );
    const_str_digest_6a2a9c963550ddc470865d4941def949 = UNSTREAM_STRING_ASCII( &constant_bin[ 3071676 ], 40, 0 );
    const_str_digest_50a6a9653c3363fa6a6e91d089baf5f4 = UNSTREAM_STRING_ASCII( &constant_bin[ 3071716 ], 320, 0 );
    const_list_6b84c5450eba456fbc28d20051c0a10b_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_6b84c5450eba456fbc28d20051c0a10b_list, 0, const_str_plain_histogram ); Py_INCREF( const_str_plain_histogram );
    PyList_SET_ITEM( const_list_6b84c5450eba456fbc28d20051c0a10b_list, 1, const_str_plain_histogramdd ); Py_INCREF( const_str_plain_histogramdd );
    PyList_SET_ITEM( const_list_6b84c5450eba456fbc28d20051c0a10b_list, 2, const_str_plain_histogram_bin_edges ); Py_INCREF( const_str_plain_histogram_bin_edges );
    const_str_plain__ravel_and_check_weights = UNSTREAM_STRING_ASCII( &constant_bin[ 3072036 ], 24, 1 );
    const_tuple_slice_int_pos_1_int_neg_1_none_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_1_int_neg_1_none_tuple, 0, const_slice_int_pos_1_int_neg_1_none ); Py_INCREF( const_slice_int_pos_1_int_neg_1_none );
    const_tuple_dacc1dc377fca3f704875d128efd5c49_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_dacc1dc377fca3f704875d128efd5c49_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_dacc1dc377fca3f704875d128efd5c49_tuple, 1, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    PyTuple_SET_ITEM( const_tuple_dacc1dc377fca3f704875d128efd5c49_tuple, 2, const_str_plain_first_edge ); Py_INCREF( const_str_plain_first_edge );
    const_str_plain_last_edge = UNSTREAM_STRING_ASCII( &constant_bin[ 3072060 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_dacc1dc377fca3f704875d128efd5c49_tuple, 3, const_str_plain_last_edge ); Py_INCREF( const_str_plain_last_edge );
    const_str_digest_f441901e8ea0d0ddea5ee044a48aa25a = UNSTREAM_STRING_ASCII( &constant_bin[ 3072069 ], 434, 0 );
    const_tuple_str_plain_a_str_plain_bins_str_plain_range_str_plain_weights_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_bins_str_plain_range_str_plain_weights_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_bins_str_plain_range_str_plain_weights_tuple, 1, const_str_plain_bins ); Py_INCREF( const_str_plain_bins );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_bins_str_plain_range_str_plain_weights_tuple, 2, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_bins_str_plain_range_str_plain_weights_tuple, 3, const_str_plain_weights ); Py_INCREF( const_str_plain_weights );
    const_str_digest_356e1443c2d562ea3a8727214b874ff1 = UNSTREAM_STRING_ASCII( &constant_bin[ 3072503 ], 32, 0 );
    const_str_digest_0fd412be68fda30b7d8200dff02a084e = UNSTREAM_STRING_ASCII( &constant_bin[ 3072535 ], 29, 0 );
    const_str_plain__unsigned_subtract = UNSTREAM_STRING_ASCII( &constant_bin[ 3072564 ], 18, 1 );
    const_str_digest_3e613db086e44e5d2faf08184ac1bd92 = UNSTREAM_STRING_ASCII( &constant_bin[ 3072582 ], 29, 0 );
    const_str_plain_ptp_x = UNSTREAM_STRING_ASCII( &constant_bin[ 3072611 ], 5, 1 );
    const_str_digest_43c5c103d098849f38e4df490ac8ab24 = UNSTREAM_STRING_ASCII( &constant_bin[ 3072616 ], 101, 0 );
    const_str_plain_bin_edges = UNSTREAM_STRING_ASCII( &constant_bin[ 3070240 ], 9, 1 );
    const_str_plain__hist_bin_sturges = UNSTREAM_STRING_ASCII( &constant_bin[ 3070765 ], 17, 1 );
    const_tuple_22e110f6413d0a15307c542631813fff_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_22e110f6413d0a15307c542631813fff_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_22e110f6413d0a15307c542631813fff_tuple, 1, const_str_plain_bins ); Py_INCREF( const_str_plain_bins );
    PyTuple_SET_ITEM( const_tuple_22e110f6413d0a15307c542631813fff_tuple, 2, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    PyTuple_SET_ITEM( const_tuple_22e110f6413d0a15307c542631813fff_tuple, 3, const_str_plain_weights ); Py_INCREF( const_str_plain_weights );
    const_str_plain_n_equal_bins = UNSTREAM_STRING_ASCII( &constant_bin[ 3072717 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_22e110f6413d0a15307c542631813fff_tuple, 4, const_str_plain_n_equal_bins ); Py_INCREF( const_str_plain_n_equal_bins );
    PyTuple_SET_ITEM( const_tuple_22e110f6413d0a15307c542631813fff_tuple, 5, const_str_plain_bin_edges ); Py_INCREF( const_str_plain_bin_edges );
    const_str_plain_bin_name = UNSTREAM_STRING_ASCII( &constant_bin[ 3072729 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_22e110f6413d0a15307c542631813fff_tuple, 6, const_str_plain_bin_name ); Py_INCREF( const_str_plain_bin_name );
    PyTuple_SET_ITEM( const_tuple_22e110f6413d0a15307c542631813fff_tuple, 7, const_str_plain_first_edge ); Py_INCREF( const_str_plain_first_edge );
    PyTuple_SET_ITEM( const_tuple_22e110f6413d0a15307c542631813fff_tuple, 8, const_str_plain_last_edge ); Py_INCREF( const_str_plain_last_edge );
    PyTuple_SET_ITEM( const_tuple_22e110f6413d0a15307c542631813fff_tuple, 9, const_str_plain_keep ); Py_INCREF( const_str_plain_keep );
    PyTuple_SET_ITEM( const_tuple_22e110f6413d0a15307c542631813fff_tuple, 10, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    const_str_plain_bin_type = UNSTREAM_STRING_ASCII( &constant_bin[ 3072737 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_22e110f6413d0a15307c542631813fff_tuple, 11, const_str_plain_bin_type ); Py_INCREF( const_str_plain_bin_type );
    const_list_int_pos_75_int_pos_25_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_int_pos_75_int_pos_25_list, 0, const_int_pos_75 ); Py_INCREF( const_int_pos_75 );
    PyList_SET_ITEM( const_list_int_pos_75_int_pos_25_list, 1, const_int_pos_25 ); Py_INCREF( const_int_pos_25 );
    const_str_digest_35cf97b698f90eb4dcd3bafcdca25774 = UNSTREAM_STRING_ASCII( &constant_bin[ 3072745 ], 382, 0 );
    const_tuple_aaf871c924700b8086b528c5cd95aaf5_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 3073127 ], 137 );
    const_str_digest_b6553af7e853f5349ce1ed9ef52e2021 = UNSTREAM_STRING_ASCII( &constant_bin[ 3073264 ], 531, 0 );
    const_str_digest_eb9aa7ba876fd396d9e99c470f069f32 = UNSTREAM_STRING_ASCII( &constant_bin[ 3073795 ], 444, 0 );
    const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple, 1, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    PyTuple_SET_ITEM( const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple, 3, const_str_plain_ptp_x ); Py_INCREF( const_str_plain_ptp_x );
    const_str_plain_jhat = UNSTREAM_STRING_ASCII( &constant_bin[ 3072560 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple, 4, const_str_plain_jhat ); Py_INCREF( const_str_plain_jhat );
    const_str_plain_nbins_upper_bound = UNSTREAM_STRING_ASCII( &constant_bin[ 3074239 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple, 5, const_str_plain_nbins_upper_bound ); Py_INCREF( const_str_plain_nbins_upper_bound );
    PyTuple_SET_ITEM( const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple, 6, const_str_plain_nbins ); Py_INCREF( const_str_plain_nbins );
    const_str_digest_cf00e012f8543c58ae37ef03e0d8130e = UNSTREAM_STRING_ASCII( &constant_bin[ 3074256 ], 23, 0 );
    const_str_plain__get_outer_edges = UNSTREAM_STRING_ASCII( &constant_bin[ 3074279 ], 16, 1 );
    const_tuple_88d02817c6c21266d0c0bae992674c02_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_88d02817c6c21266d0c0bae992674c02_tuple, 0, const_str_plain_sample ); Py_INCREF( const_str_plain_sample );
    PyTuple_SET_ITEM( const_tuple_88d02817c6c21266d0c0bae992674c02_tuple, 1, const_str_plain_bins ); Py_INCREF( const_str_plain_bins );
    PyTuple_SET_ITEM( const_tuple_88d02817c6c21266d0c0bae992674c02_tuple, 2, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    PyTuple_SET_ITEM( const_tuple_88d02817c6c21266d0c0bae992674c02_tuple, 3, const_str_plain_normed ); Py_INCREF( const_str_plain_normed );
    PyTuple_SET_ITEM( const_tuple_88d02817c6c21266d0c0bae992674c02_tuple, 4, const_str_plain_weights ); Py_INCREF( const_str_plain_weights );
    PyTuple_SET_ITEM( const_tuple_88d02817c6c21266d0c0bae992674c02_tuple, 5, const_str_plain_density ); Py_INCREF( const_str_plain_density );
    const_str_plain_hh = UNSTREAM_STRING_ASCII( &constant_bin[ 112351 ], 2, 1 );
    const_tuple_7f350d7a8167592a73376b40e24bf170_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_7f350d7a8167592a73376b40e24bf170_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_7f350d7a8167592a73376b40e24bf170_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_str_plain_signed_to_unsigned = UNSTREAM_STRING_ASCII( &constant_bin[ 3074295 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_7f350d7a8167592a73376b40e24bf170_tuple, 2, const_str_plain_signed_to_unsigned ); Py_INCREF( const_str_plain_signed_to_unsigned );
    PyTuple_SET_ITEM( const_tuple_7f350d7a8167592a73376b40e24bf170_tuple, 3, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    const_str_plain_fd_bw = UNSTREAM_STRING_ASCII( &constant_bin[ 3074313 ], 5, 1 );
    const_tuple_24a29fa5d953a2276bb398432ac6fa1f_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 3074318 ], 265 );
    const_str_digest_8f4feae6666d6286958836942304ebb9 = UNSTREAM_STRING_ASCII( &constant_bin[ 3074583 ], 77, 0 );
    const_str_plain_stone = UNSTREAM_STRING_ASCII( &constant_bin[ 858781 ], 5, 1 );
    const_str_digest_501dd2c789346deefe2dddd8ff4becbd = UNSTREAM_STRING_ASCII( &constant_bin[ 3074660 ], 48, 0 );
    const_str_digest_65b356a128d857f2d8cc66bc4024af30 = UNSTREAM_STRING_ASCII( &constant_bin[ 3074708 ], 4101, 0 );
    const_str_plain__histogramdd_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 3078809 ], 23, 1 );
    const_str_digest_ebb66978bbbca4473fc0ea06c02391f4 = UNSTREAM_STRING_ASCII( &constant_bin[ 3078832 ], 47, 0 );
    const_str_digest_82fc790eee97164d630d703544b810e9 = UNSTREAM_STRING_ASCII( &constant_bin[ 3078879 ], 822, 0 );
    const_str_digest_5edbc2f26ee97665f4b7769eeaba00a7 = UNSTREAM_STRING_ASCII( &constant_bin[ 3079701 ], 47, 0 );
    const_str_digest_49dedb75c4afa2cec89418477bee7bcd = UNSTREAM_STRING_ASCII( &constant_bin[ 3079748 ], 160, 0 );
    const_str_plain__histogram_bin_edges_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 3079908 ], 31, 1 );
    const_str_digest_074dc1166c4eba46d59726e482e22620 = UNSTREAM_STRING_ASCII( &constant_bin[ 3079939 ], 585, 0 );
    const_str_plain__hist_bin_rice = UNSTREAM_STRING_ASCII( &constant_bin[ 3080524 ], 14, 1 );
    const_str_plain_sturges_bw = UNSTREAM_STRING_ASCII( &constant_bin[ 3080538 ], 10, 1 );
    const_str_plain__search_sorted_inclusive = UNSTREAM_STRING_ASCII( &constant_bin[ 3080548 ], 24, 1 );
    const_str_digest_2f1f044a6adcb783095a39e7ecd560fb = UNSTREAM_STRING_ASCII( &constant_bin[ 3080572 ], 44, 0 );
    const_str_plain__hist_bin_selectors = UNSTREAM_STRING_ASCII( &constant_bin[ 3080616 ], 19, 1 );
    const_str_digest_de203610522c75f882628dd603347dbe = UNSTREAM_STRING_ASCII( &constant_bin[ 3080635 ], 44, 0 );
    const_tuple_0dd1d2a61ca352f8299afed087e57b44_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_0dd1d2a61ca352f8299afed087e57b44_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_0dd1d2a61ca352f8299afed087e57b44_tuple, 1, const_str_plain_bins ); Py_INCREF( const_str_plain_bins );
    PyTuple_SET_ITEM( const_tuple_0dd1d2a61ca352f8299afed087e57b44_tuple, 2, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    PyTuple_SET_ITEM( const_tuple_0dd1d2a61ca352f8299afed087e57b44_tuple, 3, const_str_plain_normed ); Py_INCREF( const_str_plain_normed );
    PyTuple_SET_ITEM( const_tuple_0dd1d2a61ca352f8299afed087e57b44_tuple, 4, const_str_plain_weights ); Py_INCREF( const_str_plain_weights );
    PyTuple_SET_ITEM( const_tuple_0dd1d2a61ca352f8299afed087e57b44_tuple, 5, const_str_plain_density ); Py_INCREF( const_str_plain_density );
    const_str_digest_253c3683e1ad1330633483d345accb51 = UNSTREAM_STRING_ASCII( &constant_bin[ 3080679 ], 58, 0 );
    const_str_plain__get_bin_edges = UNSTREAM_STRING_ASCII( &constant_bin[ 3080737 ], 14, 1 );
    const_str_plain_p_k = UNSTREAM_STRING_ASCII( &constant_bin[ 1139849 ], 3, 1 );
    const_str_digest_40a2bb5021a5bbd5a28abb51a74b34f0 = UNSTREAM_STRING_ASCII( &constant_bin[ 3080751 ], 526, 0 );
    const_str_digest_6f68ca161a0e83f1ffb1aef6f03cbb13 = UNSTREAM_STRING_ASCII( &constant_bin[ 3081277 ], 42, 0 );
    const_str_plain__histogram_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 3081319 ], 21, 1 );
    const_str_plain__hist_bin_fd = UNSTREAM_STRING_ASCII( &constant_bin[ 3070751 ], 12, 1 );
    const_tuple_9a8ad637f4ec3e8cc7e093bf1fe25cfc_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_9a8ad637f4ec3e8cc7e093bf1fe25cfc_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_9a8ad637f4ec3e8cc7e093bf1fe25cfc_tuple, 1, const_str_plain_bins ); Py_INCREF( const_str_plain_bins );
    PyTuple_SET_ITEM( const_tuple_9a8ad637f4ec3e8cc7e093bf1fe25cfc_tuple, 2, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    PyTuple_SET_ITEM( const_tuple_9a8ad637f4ec3e8cc7e093bf1fe25cfc_tuple, 3, const_str_plain_weights ); Py_INCREF( const_str_plain_weights );
    PyTuple_SET_ITEM( const_tuple_9a8ad637f4ec3e8cc7e093bf1fe25cfc_tuple, 4, const_str_plain_bin_edges ); Py_INCREF( const_str_plain_bin_edges );
    PyTuple_SET_ITEM( const_tuple_9a8ad637f4ec3e8cc7e093bf1fe25cfc_tuple, 5, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    const_tuple_str_plain_a_str_plain_weights_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_weights_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_weights_tuple, 1, const_str_plain_weights ); Py_INCREF( const_str_plain_weights );
    const_tuple_e258eb649547c9f72ba5cdf191708e5a_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e258eb649547c9f72ba5cdf191708e5a_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_e258eb649547c9f72ba5cdf191708e5a_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_e258eb649547c9f72ba5cdf191708e5a_tuple, 2, const_str_plain_edges ); Py_INCREF( const_str_plain_edges );
    PyTuple_SET_ITEM( const_tuple_e258eb649547c9f72ba5cdf191708e5a_tuple, 3, const_str_plain_sample ); Py_INCREF( const_str_plain_sample );
    const_str_digest_3cefa0bb3625752094038b41ef5e654c = UNSTREAM_STRING_ASCII( &constant_bin[ 3081340 ], 182, 0 );
    const_str_digest_f67b6eddace5871d62bab883af23ebe9 = UNSTREAM_STRING_ASCII( &constant_bin[ 3081522 ], 94, 0 );
    const_str_digest_ff1bd0df01b294d11a2a9c91b5393185 = UNSTREAM_STRING_ASCII( &constant_bin[ 3081616 ], 2617, 0 );
    const_tuple_str_plain_x_str_plain_range_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_range_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_range_tuple, 1, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    const_str_plain__hist_bin_sqrt = UNSTREAM_STRING_ASCII( &constant_bin[ 3084233 ], 14, 1 );
    const_tuple_ec601c4a36dd4abce9011f2da2c57e53_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ec601c4a36dd4abce9011f2da2c57e53_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_ec601c4a36dd4abce9011f2da2c57e53_tuple, 1, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    PyTuple_SET_ITEM( const_tuple_ec601c4a36dd4abce9011f2da2c57e53_tuple, 2, const_str_plain_fd_bw ); Py_INCREF( const_str_plain_fd_bw );
    PyTuple_SET_ITEM( const_tuple_ec601c4a36dd4abce9011f2da2c57e53_tuple, 3, const_str_plain_sturges_bw ); Py_INCREF( const_str_plain_sturges_bw );
    const_str_digest_3ac33107d8ac658773af5f2131f3bb93 = UNSTREAM_STRING_ASCII( &constant_bin[ 3084247 ], 49, 0 );
    const_str_digest_0ce187624ef22ccd08ff04d3de49f4e9 = UNSTREAM_STRING_ASCII( &constant_bin[ 3084296 ], 30, 0 );
    const_str_digest_8ef0880b58cb0f6b4eb16c9df002f1bc = UNSTREAM_STRING_ASCII( &constant_bin[ 3084326 ], 29, 0 );
    const_str_digest_e61b87eca95aeb2f6c42cc2c5d2c6f6d = UNSTREAM_STRING_ASCII( &constant_bin[ 3084355 ], 7654, 0 );
    const_str_digest_c36188fbce638baed40e442f74a20029 = UNSTREAM_STRING_ASCII( &constant_bin[ 3092009 ], 20, 0 );
    const_tuple_str_plain_x_str_plain_range_str_plain_iqr_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_range_str_plain_iqr_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_range_str_plain_iqr_tuple, 1, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_range_str_plain_iqr_tuple, 2, const_str_plain_iqr ); Py_INCREF( const_str_plain_iqr );
    const_str_digest_100ecf9040cd8cf695cf29d8f85c977d = UNSTREAM_STRING_ASCII( &constant_bin[ 3092029 ], 49, 0 );
    const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple, 0, const_str_plain_nbins ); Py_INCREF( const_str_plain_nbins );
    PyTuple_SET_ITEM( const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple, 1, const_str_plain_hh ); Py_INCREF( const_str_plain_hh );
    PyTuple_SET_ITEM( const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple, 2, const_str_plain_p_k ); Py_INCREF( const_str_plain_p_k );
    PyTuple_SET_ITEM( const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple, 3, const_str_plain_ptp_x ); Py_INCREF( const_str_plain_ptp_x );
    PyTuple_SET_ITEM( const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple, 4, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple, 5, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    PyTuple_SET_ITEM( const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple, 6, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_plain__hist_bin_stone = UNSTREAM_STRING_ASCII( &constant_bin[ 3072535 ], 15, 1 );
    const_str_digest_d638e651f53f18a53ca7c2ae72e035eb = UNSTREAM_STRING_ASCII( &constant_bin[ 3092078 ], 104, 0 );
    const_str_digest_9c192b0b2ac7cdcecbecf3341562cbf8 = UNSTREAM_STRING_ASCII( &constant_bin[ 3092182 ], 39, 0 );
    const_str_digest_5e81e5bd90100da1751f53bffd9ecf28 = UNSTREAM_STRING_ASCII( &constant_bin[ 3092221 ], 40, 0 );
    const_tuple_str_plain_a_str_plain_v_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_v_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_v_tuple, 1, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_plain__range = UNSTREAM_STRING_ASCII( &constant_bin[ 596602 ], 6, 1 );
    const_str_digest_be7969379f6251acfa304dfca2dad1ad = UNSTREAM_STRING_ASCII( &constant_bin[ 3092261 ], 58, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$histograms( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c38ab722a98f9e0cde9049c647e40421;
static PyCodeObject *codeobj_1106536b618d85314d82ddcb9cf1433b;
static PyCodeObject *codeobj_5fab391dee80b3d3f834b9da0ba3a89b;
static PyCodeObject *codeobj_6982d8152b31ba371a39f8d4e80b36de;
static PyCodeObject *codeobj_94bd1074ae897dbc1b9eb4bdeb69f391;
static PyCodeObject *codeobj_05331d88e01bfa52624e541d26344fe0;
static PyCodeObject *codeobj_d22a25a45221aa5ded178df5fa85f32a;
static PyCodeObject *codeobj_1de5243f99717873b3da064bf56506df;
static PyCodeObject *codeobj_ada34b60f1602cdc2f3574750d7197bf;
static PyCodeObject *codeobj_3736cf4e87769543140c9057f2979cd4;
static PyCodeObject *codeobj_4f2f3c9538d10ba62b924e693c124747;
static PyCodeObject *codeobj_609b72220dfdbdaff332f082df0dc959;
static PyCodeObject *codeobj_2e9256a7b444842632feb90cd65551d3;
static PyCodeObject *codeobj_d167ec6db072acfd3e0204e748d2a1c7;
static PyCodeObject *codeobj_a8ce0620df4a2bf95ba314d232ef628e;
static PyCodeObject *codeobj_59a94186d386a9c941465a7aab238ddd;
static PyCodeObject *codeobj_c89db7d0025e925dfb2a00bc13aa67f8;
static PyCodeObject *codeobj_6bd57f6a36a7ee6520f7ecfe72416d6e;
static PyCodeObject *codeobj_c3447a5136d984b1b7e11bb603fb456e;
static PyCodeObject *codeobj_5548ee6dcc35f02ec796337627b54ff3;
static PyCodeObject *codeobj_d5c2e1b71e946657988a3f28097906d5;
static PyCodeObject *codeobj_9bea694e77a08851e14798dee14412b9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_cf00e012f8543c58ae37ef03e0d8130e );
    codeobj_c38ab722a98f9e0cde9049c647e40421 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 1060, const_tuple_e258eb649547c9f72ba5cdf191708e5a_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1106536b618d85314d82ddcb9cf1433b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8ef0880b58cb0f6b4eb16c9df002f1bc, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_5fab391dee80b3d3f834b9da0ba3a89b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_bin_edges, 353, const_tuple_22e110f6413d0a15307c542631813fff_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6982d8152b31ba371a39f8d4e80b36de = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_outer_edges, 297, const_tuple_dacc1dc377fca3f704875d128efd5c49_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_94bd1074ae897dbc1b9eb4bdeb69f391 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__hist_bin_auto, 222, const_tuple_ec601c4a36dd4abce9011f2da2c57e53_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_05331d88e01bfa52624e541d26344fe0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__hist_bin_doane, 157, const_tuple_707a4481a62b09650e80b69d8214f005_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d22a25a45221aa5ded178df5fa85f32a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__hist_bin_fd, 192, const_tuple_str_plain_x_str_plain_range_str_plain_iqr_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1de5243f99717873b3da064bf56506df = MAKE_CODEOBJ( module_filename_obj, const_str_plain__hist_bin_rice, 69, const_tuple_str_plain_x_str_plain_range_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ada34b60f1602cdc2f3574750d7197bf = MAKE_CODEOBJ( module_filename_obj, const_str_plain__hist_bin_scott, 93, const_tuple_str_plain_x_str_plain_range_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3736cf4e87769543140c9057f2979cd4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__hist_bin_sqrt, 25, const_tuple_str_plain_x_str_plain_range_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4f2f3c9538d10ba62b924e693c124747 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__hist_bin_stone, 115, const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_609b72220dfdbdaff332f082df0dc959 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__hist_bin_sturges, 46, const_tuple_str_plain_x_str_plain_range_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2e9256a7b444842632feb90cd65551d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__histogram_bin_edges_dispatcher, 459, const_tuple_str_plain_a_str_plain_bins_str_plain_range_str_plain_weights_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d167ec6db072acfd3e0204e748d2a1c7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__histogram_dispatcher, 665, const_tuple_0dd1d2a61ca352f8299afed087e57b44_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a8ce0620df4a2bf95ba314d232ef628e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__histogramdd_dispatcher, 924, const_tuple_88d02817c6c21266d0c0bae992674c02_tuple, 6, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_59a94186d386a9c941465a7aab238ddd = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ravel_and_check_weights, 276, const_tuple_str_plain_a_str_plain_weights_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c89db7d0025e925dfb2a00bc13aa67f8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__search_sorted_inclusive, 447, const_tuple_str_plain_a_str_plain_v_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6bd57f6a36a7ee6520f7ecfe72416d6e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unsigned_subtract, 327, const_tuple_7f350d7a8167592a73376b40e24bf170_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c3447a5136d984b1b7e11bb603fb456e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_histogram, 670, const_tuple_24a29fa5d953a2276bb398432ac6fa1f_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5548ee6dcc35f02ec796337627b54ff3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_histogram_bin_edges, 463, const_tuple_9a8ad637f4ec3e8cc7e093bf1fe25cfc_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d5c2e1b71e946657988a3f28097906d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_histogramdd, 935, const_tuple_aaf871c924700b8086b528c5cd95aaf5_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9bea694e77a08851e14798dee14412b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jhat, 144, const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
static PyObject *numpy$lib$histograms$$$function_18__histogramdd_dispatcher$$$genobj_1__histogramdd_dispatcher_maker( void );


static PyObject *numpy$lib$histograms$$$function_19_histogramdd$$$genexpr_1_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_10__get_outer_edges(  );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_11__unsigned_subtract(  );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_12__get_bin_edges(  );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_13__search_sorted_inclusive(  );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_14__histogram_bin_edges_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_15_histogram_bin_edges( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_16__histogram_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_17_histogram( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_18__histogramdd_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_19_histogramdd( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_1__hist_bin_sqrt(  );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_2__hist_bin_sturges(  );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_3__hist_bin_rice(  );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_4__hist_bin_scott(  );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_5__hist_bin_stone(  );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_5__hist_bin_stone$$$function_1_jhat(  );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_6__hist_bin_doane(  );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_7__hist_bin_fd(  );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_8__hist_bin_auto(  );


static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_9__ravel_and_check_weights(  );


// The module function definitions.
static PyObject *impl_numpy$lib$histograms$$$function_1__hist_bin_sqrt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_range = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_3736cf4e87769543140c9057f2979cd4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3736cf4e87769543140c9057f2979cd4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    CHECK_OBJECT( par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3736cf4e87769543140c9057f2979cd4, codeobj_3736cf4e87769543140c9057f2979cd4, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *) );
    frame_3736cf4e87769543140c9057f2979cd4 = cache_frame_3736cf4e87769543140c9057f2979cd4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3736cf4e87769543140c9057f2979cd4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3736cf4e87769543140c9057f2979cd4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_x );
        tmp_called_instance_1 = par_x;
        frame_3736cf4e87769543140c9057f2979cd4->m_frame.f_lineno = 43;
        tmp_left_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ptp );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sqrt );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_source_name_2 = par_x;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3736cf4e87769543140c9057f2979cd4->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3736cf4e87769543140c9057f2979cd4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3736cf4e87769543140c9057f2979cd4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3736cf4e87769543140c9057f2979cd4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3736cf4e87769543140c9057f2979cd4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3736cf4e87769543140c9057f2979cd4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3736cf4e87769543140c9057f2979cd4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3736cf4e87769543140c9057f2979cd4,
        type_description_1,
        par_x,
        par_range
    );


    // Release cached frame.
    if ( frame_3736cf4e87769543140c9057f2979cd4 == cache_frame_3736cf4e87769543140c9057f2979cd4 )
    {
        Py_DECREF( frame_3736cf4e87769543140c9057f2979cd4 );
    }
    cache_frame_3736cf4e87769543140c9057f2979cd4 = NULL;

    assertFrameObject( frame_3736cf4e87769543140c9057f2979cd4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_1__hist_bin_sqrt );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_1__hist_bin_sqrt );
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


static PyObject *impl_numpy$lib$histograms$$$function_2__hist_bin_sturges( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_range = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_609b72220dfdbdaff332f082df0dc959;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_609b72220dfdbdaff332f082df0dc959 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    CHECK_OBJECT( par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_609b72220dfdbdaff332f082df0dc959, codeobj_609b72220dfdbdaff332f082df0dc959, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *) );
    frame_609b72220dfdbdaff332f082df0dc959 = cache_frame_609b72220dfdbdaff332f082df0dc959;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_609b72220dfdbdaff332f082df0dc959 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_609b72220dfdbdaff332f082df0dc959 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_x );
        tmp_called_instance_1 = par_x;
        frame_609b72220dfdbdaff332f082df0dc959->m_frame.f_lineno = 66;
        tmp_left_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ptp );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_log2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_source_name_2 = par_x;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_609b72220dfdbdaff332f082df0dc959->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_float_1_0;
        tmp_right_name_1 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_609b72220dfdbdaff332f082df0dc959 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_609b72220dfdbdaff332f082df0dc959 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_609b72220dfdbdaff332f082df0dc959 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_609b72220dfdbdaff332f082df0dc959, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_609b72220dfdbdaff332f082df0dc959->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_609b72220dfdbdaff332f082df0dc959, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_609b72220dfdbdaff332f082df0dc959,
        type_description_1,
        par_x,
        par_range
    );


    // Release cached frame.
    if ( frame_609b72220dfdbdaff332f082df0dc959 == cache_frame_609b72220dfdbdaff332f082df0dc959 )
    {
        Py_DECREF( frame_609b72220dfdbdaff332f082df0dc959 );
    }
    cache_frame_609b72220dfdbdaff332f082df0dc959 = NULL;

    assertFrameObject( frame_609b72220dfdbdaff332f082df0dc959 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_2__hist_bin_sturges );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_2__hist_bin_sturges );
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


static PyObject *impl_numpy$lib$histograms$$$function_3__hist_bin_rice( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_range = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_1de5243f99717873b3da064bf56506df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1de5243f99717873b3da064bf56506df = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    CHECK_OBJECT( par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1de5243f99717873b3da064bf56506df, codeobj_1de5243f99717873b3da064bf56506df, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *) );
    frame_1de5243f99717873b3da064bf56506df = cache_frame_1de5243f99717873b3da064bf56506df;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1de5243f99717873b3da064bf56506df );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1de5243f99717873b3da064bf56506df ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_x );
        tmp_called_instance_1 = par_x;
        frame_1de5243f99717873b3da064bf56506df->m_frame.f_lineno = 90;
        tmp_left_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ptp );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = const_float_2_0;
        CHECK_OBJECT( par_x );
        tmp_source_name_1 = par_x;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_float_0_3333333333333333;
        tmp_right_name_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1de5243f99717873b3da064bf56506df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1de5243f99717873b3da064bf56506df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1de5243f99717873b3da064bf56506df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1de5243f99717873b3da064bf56506df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1de5243f99717873b3da064bf56506df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1de5243f99717873b3da064bf56506df, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1de5243f99717873b3da064bf56506df,
        type_description_1,
        par_x,
        par_range
    );


    // Release cached frame.
    if ( frame_1de5243f99717873b3da064bf56506df == cache_frame_1de5243f99717873b3da064bf56506df )
    {
        Py_DECREF( frame_1de5243f99717873b3da064bf56506df );
    }
    cache_frame_1de5243f99717873b3da064bf56506df = NULL;

    assertFrameObject( frame_1de5243f99717873b3da064bf56506df );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_3__hist_bin_rice );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_3__hist_bin_rice );
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


static PyObject *impl_numpy$lib$histograms$$$function_4__hist_bin_scott( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_range = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_ada34b60f1602cdc2f3574750d7197bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ada34b60f1602cdc2f3574750d7197bf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    CHECK_OBJECT( par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ada34b60f1602cdc2f3574750d7197bf, codeobj_ada34b60f1602cdc2f3574750d7197bf, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *) );
    frame_ada34b60f1602cdc2f3574750d7197bf = cache_frame_ada34b60f1602cdc2f3574750d7197bf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ada34b60f1602cdc2f3574750d7197bf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ada34b60f1602cdc2f3574750d7197bf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_5;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_left_name_4 = const_float_24_0;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pi );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_float_0_5;
        tmp_right_name_1 = POWER_OPERATION( tmp_left_name_5, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_4, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_source_name_2 = par_x;
        tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_float_0_3333333333333333;
        tmp_left_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_ada34b60f1602cdc2f3574750d7197bf->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_std, call_args );
        }

        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ada34b60f1602cdc2f3574750d7197bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ada34b60f1602cdc2f3574750d7197bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ada34b60f1602cdc2f3574750d7197bf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ada34b60f1602cdc2f3574750d7197bf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ada34b60f1602cdc2f3574750d7197bf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ada34b60f1602cdc2f3574750d7197bf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ada34b60f1602cdc2f3574750d7197bf,
        type_description_1,
        par_x,
        par_range
    );


    // Release cached frame.
    if ( frame_ada34b60f1602cdc2f3574750d7197bf == cache_frame_ada34b60f1602cdc2f3574750d7197bf )
    {
        Py_DECREF( frame_ada34b60f1602cdc2f3574750d7197bf );
    }
    cache_frame_ada34b60f1602cdc2f3574750d7197bf = NULL;

    assertFrameObject( frame_ada34b60f1602cdc2f3574750d7197bf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_4__hist_bin_scott );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_4__hist_bin_scott );
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


static PyObject *impl_numpy$lib$histograms$$$function_5__hist_bin_stone( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_x = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_range = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *var_n = PyCell_EMPTY();
    struct Nuitka_CellObject *var_ptp_x = PyCell_EMPTY();
    PyObject *var_jhat = NULL;
    PyObject *var_nbins_upper_bound = NULL;
    PyObject *var_nbins = NULL;
    struct Nuitka_FrameObject *frame_4f2f3c9538d10ba62b924e693c124747;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4f2f3c9538d10ba62b924e693c124747 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4f2f3c9538d10ba62b924e693c124747, codeobj_4f2f3c9538d10ba62b924e693c124747, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4f2f3c9538d10ba62b924e693c124747 = cache_frame_4f2f3c9538d10ba62b924e693c124747;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4f2f3c9538d10ba62b924e693c124747 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4f2f3c9538d10ba62b924e693c124747 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( PyCell_GET( par_x ) );
        tmp_source_name_1 = PyCell_GET( par_x );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_n ) == NULL );
        PyCell_SET( var_n, tmp_assign_source_1 );

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 140;
            type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_x ) );
        tmp_args_element_name_1 = PyCell_GET( par_x );
        frame_4f2f3c9538d10ba62b924e693c124747->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ptp, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_ptp_x ) == NULL );
        PyCell_SET( var_ptp_x, tmp_assign_source_2 );

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( PyCell_GET( var_n ) );
        tmp_compexpr_left_1 = PyCell_GET( var_n );
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ccccooo";
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
        CHECK_OBJECT( PyCell_GET( var_ptp_x ) );
        tmp_compexpr_left_2 = PyCell_GET( var_ptp_x );
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ccccooo";
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
        tmp_return_value = const_int_0;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_FUNCTION_numpy$lib$histograms$$$function_5__hist_bin_stone$$$function_1_jhat(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] = var_n;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] = var_ptp_x;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[2] = par_range;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[3] = par_x;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[3] );


        assert( var_jhat == NULL );
        var_jhat = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_1 != NULL );
        tmp_args_element_name_2 = const_int_pos_100;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 149;
            type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( PyCell_GET( var_n ) );
        tmp_args_element_name_4 = PyCell_GET( var_n );
        frame_4f2f3c9538d10ba62b924e693c124747->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_int_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_sqrt, call_args );
        }

        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        frame_4f2f3c9538d10ba62b924e693c124747->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        assert( var_nbins_upper_bound == NULL );
        var_nbins_upper_bound = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_2 != NULL );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__range );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__range );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_range" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 150;
            type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_args_element_name_5 = const_int_pos_1;
        CHECK_OBJECT( var_nbins_upper_bound );
        tmp_left_name_1 = var_nbins_upper_bound;
        tmp_right_name_1 = const_int_pos_1;
        tmp_args_element_name_6 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        frame_4f2f3c9538d10ba62b924e693c124747->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_key;
        CHECK_OBJECT( var_jhat );
        tmp_dict_value_1 = var_jhat;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_4f2f3c9538d10ba62b924e693c124747->m_frame.f_lineno = 150;
        tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        assert( var_nbins == NULL );
        var_nbins = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_nbins );
        tmp_compexpr_left_3 = var_nbins;
        CHECK_OBJECT( var_nbins_upper_bound );
        tmp_compexpr_right_3 = var_nbins_upper_bound;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ccccooo";
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_warnings );

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

                exception_lineno = 152;
                type_description_1 = "ccccooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_4;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_warn );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_1 = "ccccooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_2 = const_str_digest_5edbc2f26ee97665f4b7769eeaba00a7;
            tmp_args_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 153;
                type_description_1 = "ccccooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_2 = tmp_mvar_value_5;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
            frame_4f2f3c9538d10ba62b924e693c124747->m_frame.f_lineno = 152;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_1 = "ccccooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( PyCell_GET( var_ptp_x ) );
        tmp_left_name_2 = PyCell_GET( var_ptp_x );
        CHECK_OBJECT( var_nbins );
        tmp_right_name_2 = var_nbins;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f2f3c9538d10ba62b924e693c124747 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f2f3c9538d10ba62b924e693c124747 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f2f3c9538d10ba62b924e693c124747 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4f2f3c9538d10ba62b924e693c124747, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4f2f3c9538d10ba62b924e693c124747->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4f2f3c9538d10ba62b924e693c124747, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4f2f3c9538d10ba62b924e693c124747,
        type_description_1,
        par_x,
        par_range,
        var_n,
        var_ptp_x,
        var_jhat,
        var_nbins_upper_bound,
        var_nbins
    );


    // Release cached frame.
    if ( frame_4f2f3c9538d10ba62b924e693c124747 == cache_frame_4f2f3c9538d10ba62b924e693c124747 )
    {
        Py_DECREF( frame_4f2f3c9538d10ba62b924e693c124747 );
    }
    cache_frame_4f2f3c9538d10ba62b924e693c124747 = NULL;

    assertFrameObject( frame_4f2f3c9538d10ba62b924e693c124747 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_5__hist_bin_stone );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_ptp_x );
    Py_DECREF( var_ptp_x );
    var_ptp_x = NULL;

    Py_XDECREF( var_jhat );
    var_jhat = NULL;

    Py_XDECREF( var_nbins_upper_bound );
    var_nbins_upper_bound = NULL;

    Py_XDECREF( var_nbins );
    var_nbins = NULL;

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

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_ptp_x );
    Py_DECREF( var_ptp_x );
    var_ptp_x = NULL;

    Py_XDECREF( var_jhat );
    var_jhat = NULL;

    Py_XDECREF( var_nbins_upper_bound );
    var_nbins_upper_bound = NULL;

    Py_XDECREF( var_nbins );
    var_nbins = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_5__hist_bin_stone );
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


static PyObject *impl_numpy$lib$histograms$$$function_5__hist_bin_stone$$$function_1_jhat( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nbins = python_pars[ 0 ];
    PyObject *var_hh = NULL;
    PyObject *var_p_k = NULL;
    struct Nuitka_FrameObject *frame_9bea694e77a08851e14798dee14412b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9bea694e77a08851e14798dee14412b9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9bea694e77a08851e14798dee14412b9, codeobj_9bea694e77a08851e14798dee14412b9, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9bea694e77a08851e14798dee14412b9 = cache_frame_9bea694e77a08851e14798dee14412b9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9bea694e77a08851e14798dee14412b9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9bea694e77a08851e14798dee14412b9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ptp_x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 145;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_nbins );
        tmp_right_name_1 = par_nbins;
        tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        assert( var_hh == NULL );
        var_hh = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
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
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 146;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_histogram );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[3] );
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_bins;
        CHECK_OBJECT( par_nbins );
        tmp_dict_value_1 = par_nbins;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_range;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "range" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = PyCell_GET( self->m_closure[2] );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_9bea694e77a08851e14798dee14412b9->m_frame.f_lineno = 146;
        tmp_subscribed_name_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "n" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = PyCell_GET( self->m_closure[0] );
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        assert( var_p_k == NULL );
        var_p_k = tmp_assign_source_2;
    }
    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_6;
        tmp_left_name_4 = const_int_pos_2;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "n" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 147;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_left_name_6 = PyCell_GET( self->m_closure[0] );
        tmp_right_name_4 = const_int_pos_1;
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_4 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_p_k );
        tmp_called_instance_1 = var_p_k;
        CHECK_OBJECT( var_p_k );
        tmp_args_element_name_1 = var_p_k;
        frame_9bea694e77a08851e14798dee14412b9->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 147;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_hh );
        tmp_right_name_6 = var_hh;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bea694e77a08851e14798dee14412b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bea694e77a08851e14798dee14412b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bea694e77a08851e14798dee14412b9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9bea694e77a08851e14798dee14412b9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9bea694e77a08851e14798dee14412b9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9bea694e77a08851e14798dee14412b9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9bea694e77a08851e14798dee14412b9,
        type_description_1,
        par_nbins,
        var_hh,
        var_p_k,
        self->m_closure[1],
        self->m_closure[3],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_9bea694e77a08851e14798dee14412b9 == cache_frame_9bea694e77a08851e14798dee14412b9 )
    {
        Py_DECREF( frame_9bea694e77a08851e14798dee14412b9 );
    }
    cache_frame_9bea694e77a08851e14798dee14412b9 = NULL;

    assertFrameObject( frame_9bea694e77a08851e14798dee14412b9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_5__hist_bin_stone$$$function_1_jhat );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_nbins );
    Py_DECREF( par_nbins );
    par_nbins = NULL;

    CHECK_OBJECT( (PyObject *)var_hh );
    Py_DECREF( var_hh );
    var_hh = NULL;

    CHECK_OBJECT( (PyObject *)var_p_k );
    Py_DECREF( var_p_k );
    var_p_k = NULL;

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

    CHECK_OBJECT( (PyObject *)par_nbins );
    Py_DECREF( par_nbins );
    par_nbins = NULL;

    Py_XDECREF( var_hh );
    var_hh = NULL;

    Py_XDECREF( var_p_k );
    var_p_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_5__hist_bin_stone$$$function_1_jhat );
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


static PyObject *impl_numpy$lib$histograms$$$function_6__hist_bin_doane( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_range = python_pars[ 1 ];
    PyObject *var_sg1 = NULL;
    PyObject *var_sigma = NULL;
    PyObject *var_temp = NULL;
    PyObject *var_g1 = NULL;
    struct Nuitka_FrameObject *frame_05331d88e01bfa52624e541d26344fe0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_05331d88e01bfa52624e541d26344fe0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    CHECK_OBJECT( par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_05331d88e01bfa52624e541d26344fe0, codeobj_05331d88e01bfa52624e541d26344fe0, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_05331d88e01bfa52624e541d26344fe0 = cache_frame_05331d88e01bfa52624e541d26344fe0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_05331d88e01bfa52624e541d26344fe0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_05331d88e01bfa52624e541d26344fe0 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_x );
        tmp_source_name_1 = par_x;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_source_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_right_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_source_name_5;
            PyObject *tmp_right_name_6;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sqrt );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = const_float_6_0;
            CHECK_OBJECT( par_x );
            tmp_source_name_3 = par_x;
            tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_size );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_2;
            tmp_right_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_3 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_x );
            tmp_source_name_4 = par_x;
            tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_size );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = const_float_1_0;
            tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_5, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_5 );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_x );
            tmp_source_name_5 = par_x;
            tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_size );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_6 = const_int_pos_3;
            tmp_right_name_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_6 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_05331d88e01bfa52624e541d26344fe0->m_frame.f_lineno = 177;
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


                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_sg1 == NULL );
            var_sg1 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 178;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_2 = par_x;
            frame_05331d88e01bfa52624e541d26344fe0->m_frame.f_lineno = 178;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_std, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_sigma == NULL );
            var_sigma = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_sigma );
            tmp_compexpr_left_2 = var_sigma;
            tmp_compexpr_right_2 = const_float_0_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
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
                PyObject *tmp_assign_source_3;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( par_x );
                tmp_left_name_7 = par_x;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 183;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_2 = tmp_mvar_value_3;
                CHECK_OBJECT( par_x );
                tmp_args_element_name_3 = par_x;
                frame_05331d88e01bfa52624e541d26344fe0->m_frame.f_lineno = 183;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_right_name_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_mean, call_args );
                }

                if ( tmp_right_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 183;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_right_name_7 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 183;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_temp == NULL );
                var_temp = tmp_assign_source_3;
            }
            {
                PyObject *tmp_called_instance_3;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 184;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_3 = tmp_mvar_value_4;
                CHECK_OBJECT( var_temp );
                tmp_args_element_name_4 = var_temp;
                CHECK_OBJECT( var_sigma );
                tmp_args_element_name_5 = var_sigma;
                CHECK_OBJECT( var_temp );
                tmp_args_element_name_6 = var_temp;
                frame_05331d88e01bfa52624e541d26344fe0->m_frame.f_lineno = 184;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain_true_divide, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 184;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            {
                PyObject *tmp_called_instance_4;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 185;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_4 = tmp_mvar_value_5;
                CHECK_OBJECT( var_temp );
                tmp_args_element_name_7 = var_temp;
                tmp_args_element_name_8 = const_int_pos_3;
                CHECK_OBJECT( var_temp );
                tmp_args_element_name_9 = var_temp;
                frame_05331d88e01bfa52624e541d26344fe0->m_frame.f_lineno = 185;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                    tmp_call_result_2 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_4, const_str_plain_power, call_args );
                }

                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 185;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_10;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 186;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_5 = tmp_mvar_value_6;
                CHECK_OBJECT( var_temp );
                tmp_args_element_name_10 = var_temp;
                frame_05331d88e01bfa52624e541d26344fe0->m_frame.f_lineno = 186;
                {
                    PyObject *call_args[] = { tmp_args_element_name_10 };
                    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_mean, call_args );
                }

                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 186;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_g1 == NULL );
                var_g1 = tmp_assign_source_4;
            }
            {
                PyObject *tmp_left_name_8;
                PyObject *tmp_called_instance_6;
                PyObject *tmp_right_name_8;
                PyObject *tmp_left_name_9;
                PyObject *tmp_left_name_10;
                PyObject *tmp_right_name_9;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_source_name_7;
                PyObject *tmp_right_name_10;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_11;
                PyObject *tmp_left_name_12;
                PyObject *tmp_called_instance_7;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_right_name_12;
                CHECK_OBJECT( par_x );
                tmp_called_instance_6 = par_x;
                frame_05331d88e01bfa52624e541d26344fe0->m_frame.f_lineno = 187;
                tmp_left_name_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_ptp );
                if ( tmp_left_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 187;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_10 = const_float_1_0;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_7 == NULL )
                {
                    Py_DECREF( tmp_left_name_8 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 187;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_6 = tmp_mvar_value_7;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_log2 );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_8 );

                    exception_lineno = 187;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_x );
                tmp_source_name_7 = par_x;
                tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_size );
                if ( tmp_args_element_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_8 );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 187;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_05331d88e01bfa52624e541d26344fe0->m_frame.f_lineno = 187;
                {
                    PyObject *call_args[] = { tmp_args_element_name_11 };
                    tmp_right_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_11 );
                if ( tmp_right_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_8 );

                    exception_lineno = 187;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_9 = BINARY_OPERATION_ADD_FLOAT_OBJECT( tmp_left_name_10, tmp_right_name_9 );
                Py_DECREF( tmp_right_name_9 );
                if ( tmp_left_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_8 );

                    exception_lineno = 187;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_8 == NULL )
                {
                    Py_DECREF( tmp_left_name_8 );
                    Py_DECREF( tmp_left_name_9 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 188;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_8 = tmp_mvar_value_8;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_log2 );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_8 );
                    Py_DECREF( tmp_left_name_9 );

                    exception_lineno = 188;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_11 = const_float_1_0;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_9 == NULL )
                {
                    Py_DECREF( tmp_left_name_8 );
                    Py_DECREF( tmp_left_name_9 );
                    Py_DECREF( tmp_called_name_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 188;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_7 = tmp_mvar_value_9;
                CHECK_OBJECT( var_g1 );
                tmp_args_element_name_13 = var_g1;
                frame_05331d88e01bfa52624e541d26344fe0->m_frame.f_lineno = 188;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13 };
                    tmp_left_name_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_absolute, call_args );
                }

                if ( tmp_left_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_8 );
                    Py_DECREF( tmp_left_name_9 );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 188;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_sg1 );
                tmp_right_name_12 = var_sg1;
                tmp_right_name_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
                Py_DECREF( tmp_left_name_12 );
                if ( tmp_right_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_8 );
                    Py_DECREF( tmp_left_name_9 );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 188;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_12 = BINARY_OPERATION_ADD_FLOAT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
                Py_DECREF( tmp_right_name_11 );
                if ( tmp_args_element_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_8 );
                    Py_DECREF( tmp_left_name_9 );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 188;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_05331d88e01bfa52624e541d26344fe0->m_frame.f_lineno = 188;
                {
                    PyObject *call_args[] = { tmp_args_element_name_12 };
                    tmp_right_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_12 );
                if ( tmp_right_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_8 );
                    Py_DECREF( tmp_left_name_9 );

                    exception_lineno = 188;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_10 );
                Py_DECREF( tmp_left_name_9 );
                Py_DECREF( tmp_right_name_10 );
                if ( tmp_right_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_8 );

                    exception_lineno = 187;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
                Py_DECREF( tmp_left_name_8 );
                Py_DECREF( tmp_right_name_8 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 187;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_2:;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05331d88e01bfa52624e541d26344fe0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_05331d88e01bfa52624e541d26344fe0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05331d88e01bfa52624e541d26344fe0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_05331d88e01bfa52624e541d26344fe0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_05331d88e01bfa52624e541d26344fe0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_05331d88e01bfa52624e541d26344fe0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_05331d88e01bfa52624e541d26344fe0,
        type_description_1,
        par_x,
        par_range,
        var_sg1,
        var_sigma,
        var_temp,
        var_g1
    );


    // Release cached frame.
    if ( frame_05331d88e01bfa52624e541d26344fe0 == cache_frame_05331d88e01bfa52624e541d26344fe0 )
    {
        Py_DECREF( frame_05331d88e01bfa52624e541d26344fe0 );
    }
    cache_frame_05331d88e01bfa52624e541d26344fe0 = NULL;

    assertFrameObject( frame_05331d88e01bfa52624e541d26344fe0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = const_float_0_0;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_6__hist_bin_doane );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_sg1 );
    var_sg1 = NULL;

    Py_XDECREF( var_sigma );
    var_sigma = NULL;

    Py_XDECREF( var_temp );
    var_temp = NULL;

    Py_XDECREF( var_g1 );
    var_g1 = NULL;

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

    Py_XDECREF( var_sg1 );
    var_sg1 = NULL;

    Py_XDECREF( var_sigma );
    var_sigma = NULL;

    Py_XDECREF( var_temp );
    var_temp = NULL;

    Py_XDECREF( var_g1 );
    var_g1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_6__hist_bin_doane );
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


static PyObject *impl_numpy$lib$histograms$$$function_7__hist_bin_fd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_range = python_pars[ 1 ];
    PyObject *var_iqr = NULL;
    struct Nuitka_FrameObject *frame_d22a25a45221aa5ded178df5fa85f32a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d22a25a45221aa5ded178df5fa85f32a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    CHECK_OBJECT( par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d22a25a45221aa5ded178df5fa85f32a, codeobj_d22a25a45221aa5ded178df5fa85f32a, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d22a25a45221aa5ded178df5fa85f32a = cache_frame_d22a25a45221aa5ded178df5fa85f32a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d22a25a45221aa5ded178df5fa85f32a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d22a25a45221aa5ded178df5fa85f32a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 218;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_subtract );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 218;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        tmp_args_element_name_2 = LIST_COPY( const_list_int_pos_75_int_pos_25_list );
        frame_d22a25a45221aa5ded178df5fa85f32a->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_dircall_arg2_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_percentile, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_dircall_arg2_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );

            exception_lineno = 218;
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


            exception_lineno = 218;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_iqr == NULL );
        var_iqr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_3;
        tmp_left_name_2 = const_float_2_0;
        CHECK_OBJECT( var_iqr );
        tmp_right_name_1 = var_iqr;
        tmp_left_name_1 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_source_name_2 = par_x;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_float_minus_0_3333333333333333;
        tmp_right_name_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d22a25a45221aa5ded178df5fa85f32a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d22a25a45221aa5ded178df5fa85f32a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d22a25a45221aa5ded178df5fa85f32a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d22a25a45221aa5ded178df5fa85f32a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d22a25a45221aa5ded178df5fa85f32a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d22a25a45221aa5ded178df5fa85f32a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d22a25a45221aa5ded178df5fa85f32a,
        type_description_1,
        par_x,
        par_range,
        var_iqr
    );


    // Release cached frame.
    if ( frame_d22a25a45221aa5ded178df5fa85f32a == cache_frame_d22a25a45221aa5ded178df5fa85f32a )
    {
        Py_DECREF( frame_d22a25a45221aa5ded178df5fa85f32a );
    }
    cache_frame_d22a25a45221aa5ded178df5fa85f32a = NULL;

    assertFrameObject( frame_d22a25a45221aa5ded178df5fa85f32a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_7__hist_bin_fd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_iqr );
    Py_DECREF( var_iqr );
    var_iqr = NULL;

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

    Py_XDECREF( var_iqr );
    var_iqr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_7__hist_bin_fd );
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


static PyObject *impl_numpy$lib$histograms$$$function_8__hist_bin_auto( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_range = python_pars[ 1 ];
    PyObject *var_fd_bw = NULL;
    PyObject *var_sturges_bw = NULL;
    struct Nuitka_FrameObject *frame_94bd1074ae897dbc1b9eb4bdeb69f391;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_94bd1074ae897dbc1b9eb4bdeb69f391 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94bd1074ae897dbc1b9eb4bdeb69f391, codeobj_94bd1074ae897dbc1b9eb4bdeb69f391, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_94bd1074ae897dbc1b9eb4bdeb69f391 = cache_frame_94bd1074ae897dbc1b9eb4bdeb69f391;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94bd1074ae897dbc1b9eb4bdeb69f391 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94bd1074ae897dbc1b9eb4bdeb69f391 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_fd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hist_bin_fd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_hist_bin_fd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 256;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        CHECK_OBJECT( par_range );
        tmp_args_element_name_2 = par_range;
        frame_94bd1074ae897dbc1b9eb4bdeb69f391->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_fd_bw == NULL );
        var_fd_bw = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_sturges );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hist_bin_sturges );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_hist_bin_sturges" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        CHECK_OBJECT( par_range );
        tmp_args_element_name_4 = par_range;
        frame_94bd1074ae897dbc1b9eb4bdeb69f391->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_sturges_bw == NULL );
        var_sturges_bw = tmp_assign_source_2;
    }
    CHECK_OBJECT( par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_fd_bw );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_fd_bw );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;
            type_description_1 = "oooo";
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_3 != NULL );
            CHECK_OBJECT( var_fd_bw );
            tmp_args_element_name_5 = var_fd_bw;
            CHECK_OBJECT( var_sturges_bw );
            tmp_args_element_name_6 = var_sturges_bw;
            frame_94bd1074ae897dbc1b9eb4bdeb69f391->m_frame.f_lineno = 260;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 260;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        CHECK_OBJECT( var_sturges_bw );
        tmp_return_value = var_sturges_bw;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94bd1074ae897dbc1b9eb4bdeb69f391 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_94bd1074ae897dbc1b9eb4bdeb69f391 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94bd1074ae897dbc1b9eb4bdeb69f391 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94bd1074ae897dbc1b9eb4bdeb69f391, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94bd1074ae897dbc1b9eb4bdeb69f391->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94bd1074ae897dbc1b9eb4bdeb69f391, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_94bd1074ae897dbc1b9eb4bdeb69f391,
        type_description_1,
        par_x,
        par_range,
        var_fd_bw,
        var_sturges_bw
    );


    // Release cached frame.
    if ( frame_94bd1074ae897dbc1b9eb4bdeb69f391 == cache_frame_94bd1074ae897dbc1b9eb4bdeb69f391 )
    {
        Py_DECREF( frame_94bd1074ae897dbc1b9eb4bdeb69f391 );
    }
    cache_frame_94bd1074ae897dbc1b9eb4bdeb69f391 = NULL;

    assertFrameObject( frame_94bd1074ae897dbc1b9eb4bdeb69f391 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_8__hist_bin_auto );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_fd_bw );
    Py_DECREF( var_fd_bw );
    var_fd_bw = NULL;

    CHECK_OBJECT( (PyObject *)var_sturges_bw );
    Py_DECREF( var_sturges_bw );
    var_sturges_bw = NULL;

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

    Py_XDECREF( par_range );
    par_range = NULL;

    Py_XDECREF( var_fd_bw );
    var_fd_bw = NULL;

    Py_XDECREF( var_sturges_bw );
    var_sturges_bw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_8__hist_bin_auto );
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


static PyObject *impl_numpy$lib$histograms$$$function_9__ravel_and_check_weights( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_weights = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_59a94186d386a9c941465a7aab238ddd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_59a94186d386a9c941465a7aab238ddd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_59a94186d386a9c941465a7aab238ddd, codeobj_59a94186d386a9c941465a7aab238ddd, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *) );
    frame_59a94186d386a9c941465a7aab238ddd = cache_frame_59a94186d386a9c941465a7aab238ddd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_59a94186d386a9c941465a7aab238ddd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_59a94186d386a9c941465a7aab238ddd ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_59a94186d386a9c941465a7aab238ddd->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "oo";
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
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_source_name_1 = par_a;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_bool_ );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_warnings );

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

                exception_lineno = 282;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_warn );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_4 = const_str_digest_3ac33107d8ac658773af5f2131f3bb93;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_format );
            assert( !(tmp_called_name_2 == NULL) );
            CHECK_OBJECT( par_a );
            tmp_source_name_5 = par_a;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_4;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_uint8 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_59a94186d386a9c941465a7aab238ddd->m_frame.f_lineno = 282;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 282;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 284;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = tmp_mvar_value_5;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
            frame_59a94186d386a9c941465a7aab238ddd->m_frame.f_lineno = 282;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_6;
            CHECK_OBJECT( par_a );
            tmp_source_name_7 = par_a;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_astype );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 285;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 285;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_6;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_uint8 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 285;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_59a94186d386a9c941465a7aab238ddd->m_frame.f_lineno = 285;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 285;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_a;
                assert( old != NULL );
                par_a = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_weights );
        tmp_compexpr_left_2 = par_weights;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 288;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_7;
            CHECK_OBJECT( par_weights );
            tmp_args_element_name_5 = par_weights;
            frame_59a94186d386a9c941465a7aab238ddd->m_frame.f_lineno = 288;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 288;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_weights;
                assert( old != NULL );
                par_weights = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_9;
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( par_weights );
            tmp_source_name_9 = par_weights;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 289;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_a );
            tmp_source_name_10 = par_a;
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_3 );

                exception_lineno = 289;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 289;
                type_description_1 = "oo";
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
                tmp_make_exception_arg_1 = const_str_digest_ab62ef9e1e0a621517e2efda8ed1e995;
                frame_59a94186d386a9c941465a7aab238ddd->m_frame.f_lineno = 290;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 290;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT( par_weights );
            tmp_called_instance_3 = par_weights;
            frame_59a94186d386a9c941465a7aab238ddd->m_frame.f_lineno = 292;
            tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_ravel );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 292;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_weights;
                assert( old != NULL );
                par_weights = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT( par_a );
        tmp_called_instance_4 = par_a;
        frame_59a94186d386a9c941465a7aab238ddd->m_frame.f_lineno = 293;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_ravel );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_5;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59a94186d386a9c941465a7aab238ddd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59a94186d386a9c941465a7aab238ddd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_59a94186d386a9c941465a7aab238ddd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_59a94186d386a9c941465a7aab238ddd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_59a94186d386a9c941465a7aab238ddd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_59a94186d386a9c941465a7aab238ddd,
        type_description_1,
        par_a,
        par_weights
    );


    // Release cached frame.
    if ( frame_59a94186d386a9c941465a7aab238ddd == cache_frame_59a94186d386a9c941465a7aab238ddd )
    {
        Py_DECREF( frame_59a94186d386a9c941465a7aab238ddd );
    }
    cache_frame_59a94186d386a9c941465a7aab238ddd = NULL;

    assertFrameObject( frame_59a94186d386a9c941465a7aab238ddd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_2 = par_a;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_weights );
        tmp_tuple_element_2 = par_weights;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_9__ravel_and_check_weights );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_weights );
    Py_DECREF( par_weights );
    par_weights = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_weights );
    par_weights = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_9__ravel_and_check_weights );
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


static PyObject *impl_numpy$lib$histograms$$$function_10__get_outer_edges( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_range = python_pars[ 1 ];
    PyObject *var_first_edge = NULL;
    PyObject *var_last_edge = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6982d8152b31ba371a39f8d4e80b36de;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6982d8152b31ba371a39f8d4e80b36de = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6982d8152b31ba371a39f8d4e80b36de, codeobj_6982d8152b31ba371a39f8d4e80b36de, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6982d8152b31ba371a39f8d4e80b36de = cache_frame_6982d8152b31ba371a39f8d4e80b36de;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6982d8152b31ba371a39f8d4e80b36de );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6982d8152b31ba371a39f8d4e80b36de ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_range );
        tmp_compexpr_left_1 = par_range;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_range );
            tmp_iter_arg_1 = par_range;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
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
                exception_lineno = 303;
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


                type_description_1 = "oooo";
                exception_lineno = 303;
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

                        type_description_1 = "oooo";
                        exception_lineno = 303;
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

                type_description_1 = "oooo";
                exception_lineno = 303;
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
            assert( var_first_edge == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_first_edge = tmp_assign_source_4;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
            assert( var_last_edge == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_last_edge = tmp_assign_source_5;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_first_edge );
            tmp_compexpr_left_2 = var_first_edge;
            CHECK_OBJECT( var_last_edge );
            tmp_compexpr_right_2 = var_last_edge;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_ebb66978bbbca4473fc0ea06c02391f4;
                frame_6982d8152b31ba371a39f8d4e80b36de->m_frame.f_lineno = 305;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 305;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            int tmp_and_left_truth_1;
            PyObject *tmp_and_left_value_1;
            PyObject *tmp_and_right_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 307;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( var_first_edge );
            tmp_args_element_name_1 = var_first_edge;
            frame_6982d8152b31ba371a39f8d4e80b36de->m_frame.f_lineno = 307;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_and_left_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isfinite, call_args );
            }

            if ( tmp_and_left_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 307;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
            if ( tmp_and_left_truth_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_and_left_value_1 );

                exception_lineno = 307;
                type_description_1 = "oooo";
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
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 307;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_last_edge );
            tmp_args_element_name_2 = var_last_edge;
            frame_6982d8152b31ba371a39f8d4e80b36de->m_frame.f_lineno = 307;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_and_right_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isfinite, call_args );
            }

            if ( tmp_and_right_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 307;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_operand_name_1 = tmp_and_left_value_1;
            and_end_1:;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 307;
                type_description_1 = "oooo";
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
                PyObject *tmp_called_instance_3;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                tmp_called_instance_3 = const_str_digest_6a2a9c963550ddc470865d4941def949;
                CHECK_OBJECT( var_first_edge );
                tmp_args_element_name_3 = var_first_edge;
                CHECK_OBJECT( var_last_edge );
                tmp_args_element_name_4 = var_last_edge;
                frame_6982d8152b31ba371a39f8d4e80b36de->m_frame.f_lineno = 309;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                    tmp_make_exception_arg_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_format, call_args );
                }

                if ( tmp_make_exception_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 309;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                frame_6982d8152b31ba371a39f8d4e80b36de->m_frame.f_lineno = 308;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_2 );
                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 308;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
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


                exception_lineno = 310;
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
                PyObject *tmp_assign_source_6;
                PyObject *tmp_iter_arg_2;
                tmp_iter_arg_2 = const_tuple_int_0_int_pos_1_tuple;
                tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
                assert( !(tmp_assign_source_6 == NULL) );
                assert( tmp_tuple_unpack_2__source_iter == NULL );
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
            }
            // Tried code:
            // Tried code:
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_unpack_3;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


                    type_description_1 = "oooo";
                    exception_lineno = 312;
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
                tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


                    type_description_1 = "oooo";
                    exception_lineno = 312;
                    goto try_except_handler_5;
                }
                assert( tmp_tuple_unpack_2__element_2 == NULL );
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
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
                PyObject *tmp_assign_source_9;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
                tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
                assert( var_first_edge == NULL );
                Py_INCREF( tmp_assign_source_9 );
                var_first_edge = tmp_assign_source_9;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_1 );
            tmp_tuple_unpack_2__element_1 = NULL;

            {
                PyObject *tmp_assign_source_10;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
                tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
                assert( var_last_edge == NULL );
                Py_INCREF( tmp_assign_source_10 );
                var_last_edge = tmp_assign_source_10;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_2 );
            tmp_tuple_unpack_2__element_2 = NULL;

            goto branch_end_4;
            branch_no_4:;
            // Tried code:
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_iter_arg_3;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_called_instance_5;
                CHECK_OBJECT( par_a );
                tmp_called_instance_4 = par_a;
                frame_6982d8152b31ba371a39f8d4e80b36de->m_frame.f_lineno = 314;
                tmp_tuple_element_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_min );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 314;
                    type_description_1 = "oooo";
                    goto try_except_handler_6;
                }
                tmp_iter_arg_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_iter_arg_3, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( par_a );
                tmp_called_instance_5 = par_a;
                frame_6982d8152b31ba371a39f8d4e80b36de->m_frame.f_lineno = 314;
                tmp_tuple_element_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_max );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_iter_arg_3 );

                    exception_lineno = 314;
                    type_description_1 = "oooo";
                    goto try_except_handler_6;
                }
                PyTuple_SET_ITEM( tmp_iter_arg_3, 1, tmp_tuple_element_1 );
                tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
                Py_DECREF( tmp_iter_arg_3 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 314;
                    type_description_1 = "oooo";
                    goto try_except_handler_6;
                }
                assert( tmp_tuple_unpack_3__source_iter == NULL );
                tmp_tuple_unpack_3__source_iter = tmp_assign_source_11;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_12;
                PyObject *tmp_unpack_5;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
                tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
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


                    type_description_1 = "oooo";
                    exception_lineno = 314;
                    goto try_except_handler_7;
                }
                assert( tmp_tuple_unpack_3__element_1 == NULL );
                tmp_tuple_unpack_3__element_1 = tmp_assign_source_12;
            }
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_unpack_6;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
                tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
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


                    type_description_1 = "oooo";
                    exception_lineno = 314;
                    goto try_except_handler_7;
                }
                assert( tmp_tuple_unpack_3__element_2 == NULL );
                tmp_tuple_unpack_3__element_2 = tmp_assign_source_13;
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
                PyObject *tmp_assign_source_14;
                CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
                tmp_assign_source_14 = tmp_tuple_unpack_3__element_1;
                assert( var_first_edge == NULL );
                Py_INCREF( tmp_assign_source_14 );
                var_first_edge = tmp_assign_source_14;
            }
            Py_XDECREF( tmp_tuple_unpack_3__element_1 );
            tmp_tuple_unpack_3__element_1 = NULL;

            {
                PyObject *tmp_assign_source_15;
                CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
                tmp_assign_source_15 = tmp_tuple_unpack_3__element_2;
                assert( var_last_edge == NULL );
                Py_INCREF( tmp_assign_source_15 );
                var_last_edge = tmp_assign_source_15;
            }
            Py_XDECREF( tmp_tuple_unpack_3__element_2 );
            tmp_tuple_unpack_3__element_2 = NULL;

            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_operand_name_2;
                int tmp_and_left_truth_2;
                PyObject *tmp_and_left_value_2;
                PyObject *tmp_and_right_value_2;
                PyObject *tmp_called_instance_6;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_called_instance_7;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_6;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 315;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_6 = tmp_mvar_value_3;
                CHECK_OBJECT( var_first_edge );
                tmp_args_element_name_5 = var_first_edge;
                frame_6982d8152b31ba371a39f8d4e80b36de->m_frame.f_lineno = 315;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_and_left_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_isfinite, call_args );
                }

                if ( tmp_and_left_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 315;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
                if ( tmp_and_left_truth_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_and_left_value_2 );

                    exception_lineno = 315;
                    type_description_1 = "oooo";
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
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 315;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_7 = tmp_mvar_value_4;
                CHECK_OBJECT( var_last_edge );
                tmp_args_element_name_6 = var_last_edge;
                frame_6982d8152b31ba371a39f8d4e80b36de->m_frame.f_lineno = 315;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_and_right_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_isfinite, call_args );
                }

                if ( tmp_and_right_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 315;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_operand_name_2 = tmp_and_right_value_2;
                goto and_end_2;
                and_left_2:;
                tmp_operand_name_2 = tmp_and_left_value_2;
                and_end_2:;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                Py_DECREF( tmp_operand_name_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 315;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
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
                {
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_make_exception_arg_3;
                    PyObject *tmp_called_instance_8;
                    PyObject *tmp_args_element_name_7;
                    PyObject *tmp_args_element_name_8;
                    tmp_called_instance_8 = const_str_digest_de203610522c75f882628dd603347dbe;
                    CHECK_OBJECT( var_first_edge );
                    tmp_args_element_name_7 = var_first_edge;
                    CHECK_OBJECT( var_last_edge );
                    tmp_args_element_name_8 = var_last_edge;
                    frame_6982d8152b31ba371a39f8d4e80b36de->m_frame.f_lineno = 317;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                        tmp_make_exception_arg_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_format, call_args );
                    }

                    if ( tmp_make_exception_arg_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 317;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    frame_6982d8152b31ba371a39f8d4e80b36de->m_frame.f_lineno = 316;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_3 };
                        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_3 );
                    assert( !(tmp_raise_type_3 == NULL) );
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 316;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                branch_no_5:;
            }
            branch_end_4:;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        if ( var_first_edge == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_edge" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 320;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = var_first_edge;
        if ( var_last_edge == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "last_edge" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 320;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_4 = var_last_edge;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "oooo";
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
            PyObject *tmp_assign_source_16;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            if ( var_first_edge == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_edge" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 321;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_1 = var_first_edge;
            tmp_right_name_1 = const_float_0_5;
            tmp_assign_source_16 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 321;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_first_edge;
                var_first_edge = tmp_assign_source_16;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            if ( var_last_edge == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "last_edge" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 322;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_2 = var_last_edge;
            tmp_right_name_2 = const_float_0_5;
            tmp_assign_source_17 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 322;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_last_edge;
                var_last_edge = tmp_assign_source_17;
                Py_XDECREF( old );
            }

        }
        branch_no_6:;
    }
    {
        PyObject *tmp_tuple_element_2;
        if ( var_first_edge == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_edge" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 324;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_first_edge;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        if ( var_last_edge == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "last_edge" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 324;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_last_edge;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6982d8152b31ba371a39f8d4e80b36de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6982d8152b31ba371a39f8d4e80b36de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6982d8152b31ba371a39f8d4e80b36de );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6982d8152b31ba371a39f8d4e80b36de, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6982d8152b31ba371a39f8d4e80b36de->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6982d8152b31ba371a39f8d4e80b36de, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6982d8152b31ba371a39f8d4e80b36de,
        type_description_1,
        par_a,
        par_range,
        var_first_edge,
        var_last_edge
    );


    // Release cached frame.
    if ( frame_6982d8152b31ba371a39f8d4e80b36de == cache_frame_6982d8152b31ba371a39f8d4e80b36de )
    {
        Py_DECREF( frame_6982d8152b31ba371a39f8d4e80b36de );
    }
    cache_frame_6982d8152b31ba371a39f8d4e80b36de = NULL;

    assertFrameObject( frame_6982d8152b31ba371a39f8d4e80b36de );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_10__get_outer_edges );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    Py_XDECREF( var_first_edge );
    var_first_edge = NULL;

    Py_XDECREF( var_last_edge );
    var_last_edge = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    Py_XDECREF( var_first_edge );
    var_first_edge = NULL;

    Py_XDECREF( var_last_edge );
    var_last_edge = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_10__get_outer_edges );
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


static PyObject *impl_numpy$lib$histograms$$$function_11__unsigned_subtract( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *var_signed_to_unsigned = NULL;
    PyObject *var_dt = NULL;
    struct Nuitka_FrameObject *frame_6bd57f6a36a7ee6520f7ecfe72416d6e;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_6bd57f6a36a7ee6520f7ecfe72416d6e = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6bd57f6a36a7ee6520f7ecfe72416d6e, codeobj_6bd57f6a36a7ee6520f7ecfe72416d6e, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6bd57f6a36a7ee6520f7ecfe72416d6e = cache_frame_6bd57f6a36a7ee6520f7ecfe72416d6e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6bd57f6a36a7ee6520f7ecfe72416d6e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6bd57f6a36a7ee6520f7ecfe72416d6e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_byte );
        if ( tmp_dict_key_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ubyte );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dict_key_1 );

            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        Py_DECREF( tmp_dict_key_1 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 335;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_dict_key_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_short );
        if ( tmp_dict_key_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ushort );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_key_2 );

            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        Py_DECREF( tmp_dict_key_2 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 335;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_dict_key_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_intc );
        if ( tmp_dict_key_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_6;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_uintc );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_key_3 );

            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        Py_DECREF( tmp_dict_key_3 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 335;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 339;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_7;
        tmp_dict_key_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_int_ );
        if ( tmp_dict_key_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 339;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 339;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_8;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_uint );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_key_4 );

            exception_lineno = 339;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        Py_DECREF( tmp_dict_key_4 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 335;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_assign_source_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 340;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_9;
        tmp_dict_key_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_longlong );
        if ( tmp_dict_key_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 340;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_key_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 340;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_10;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ulonglong );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_key_5 );

            exception_lineno = 340;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        Py_DECREF( tmp_dict_key_5 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 335;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_signed_to_unsigned == NULL );
        var_signed_to_unsigned = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 342;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_11;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_2 = par_b;
        frame_6bd57f6a36a7ee6520f7ecfe72416d6e->m_frame.f_lineno = 342;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_result_type, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_dt == NULL );
        var_dt = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( var_signed_to_unsigned );
        tmp_dict_name_1 = var_signed_to_unsigned;
        CHECK_OBJECT( var_dt );
        tmp_source_name_11 = var_dt;
        tmp_key_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_type );
        if ( tmp_key_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
        Py_DECREF( tmp_key_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_dt;
            assert( old != NULL );
            var_dt = tmp_assign_source_3;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_6bd57f6a36a7ee6520f7ecfe72416d6e, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_6bd57f6a36a7ee6520f7ecfe72416d6e, exception_keeper_lineno_1 );
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


            exception_lineno = 345;
            type_description_1 = "oooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 346;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }

            tmp_source_name_12 = tmp_mvar_value_12;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_subtract );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_a );
            tmp_tuple_element_1 = par_a;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_b );
            tmp_tuple_element_1 = par_b;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_dict_key_6 = const_str_plain_dtype;
            CHECK_OBJECT( var_dt );
            tmp_dict_value_6 = var_dt;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            frame_6bd57f6a36a7ee6520f7ecfe72416d6e->m_frame.f_lineno = 346;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 343;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_6bd57f6a36a7ee6520f7ecfe72416d6e->m_frame) frame_6bd57f6a36a7ee6520f7ecfe72416d6e->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_11__unsigned_subtract );
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
    try_end_1:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 350;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_13;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_subtract );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_tuple_element_2 = par_a;
        tmp_args_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_b );
        tmp_tuple_element_2 = par_b;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        tmp_dict_key_7 = const_str_plain_casting;
        tmp_dict_value_7 = const_str_plain_unsafe;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_dtype;
        CHECK_OBJECT( var_dt );
        tmp_dict_value_8 = var_dt;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        frame_6bd57f6a36a7ee6520f7ecfe72416d6e->m_frame.f_lineno = 350;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6bd57f6a36a7ee6520f7ecfe72416d6e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6bd57f6a36a7ee6520f7ecfe72416d6e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6bd57f6a36a7ee6520f7ecfe72416d6e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6bd57f6a36a7ee6520f7ecfe72416d6e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6bd57f6a36a7ee6520f7ecfe72416d6e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6bd57f6a36a7ee6520f7ecfe72416d6e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6bd57f6a36a7ee6520f7ecfe72416d6e,
        type_description_1,
        par_a,
        par_b,
        var_signed_to_unsigned,
        var_dt
    );


    // Release cached frame.
    if ( frame_6bd57f6a36a7ee6520f7ecfe72416d6e == cache_frame_6bd57f6a36a7ee6520f7ecfe72416d6e )
    {
        Py_DECREF( frame_6bd57f6a36a7ee6520f7ecfe72416d6e );
    }
    cache_frame_6bd57f6a36a7ee6520f7ecfe72416d6e = NULL;

    assertFrameObject( frame_6bd57f6a36a7ee6520f7ecfe72416d6e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_11__unsigned_subtract );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)var_signed_to_unsigned );
    Py_DECREF( var_signed_to_unsigned );
    var_signed_to_unsigned = NULL;

    CHECK_OBJECT( (PyObject *)var_dt );
    Py_DECREF( var_dt );
    var_dt = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_signed_to_unsigned );
    var_signed_to_unsigned = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_11__unsigned_subtract );
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


static PyObject *impl_numpy$lib$histograms$$$function_12__get_bin_edges( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_bins = python_pars[ 1 ];
    PyObject *par_range = python_pars[ 2 ];
    PyObject *par_weights = python_pars[ 3 ];
    PyObject *var_n_equal_bins = NULL;
    PyObject *var_bin_edges = NULL;
    PyObject *var_bin_name = NULL;
    PyObject *var_first_edge = NULL;
    PyObject *var_last_edge = NULL;
    PyObject *var_keep = NULL;
    PyObject *var_width = NULL;
    PyObject *var_bin_type = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5fab391dee80b3d3f834b9da0ba3a89b;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5fab391dee80b3d3f834b9da0ba3a89b = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert( var_n_equal_bins == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_n_equal_bins = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert( var_bin_edges == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_bin_edges = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5fab391dee80b3d3f834b9da0ba3a89b, codeobj_5fab391dee80b3d3f834b9da0ba3a89b, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5fab391dee80b3d3f834b9da0ba3a89b = cache_frame_5fab391dee80b3d3f834b9da0ba3a89b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5fab391dee80b3d3f834b9da0ba3a89b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5fab391dee80b3d3f834b9da0ba3a89b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_bins );
        tmp_isinstance_inst_1 = par_bins;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_basestring );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "basestring" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 378;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oooooooooooo";
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
            CHECK_OBJECT( par_bins );
            tmp_assign_source_3 = par_bins;
            assert( var_bin_name == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_bin_name = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( var_bin_name );
            tmp_compexpr_left_1 = var_bin_name;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_selectors );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hist_bin_selectors );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_hist_bin_selectors" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 382;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_1 = tmp_mvar_value_2;
            tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "oooooooooooo";
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
                PyObject *tmp_called_instance_1;
                PyObject *tmp_args_element_name_1;
                tmp_called_instance_1 = const_str_digest_5e81e5bd90100da1751f53bffd9ecf28;
                CHECK_OBJECT( var_bin_name );
                tmp_args_element_name_1 = var_bin_name;
                frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 384;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_make_exception_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
                }

                if ( tmp_make_exception_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 384;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 383;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_1 );
                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 383;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_weights );
            tmp_compexpr_left_2 = par_weights;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_8f4feae6666d6286958836942304ebb9;
                frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 386;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 386;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__get_outer_edges );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_outer_edges );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_outer_edges" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 389;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_2 = par_a;
            CHECK_OBJECT( par_range );
            tmp_args_element_name_3 = par_range;
            frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 389;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 389;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 389;
                type_description_1 = "oooooooooooo";
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


                type_description_1 = "oooooooooooo";
                exception_lineno = 389;
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


                type_description_1 = "oooooooooooo";
                exception_lineno = 389;
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

                        type_description_1 = "oooooooooooo";
                        exception_lineno = 389;
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
                exception_lineno = 389;
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
            assert( var_first_edge == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_first_edge = tmp_assign_source_7;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
            assert( var_last_edge == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_last_edge = tmp_assign_source_8;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_range );
            tmp_compexpr_left_3 = par_range;
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
                PyObject *tmp_assign_source_9;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( par_a );
                tmp_compexpr_left_4 = par_a;
                CHECK_OBJECT( var_first_edge );
                tmp_compexpr_right_4 = var_first_edge;
                tmp_assign_source_9 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 393;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_keep == NULL );
                var_keep = tmp_assign_source_9;
            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                CHECK_OBJECT( var_keep );
                tmp_left_name_1 = var_keep;
                CHECK_OBJECT( par_a );
                tmp_compexpr_left_5 = par_a;
                CHECK_OBJECT( var_last_edge );
                tmp_compexpr_right_5 = var_last_edge;
                tmp_right_name_1 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 394;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceAnd, &tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 394;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_10 = tmp_left_name_1;
                var_keep = tmp_assign_source_10;

            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_source_name_1;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 395;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_1 = tmp_mvar_value_4;
                tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_logical_and );
                if ( tmp_called_instance_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 395;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_keep );
                tmp_args_element_name_4 = var_keep;
                frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 395;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_reduce, call_args );
                }

                Py_DECREF( tmp_called_instance_2 );
                if ( tmp_operand_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 395;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                Py_DECREF( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 395;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
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
                {
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_subscribed_name_1;
                    PyObject *tmp_subscript_name_1;
                    CHECK_OBJECT( par_a );
                    tmp_subscribed_name_1 = par_a;
                    CHECK_OBJECT( var_keep );
                    tmp_subscript_name_1 = var_keep;
                    tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 396;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_a;
                        assert( old != NULL );
                        par_a = tmp_assign_source_11;
                        Py_DECREF( old );
                    }

                }
                branch_no_5:;
            }
            branch_no_4:;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_source_name_2;
            if ( par_a == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 398;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = par_a;
            tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
            if ( tmp_compexpr_left_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 398;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_6 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_left_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 398;
                type_description_1 = "oooooooooooo";
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
                PyObject *tmp_assign_source_12;
                tmp_assign_source_12 = const_int_pos_1;
                {
                    PyObject *old = var_n_equal_bins;
                    assert( old != NULL );
                    var_n_equal_bins = tmp_assign_source_12;
                    Py_INCREF( var_n_equal_bins );
                    Py_DECREF( old );
                }

            }
            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_called_name_2;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_tuple_element_1;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_selectors );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hist_bin_selectors );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_hist_bin_selectors" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 402;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_2 = tmp_mvar_value_5;
                CHECK_OBJECT( var_bin_name );
                tmp_subscript_name_2 = var_bin_name;
                tmp_called_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 402;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                if ( par_a == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 402;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_5 = par_a;
                CHECK_OBJECT( var_first_edge );
                tmp_tuple_element_1 = var_first_edge;
                tmp_args_element_name_6 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( var_last_edge );
                tmp_tuple_element_1 = var_last_edge;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_element_name_6, 1, tmp_tuple_element_1 );
                frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 402;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 402;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_width == NULL );
                var_width = tmp_assign_source_13;
            }
            {
                nuitka_bool tmp_condition_result_7;
                int tmp_truth_name_1;
                CHECK_OBJECT( var_width );
                tmp_truth_name_1 = CHECK_IF_TRUE( var_width );
                if ( tmp_truth_name_1 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 403;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_7 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_14;
                    PyObject *tmp_int_arg_1;
                    PyObject *tmp_called_name_3;
                    PyObject *tmp_source_name_3;
                    PyObject *tmp_mvar_value_6;
                    PyObject *tmp_args_element_name_7;
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_called_name_4;
                    PyObject *tmp_mvar_value_7;
                    PyObject *tmp_args_element_name_8;
                    PyObject *tmp_args_element_name_9;
                    PyObject *tmp_right_name_2;
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 404;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_3 = tmp_mvar_value_6;
                    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ceil );
                    if ( tmp_called_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 404;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__unsigned_subtract );

                    if (unlikely( tmp_mvar_value_7 == NULL ))
                    {
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unsigned_subtract );
                    }

                    if ( tmp_mvar_value_7 == NULL )
                    {
                        Py_DECREF( tmp_called_name_3 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unsigned_subtract" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 404;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_4 = tmp_mvar_value_7;
                    CHECK_OBJECT( var_last_edge );
                    tmp_args_element_name_8 = var_last_edge;
                    CHECK_OBJECT( var_first_edge );
                    tmp_args_element_name_9 = var_first_edge;
                    frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 404;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                        tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                    }

                    if ( tmp_left_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_3 );

                        exception_lineno = 404;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_width );
                    tmp_right_name_2 = var_width;
                    tmp_args_element_name_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                    Py_DECREF( tmp_left_name_2 );
                    if ( tmp_args_element_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_3 );

                        exception_lineno = 404;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 404;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_7 };
                        tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                    }

                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_element_name_7 );
                    if ( tmp_int_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 404;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_14 = PyNumber_Int( tmp_int_arg_1 );
                    Py_DECREF( tmp_int_arg_1 );
                    if ( tmp_assign_source_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 404;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_n_equal_bins;
                        assert( old != NULL );
                        var_n_equal_bins = tmp_assign_source_14;
                        Py_DECREF( old );
                    }

                }
                goto branch_end_7;
                branch_no_7:;
                {
                    PyObject *tmp_assign_source_15;
                    tmp_assign_source_15 = const_int_pos_1;
                    {
                        PyObject *old = var_n_equal_bins;
                        assert( old != NULL );
                        var_n_equal_bins = tmp_assign_source_15;
                        Py_INCREF( var_n_equal_bins );
                        Py_DECREF( old );
                    }

                }
                branch_end_7:;
            }
            branch_end_6:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_10;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 410;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_8;
            CHECK_OBJECT( par_bins );
            tmp_args_element_name_10 = par_bins;
            frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 410;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_compexpr_left_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_ndim, call_args );
            }

            if ( tmp_compexpr_left_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 410;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_7 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            Py_DECREF( tmp_compexpr_left_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 410;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
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
            // Tried code:
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_args_element_name_11;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_operator );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "operator" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 412;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_instance_4 = tmp_mvar_value_9;
                CHECK_OBJECT( par_bins );
                tmp_args_element_name_11 = par_bins;
                frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 412;
                {
                    PyObject *call_args[] = { tmp_args_element_name_11 };
                    tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_index, call_args );
                }

                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 412;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = var_n_equal_bins;
                    assert( old != NULL );
                    var_n_equal_bins = tmp_assign_source_16;
                    Py_DECREF( old );
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

            // Preserve existing published exception.
            exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
            Py_XINCREF( exception_preserved_type_1 );
            exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
            Py_XINCREF( exception_preserved_value_1 );
            exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
            Py_XINCREF( exception_preserved_tb_1 );

            if ( exception_keeper_tb_3 == NULL )
            {
                exception_keeper_tb_3 = MAKE_TRACEBACK( frame_5fab391dee80b3d3f834b9da0ba3a89b, exception_keeper_lineno_3 );
            }
            else if ( exception_keeper_lineno_3 != 0 )
            {
                exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_5fab391dee80b3d3f834b9da0ba3a89b, exception_keeper_lineno_3 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
            PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
            PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
            // Tried code:
            {
                nuitka_bool tmp_condition_result_9;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                tmp_compexpr_left_8 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_8 = PyExc_TypeError;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 413;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_5;
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
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_make_exception_arg_3;
                    tmp_make_exception_arg_3 = const_str_digest_187e8a092d90bb33273f86353a526cfc;
                    frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 414;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_3 };
                        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                    }

                    assert( !(tmp_raise_type_3 == NULL) );
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 414;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_5;
                }
                goto branch_end_9;
                branch_no_9:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 411;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame) frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
                branch_end_9:;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_12__get_bin_edges );
            return NULL;
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
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_compexpr_left_9;
                PyObject *tmp_compexpr_right_9;
                CHECK_OBJECT( var_n_equal_bins );
                tmp_compexpr_left_9 = var_n_equal_bins;
                tmp_compexpr_right_9 = const_int_pos_1;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 416;
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
                    tmp_make_exception_arg_4 = const_str_digest_de822264a87a8f251ed358c29ef1e728;
                    frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 417;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_4 };
                        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_4 == NULL) );
                    exception_type = tmp_raise_type_4;
                    exception_lineno = 417;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_10:;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_called_name_5;
                PyObject *tmp_mvar_value_10;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_args_element_name_13;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__get_outer_edges );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_outer_edges );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_outer_edges" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 419;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_6;
                }

                tmp_called_name_5 = tmp_mvar_value_10;
                CHECK_OBJECT( par_a );
                tmp_args_element_name_12 = par_a;
                CHECK_OBJECT( par_range );
                tmp_args_element_name_13 = par_range;
                frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 419;
                {
                    PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
                    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
                }

                if ( tmp_iter_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 419;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 419;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_6;
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


                    type_description_1 = "oooooooooooo";
                    exception_lineno = 419;
                    goto try_except_handler_7;
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


                    type_description_1 = "oooooooooooo";
                    exception_lineno = 419;
                    goto try_except_handler_7;
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

                            type_description_1 = "oooooooooooo";
                            exception_lineno = 419;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 419;
                    goto try_except_handler_7;
                }
            }
            goto try_end_4;
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
            try_end_4:;
            goto try_end_5;
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
            try_end_5:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
            Py_DECREF( tmp_tuple_unpack_2__source_iter );
            tmp_tuple_unpack_2__source_iter = NULL;

            {
                PyObject *tmp_assign_source_20;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
                tmp_assign_source_20 = tmp_tuple_unpack_2__element_1;
                assert( var_first_edge == NULL );
                Py_INCREF( tmp_assign_source_20 );
                var_first_edge = tmp_assign_source_20;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_1 );
            tmp_tuple_unpack_2__element_1 = NULL;

            {
                PyObject *tmp_assign_source_21;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
                tmp_assign_source_21 = tmp_tuple_unpack_2__element_2;
                assert( var_last_edge == NULL );
                Py_INCREF( tmp_assign_source_21 );
                var_last_edge = tmp_assign_source_21;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_2 );
            tmp_tuple_unpack_2__element_2 = NULL;

            goto branch_end_8;
            branch_no_8:;
            {
                nuitka_bool tmp_condition_result_11;
                PyObject *tmp_compexpr_left_10;
                PyObject *tmp_compexpr_right_10;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_mvar_value_11;
                PyObject *tmp_args_element_name_14;
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 421;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_5 = tmp_mvar_value_11;
                CHECK_OBJECT( par_bins );
                tmp_args_element_name_14 = par_bins;
                frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 421;
                {
                    PyObject *call_args[] = { tmp_args_element_name_14 };
                    tmp_compexpr_left_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_ndim, call_args );
                }

                if ( tmp_compexpr_left_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 421;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_10 = const_int_pos_1;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                Py_DECREF( tmp_compexpr_left_10 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 421;
                    type_description_1 = "oooooooooooo";
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
                    PyObject *tmp_assign_source_22;
                    PyObject *tmp_called_instance_6;
                    PyObject *tmp_mvar_value_12;
                    PyObject *tmp_args_element_name_15;
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 422;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_6 = tmp_mvar_value_12;
                    CHECK_OBJECT( par_bins );
                    tmp_args_element_name_15 = par_bins;
                    frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 422;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_15 };
                        tmp_assign_source_22 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_asarray, call_args );
                    }

                    if ( tmp_assign_source_22 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 422;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_bin_edges;
                        assert( old != NULL );
                        var_bin_edges = tmp_assign_source_22;
                        Py_DECREF( old );
                    }

                }
                {
                    nuitka_bool tmp_condition_result_12;
                    PyObject *tmp_called_name_6;
                    PyObject *tmp_source_name_4;
                    PyObject *tmp_mvar_value_13;
                    PyObject *tmp_call_result_1;
                    PyObject *tmp_args_element_name_16;
                    PyObject *tmp_compexpr_left_11;
                    PyObject *tmp_compexpr_right_11;
                    PyObject *tmp_subscribed_name_3;
                    PyObject *tmp_subscript_name_3;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_subscript_name_4;
                    int tmp_truth_name_2;
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 423;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_4 = tmp_mvar_value_13;
                    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_any );
                    if ( tmp_called_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 423;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_bin_edges );
                    tmp_subscribed_name_3 = var_bin_edges;
                    tmp_subscript_name_3 = const_slice_none_int_neg_1_none;
                    tmp_compexpr_left_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                    if ( tmp_compexpr_left_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_6 );

                        exception_lineno = 423;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_bin_edges );
                    tmp_subscribed_name_4 = var_bin_edges;
                    tmp_subscript_name_4 = const_slice_int_pos_1_none_none;
                    tmp_compexpr_right_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                    if ( tmp_compexpr_right_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_6 );
                        Py_DECREF( tmp_compexpr_left_11 );

                        exception_lineno = 423;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_16 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
                    Py_DECREF( tmp_compexpr_left_11 );
                    Py_DECREF( tmp_compexpr_right_11 );
                    if ( tmp_args_element_name_16 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_6 );

                        exception_lineno = 423;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 423;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_16 };
                        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
                    }

                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_args_element_name_16 );
                    if ( tmp_call_result_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 423;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
                    if ( tmp_truth_name_2 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_call_result_1 );

                        exception_lineno = 423;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_12 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    Py_DECREF( tmp_call_result_1 );
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
                        PyObject *tmp_raise_type_5;
                        PyObject *tmp_make_exception_arg_5;
                        tmp_make_exception_arg_5 = const_str_digest_100ecf9040cd8cf695cf29d8f85c977d;
                        frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 424;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_5 };
                            tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        assert( !(tmp_raise_type_5 == NULL) );
                        exception_type = tmp_raise_type_5;
                        exception_lineno = 424;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_no_12:;
                }
                goto branch_end_11;
                branch_no_11:;
                {
                    PyObject *tmp_raise_type_6;
                    PyObject *tmp_make_exception_arg_6;
                    tmp_make_exception_arg_6 = const_str_digest_356e1443c2d562ea3a8727214b874ff1;
                    frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 428;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_6 };
                        tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_6 == NULL) );
                    exception_type = tmp_raise_type_6;
                    exception_lineno = 428;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_end_11:;
            }
            branch_end_8:;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        if ( var_n_equal_bins == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n_equal_bins" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 430;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_12 = var_n_equal_bins;
        tmp_compexpr_right_12 = Py_None;
        tmp_condition_result_13 = ( tmp_compexpr_left_12 != tmp_compexpr_right_12 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_args_element_name_19;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 434;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_14;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_result_type );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 434;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_first_edge == NULL )
            {
                Py_DECREF( tmp_called_name_7 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_edge" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 434;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_17 = var_first_edge;
            if ( var_last_edge == NULL )
            {
                Py_DECREF( tmp_called_name_7 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "last_edge" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 434;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_18 = var_last_edge;
            if ( par_a == NULL )
            {
                Py_DECREF( tmp_called_name_7 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 434;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_19 = par_a;
            frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 434;
            {
                PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
                tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 434;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_bin_type == NULL );
            var_bin_type = tmp_assign_source_23;
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_16;
            int tmp_truth_name_3;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 435;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_15;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_issubdtype );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 435;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_bin_type );
            tmp_args_element_name_20 = var_bin_type;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_16 == NULL )
            {
                Py_DECREF( tmp_called_name_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 435;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_16;
            tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_integer );
            if ( tmp_args_element_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_8 );

                exception_lineno = 435;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 435;
            {
                PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_21 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 435;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 435;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_14 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
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
                PyObject *tmp_assign_source_24;
                PyObject *tmp_called_instance_7;
                PyObject *tmp_mvar_value_17;
                PyObject *tmp_args_element_name_22;
                PyObject *tmp_args_element_name_23;
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 436;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_7 = tmp_mvar_value_17;
                CHECK_OBJECT( var_bin_type );
                tmp_args_element_name_22 = var_bin_type;
                tmp_args_element_name_23 = (PyObject *)&PyFloat_Type;
                frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 436;
                {
                    PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23 };
                    tmp_assign_source_24 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_result_type, call_args );
                }

                if ( tmp_assign_source_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 436;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_bin_type;
                    assert( old != NULL );
                    var_bin_type = tmp_assign_source_24;
                    Py_DECREF( old );
                }

            }
            branch_no_14:;
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 439;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_18;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_linspace );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_first_edge == NULL )
            {
                Py_DECREF( tmp_called_name_9 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_edge" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 440;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_2 = var_first_edge;
            tmp_args_name_1 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            if ( var_last_edge == NULL )
            {
                Py_DECREF( tmp_called_name_9 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "last_edge" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 440;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_2 = var_last_edge;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            if ( var_n_equal_bins == NULL )
            {
                Py_DECREF( tmp_called_name_9 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n_equal_bins" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 440;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_3 = var_n_equal_bins;
            tmp_right_name_3 = const_int_pos_1;
            tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_9 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 440;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_2 );
            tmp_dict_key_1 = const_str_plain_endpoint;
            tmp_dict_value_1 = Py_True;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_dtype;
            CHECK_OBJECT( var_bin_type );
            tmp_dict_value_2 = var_bin_type;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame.f_lineno = 439;
            tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_bin_edges;
                var_bin_edges = tmp_assign_source_25;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            CHECK_OBJECT( var_bin_edges );
            tmp_tuple_element_3 = var_bin_edges;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
            if ( var_first_edge == NULL )
            {
                Py_DECREF( tmp_return_value );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_edge" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 442;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_4 = var_first_edge;
            tmp_tuple_element_3 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
            if ( var_last_edge == NULL )
            {
                Py_DECREF( tmp_return_value );
                Py_DECREF( tmp_tuple_element_3 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "last_edge" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 442;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_4 = var_last_edge;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
            if ( var_n_equal_bins == NULL )
            {
                Py_DECREF( tmp_return_value );
                Py_DECREF( tmp_tuple_element_3 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n_equal_bins" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 442;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_4 = var_n_equal_bins;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_tuple_element_3, 2, tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
            goto frame_return_exit_1;
        }
        goto branch_end_13;
        branch_no_13:;
        {
            PyObject *tmp_tuple_element_5;
            if ( var_bin_edges == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bin_edges" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 444;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_5 = var_bin_edges;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
            tmp_tuple_element_5 = Py_None;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
            goto frame_return_exit_1;
        }
        branch_end_13:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5fab391dee80b3d3f834b9da0ba3a89b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5fab391dee80b3d3f834b9da0ba3a89b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5fab391dee80b3d3f834b9da0ba3a89b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5fab391dee80b3d3f834b9da0ba3a89b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5fab391dee80b3d3f834b9da0ba3a89b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5fab391dee80b3d3f834b9da0ba3a89b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5fab391dee80b3d3f834b9da0ba3a89b,
        type_description_1,
        par_a,
        par_bins,
        par_range,
        par_weights,
        var_n_equal_bins,
        var_bin_edges,
        var_bin_name,
        var_first_edge,
        var_last_edge,
        var_keep,
        var_width,
        var_bin_type
    );


    // Release cached frame.
    if ( frame_5fab391dee80b3d3f834b9da0ba3a89b == cache_frame_5fab391dee80b3d3f834b9da0ba3a89b )
    {
        Py_DECREF( frame_5fab391dee80b3d3f834b9da0ba3a89b );
    }
    cache_frame_5fab391dee80b3d3f834b9da0ba3a89b = NULL;

    assertFrameObject( frame_5fab391dee80b3d3f834b9da0ba3a89b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_12__get_bin_edges );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_bins );
    Py_DECREF( par_bins );
    par_bins = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)par_weights );
    Py_DECREF( par_weights );
    par_weights = NULL;

    Py_XDECREF( var_n_equal_bins );
    var_n_equal_bins = NULL;

    Py_XDECREF( var_bin_edges );
    var_bin_edges = NULL;

    Py_XDECREF( var_bin_name );
    var_bin_name = NULL;

    Py_XDECREF( var_first_edge );
    var_first_edge = NULL;

    Py_XDECREF( var_last_edge );
    var_last_edge = NULL;

    Py_XDECREF( var_keep );
    var_keep = NULL;

    Py_XDECREF( var_width );
    var_width = NULL;

    Py_XDECREF( var_bin_type );
    var_bin_type = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_bins );
    Py_DECREF( par_bins );
    par_bins = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)par_weights );
    Py_DECREF( par_weights );
    par_weights = NULL;

    Py_XDECREF( var_n_equal_bins );
    var_n_equal_bins = NULL;

    Py_XDECREF( var_bin_edges );
    var_bin_edges = NULL;

    Py_XDECREF( var_bin_name );
    var_bin_name = NULL;

    Py_XDECREF( var_first_edge );
    var_first_edge = NULL;

    Py_XDECREF( var_last_edge );
    var_last_edge = NULL;

    Py_XDECREF( var_keep );
    var_keep = NULL;

    Py_XDECREF( var_width );
    var_width = NULL;

    Py_XDECREF( var_bin_type );
    var_bin_type = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_12__get_bin_edges );
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


static PyObject *impl_numpy$lib$histograms$$$function_13__search_sorted_inclusive( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_v = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c89db7d0025e925dfb2a00bc13aa67f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c89db7d0025e925dfb2a00bc13aa67f8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c89db7d0025e925dfb2a00bc13aa67f8, codeobj_c89db7d0025e925dfb2a00bc13aa67f8, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *) );
    frame_c89db7d0025e925dfb2a00bc13aa67f8 = cache_frame_c89db7d0025e925dfb2a00bc13aa67f8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c89db7d0025e925dfb2a00bc13aa67f8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c89db7d0025e925dfb2a00bc13aa67f8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 453;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_concatenate );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_source_name_2 = par_a;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_searchsorted );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 454;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_v );
        tmp_subscribed_name_1 = par_v;
        tmp_subscript_name_1 = const_slice_none_int_neg_1_none;
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 454;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_plain_left;
        frame_c89db7d0025e925dfb2a00bc13aa67f8->m_frame.f_lineno = 454;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 454;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_a );
        tmp_source_name_3 = par_a;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_searchsorted );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 455;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_v );
        tmp_subscribed_name_2 = par_v;
        tmp_subscript_name_2 = const_slice_int_neg_1_none_none;
        tmp_args_element_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 455;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = const_str_plain_right;
        frame_c89db7d0025e925dfb2a00bc13aa67f8->m_frame.f_lineno = 455;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 455;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
        frame_c89db7d0025e925dfb2a00bc13aa67f8->m_frame.f_lineno = 453;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c89db7d0025e925dfb2a00bc13aa67f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c89db7d0025e925dfb2a00bc13aa67f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c89db7d0025e925dfb2a00bc13aa67f8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c89db7d0025e925dfb2a00bc13aa67f8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c89db7d0025e925dfb2a00bc13aa67f8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c89db7d0025e925dfb2a00bc13aa67f8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c89db7d0025e925dfb2a00bc13aa67f8,
        type_description_1,
        par_a,
        par_v
    );


    // Release cached frame.
    if ( frame_c89db7d0025e925dfb2a00bc13aa67f8 == cache_frame_c89db7d0025e925dfb2a00bc13aa67f8 )
    {
        Py_DECREF( frame_c89db7d0025e925dfb2a00bc13aa67f8 );
    }
    cache_frame_c89db7d0025e925dfb2a00bc13aa67f8 = NULL;

    assertFrameObject( frame_c89db7d0025e925dfb2a00bc13aa67f8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_13__search_sorted_inclusive );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_13__search_sorted_inclusive );
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


static PyObject *impl_numpy$lib$histograms$$$function_14__histogram_bin_edges_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_bins = python_pars[ 1 ];
    PyObject *par_range = python_pars[ 2 ];
    PyObject *par_weights = python_pars[ 3 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_bins );
        tmp_tuple_element_1 = par_bins;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_weights );
        tmp_tuple_element_1 = par_weights;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_14__histogram_bin_edges_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_bins );
    Py_DECREF( par_bins );
    par_bins = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)par_weights );
    Py_DECREF( par_weights );
    par_weights = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_14__histogram_bin_edges_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$histograms$$$function_15_histogram_bin_edges( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_bins = python_pars[ 1 ];
    PyObject *par_range = python_pars[ 2 ];
    PyObject *par_weights = python_pars[ 3 ];
    PyObject *var_bin_edges = NULL;
    PyObject *var__ = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5548ee6dcc35f02ec796337627b54ff3;
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
    static struct Nuitka_FrameObject *cache_frame_5548ee6dcc35f02ec796337627b54ff3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5548ee6dcc35f02ec796337627b54ff3, codeobj_5548ee6dcc35f02ec796337627b54ff3, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5548ee6dcc35f02ec796337627b54ff3 = cache_frame_5548ee6dcc35f02ec796337627b54ff3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5548ee6dcc35f02ec796337627b54ff3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5548ee6dcc35f02ec796337627b54ff3 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__ravel_and_check_weights );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ravel_and_check_weights );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ravel_and_check_weights" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 660;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_weights );
        tmp_args_element_name_2 = par_weights;
        frame_5548ee6dcc35f02ec796337627b54ff3->m_frame.f_lineno = 660;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 660;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 660;
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
            exception_lineno = 660;
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
            exception_lineno = 660;
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
                    exception_lineno = 660;
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
            exception_lineno = 660;
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
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_4;
            Py_INCREF( par_a );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_weights;
            assert( old != NULL );
            par_weights = tmp_assign_source_5;
            Py_INCREF( par_weights );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__get_bin_edges );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_bin_edges );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_bin_edges" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 661;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_3 = par_a;
        CHECK_OBJECT( par_bins );
        tmp_args_element_name_4 = par_bins;
        CHECK_OBJECT( par_range );
        tmp_args_element_name_5 = par_range;
        CHECK_OBJECT( par_weights );
        tmp_args_element_name_6 = par_weights;
        frame_5548ee6dcc35f02ec796337627b54ff3->m_frame.f_lineno = 661;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 661;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 661;
            type_description_1 = "oooooo";
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
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "oooooo";
            exception_lineno = 661;
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
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "oooooo";
            exception_lineno = 661;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 661;
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

            type_description_1 = "oooooo";
            exception_lineno = 661;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5548ee6dcc35f02ec796337627b54ff3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5548ee6dcc35f02ec796337627b54ff3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5548ee6dcc35f02ec796337627b54ff3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5548ee6dcc35f02ec796337627b54ff3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5548ee6dcc35f02ec796337627b54ff3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5548ee6dcc35f02ec796337627b54ff3,
        type_description_1,
        par_a,
        par_bins,
        par_range,
        par_weights,
        var_bin_edges,
        var__
    );


    // Release cached frame.
    if ( frame_5548ee6dcc35f02ec796337627b54ff3 == cache_frame_5548ee6dcc35f02ec796337627b54ff3 )
    {
        Py_DECREF( frame_5548ee6dcc35f02ec796337627b54ff3 );
    }
    cache_frame_5548ee6dcc35f02ec796337627b54ff3 = NULL;

    assertFrameObject( frame_5548ee6dcc35f02ec796337627b54ff3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
        assert( var_bin_edges == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_bin_edges = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
        assert( var__ == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var__ = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    CHECK_OBJECT( var_bin_edges );
    tmp_return_value = var_bin_edges;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_15_histogram_bin_edges );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_bins );
    Py_DECREF( par_bins );
    par_bins = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)par_weights );
    Py_DECREF( par_weights );
    par_weights = NULL;

    CHECK_OBJECT( (PyObject *)var_bin_edges );
    Py_DECREF( var_bin_edges );
    var_bin_edges = NULL;

    CHECK_OBJECT( (PyObject *)var__ );
    Py_DECREF( var__ );
    var__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_bins );
    Py_DECREF( par_bins );
    par_bins = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)par_weights );
    Py_DECREF( par_weights );
    par_weights = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_15_histogram_bin_edges );
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


static PyObject *impl_numpy$lib$histograms$$$function_16__histogram_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_bins = python_pars[ 1 ];
    PyObject *par_range = python_pars[ 2 ];
    PyObject *par_normed = python_pars[ 3 ];
    PyObject *par_weights = python_pars[ 4 ];
    PyObject *par_density = python_pars[ 5 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_bins );
        tmp_tuple_element_1 = par_bins;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_weights );
        tmp_tuple_element_1 = par_weights;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_16__histogram_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_bins );
    Py_DECREF( par_bins );
    par_bins = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)par_normed );
    Py_DECREF( par_normed );
    par_normed = NULL;

    CHECK_OBJECT( (PyObject *)par_weights );
    Py_DECREF( par_weights );
    par_weights = NULL;

    CHECK_OBJECT( (PyObject *)par_density );
    Py_DECREF( par_density );
    par_density = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_16__histogram_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$histograms$$$function_17_histogram( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_bins = python_pars[ 1 ];
    PyObject *par_range = python_pars[ 2 ];
    PyObject *par_normed = python_pars[ 3 ];
    PyObject *par_weights = python_pars[ 4 ];
    PyObject *par_density = python_pars[ 5 ];
    PyObject *var_bin_edges = NULL;
    PyObject *var_uniform_bins = NULL;
    PyObject *var_ntype = NULL;
    PyObject *var_simple_weights = NULL;
    PyObject *var_first_edge = NULL;
    PyObject *var_last_edge = NULL;
    PyObject *var_n_equal_bins = NULL;
    PyObject *var_n = NULL;
    PyObject *var_norm = NULL;
    PyObject *var_i = NULL;
    PyObject *var_tmp_a = NULL;
    PyObject *var_tmp_w = NULL;
    PyObject *var_keep = NULL;
    PyObject *var_f_indices = NULL;
    PyObject *var_indices = NULL;
    PyObject *var_decrement = NULL;
    PyObject *var_increment = NULL;
    PyObject *var_cum_n = NULL;
    PyObject *var_sa = NULL;
    PyObject *var_zero = NULL;
    PyObject *var_sorting_index = NULL;
    PyObject *var_sw = NULL;
    PyObject *var_cw = NULL;
    PyObject *var_bin_index = NULL;
    PyObject *var_db = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    PyObject *tmp_inplace_assign_subscr_3__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_3__target = NULL;
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
    struct Nuitka_FrameObject *frame_c3447a5136d984b1b7e11bb603fb456e;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    bool tmp_result;
    int tmp_res;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c3447a5136d984b1b7e11bb603fb456e = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c3447a5136d984b1b7e11bb603fb456e, codeobj_c3447a5136d984b1b7e11bb603fb456e, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c3447a5136d984b1b7e11bb603fb456e = cache_frame_c3447a5136d984b1b7e11bb603fb456e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c3447a5136d984b1b7e11bb603fb456e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c3447a5136d984b1b7e11bb603fb456e ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__ravel_and_check_weights );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ravel_and_check_weights );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ravel_and_check_weights" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 783;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_weights );
        tmp_args_element_name_2 = par_weights;
        frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 783;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 783;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 783;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
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


            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            exception_lineno = 783;
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


            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            exception_lineno = 783;
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

                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    exception_lineno = 783;
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

            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            exception_lineno = 783;
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
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_4;
            Py_INCREF( par_a );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_weights;
            assert( old != NULL );
            par_weights = tmp_assign_source_5;
            Py_INCREF( par_weights );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__get_bin_edges );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_bin_edges );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_bin_edges" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 785;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_3 = par_a;
        CHECK_OBJECT( par_bins );
        tmp_args_element_name_4 = par_bins;
        CHECK_OBJECT( par_range );
        tmp_args_element_name_5 = par_range;
        CHECK_OBJECT( par_weights );
        tmp_args_element_name_6 = par_weights;
        frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 785;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 785;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 785;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
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
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            exception_lineno = 785;
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
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            exception_lineno = 785;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    exception_lineno = 785;
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

            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            exception_lineno = 785;
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
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
        assert( var_bin_edges == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_bin_edges = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
        assert( var_uniform_bins == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_uniform_bins = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_weights );
        tmp_compexpr_left_1 = par_weights;
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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 789;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_3;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 789;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 789;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_4;
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_intp );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 789;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 789;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 789;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_ntype == NULL );
            var_ntype = tmp_assign_source_11;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_weights );
            tmp_source_name_3 = par_weights;
            tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 791;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_ntype == NULL );
            var_ntype = tmp_assign_source_12;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_13;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_8;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( par_weights );
        tmp_compexpr_left_2 = par_weights;
        tmp_compexpr_right_2 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 801;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_can_cast );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 801;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_weights );
        tmp_source_name_5 = par_weights;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 801;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 801;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_6;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_double );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 801;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 801;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_or_left_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_or_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 801;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_2 );

            exception_lineno = 802;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
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
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 802;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_7;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_can_cast );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 802;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_weights );
        tmp_source_name_8 = par_weights;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dtype );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 802;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = (PyObject *)&PyComplex_Type;
        frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 802;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_or_right_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_or_right_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 802;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_assign_source_13 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF( tmp_or_left_value_1 );
        tmp_assign_source_13 = tmp_or_left_value_1;
        or_end_1:;
        assert( var_simple_weights == NULL );
        var_simple_weights = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_uniform_bins );
        tmp_compexpr_left_3 = var_uniform_bins;
        tmp_compexpr_right_3 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_simple_weights );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_simple_weights );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 805;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( var_uniform_bins );
            tmp_iter_arg_3 = var_uniform_bins;
            tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 809;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
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
            tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_5, 0, 3 );
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


                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                exception_lineno = 809;
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
            tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_6, 1, 3 );
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


                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                exception_lineno = 809;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_7, 2, 3 );
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


                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                exception_lineno = 809;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_3 == NULL );
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_17;
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

                        type_description_1 = "oooooooooNoooooooooooooooooooooo";
                        exception_lineno = 809;
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

                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                exception_lineno = 809;
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
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_18 = tmp_tuple_unpack_3__element_1;
            assert( var_first_edge == NULL );
            Py_INCREF( tmp_assign_source_18 );
            var_first_edge = tmp_assign_source_18;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_19 = tmp_tuple_unpack_3__element_2;
            assert( var_last_edge == NULL );
            Py_INCREF( tmp_assign_source_19 );
            var_last_edge = tmp_assign_source_19;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
            tmp_assign_source_20 = tmp_tuple_unpack_3__element_3;
            assert( var_n_equal_bins == NULL );
            Py_INCREF( tmp_assign_source_20 );
            var_n_equal_bins = tmp_assign_source_20;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 812;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_8;
            CHECK_OBJECT( var_n_equal_bins );
            tmp_args_element_name_12 = var_n_equal_bins;
            CHECK_OBJECT( var_ntype );
            tmp_args_element_name_13 = var_ntype;
            frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 812;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
                tmp_assign_source_21 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_zeros, call_args );
            }

            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 812;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_n == NULL );
            var_n = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            CHECK_OBJECT( var_n_equal_bins );
            tmp_left_name_1 = var_n_equal_bins;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__unsigned_subtract );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unsigned_subtract );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unsigned_subtract" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 815;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_9;
            CHECK_OBJECT( var_last_edge );
            tmp_args_element_name_14 = var_last_edge;
            CHECK_OBJECT( var_first_edge );
            tmp_args_element_name_15 = var_first_edge;
            frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 815;
            {
                PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
                tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 815;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_22 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 815;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_norm == NULL );
            var_norm = tmp_assign_source_22;
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_args_element_name_18;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__range );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__range );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_range" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 821;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_10;
            tmp_args_element_name_16 = const_int_0;
            CHECK_OBJECT( par_a );
            tmp_len_arg_1 = par_a;
            tmp_args_element_name_17 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_args_element_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 821;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_18 = const_int_pos_65536;
            frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 821;
            {
                PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
                tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_iter_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 821;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_4 );
            Py_DECREF( tmp_iter_arg_4 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 821;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_23;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_24 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_24 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    exception_lineno = 821;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_24;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_25 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_25;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_step_name_1;
            CHECK_OBJECT( par_a );
            tmp_subscribed_name_1 = par_a;
            CHECK_OBJECT( var_i );
            tmp_start_name_1 = var_i;
            CHECK_OBJECT( var_i );
            tmp_left_name_2 = var_i;
            tmp_right_name_2 = const_int_pos_65536;
            tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_stop_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 822;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            Py_DECREF( tmp_stop_name_1 );
            assert( !(tmp_subscript_name_1 == NULL) );
            tmp_assign_source_26 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 822;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_tmp_a;
                var_tmp_a = tmp_assign_source_26;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( par_weights );
            tmp_compexpr_left_4 = par_weights;
            tmp_compexpr_right_4 = Py_None;
            tmp_condition_result_3 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_27;
                tmp_assign_source_27 = Py_None;
                {
                    PyObject *old = var_tmp_w;
                    var_tmp_w = tmp_assign_source_27;
                    Py_INCREF( var_tmp_w );
                    Py_XDECREF( old );
                }

            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_28;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_start_name_2;
                PyObject *tmp_stop_name_2;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_step_name_2;
                CHECK_OBJECT( par_weights );
                tmp_subscribed_name_2 = par_weights;
                CHECK_OBJECT( var_i );
                tmp_start_name_2 = var_i;
                CHECK_OBJECT( var_i );
                tmp_left_name_3 = var_i;
                tmp_right_name_3 = const_int_pos_65536;
                tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
                if ( tmp_stop_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 826;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                tmp_step_name_2 = Py_None;
                tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                Py_DECREF( tmp_stop_name_2 );
                assert( !(tmp_subscript_name_2 == NULL) );
                tmp_assign_source_28 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                Py_DECREF( tmp_subscript_name_2 );
                if ( tmp_assign_source_28 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 826;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                {
                    PyObject *old = var_tmp_w;
                    var_tmp_w = tmp_assign_source_28;
                    Py_XDECREF( old );
                }

            }
            branch_end_3:;
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_tmp_a );
            tmp_compexpr_left_5 = var_tmp_a;
            CHECK_OBJECT( var_first_edge );
            tmp_compexpr_right_5 = var_first_edge;
            tmp_assign_source_29 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 829;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_keep;
                var_keep = tmp_assign_source_29;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( var_keep );
            tmp_left_name_4 = var_keep;
            CHECK_OBJECT( var_tmp_a );
            tmp_compexpr_left_6 = var_tmp_a;
            CHECK_OBJECT( var_last_edge );
            tmp_compexpr_right_6 = var_last_edge;
            tmp_right_name_4 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 830;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceAnd, &tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 830;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_assign_source_30 = tmp_left_name_4;
            var_keep = tmp_assign_source_30;

        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_19;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 831;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_source_name_9 = tmp_mvar_value_11;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_logical_and );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 831;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT( var_keep );
            tmp_args_element_name_19 = var_keep;
            frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 831;
            {
                PyObject *call_args[] = { tmp_args_element_name_19 };
                tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_reduce, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 831;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 831;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
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
                PyObject *tmp_assign_source_31;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                CHECK_OBJECT( var_tmp_a );
                tmp_subscribed_name_3 = var_tmp_a;
                CHECK_OBJECT( var_keep );
                tmp_subscript_name_3 = var_keep;
                tmp_assign_source_31 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                if ( tmp_assign_source_31 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 832;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                {
                    PyObject *old = var_tmp_a;
                    assert( old != NULL );
                    var_tmp_a = tmp_assign_source_31;
                    Py_DECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                CHECK_OBJECT( var_tmp_w );
                tmp_compexpr_left_7 = var_tmp_w;
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
                    PyObject *tmp_assign_source_32;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_subscript_name_4;
                    CHECK_OBJECT( var_tmp_w );
                    tmp_subscribed_name_4 = var_tmp_w;
                    CHECK_OBJECT( var_keep );
                    tmp_subscript_name_4 = var_keep;
                    tmp_assign_source_32 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                    if ( tmp_assign_source_32 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 834;
                        type_description_1 = "oooooooooNoooooooooooooooooooooo";
                        goto try_except_handler_8;
                    }
                    {
                        PyObject *old = var_tmp_w;
                        assert( old != NULL );
                        var_tmp_w = tmp_assign_source_32;
                        Py_DECREF( old );
                    }

                }
                branch_no_5:;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_11;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( var_tmp_a );
            tmp_source_name_10 = var_tmp_a;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_astype );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 839;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT( var_bin_edges );
            tmp_source_name_11 = var_bin_edges;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_dtype );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_8 );

                exception_lineno = 839;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_args_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
            frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 839;
            tmp_assign_source_33 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 839;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_tmp_a;
                assert( old != NULL );
                var_tmp_a = tmp_assign_source_33;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_left_name_5;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_right_name_5;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__unsigned_subtract );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unsigned_subtract );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unsigned_subtract" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 843;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_called_name_9 = tmp_mvar_value_12;
            CHECK_OBJECT( var_tmp_a );
            tmp_args_element_name_20 = var_tmp_a;
            CHECK_OBJECT( var_first_edge );
            tmp_args_element_name_21 = var_first_edge;
            frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 843;
            {
                PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
                tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
            }

            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 843;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT( var_norm );
            tmp_right_name_5 = var_norm;
            tmp_assign_source_34 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 843;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_f_indices;
                var_f_indices = tmp_assign_source_34;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_12;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_source_name_13;
            PyObject *tmp_mvar_value_13;
            CHECK_OBJECT( var_f_indices );
            tmp_source_name_12 = var_f_indices;
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_astype );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 844;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_13 == NULL )
            {
                Py_DECREF( tmp_called_name_10 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 844;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_source_name_13 = tmp_mvar_value_13;
            tmp_args_element_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_intp );
            if ( tmp_args_element_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 844;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 844;
            {
                PyObject *call_args[] = { tmp_args_element_name_22 };
                tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_22 );
            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 844;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_indices;
                var_indices = tmp_assign_source_35;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_36;
            CHECK_OBJECT( var_indices );
            tmp_assign_source_36 = var_indices;
            {
                PyObject *old = tmp_inplace_assign_subscr_1__target;
                tmp_inplace_assign_subscr_1__target = tmp_assign_source_36;
                Py_INCREF( tmp_inplace_assign_subscr_1__target );
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            CHECK_OBJECT( var_indices );
            tmp_compexpr_left_8 = var_indices;
            CHECK_OBJECT( var_n_equal_bins );
            tmp_compexpr_right_8 = var_n_equal_bins;
            tmp_assign_source_37 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 845;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_inplace_assign_subscr_1__subscript;
                tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_37;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_left_name_6;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_right_name_6;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
            tmp_subscribed_name_5 = tmp_inplace_assign_subscr_1__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
            tmp_subscript_name_5 = tmp_inplace_assign_subscr_1__subscript;
            tmp_left_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 845;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            tmp_right_name_6 = const_int_pos_1;
            tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_6 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 845;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_9;
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


                exception_lineno = 845;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
        Py_DECREF( tmp_inplace_assign_subscr_1__target );
        tmp_inplace_assign_subscr_1__target = NULL;

        Py_XDECREF( tmp_inplace_assign_subscr_1__subscript );
        tmp_inplace_assign_subscr_1__subscript = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        try_end_7:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
        Py_DECREF( tmp_inplace_assign_subscr_1__target );
        tmp_inplace_assign_subscr_1__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
        tmp_inplace_assign_subscr_1__subscript = NULL;

        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            CHECK_OBJECT( var_tmp_a );
            tmp_compexpr_left_9 = var_tmp_a;
            CHECK_OBJECT( var_bin_edges );
            tmp_subscribed_name_6 = var_bin_edges;
            CHECK_OBJECT( var_indices );
            tmp_subscript_name_6 = var_indices;
            tmp_compexpr_right_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            if ( tmp_compexpr_right_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 849;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_assign_source_38 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            Py_DECREF( tmp_compexpr_right_9 );
            if ( tmp_assign_source_38 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 849;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_decrement;
                var_decrement = tmp_assign_source_38;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_39;
            CHECK_OBJECT( var_indices );
            tmp_assign_source_39 = var_indices;
            {
                PyObject *old = tmp_inplace_assign_subscr_2__target;
                tmp_inplace_assign_subscr_2__target = tmp_assign_source_39;
                Py_INCREF( tmp_inplace_assign_subscr_2__target );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_40;
            CHECK_OBJECT( var_decrement );
            tmp_assign_source_40 = var_decrement;
            {
                PyObject *old = tmp_inplace_assign_subscr_2__subscript;
                tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_40;
                Py_INCREF( tmp_inplace_assign_subscr_2__subscript );
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_left_name_7;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
            tmp_subscribed_name_7 = tmp_inplace_assign_subscr_2__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
            tmp_subscript_name_7 = tmp_inplace_assign_subscr_2__subscript;
            tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 850;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_10;
            }
            tmp_right_name_7 = const_int_pos_1;
            tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_7 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 850;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_10;
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


                exception_lineno = 850;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_10;
            }
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
        Py_DECREF( tmp_inplace_assign_subscr_2__target );
        tmp_inplace_assign_subscr_2__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
        tmp_inplace_assign_subscr_2__subscript = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_8;
        // End of try:
        try_end_8:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
        Py_DECREF( tmp_inplace_assign_subscr_2__target );
        tmp_inplace_assign_subscr_2__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
        tmp_inplace_assign_subscr_2__subscript = NULL;

        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_left_name_8;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_8;
            PyObject *tmp_right_name_9;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            CHECK_OBJECT( var_tmp_a );
            tmp_compexpr_left_10 = var_tmp_a;
            CHECK_OBJECT( var_bin_edges );
            tmp_subscribed_name_8 = var_bin_edges;
            CHECK_OBJECT( var_indices );
            tmp_left_name_9 = var_indices;
            tmp_right_name_8 = const_int_pos_1;
            tmp_subscript_name_8 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_9, tmp_right_name_8 );
            if ( tmp_subscript_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 852;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_compexpr_right_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
            Py_DECREF( tmp_subscript_name_8 );
            if ( tmp_compexpr_right_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 852;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_left_name_8 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
            Py_DECREF( tmp_compexpr_right_10 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 852;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT( var_indices );
            tmp_compexpr_left_11 = var_indices;
            CHECK_OBJECT( var_n_equal_bins );
            tmp_left_name_10 = var_n_equal_bins;
            tmp_right_name_10 = const_int_pos_1;
            tmp_compexpr_right_11 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_10, tmp_right_name_10 );
            if ( tmp_compexpr_right_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 853;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_right_name_9 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
            Py_DECREF( tmp_compexpr_right_11 );
            if ( tmp_right_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 853;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_assign_source_41 = BINARY_OPERATION( PyNumber_And, tmp_left_name_8, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_right_name_9 );
            if ( tmp_assign_source_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 852;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_increment;
                var_increment = tmp_assign_source_41;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_42;
            CHECK_OBJECT( var_indices );
            tmp_assign_source_42 = var_indices;
            {
                PyObject *old = tmp_inplace_assign_subscr_3__target;
                tmp_inplace_assign_subscr_3__target = tmp_assign_source_42;
                Py_INCREF( tmp_inplace_assign_subscr_3__target );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_43;
            CHECK_OBJECT( var_increment );
            tmp_assign_source_43 = var_increment;
            {
                PyObject *old = tmp_inplace_assign_subscr_3__subscript;
                tmp_inplace_assign_subscr_3__subscript = tmp_assign_source_43;
                Py_INCREF( tmp_inplace_assign_subscr_3__subscript );
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_left_name_11;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_right_name_11;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT( tmp_inplace_assign_subscr_3__target );
            tmp_subscribed_name_9 = tmp_inplace_assign_subscr_3__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_3__subscript );
            tmp_subscript_name_9 = tmp_inplace_assign_subscr_3__subscript;
            tmp_left_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
            if ( tmp_left_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 854;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            tmp_right_name_11 = const_int_pos_1;
            tmp_ass_subvalue_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_11, tmp_right_name_11 );
            Py_DECREF( tmp_left_name_11 );
            if ( tmp_ass_subvalue_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 854;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            CHECK_OBJECT( tmp_inplace_assign_subscr_3__target );
            tmp_ass_subscribed_3 = tmp_inplace_assign_subscr_3__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_3__subscript );
            tmp_ass_subscript_3 = tmp_inplace_assign_subscr_3__subscript;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            Py_DECREF( tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 854;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__target );
        Py_DECREF( tmp_inplace_assign_subscr_3__target );
        tmp_inplace_assign_subscr_3__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_3__subscript );
        tmp_inplace_assign_subscr_3__subscript = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_8;
        // End of try:
        try_end_9:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__target );
        Py_DECREF( tmp_inplace_assign_subscr_3__target );
        tmp_inplace_assign_subscr_3__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_3__subscript );
        tmp_inplace_assign_subscr_3__subscript = NULL;

        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            PyObject *tmp_source_name_14;
            CHECK_OBJECT( var_ntype );
            tmp_source_name_14 = var_ntype;
            tmp_compexpr_left_12 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_kind );
            if ( tmp_compexpr_left_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 857;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_compexpr_right_12 = const_str_plain_c;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
            Py_DECREF( tmp_compexpr_left_12 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 857;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_8;
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
                PyObject *tmp_assign_source_44;
                PyObject *tmp_source_name_15;
                if ( var_n == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 858;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_source_name_15 = var_n;
                tmp_assign_source_44 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_real );
                if ( tmp_assign_source_44 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 858;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                {
                    PyObject *old = tmp_inplace_assign_attr_1__start;
                    tmp_inplace_assign_attr_1__start = tmp_assign_source_44;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_45;
                PyObject *tmp_left_name_12;
                PyObject *tmp_right_name_12;
                PyObject *tmp_called_name_11;
                PyObject *tmp_source_name_16;
                PyObject *tmp_mvar_value_14;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_source_name_17;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
                tmp_left_name_12 = tmp_inplace_assign_attr_1__start;
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 858;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_12;
                }

                tmp_source_name_16 = tmp_mvar_value_14;
                tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_bincount );
                if ( tmp_called_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 858;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_12;
                }
                CHECK_OBJECT( var_indices );
                tmp_tuple_element_2 = var_indices;
                tmp_args_name_2 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
                tmp_dict_key_1 = const_str_plain_weights;
                if ( var_tmp_w == NULL )
                {
                    Py_DECREF( tmp_called_name_11 );
                    Py_DECREF( tmp_args_name_2 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tmp_w" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 858;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_12;
                }

                tmp_source_name_17 = var_tmp_w;
                tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_real );
                if ( tmp_dict_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_11 );
                    Py_DECREF( tmp_args_name_2 );

                    exception_lineno = 858;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_12;
                }
                tmp_kw_name_2 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
                Py_DECREF( tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_2 = const_str_plain_minlength;
                CHECK_OBJECT( var_n_equal_bins );
                tmp_dict_value_2 = var_n_equal_bins;
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 858;
                tmp_right_name_12 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_11 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_right_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 858;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_12;
                }
                tmp_assign_source_45 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_12, tmp_right_name_12 );
                Py_DECREF( tmp_right_name_12 );
                if ( tmp_assign_source_45 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 858;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_12;
                }
                {
                    PyObject *old = tmp_inplace_assign_attr_1__end;
                    tmp_inplace_assign_attr_1__end = tmp_assign_source_45;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_assattr_target_1;
                CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
                tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
                if ( var_n == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 858;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_13;
                }

                tmp_assattr_target_1 = var_n;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_real, tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 858;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_13;
                }
            }
            goto try_end_10;
            // Exception handler code:
            try_except_handler_13:;
            exception_keeper_type_10 = exception_type;
            exception_keeper_value_10 = exception_value;
            exception_keeper_tb_10 = exception_tb;
            exception_keeper_lineno_10 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
            Py_DECREF( tmp_inplace_assign_attr_1__end );
            tmp_inplace_assign_attr_1__end = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_10;
            exception_value = exception_keeper_value_10;
            exception_tb = exception_keeper_tb_10;
            exception_lineno = exception_keeper_lineno_10;

            goto try_except_handler_12;
            // End of try:
            try_end_10:;
            goto try_end_11;
            // Exception handler code:
            try_except_handler_12:;
            exception_keeper_type_11 = exception_type;
            exception_keeper_value_11 = exception_value;
            exception_keeper_tb_11 = exception_tb;
            exception_keeper_lineno_11 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
            Py_DECREF( tmp_inplace_assign_attr_1__start );
            tmp_inplace_assign_attr_1__start = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_11;
            exception_value = exception_keeper_value_11;
            exception_tb = exception_keeper_tb_11;
            exception_lineno = exception_keeper_lineno_11;

            goto try_except_handler_8;
            // End of try:
            try_end_11:;
            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
            Py_DECREF( tmp_inplace_assign_attr_1__end );
            tmp_inplace_assign_attr_1__end = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
            Py_DECREF( tmp_inplace_assign_attr_1__start );
            tmp_inplace_assign_attr_1__start = NULL;

            {
                PyObject *tmp_assign_source_46;
                PyObject *tmp_source_name_18;
                if ( var_n == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 860;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_source_name_18 = var_n;
                tmp_assign_source_46 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_imag );
                if ( tmp_assign_source_46 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 860;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                {
                    PyObject *old = tmp_inplace_assign_attr_2__start;
                    tmp_inplace_assign_attr_2__start = tmp_assign_source_46;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_47;
                PyObject *tmp_left_name_13;
                PyObject *tmp_right_name_13;
                PyObject *tmp_called_name_12;
                PyObject *tmp_source_name_19;
                PyObject *tmp_mvar_value_15;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_kw_name_3;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                PyObject *tmp_source_name_20;
                PyObject *tmp_dict_key_4;
                PyObject *tmp_dict_value_4;
                CHECK_OBJECT( tmp_inplace_assign_attr_2__start );
                tmp_left_name_13 = tmp_inplace_assign_attr_2__start;
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 860;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_14;
                }

                tmp_source_name_19 = tmp_mvar_value_15;
                tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_bincount );
                if ( tmp_called_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 860;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                CHECK_OBJECT( var_indices );
                tmp_tuple_element_3 = var_indices;
                tmp_args_name_3 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
                tmp_dict_key_3 = const_str_plain_weights;
                if ( var_tmp_w == NULL )
                {
                    Py_DECREF( tmp_called_name_12 );
                    Py_DECREF( tmp_args_name_3 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tmp_w" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 860;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_14;
                }

                tmp_source_name_20 = var_tmp_w;
                tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_imag );
                if ( tmp_dict_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_12 );
                    Py_DECREF( tmp_args_name_3 );

                    exception_lineno = 860;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                tmp_kw_name_3 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
                Py_DECREF( tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_4 = const_str_plain_minlength;
                CHECK_OBJECT( var_n_equal_bins );
                tmp_dict_value_4 = var_n_equal_bins;
                tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
                assert( !(tmp_res != 0) );
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 860;
                tmp_right_name_13 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_3, tmp_kw_name_3 );
                Py_DECREF( tmp_called_name_12 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_kw_name_3 );
                if ( tmp_right_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 860;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                tmp_assign_source_47 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_13, tmp_right_name_13 );
                Py_DECREF( tmp_right_name_13 );
                if ( tmp_assign_source_47 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 860;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                {
                    PyObject *old = tmp_inplace_assign_attr_2__end;
                    tmp_inplace_assign_attr_2__end = tmp_assign_source_47;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                CHECK_OBJECT( tmp_inplace_assign_attr_2__end );
                tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
                if ( var_n == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 860;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_15;
                }

                tmp_assattr_target_2 = var_n;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_imag, tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 860;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_15;
                }
            }
            goto try_end_12;
            // Exception handler code:
            try_except_handler_15:;
            exception_keeper_type_12 = exception_type;
            exception_keeper_value_12 = exception_value;
            exception_keeper_tb_12 = exception_tb;
            exception_keeper_lineno_12 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
            Py_DECREF( tmp_inplace_assign_attr_2__end );
            tmp_inplace_assign_attr_2__end = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_12;
            exception_value = exception_keeper_value_12;
            exception_tb = exception_keeper_tb_12;
            exception_lineno = exception_keeper_lineno_12;

            goto try_except_handler_14;
            // End of try:
            try_end_12:;
            goto try_end_13;
            // Exception handler code:
            try_except_handler_14:;
            exception_keeper_type_13 = exception_type;
            exception_keeper_value_13 = exception_value;
            exception_keeper_tb_13 = exception_tb;
            exception_keeper_lineno_13 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
            Py_DECREF( tmp_inplace_assign_attr_2__start );
            tmp_inplace_assign_attr_2__start = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_13;
            exception_value = exception_keeper_value_13;
            exception_tb = exception_keeper_tb_13;
            exception_lineno = exception_keeper_lineno_13;

            goto try_except_handler_8;
            // End of try:
            try_end_13:;
            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
            Py_DECREF( tmp_inplace_assign_attr_2__end );
            tmp_inplace_assign_attr_2__end = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
            Py_DECREF( tmp_inplace_assign_attr_2__start );
            tmp_inplace_assign_attr_2__start = NULL;

            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_assign_source_48;
                PyObject *tmp_left_name_14;
                PyObject *tmp_right_name_14;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_called_name_13;
                PyObject *tmp_source_name_21;
                PyObject *tmp_mvar_value_16;
                PyObject *tmp_args_name_4;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_kw_name_4;
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                PyObject *tmp_dict_key_6;
                PyObject *tmp_dict_value_6;
                PyObject *tmp_args_element_name_23;
                if ( var_n == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 863;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_left_name_14 = var_n;
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_16 == NULL ))
                {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_16 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 863;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_source_name_21 = tmp_mvar_value_16;
                tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_bincount );
                if ( tmp_called_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 863;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                CHECK_OBJECT( var_indices );
                tmp_tuple_element_4 = var_indices;
                tmp_args_name_4 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
                tmp_dict_key_5 = const_str_plain_weights;
                if ( var_tmp_w == NULL )
                {
                    Py_DECREF( tmp_called_name_13 );
                    Py_DECREF( tmp_args_name_4 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tmp_w" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 863;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_dict_value_5 = var_tmp_w;
                tmp_kw_name_4 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_5, tmp_dict_value_5 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_6 = const_str_plain_minlength;
                CHECK_OBJECT( var_n_equal_bins );
                tmp_dict_value_6 = var_n_equal_bins;
                tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_6, tmp_dict_value_6 );
                assert( !(tmp_res != 0) );
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 863;
                tmp_called_instance_3 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_4, tmp_kw_name_4 );
                Py_DECREF( tmp_called_name_13 );
                Py_DECREF( tmp_args_name_4 );
                Py_DECREF( tmp_kw_name_4 );
                if ( tmp_called_instance_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 863;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                CHECK_OBJECT( var_ntype );
                tmp_args_element_name_23 = var_ntype;
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 863;
                {
                    PyObject *call_args[] = { tmp_args_element_name_23 };
                    tmp_right_name_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_astype, call_args );
                }

                Py_DECREF( tmp_called_instance_3 );
                if ( tmp_right_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 863;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_14, tmp_right_name_14 );
                Py_DECREF( tmp_right_name_14 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 863;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                tmp_assign_source_48 = tmp_left_name_14;
                var_n = tmp_assign_source_48;

            }
            branch_end_6:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 821;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        goto loop_start_1;
        loop_end_1:;
        goto try_end_14;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
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
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto frame_exception_exit_1;
        // End of try:
        try_end_14:;
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_name_14;
            PyObject *tmp_source_name_22;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_source_name_23;
            PyObject *tmp_args_element_name_25;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 867;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_22 = tmp_mvar_value_17;
            tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_zeros );
            if ( tmp_called_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 867;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_bin_edges );
            tmp_source_name_23 = var_bin_edges;
            tmp_args_element_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_shape );
            if ( tmp_args_element_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );

                exception_lineno = 867;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_ntype );
            tmp_args_element_name_25 = var_ntype;
            frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 867;
            {
                PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25 };
                tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
            }

            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_args_element_name_24 );
            if ( tmp_assign_source_49 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 867;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_cum_n == NULL );
            var_cum_n = tmp_assign_source_49;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_13;
            PyObject *tmp_compexpr_right_13;
            CHECK_OBJECT( par_weights );
            tmp_compexpr_left_13 = par_weights;
            tmp_compexpr_right_13 = Py_None;
            tmp_condition_result_7 = ( tmp_compexpr_left_13 == tmp_compexpr_right_13 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_50;
                PyObject *tmp_iter_arg_5;
                PyObject *tmp_called_name_15;
                PyObject *tmp_mvar_value_18;
                PyObject *tmp_args_element_name_26;
                PyObject *tmp_args_element_name_27;
                PyObject *tmp_len_arg_2;
                PyObject *tmp_args_element_name_28;
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__range );

                if (unlikely( tmp_mvar_value_18 == NULL ))
                {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__range );
                }

                if ( tmp_mvar_value_18 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_range" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 869;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_15 = tmp_mvar_value_18;
                tmp_args_element_name_26 = const_int_0;
                CHECK_OBJECT( par_a );
                tmp_len_arg_2 = par_a;
                tmp_args_element_name_27 = BUILTIN_LEN( tmp_len_arg_2 );
                if ( tmp_args_element_name_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 869;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_28 = const_int_pos_65536;
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 869;
                {
                    PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28 };
                    tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_15, call_args );
                }

                Py_DECREF( tmp_args_element_name_27 );
                if ( tmp_iter_arg_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 869;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_50 = MAKE_ITERATOR( tmp_iter_arg_5 );
                Py_DECREF( tmp_iter_arg_5 );
                if ( tmp_assign_source_50 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 869;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_for_loop_2__for_iterator == NULL );
                tmp_for_loop_2__for_iterator = tmp_assign_source_50;
            }
            // Tried code:
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_51;
                CHECK_OBJECT( tmp_for_loop_2__for_iterator );
                tmp_next_source_2 = tmp_for_loop_2__for_iterator;
                tmp_assign_source_51 = ITERATOR_NEXT( tmp_next_source_2 );
                if ( tmp_assign_source_51 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_2;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooNoooooooooooooooooooooo";
                        exception_lineno = 869;
                        goto try_except_handler_16;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_2__iter_value;
                    tmp_for_loop_2__iter_value = tmp_assign_source_51;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_52;
                CHECK_OBJECT( tmp_for_loop_2__iter_value );
                tmp_assign_source_52 = tmp_for_loop_2__iter_value;
                {
                    PyObject *old = var_i;
                    var_i = tmp_assign_source_52;
                    Py_INCREF( var_i );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_53;
                PyObject *tmp_called_name_16;
                PyObject *tmp_source_name_24;
                PyObject *tmp_mvar_value_19;
                PyObject *tmp_args_element_name_29;
                PyObject *tmp_subscribed_name_10;
                PyObject *tmp_subscript_name_10;
                PyObject *tmp_start_name_3;
                PyObject *tmp_stop_name_3;
                PyObject *tmp_left_name_15;
                PyObject *tmp_right_name_15;
                PyObject *tmp_step_name_3;
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 870;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_16;
                }

                tmp_source_name_24 = tmp_mvar_value_19;
                tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_sort );
                if ( tmp_called_name_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 870;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_16;
                }
                CHECK_OBJECT( par_a );
                tmp_subscribed_name_10 = par_a;
                CHECK_OBJECT( var_i );
                tmp_start_name_3 = var_i;
                CHECK_OBJECT( var_i );
                tmp_left_name_15 = var_i;
                tmp_right_name_15 = const_int_pos_65536;
                tmp_stop_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_15, tmp_right_name_15 );
                if ( tmp_stop_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_16 );

                    exception_lineno = 870;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_16;
                }
                tmp_step_name_3 = Py_None;
                tmp_subscript_name_10 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
                Py_DECREF( tmp_stop_name_3 );
                assert( !(tmp_subscript_name_10 == NULL) );
                tmp_args_element_name_29 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
                Py_DECREF( tmp_subscript_name_10 );
                if ( tmp_args_element_name_29 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_16 );

                    exception_lineno = 870;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_16;
                }
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 870;
                {
                    PyObject *call_args[] = { tmp_args_element_name_29 };
                    tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
                }

                Py_DECREF( tmp_called_name_16 );
                Py_DECREF( tmp_args_element_name_29 );
                if ( tmp_assign_source_53 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 870;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_16;
                }
                {
                    PyObject *old = var_sa;
                    var_sa = tmp_assign_source_53;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_54;
                PyObject *tmp_left_name_16;
                PyObject *tmp_right_name_16;
                PyObject *tmp_called_name_17;
                PyObject *tmp_mvar_value_20;
                PyObject *tmp_args_element_name_30;
                PyObject *tmp_args_element_name_31;
                CHECK_OBJECT( var_cum_n );
                tmp_left_name_16 = var_cum_n;
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__search_sorted_inclusive );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__search_sorted_inclusive );
                }

                if ( tmp_mvar_value_20 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_search_sorted_inclusive" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 871;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_16;
                }

                tmp_called_name_17 = tmp_mvar_value_20;
                CHECK_OBJECT( var_sa );
                tmp_args_element_name_30 = var_sa;
                CHECK_OBJECT( var_bin_edges );
                tmp_args_element_name_31 = var_bin_edges;
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 871;
                {
                    PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31 };
                    tmp_right_name_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
                }

                if ( tmp_right_name_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 871;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_16;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_16, tmp_right_name_16 );
                Py_DECREF( tmp_right_name_16 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 871;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_16;
                }
                tmp_assign_source_54 = tmp_left_name_16;
                var_cum_n = tmp_assign_source_54;

            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 869;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            goto loop_start_2;
            loop_end_2:;
            goto try_end_15;
            // Exception handler code:
            try_except_handler_16:;
            exception_keeper_type_15 = exception_type;
            exception_keeper_value_15 = exception_value;
            exception_keeper_tb_15 = exception_tb;
            exception_keeper_lineno_15 = exception_lineno;
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
            exception_type = exception_keeper_type_15;
            exception_value = exception_keeper_value_15;
            exception_tb = exception_keeper_tb_15;
            exception_lineno = exception_keeper_lineno_15;

            goto frame_exception_exit_1;
            // End of try:
            try_end_15:;
            Py_XDECREF( tmp_for_loop_2__iter_value );
            tmp_for_loop_2__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
            Py_DECREF( tmp_for_loop_2__for_iterator );
            tmp_for_loop_2__for_iterator = NULL;

            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_assign_source_55;
                PyObject *tmp_called_name_18;
                PyObject *tmp_source_name_25;
                PyObject *tmp_mvar_value_21;
                PyObject *tmp_args_name_5;
                PyObject *tmp_kw_name_5;
                PyObject *tmp_dict_key_7;
                PyObject *tmp_dict_value_7;
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_21 == NULL ))
                {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_21 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 873;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_25 = tmp_mvar_value_21;
                tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_zeros );
                if ( tmp_called_name_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 873;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_name_5 = const_tuple_int_pos_1_tuple;
                tmp_dict_key_7 = const_str_plain_dtype;
                CHECK_OBJECT( var_ntype );
                tmp_dict_value_7 = var_ntype;
                tmp_kw_name_5 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_7, tmp_dict_value_7 );
                assert( !(tmp_res != 0) );
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 873;
                tmp_assign_source_55 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_5, tmp_kw_name_5 );
                Py_DECREF( tmp_called_name_18 );
                Py_DECREF( tmp_kw_name_5 );
                if ( tmp_assign_source_55 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 873;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_zero == NULL );
                var_zero = tmp_assign_source_55;
            }
            {
                PyObject *tmp_assign_source_56;
                PyObject *tmp_iter_arg_6;
                PyObject *tmp_called_name_19;
                PyObject *tmp_mvar_value_22;
                PyObject *tmp_args_element_name_32;
                PyObject *tmp_args_element_name_33;
                PyObject *tmp_len_arg_3;
                PyObject *tmp_args_element_name_34;
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__range );

                if (unlikely( tmp_mvar_value_22 == NULL ))
                {
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__range );
                }

                if ( tmp_mvar_value_22 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_range" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 874;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_19 = tmp_mvar_value_22;
                tmp_args_element_name_32 = const_int_0;
                CHECK_OBJECT( par_a );
                tmp_len_arg_3 = par_a;
                tmp_args_element_name_33 = BUILTIN_LEN( tmp_len_arg_3 );
                if ( tmp_args_element_name_33 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 874;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_34 = const_int_pos_65536;
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 874;
                {
                    PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34 };
                    tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_19, call_args );
                }

                Py_DECREF( tmp_args_element_name_33 );
                if ( tmp_iter_arg_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 874;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_56 = MAKE_ITERATOR( tmp_iter_arg_6 );
                Py_DECREF( tmp_iter_arg_6 );
                if ( tmp_assign_source_56 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 874;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_for_loop_3__for_iterator == NULL );
                tmp_for_loop_3__for_iterator = tmp_assign_source_56;
            }
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_57;
                CHECK_OBJECT( tmp_for_loop_3__for_iterator );
                tmp_next_source_3 = tmp_for_loop_3__for_iterator;
                tmp_assign_source_57 = ITERATOR_NEXT( tmp_next_source_3 );
                if ( tmp_assign_source_57 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_3;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooNoooooooooooooooooooooo";
                        exception_lineno = 874;
                        goto try_except_handler_17;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_3__iter_value;
                    tmp_for_loop_3__iter_value = tmp_assign_source_57;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_58;
                CHECK_OBJECT( tmp_for_loop_3__iter_value );
                tmp_assign_source_58 = tmp_for_loop_3__iter_value;
                {
                    PyObject *old = var_i;
                    var_i = tmp_assign_source_58;
                    Py_INCREF( var_i );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_59;
                PyObject *tmp_subscribed_name_11;
                PyObject *tmp_subscript_name_11;
                PyObject *tmp_start_name_4;
                PyObject *tmp_stop_name_4;
                PyObject *tmp_left_name_17;
                PyObject *tmp_right_name_17;
                PyObject *tmp_step_name_4;
                CHECK_OBJECT( par_a );
                tmp_subscribed_name_11 = par_a;
                CHECK_OBJECT( var_i );
                tmp_start_name_4 = var_i;
                CHECK_OBJECT( var_i );
                tmp_left_name_17 = var_i;
                tmp_right_name_17 = const_int_pos_65536;
                tmp_stop_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_17, tmp_right_name_17 );
                if ( tmp_stop_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 875;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }
                tmp_step_name_4 = Py_None;
                tmp_subscript_name_11 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
                Py_DECREF( tmp_stop_name_4 );
                assert( !(tmp_subscript_name_11 == NULL) );
                tmp_assign_source_59 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
                Py_DECREF( tmp_subscript_name_11 );
                if ( tmp_assign_source_59 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 875;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }
                {
                    PyObject *old = var_tmp_a;
                    var_tmp_a = tmp_assign_source_59;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_60;
                PyObject *tmp_subscribed_name_12;
                PyObject *tmp_subscript_name_12;
                PyObject *tmp_start_name_5;
                PyObject *tmp_stop_name_5;
                PyObject *tmp_left_name_18;
                PyObject *tmp_right_name_18;
                PyObject *tmp_step_name_5;
                CHECK_OBJECT( par_weights );
                tmp_subscribed_name_12 = par_weights;
                CHECK_OBJECT( var_i );
                tmp_start_name_5 = var_i;
                CHECK_OBJECT( var_i );
                tmp_left_name_18 = var_i;
                tmp_right_name_18 = const_int_pos_65536;
                tmp_stop_name_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_18, tmp_right_name_18 );
                if ( tmp_stop_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 876;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }
                tmp_step_name_5 = Py_None;
                tmp_subscript_name_12 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
                Py_DECREF( tmp_stop_name_5 );
                assert( !(tmp_subscript_name_12 == NULL) );
                tmp_assign_source_60 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
                Py_DECREF( tmp_subscript_name_12 );
                if ( tmp_assign_source_60 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 876;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }
                {
                    PyObject *old = var_tmp_w;
                    var_tmp_w = tmp_assign_source_60;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_61;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_mvar_value_23;
                PyObject *tmp_args_element_name_35;
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_23 == NULL ))
                {
                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_23 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 877;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }

                tmp_called_instance_4 = tmp_mvar_value_23;
                CHECK_OBJECT( var_tmp_a );
                tmp_args_element_name_35 = var_tmp_a;
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 877;
                {
                    PyObject *call_args[] = { tmp_args_element_name_35 };
                    tmp_assign_source_61 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_argsort, call_args );
                }

                if ( tmp_assign_source_61 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 877;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }
                {
                    PyObject *old = var_sorting_index;
                    var_sorting_index = tmp_assign_source_61;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_62;
                PyObject *tmp_subscribed_name_13;
                PyObject *tmp_subscript_name_13;
                CHECK_OBJECT( var_tmp_a );
                tmp_subscribed_name_13 = var_tmp_a;
                CHECK_OBJECT( var_sorting_index );
                tmp_subscript_name_13 = var_sorting_index;
                tmp_assign_source_62 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
                if ( tmp_assign_source_62 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 878;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }
                {
                    PyObject *old = var_sa;
                    var_sa = tmp_assign_source_62;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_63;
                PyObject *tmp_subscribed_name_14;
                PyObject *tmp_subscript_name_14;
                CHECK_OBJECT( var_tmp_w );
                tmp_subscribed_name_14 = var_tmp_w;
                CHECK_OBJECT( var_sorting_index );
                tmp_subscript_name_14 = var_sorting_index;
                tmp_assign_source_63 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
                if ( tmp_assign_source_63 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 879;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }
                {
                    PyObject *old = var_sw;
                    var_sw = tmp_assign_source_63;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_64;
                PyObject *tmp_called_name_20;
                PyObject *tmp_source_name_26;
                PyObject *tmp_mvar_value_24;
                PyObject *tmp_args_element_name_36;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_called_instance_5;
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 880;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }

                tmp_source_name_26 = tmp_mvar_value_24;
                tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_concatenate );
                if ( tmp_called_name_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 880;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }
                CHECK_OBJECT( var_zero );
                tmp_tuple_element_5 = var_zero;
                tmp_args_element_name_36 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_element_name_36, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( var_sw );
                tmp_called_instance_5 = var_sw;
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 880;
                tmp_tuple_element_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_cumsum );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_20 );
                    Py_DECREF( tmp_args_element_name_36 );

                    exception_lineno = 880;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }
                PyTuple_SET_ITEM( tmp_args_element_name_36, 1, tmp_tuple_element_5 );
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 880;
                {
                    PyObject *call_args[] = { tmp_args_element_name_36 };
                    tmp_assign_source_64 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
                }

                Py_DECREF( tmp_called_name_20 );
                Py_DECREF( tmp_args_element_name_36 );
                if ( tmp_assign_source_64 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 880;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }
                {
                    PyObject *old = var_cw;
                    var_cw = tmp_assign_source_64;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_65;
                PyObject *tmp_called_name_21;
                PyObject *tmp_mvar_value_25;
                PyObject *tmp_args_element_name_37;
                PyObject *tmp_args_element_name_38;
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__search_sorted_inclusive );

                if (unlikely( tmp_mvar_value_25 == NULL ))
                {
                    tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__search_sorted_inclusive );
                }

                if ( tmp_mvar_value_25 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_search_sorted_inclusive" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 881;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }

                tmp_called_name_21 = tmp_mvar_value_25;
                CHECK_OBJECT( var_sa );
                tmp_args_element_name_37 = var_sa;
                CHECK_OBJECT( var_bin_edges );
                tmp_args_element_name_38 = var_bin_edges;
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 881;
                {
                    PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38 };
                    tmp_assign_source_65 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_21, call_args );
                }

                if ( tmp_assign_source_65 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 881;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }
                {
                    PyObject *old = var_bin_index;
                    var_bin_index = tmp_assign_source_65;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_66;
                PyObject *tmp_left_name_19;
                PyObject *tmp_right_name_19;
                PyObject *tmp_subscribed_name_15;
                PyObject *tmp_subscript_name_15;
                CHECK_OBJECT( var_cum_n );
                tmp_left_name_19 = var_cum_n;
                CHECK_OBJECT( var_cw );
                tmp_subscribed_name_15 = var_cw;
                CHECK_OBJECT( var_bin_index );
                tmp_subscript_name_15 = var_bin_index;
                tmp_right_name_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
                if ( tmp_right_name_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 882;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_19, tmp_right_name_19 );
                Py_DECREF( tmp_right_name_19 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 882;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto try_except_handler_17;
                }
                tmp_assign_source_66 = tmp_left_name_19;
                var_cum_n = tmp_assign_source_66;

            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 874;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            goto loop_start_3;
            loop_end_3:;
            goto try_end_16;
            // Exception handler code:
            try_except_handler_17:;
            exception_keeper_type_16 = exception_type;
            exception_keeper_value_16 = exception_value;
            exception_keeper_tb_16 = exception_tb;
            exception_keeper_lineno_16 = exception_lineno;
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
            exception_type = exception_keeper_type_16;
            exception_value = exception_keeper_value_16;
            exception_tb = exception_keeper_tb_16;
            exception_lineno = exception_keeper_lineno_16;

            goto frame_exception_exit_1;
            // End of try:
            try_end_16:;
            Py_XDECREF( tmp_for_loop_3__iter_value );
            tmp_for_loop_3__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
            Py_DECREF( tmp_for_loop_3__for_iterator );
            tmp_for_loop_3__for_iterator = NULL;

            branch_end_7:;
        }
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_called_name_22;
            PyObject *tmp_source_name_27;
            PyObject *tmp_mvar_value_26;
            PyObject *tmp_args_element_name_39;
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_26 == NULL ))
            {
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_26 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 884;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_27 = tmp_mvar_value_26;
            tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_diff );
            if ( tmp_called_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 884;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_cum_n == NULL )
            {
                Py_DECREF( tmp_called_name_22 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cum_n" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 884;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_39 = var_cum_n;
            frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 884;
            {
                PyObject *call_args[] = { tmp_args_element_name_39 };
                tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
            }

            Py_DECREF( tmp_called_name_22 );
            if ( tmp_assign_source_67 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 884;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_n == NULL );
            var_n = tmp_assign_source_67;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        CHECK_OBJECT( par_density );
        tmp_compexpr_left_14 = par_density;
        tmp_compexpr_right_14 = Py_None;
        tmp_condition_result_8 = ( tmp_compexpr_left_14 != tmp_compexpr_right_14 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_15;
            PyObject *tmp_compexpr_right_15;
            CHECK_OBJECT( par_normed );
            tmp_compexpr_left_15 = par_normed;
            tmp_compexpr_right_15 = Py_None;
            tmp_condition_result_9 = ( tmp_compexpr_left_15 != tmp_compexpr_right_15 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_23;
                PyObject *tmp_source_name_28;
                PyObject *tmp_mvar_value_27;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_name_6;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_mvar_value_28;
                PyObject *tmp_kw_name_6;
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_warnings );

                if (unlikely( tmp_mvar_value_27 == NULL ))
                {
                    tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                }

                if ( tmp_mvar_value_27 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 890;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_28 = tmp_mvar_value_27;
                tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_warn );
                if ( tmp_called_name_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 890;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_6 = const_str_digest_d638e651f53f18a53ca7c2ae72e035eb;
                tmp_args_name_6 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_6 );
                tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

                if (unlikely( tmp_mvar_value_28 == NULL ))
                {
                    tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
                }

                if ( tmp_mvar_value_28 == NULL )
                {
                    Py_DECREF( tmp_called_name_23 );
                    Py_DECREF( tmp_args_name_6 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 893;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_6 = tmp_mvar_value_28;
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_6 );
                tmp_kw_name_6 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 890;
                tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_6, tmp_kw_name_6 );
                Py_DECREF( tmp_called_name_23 );
                Py_DECREF( tmp_args_name_6 );
                Py_DECREF( tmp_kw_name_6 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 890;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_no_9:;
        }
        {
            PyObject *tmp_assign_source_68;
            tmp_assign_source_68 = Py_None;
            {
                PyObject *old = par_normed;
                assert( old != NULL );
                par_normed = tmp_assign_source_68;
                Py_INCREF( par_normed );
                Py_DECREF( old );
            }

        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_density );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_density );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 896;
            type_description_1 = "oooooooooNoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_69;
            PyObject *tmp_called_name_24;
            PyObject *tmp_source_name_29;
            PyObject *tmp_mvar_value_29;
            PyObject *tmp_args_element_name_40;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_30;
            PyObject *tmp_args_element_name_41;
            PyObject *tmp_args_element_name_42;
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 897;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_29 = tmp_mvar_value_29;
            tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_array );
            if ( tmp_called_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 897;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_30 == NULL ))
            {
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_30 == NULL )
            {
                Py_DECREF( tmp_called_name_24 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 897;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_30;
            CHECK_OBJECT( var_bin_edges );
            tmp_args_element_name_41 = var_bin_edges;
            frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 897;
            {
                PyObject *call_args[] = { tmp_args_element_name_41 };
                tmp_args_element_name_40 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_diff, call_args );
            }

            if ( tmp_args_element_name_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_24 );

                exception_lineno = 897;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_42 = (PyObject *)&PyFloat_Type;
            frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 897;
            {
                PyObject *call_args[] = { tmp_args_element_name_40, tmp_args_element_name_42 };
                tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_24, call_args );
            }

            Py_DECREF( tmp_called_name_24 );
            Py_DECREF( tmp_args_element_name_40 );
            if ( tmp_assign_source_69 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 897;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_db == NULL );
            var_db = tmp_assign_source_69;
        }
        {
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_left_name_20;
            PyObject *tmp_left_name_21;
            PyObject *tmp_right_name_20;
            PyObject *tmp_right_name_21;
            PyObject *tmp_called_instance_7;
            if ( var_n == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 898;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_21 = var_n;
            CHECK_OBJECT( var_db );
            tmp_right_name_20 = var_db;
            tmp_left_name_20 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_20 );
            if ( tmp_left_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 898;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_n == NULL )
            {
                Py_DECREF( tmp_left_name_20 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 898;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_7 = var_n;
            frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 898;
            tmp_right_name_21 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_sum );
            if ( tmp_right_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_20 );

                exception_lineno = 898;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_21 );
            Py_DECREF( tmp_left_name_20 );
            Py_DECREF( tmp_right_name_21 );
            if ( tmp_tuple_element_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 898;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( var_bin_edges );
            tmp_tuple_element_7 = var_bin_edges;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_7 );
            goto frame_return_exit_1;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            nuitka_bool tmp_condition_result_11;
            int tmp_truth_name_3;
            CHECK_OBJECT( par_normed );
            tmp_truth_name_3 = CHECK_IF_TRUE( par_normed );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 899;
                type_description_1 = "oooooooooNoooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_11 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_25;
                PyObject *tmp_source_name_30;
                PyObject *tmp_mvar_value_31;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_name_7;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_source_name_31;
                PyObject *tmp_mvar_value_32;
                PyObject *tmp_kw_name_7;
                tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_warnings );

                if (unlikely( tmp_mvar_value_31 == NULL ))
                {
                    tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                }

                if ( tmp_mvar_value_31 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 901;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_30 = tmp_mvar_value_31;
                tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_warn );
                if ( tmp_called_name_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 901;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_8 = const_str_digest_50a6a9653c3363fa6a6e91d089baf5f4;
                tmp_args_name_7 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_8 );
                tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_32 == NULL ))
                {
                    tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_32 == NULL )
                {
                    Py_DECREF( tmp_called_name_25 );
                    Py_DECREF( tmp_args_name_7 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 909;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_31 = tmp_mvar_value_32;
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_VisibleDeprecationWarning );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_25 );
                    Py_DECREF( tmp_args_name_7 );

                    exception_lineno = 909;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_8 );
                tmp_kw_name_7 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 901;
                tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_7, tmp_kw_name_7 );
                Py_DECREF( tmp_called_name_25 );
                Py_DECREF( tmp_args_name_7 );
                Py_DECREF( tmp_kw_name_7 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 901;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            {
                PyObject *tmp_assign_source_70;
                PyObject *tmp_called_name_26;
                PyObject *tmp_source_name_32;
                PyObject *tmp_mvar_value_33;
                PyObject *tmp_args_element_name_43;
                PyObject *tmp_called_instance_8;
                PyObject *tmp_mvar_value_34;
                PyObject *tmp_args_element_name_44;
                PyObject *tmp_args_element_name_45;
                tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_33 == NULL ))
                {
                    tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_33 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 912;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_32 = tmp_mvar_value_33;
                tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_array );
                if ( tmp_called_name_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 912;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_34 == NULL ))
                {
                    tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_34 == NULL )
                {
                    Py_DECREF( tmp_called_name_26 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 912;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_8 = tmp_mvar_value_34;
                CHECK_OBJECT( var_bin_edges );
                tmp_args_element_name_44 = var_bin_edges;
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 912;
                {
                    PyObject *call_args[] = { tmp_args_element_name_44 };
                    tmp_args_element_name_43 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_diff, call_args );
                }

                if ( tmp_args_element_name_43 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_26 );

                    exception_lineno = 912;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_45 = (PyObject *)&PyFloat_Type;
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 912;
                {
                    PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_45 };
                    tmp_assign_source_70 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_26, call_args );
                }

                Py_DECREF( tmp_called_name_26 );
                Py_DECREF( tmp_args_element_name_43 );
                if ( tmp_assign_source_70 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 912;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_db == NULL );
                var_db = tmp_assign_source_70;
            }
            {
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_left_name_22;
                PyObject *tmp_right_name_22;
                PyObject *tmp_called_instance_9;
                PyObject *tmp_left_name_23;
                PyObject *tmp_right_name_23;
                if ( var_n == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 913;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_22 = var_n;
                if ( var_n == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 913;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_23 = var_n;
                CHECK_OBJECT( var_db );
                tmp_right_name_23 = var_db;
                tmp_called_instance_9 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_23 );
                if ( tmp_called_instance_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 913;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 913;
                tmp_right_name_22 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_sum );
                Py_DECREF( tmp_called_instance_9 );
                if ( tmp_right_name_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 913;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_22 );
                Py_DECREF( tmp_right_name_22 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 913;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_9 );
                CHECK_OBJECT( var_bin_edges );
                tmp_tuple_element_9 = var_bin_edges;
                Py_INCREF( tmp_tuple_element_9 );
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_9 );
                goto frame_return_exit_1;
            }
            goto branch_end_11;
            branch_no_11:;
            {
                nuitka_bool tmp_condition_result_12;
                PyObject *tmp_compexpr_left_16;
                PyObject *tmp_compexpr_right_16;
                CHECK_OBJECT( par_normed );
                tmp_compexpr_left_16 = par_normed;
                tmp_compexpr_right_16 = Py_None;
                tmp_condition_result_12 = ( tmp_compexpr_left_16 != tmp_compexpr_right_16 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_called_name_27;
                    PyObject *tmp_source_name_33;
                    PyObject *tmp_mvar_value_35;
                    PyObject *tmp_call_result_3;
                    PyObject *tmp_args_name_8;
                    PyObject *tmp_tuple_element_10;
                    PyObject *tmp_mvar_value_36;
                    PyObject *tmp_kw_name_8;
                    tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_warnings );

                    if (unlikely( tmp_mvar_value_35 == NULL ))
                    {
                        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                    }

                    if ( tmp_mvar_value_35 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 917;
                        type_description_1 = "oooooooooNoooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_33 = tmp_mvar_value_35;
                    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_warn );
                    if ( tmp_called_name_27 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 917;
                        type_description_1 = "oooooooooNoooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_tuple_element_10 = const_str_digest_43c5c103d098849f38e4df490ac8ab24;
                    tmp_args_name_8 = PyTuple_New( 2 );
                    Py_INCREF( tmp_tuple_element_10 );
                    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_10 );
                    tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

                    if (unlikely( tmp_mvar_value_36 == NULL ))
                    {
                        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
                    }

                    if ( tmp_mvar_value_36 == NULL )
                    {
                        Py_DECREF( tmp_called_name_27 );
                        Py_DECREF( tmp_args_name_8 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 920;
                        type_description_1 = "oooooooooNoooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_tuple_element_10 = tmp_mvar_value_36;
                    Py_INCREF( tmp_tuple_element_10 );
                    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_10 );
                    tmp_kw_name_8 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
                    frame_c3447a5136d984b1b7e11bb603fb456e->m_frame.f_lineno = 917;
                    tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_27, tmp_args_name_8, tmp_kw_name_8 );
                    Py_DECREF( tmp_called_name_27 );
                    Py_DECREF( tmp_args_name_8 );
                    Py_DECREF( tmp_kw_name_8 );
                    if ( tmp_call_result_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 917;
                        type_description_1 = "oooooooooNoooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_3 );
                }
                branch_no_12:;
            }
            {
                PyObject *tmp_tuple_element_11;
                if ( var_n == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 921;
                    type_description_1 = "oooooooooNoooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_11 = var_n;
                tmp_return_value = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_11 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_11 );
                CHECK_OBJECT( var_bin_edges );
                tmp_tuple_element_11 = var_bin_edges;
                Py_INCREF( tmp_tuple_element_11 );
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_11 );
                goto frame_return_exit_1;
            }
            branch_end_11:;
        }
        branch_end_10:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c3447a5136d984b1b7e11bb603fb456e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c3447a5136d984b1b7e11bb603fb456e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c3447a5136d984b1b7e11bb603fb456e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c3447a5136d984b1b7e11bb603fb456e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c3447a5136d984b1b7e11bb603fb456e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c3447a5136d984b1b7e11bb603fb456e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c3447a5136d984b1b7e11bb603fb456e,
        type_description_1,
        par_a,
        par_bins,
        par_range,
        par_normed,
        par_weights,
        par_density,
        var_bin_edges,
        var_uniform_bins,
        var_ntype,
        NULL,
        var_simple_weights,
        var_first_edge,
        var_last_edge,
        var_n_equal_bins,
        var_n,
        var_norm,
        var_i,
        var_tmp_a,
        var_tmp_w,
        var_keep,
        var_f_indices,
        var_indices,
        var_decrement,
        var_increment,
        var_cum_n,
        var_sa,
        var_zero,
        var_sorting_index,
        var_sw,
        var_cw,
        var_bin_index,
        var_db
    );


    // Release cached frame.
    if ( frame_c3447a5136d984b1b7e11bb603fb456e == cache_frame_c3447a5136d984b1b7e11bb603fb456e )
    {
        Py_DECREF( frame_c3447a5136d984b1b7e11bb603fb456e );
    }
    cache_frame_c3447a5136d984b1b7e11bb603fb456e = NULL;

    assertFrameObject( frame_c3447a5136d984b1b7e11bb603fb456e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_17_histogram );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_bins );
    Py_DECREF( par_bins );
    par_bins = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)par_normed );
    Py_DECREF( par_normed );
    par_normed = NULL;

    CHECK_OBJECT( (PyObject *)par_weights );
    Py_DECREF( par_weights );
    par_weights = NULL;

    CHECK_OBJECT( (PyObject *)par_density );
    Py_DECREF( par_density );
    par_density = NULL;

    CHECK_OBJECT( (PyObject *)var_bin_edges );
    Py_DECREF( var_bin_edges );
    var_bin_edges = NULL;

    CHECK_OBJECT( (PyObject *)var_uniform_bins );
    Py_DECREF( var_uniform_bins );
    var_uniform_bins = NULL;

    CHECK_OBJECT( (PyObject *)var_ntype );
    Py_DECREF( var_ntype );
    var_ntype = NULL;

    CHECK_OBJECT( (PyObject *)var_simple_weights );
    Py_DECREF( var_simple_weights );
    var_simple_weights = NULL;

    Py_XDECREF( var_first_edge );
    var_first_edge = NULL;

    Py_XDECREF( var_last_edge );
    var_last_edge = NULL;

    Py_XDECREF( var_n_equal_bins );
    var_n_equal_bins = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_norm );
    var_norm = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_tmp_a );
    var_tmp_a = NULL;

    Py_XDECREF( var_tmp_w );
    var_tmp_w = NULL;

    Py_XDECREF( var_keep );
    var_keep = NULL;

    Py_XDECREF( var_f_indices );
    var_f_indices = NULL;

    Py_XDECREF( var_indices );
    var_indices = NULL;

    Py_XDECREF( var_decrement );
    var_decrement = NULL;

    Py_XDECREF( var_increment );
    var_increment = NULL;

    Py_XDECREF( var_cum_n );
    var_cum_n = NULL;

    Py_XDECREF( var_sa );
    var_sa = NULL;

    Py_XDECREF( var_zero );
    var_zero = NULL;

    Py_XDECREF( var_sorting_index );
    var_sorting_index = NULL;

    Py_XDECREF( var_sw );
    var_sw = NULL;

    Py_XDECREF( var_cw );
    var_cw = NULL;

    Py_XDECREF( var_bin_index );
    var_bin_index = NULL;

    Py_XDECREF( var_db );
    var_db = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_bins );
    Py_DECREF( par_bins );
    par_bins = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    Py_XDECREF( par_normed );
    par_normed = NULL;

    CHECK_OBJECT( (PyObject *)par_weights );
    Py_DECREF( par_weights );
    par_weights = NULL;

    CHECK_OBJECT( (PyObject *)par_density );
    Py_DECREF( par_density );
    par_density = NULL;

    Py_XDECREF( var_bin_edges );
    var_bin_edges = NULL;

    Py_XDECREF( var_uniform_bins );
    var_uniform_bins = NULL;

    Py_XDECREF( var_ntype );
    var_ntype = NULL;

    Py_XDECREF( var_simple_weights );
    var_simple_weights = NULL;

    Py_XDECREF( var_first_edge );
    var_first_edge = NULL;

    Py_XDECREF( var_last_edge );
    var_last_edge = NULL;

    Py_XDECREF( var_n_equal_bins );
    var_n_equal_bins = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_norm );
    var_norm = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_tmp_a );
    var_tmp_a = NULL;

    Py_XDECREF( var_tmp_w );
    var_tmp_w = NULL;

    Py_XDECREF( var_keep );
    var_keep = NULL;

    Py_XDECREF( var_f_indices );
    var_f_indices = NULL;

    Py_XDECREF( var_indices );
    var_indices = NULL;

    Py_XDECREF( var_decrement );
    var_decrement = NULL;

    Py_XDECREF( var_increment );
    var_increment = NULL;

    Py_XDECREF( var_cum_n );
    var_cum_n = NULL;

    Py_XDECREF( var_sa );
    var_sa = NULL;

    Py_XDECREF( var_zero );
    var_zero = NULL;

    Py_XDECREF( var_sorting_index );
    var_sorting_index = NULL;

    Py_XDECREF( var_sw );
    var_sw = NULL;

    Py_XDECREF( var_cw );
    var_cw = NULL;

    Py_XDECREF( var_bin_index );
    var_bin_index = NULL;

    Py_XDECREF( var_db );
    var_db = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_17_histogram );
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


static PyObject *impl_numpy$lib$histograms$$$function_18__histogramdd_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_sample = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_bins = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_range = python_pars[ 2 ];
    PyObject *par_normed = python_pars[ 3 ];
    struct Nuitka_CellObject *par_weights = PyCell_NEW1( python_pars[ 4 ] );
    PyObject *par_density = python_pars[ 5 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = numpy$lib$histograms$$$function_18__histogramdd_dispatcher$$$genobj_1__histogramdd_dispatcher_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_bins;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = PyCell_NEW0( par_density );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] = PyCell_NEW0( par_normed );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[3] = PyCell_NEW0( par_range );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[4] = par_sample;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[4] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[5] = par_weights;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[5] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_18__histogramdd_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_sample );
    Py_DECREF( par_sample );
    par_sample = NULL;

    CHECK_OBJECT( (PyObject *)par_bins );
    Py_DECREF( par_bins );
    par_bins = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)par_normed );
    Py_DECREF( par_normed );
    par_normed = NULL;

    CHECK_OBJECT( (PyObject *)par_weights );
    Py_DECREF( par_weights );
    par_weights = NULL;

    CHECK_OBJECT( (PyObject *)par_density );
    Py_DECREF( par_density );
    par_density = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_sample );
    Py_DECREF( par_sample );
    par_sample = NULL;

    CHECK_OBJECT( (PyObject *)par_bins );
    Py_DECREF( par_bins );
    par_bins = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)par_normed );
    Py_DECREF( par_normed );
    par_normed = NULL;

    CHECK_OBJECT( (PyObject *)par_weights );
    Py_DECREF( par_weights );
    par_weights = NULL;

    CHECK_OBJECT( (PyObject *)par_density );
    Py_DECREF( par_density );
    par_density = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_18__histogramdd_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct numpy$lib$histograms$$$function_18__histogramdd_dispatcher$$$genobj_1__histogramdd_dispatcher_locals {
    PyObject *tmp_with_1__enter;
    PyObject *tmp_with_1__exit;
    nuitka_bool tmp_with_1__indicator;
    PyObject *tmp_with_1__source;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
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
};

static PyObject *numpy$lib$histograms$$$function_18__histogramdd_dispatcher$$$genobj_1__histogramdd_dispatcher_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$lib$histograms$$$function_18__histogramdd_dispatcher$$$genobj_1__histogramdd_dispatcher_locals *generator_heap = (struct numpy$lib$histograms$$$function_18__histogramdd_dispatcher$$$genobj_1__histogramdd_dispatcher_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 4: goto yield_return_4;
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->tmp_with_1__enter = NULL;
    generator_heap->tmp_with_1__exit = NULL;
    generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    generator_heap->tmp_with_1__source = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_a8ce0620df4a2bf95ba314d232ef628e, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        if ( PyCell_GET( generator->m_closure[4] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "sample" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 926;
            generator_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( generator->m_closure[4] );
        tmp_attribute_name_1 = const_str_plain_shape;
        generator_heap->tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 926;
            generator_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
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
            if ( PyCell_GET( generator->m_closure[4] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "sample" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 927;
                generator_heap->type_description_1 = "cccccc";
                goto frame_exception_exit_1;
            }

            tmp_expression_name_1 = PyCell_GET( generator->m_closure[4] );
            Py_INCREF( tmp_expression_name_1 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_source_name_1, sizeof(PyObject *), &tmp_attribute_name_1, sizeof(PyObject *), NULL );
            generator->m_yield_return_index = 1;
            return tmp_expression_name_1;
            yield_return_1:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_source_name_1, sizeof(PyObject *), &tmp_attribute_name_1, sizeof(PyObject *), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 927;
                generator_heap->type_description_1 = "cccccc";
                goto frame_exception_exit_1;
            }
            tmp_yield_result_1 = yield_return_value;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_expression_name_2;
            PyObject *tmp_yieldfrom_result_1;
            if ( PyCell_GET( generator->m_closure[4] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "sample" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 929;
                generator_heap->type_description_1 = "cccccc";
                goto frame_exception_exit_1;
            }

            tmp_expression_name_2 = PyCell_GET( generator->m_closure[4] );
            Py_INCREF( tmp_expression_name_2 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_source_name_1, sizeof(PyObject *), &tmp_attribute_name_1, sizeof(PyObject *), NULL );
            generator->m_yield_return_index = 2;
            generator->m_yieldfrom = tmp_expression_name_2;
            return NULL;

            yield_return_2:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_source_name_1, sizeof(PyObject *), &tmp_attribute_name_1, sizeof(PyObject *), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 929;
                generator_heap->type_description_1 = "cccccc";
                goto frame_exception_exit_1;
            }
            tmp_yieldfrom_result_1 = yield_return_value;
            Py_DECREF( tmp_yieldfrom_result_1 );
        }
        branch_end_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_contextlib );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_contextlib );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "contextlib" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 930;
            generator_heap->type_description_1 = "cccccc";
            goto try_except_handler_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        generator->m_frame->m_frame.f_lineno = 930;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_suppress, &PyTuple_GET_ITEM( const_tuple_type_TypeError_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 930;
            generator_heap->type_description_1 = "cccccc";
            goto try_except_handler_1;
        }
        assert( generator_heap->tmp_with_1__source == NULL );
        generator_heap->tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( generator_heap->tmp_with_1__source );
        tmp_source_name_2 = generator_heap->tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 930;
            generator_heap->type_description_1 = "cccccc";
            goto try_except_handler_1;
        }
        generator->m_frame->m_frame.f_lineno = 930;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 930;
            generator_heap->type_description_1 = "cccccc";
            goto try_except_handler_1;
        }
        assert( generator_heap->tmp_with_1__enter == NULL );
        generator_heap->tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( generator_heap->tmp_with_1__source );
        tmp_source_name_3 = generator_heap->tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___exit__ );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 930;
            generator_heap->type_description_1 = "cccccc";
            goto try_except_handler_1;
        }
        assert( generator_heap->tmp_with_1__exit == NULL );
        generator_heap->tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_expression_name_3;
        PyObject *tmp_yieldfrom_result_2;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "bins" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 931;
            generator_heap->type_description_1 = "cccccc";
            goto try_except_handler_3;
        }

        tmp_expression_name_3 = PyCell_GET( generator->m_closure[0] );
        Py_INCREF( tmp_expression_name_3 );
        generator->m_yield_return_index = 3;
        generator->m_yieldfrom = tmp_expression_name_3;
        return NULL;

        yield_return_3:
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 931;
            generator_heap->type_description_1 = "cccccc";
            goto try_except_handler_3;
        }
        tmp_yieldfrom_result_2 = yield_return_value;
        Py_DECREF( tmp_yieldfrom_result_2 );
    }
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

    // Preserve existing published exception.
    generator_heap->exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( generator_heap->exception_preserved_type_1 );
    generator_heap->exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( generator_heap->exception_preserved_value_1 );
    generator_heap->exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( generator_heap->exception_preserved_tb_1 );

    if ( generator_heap->exception_keeper_tb_1 == NULL )
    {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_keeper_lineno_1 );
    }
    else if ( generator_heap->exception_keeper_lineno_1 != 0 )
    {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK( generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1 );
    PyException_SetTraceback( generator_heap->exception_keeper_value_1, (PyObject *)generator_heap->exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 930;
            generator_heap->type_description_1 = "cccccc";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_assign_source_5;
            tmp_assign_source_5 = NUITKA_BOOL_FALSE;
            generator_heap->tmp_with_1__indicator = tmp_assign_source_5;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( generator_heap->tmp_with_1__exit );
            tmp_called_name_2 = generator_heap->tmp_with_1__exit;
            tmp_args_element_name_1 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_2 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_3 = EXC_TRACEBACK(PyThreadState_GET());
            generator->m_frame->m_frame.f_lineno = 930;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 930;
                generator_heap->type_description_1 = "cccccc";
                goto try_except_handler_4;
            }
            generator_heap->tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( generator_heap->tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 930;
                generator_heap->type_description_1 = "cccccc";
                goto try_except_handler_4;
            }
            tmp_condition_result_3 = ( generator_heap->tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            generator_heap->tmp_result = RERAISE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            if (unlikely( generator_heap->tmp_result == false ))
            {
                generator_heap->exception_lineno = 930;
            }

            if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
            generator_heap->type_description_1 = "cccccc";
            goto try_except_handler_4;
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        generator_heap->tmp_result = RERAISE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
        if (unlikely( generator_heap->tmp_result == false ))
        {
            generator_heap->exception_lineno = 930;
        }

        if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
        generator_heap->type_description_1 = "cccccc";
        goto try_except_handler_4;
        branch_end_2:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( generator_heap->exception_preserved_type_1, generator_heap->exception_preserved_value_1, generator_heap->exception_preserved_tb_1 );
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( generator_heap->exception_preserved_type_1, generator_heap->exception_preserved_value_1, generator_heap->exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_18__histogramdd_dispatcher$$$genobj_1__histogramdd_dispatcher );
    return NULL;
    // End of try:
    try_end_1:;
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

    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = generator_heap->tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( generator_heap->tmp_with_1__exit );
            tmp_called_name_3 = generator_heap->tmp_with_1__exit;
            generator->m_frame->m_frame.f_lineno = 930;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

                Py_DECREF( generator_heap->exception_keeper_type_3 );
                Py_XDECREF( generator_heap->exception_keeper_value_3 );
                Py_XDECREF( generator_heap->exception_keeper_tb_3 );

                generator_heap->exception_lineno = 930;
                generator_heap->type_description_1 = "cccccc";
                goto try_except_handler_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_4:;
    }
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_1;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = generator_heap->tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( generator_heap->tmp_with_1__exit );
            tmp_called_name_4 = generator_heap->tmp_with_1__exit;
            generator->m_frame->m_frame.f_lineno = 930;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 930;
                generator_heap->type_description_1 = "cccccc";
                goto try_except_handler_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_5:;
    }
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

    Py_XDECREF( generator_heap->tmp_with_1__source );
    generator_heap->tmp_with_1__source = NULL;

    Py_XDECREF( generator_heap->tmp_with_1__enter );
    generator_heap->tmp_with_1__enter = NULL;

    Py_XDECREF( generator_heap->tmp_with_1__exit );
    generator_heap->tmp_with_1__exit = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)generator_heap->tmp_with_1__source );
    Py_DECREF( generator_heap->tmp_with_1__source );
    generator_heap->tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_with_1__enter );
    Py_DECREF( generator_heap->tmp_with_1__enter );
    generator_heap->tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_with_1__exit );
    Py_DECREF( generator_heap->tmp_with_1__exit );
    generator_heap->tmp_with_1__exit = NULL;

    {
        PyObject *tmp_expression_name_4;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        if ( PyCell_GET( generator->m_closure[5] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "weights" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 932;
            generator_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = PyCell_GET( generator->m_closure[5] );
        Py_INCREF( tmp_expression_name_4 );
        generator->m_yield_return_index = 4;
        return tmp_expression_name_4;
        yield_return_4:
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 932;
            generator_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_2 = yield_return_value;
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
            generator->m_closure[4],
            generator->m_closure[0],
            generator->m_closure[3],
            generator->m_closure[2],
            generator->m_closure[5],
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
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$lib$histograms$$$function_18__histogramdd_dispatcher$$$genobj_1__histogramdd_dispatcher_maker( void )
{
    return Nuitka_Generator_New(
        numpy$lib$histograms$$$function_18__histogramdd_dispatcher$$$genobj_1__histogramdd_dispatcher_context,
        module_numpy$lib$histograms,
        const_str_plain__histogramdd_dispatcher,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_a8ce0620df4a2bf95ba314d232ef628e,
        6,
        sizeof(struct numpy$lib$histograms$$$function_18__histogramdd_dispatcher$$$genobj_1__histogramdd_dispatcher_locals)
    );
}


static PyObject *impl_numpy$lib$histograms$$$function_19_histogramdd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_sample = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_bins = python_pars[ 1 ];
    PyObject *par_range = python_pars[ 2 ];
    PyObject *par_normed = python_pars[ 3 ];
    PyObject *par_weights = python_pars[ 4 ];
    PyObject *par_density = python_pars[ 5 ];
    PyObject *var_N = NULL;
    PyObject *var_D = NULL;
    PyObject *var_nbin = NULL;
    struct Nuitka_CellObject *var_edges = PyCell_EMPTY();
    PyObject *var_dedges = NULL;
    PyObject *var_M = NULL;
    PyObject *var_i = NULL;
    PyObject *var_smin = NULL;
    PyObject *var_smax = NULL;
    PyObject *var_Ncount = NULL;
    PyObject *var_on_edge = NULL;
    PyObject *var_xy = NULL;
    PyObject *var_hist = NULL;
    PyObject *var_core = NULL;
    PyObject *var_s = NULL;
    PyObject *var_shape = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d5c2e1b71e946657988a3f28097906d5;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    static struct Nuitka_FrameObject *cache_frame_d5c2e1b71e946657988a3f28097906d5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d5c2e1b71e946657988a3f28097906d5, codeobj_d5c2e1b71e946657988a3f28097906d5, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d5c2e1b71e946657988a3f28097906d5 = cache_frame_d5c2e1b71e946657988a3f28097906d5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d5c2e1b71e946657988a3f28097906d5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d5c2e1b71e946657988a3f28097906d5 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( PyCell_GET( par_sample ) );
        tmp_source_name_1 = PyCell_GET( par_sample );
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1008;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1008;
            type_description_1 = "coooooooocoooooooooooo";
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


            type_description_1 = "coooooooocoooooooooooo";
            exception_lineno = 1008;
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


            type_description_1 = "coooooooocoooooooooooo";
            exception_lineno = 1008;
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

                    type_description_1 = "coooooooocoooooooooooo";
                    exception_lineno = 1008;
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

            type_description_1 = "coooooooocoooooooooooo";
            exception_lineno = 1008;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_N == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_N = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_D == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_D = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

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
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_d5c2e1b71e946657988a3f28097906d5, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_d5c2e1b71e946657988a3f28097906d5, exception_keeper_lineno_3 );
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
        tmp_compexpr_right_1 = const_tuple_type_AttributeError_type_ValueError_tuple;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1009;
            type_description_1 = "coooooooocoooooooooooo";
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_source_name_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 1011;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_5;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( PyCell_GET( par_sample ) );
            tmp_args_element_name_1 = PyCell_GET( par_sample );
            frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1011;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_source_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_atleast_2d, call_args );
            }

            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1011;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1011;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = PyCell_GET( par_sample );
                PyCell_SET( par_sample, tmp_assign_source_6 );
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( PyCell_GET( par_sample ) );
            tmp_source_name_3 = PyCell_GET( par_sample );
            tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1012;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1012;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


                type_description_1 = "coooooooocoooooooooooo";
                exception_lineno = 1012;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


                type_description_1 = "coooooooocoooooooooooo";
                exception_lineno = 1012;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;
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

                        type_description_1 = "coooooooocoooooooooooo";
                        exception_lineno = 1012;
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

                type_description_1 = "coooooooocoooooooooooo";
                exception_lineno = 1012;
                goto try_except_handler_7;
            }
        }
        goto try_end_4;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_6;
        // End of try:
        try_end_4:;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

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
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
            assert( var_N == NULL );
            Py_INCREF( tmp_assign_source_10 );
            var_N = tmp_assign_source_10;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
            assert( var_D == NULL );
            Py_INCREF( tmp_assign_source_11 );
            var_D = tmp_assign_source_11;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 1006;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_d5c2e1b71e946657988a3f28097906d5->m_frame) frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "coooooooocoooooooooooo";
        goto try_except_handler_5;
        branch_end_1:;
    }
    goto try_end_6;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_19_histogramdd );
    return NULL;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1014;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_empty );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1014;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_D == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "D" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1014;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = var_D;
        tmp_args_element_name_3 = (PyObject *)&PyLong_Type;
        frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1014;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1014;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nbin == NULL );
        var_nbin = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if ( var_D == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "D" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1015;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = var_D;
        tmp_right_name_1 = LIST_COPY( const_list_none_list );
        tmp_assign_source_13 = BINARY_OPERATION_MUL_OBJECT_LIST( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1015;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_edges ) == NULL );
        PyCell_SET( var_edges, tmp_assign_source_13 );

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        if ( var_D == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "D" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1016;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = var_D;
        tmp_right_name_2 = LIST_COPY( const_list_none_list );
        tmp_assign_source_14 = BINARY_OPERATION_MUL_OBJECT_LIST( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1016;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dedges == NULL );
        var_dedges = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_weights );
        tmp_compexpr_left_2 = par_weights;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 1018;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_weights );
            tmp_args_element_name_4 = par_weights;
            frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1018;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
            }

            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1018;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_weights;
                assert( old != NULL );
                par_weights = tmp_assign_source_15;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_bins );
        tmp_len_arg_1 = par_bins;
        tmp_assign_source_16 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1021;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_8;
        }
        assert( var_M == NULL );
        var_M = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_M );
        tmp_compexpr_left_3 = var_M;
        if ( var_D == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "D" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1022;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_8;
        }

        tmp_compexpr_right_3 = var_D;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1022;
            type_description_1 = "coooooooocoooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_57ddb94ab4e2073718a48253623dc3d1;
            frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1023;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 1023;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_8;
        }
        branch_no_3:;
    }
    goto try_end_7;
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

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_d5c2e1b71e946657988a3f28097906d5, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_d5c2e1b71e946657988a3f28097906d5, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1026;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_9;
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
            PyObject *tmp_assign_source_17;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_list_element_1;
            if ( var_D == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "D" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1028;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_9;
            }

            tmp_left_name_3 = var_D;
            CHECK_OBJECT( par_bins );
            tmp_list_element_1 = par_bins;
            tmp_right_name_3 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_right_name_3, 0, tmp_list_element_1 );
            tmp_assign_source_17 = BINARY_OPERATION_MUL_OBJECT_LIST( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1028;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_9;
            }
            {
                PyObject *old = par_bins;
                assert( old != NULL );
                par_bins = tmp_assign_source_17;
                Py_DECREF( old );
            }

        }
        goto branch_end_4;
        branch_no_4:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 1020;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_d5c2e1b71e946657988a3f28097906d5->m_frame) frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "coooooooocoooooooooooo";
        goto try_except_handler_9;
        branch_end_4:;
    }
    goto try_end_8;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_7;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_19_histogramdd );
    return NULL;
    // End of try:
    try_end_7:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_range );
        tmp_compexpr_left_5 = par_range;
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
            PyObject *tmp_assign_source_18;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            tmp_left_name_4 = const_tuple_none_tuple;
            if ( var_D == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "D" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1032;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_4 = var_D;
            tmp_assign_source_18 = BINARY_OPERATION_MUL_TUPLE_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1032;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_range;
                assert( old != NULL );
                par_range = tmp_assign_source_18;
                Py_DECREF( old );
            }

        }
        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_len_arg_2;
            CHECK_OBJECT( par_range );
            tmp_len_arg_2 = par_range;
            tmp_compexpr_left_6 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_compexpr_left_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1033;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_D == NULL )
            {
                Py_DECREF( tmp_compexpr_left_6 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "D" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1033;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_6 = var_D;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_left_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1033;
                type_description_1 = "coooooooocoooooooooooo";
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
                tmp_make_exception_arg_2 = const_str_digest_501dd2c789346deefe2dddd8ff4becbd;
                frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1034;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 1034;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_6:;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__range );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__range );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_range" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1037;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        if ( var_D == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "D" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1037;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = var_D;
        frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1037;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1037;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1037;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_19;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_20 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "coooooooocoooooooooooo";
                exception_lineno = 1037;
                goto try_except_handler_10;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_21;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1038;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_10;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ndim );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1038;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_10;
        }
        if ( par_bins == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bins" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1038;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_10;
        }

        tmp_subscribed_name_1 = par_bins;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_1 = var_i;
        tmp_args_element_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 1038;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_10;
        }
        frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1038;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_compexpr_left_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1038;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_10;
        }
        tmp_compexpr_right_7 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1038;
            type_description_1 = "coooooooocoooooooooooo";
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
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            if ( par_bins == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bins" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1039;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }

            tmp_subscribed_name_2 = par_bins;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_2 = var_i;
            tmp_compexpr_left_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_compexpr_left_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1039;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }
            tmp_compexpr_right_8 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            Py_DECREF( tmp_compexpr_left_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1039;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_args_element_name_7;
                tmp_called_instance_3 = const_str_digest_2f1f044a6adcb783095a39e7ecd560fb;
                CHECK_OBJECT( var_i );
                tmp_args_element_name_7 = var_i;
                frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1041;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7 };
                    tmp_make_exception_arg_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_format, call_args );
                }

                if ( tmp_make_exception_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1041;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
                frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1040;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_3 );
                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 1040;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }
            branch_no_8:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__get_outer_edges );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_outer_edges );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_outer_edges" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1042;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_11;
            }

            tmp_called_name_4 = tmp_mvar_value_6;
            if ( PyCell_GET( par_sample ) == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sample" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1042;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_11;
            }

            tmp_subscribed_name_3 = PyCell_GET( par_sample );
            tmp_tuple_element_1 = const_slice_none_none_none;
            tmp_subscript_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_i );
            tmp_tuple_element_1 = var_i;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_1 );
            tmp_args_element_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1042;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_11;
            }
            CHECK_OBJECT( par_range );
            tmp_subscribed_name_4 = par_range;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_4 = var_i;
            tmp_args_element_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );

                exception_lineno = 1042;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_11;
            }
            frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1042;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_iter_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1042;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_11;
            }
            tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_4 );
            Py_DECREF( tmp_iter_arg_4 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1042;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__source_iter;
                tmp_tuple_unpack_3__source_iter = tmp_assign_source_22;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
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


                type_description_1 = "coooooooocoooooooooooo";
                exception_lineno = 1042;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_1;
                tmp_tuple_unpack_3__element_1 = tmp_assign_source_23;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
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


                type_description_1 = "coooooooocoooooooooooo";
                exception_lineno = 1042;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_3__element_2;
                tmp_tuple_unpack_3__element_2 = tmp_assign_source_24;
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

                        type_description_1 = "coooooooocoooooooooooo";
                        exception_lineno = 1042;
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

                type_description_1 = "coooooooocoooooooooooo";
                exception_lineno = 1042;
                goto try_except_handler_12;
            }
        }
        goto try_end_9;
        // Exception handler code:
        try_except_handler_12:;
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

        goto try_except_handler_11;
        // End of try:
        try_end_9:;
        goto try_end_10;
        // Exception handler code:
        try_except_handler_11:;
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

        goto try_except_handler_10;
        // End of try:
        try_end_10:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        {
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_25 = tmp_tuple_unpack_3__element_1;
            {
                PyObject *old = var_smin;
                var_smin = tmp_assign_source_25;
                Py_INCREF( var_smin );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_26 = tmp_tuple_unpack_3__element_2;
            {
                PyObject *old = var_smax;
                var_smax = tmp_assign_source_26;
                Py_INCREF( var_smax );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_left_name_5;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 1043;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }

            tmp_source_name_6 = tmp_mvar_value_7;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_linspace );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1043;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }
            CHECK_OBJECT( var_smin );
            tmp_args_element_name_10 = var_smin;
            CHECK_OBJECT( var_smax );
            tmp_args_element_name_11 = var_smax;
            if ( par_bins == NULL )
            {
                Py_DECREF( tmp_called_name_5 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bins" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1043;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }

            tmp_subscribed_name_5 = par_bins;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_5 = var_i;
            tmp_left_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 1043;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }
            tmp_right_name_5 = const_int_pos_1;
            tmp_args_element_name_12 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 1043;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }
            frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1043;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1043;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }
            CHECK_OBJECT( PyCell_GET( var_edges ) );
            tmp_ass_subscribed_1 = PyCell_GET( var_edges );
            CHECK_OBJECT( var_i );
            tmp_ass_subscript_1 = var_i;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1043;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }
        }
        goto branch_end_7;
        branch_no_7:;
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 1044;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }

            tmp_source_name_7 = tmp_mvar_value_8;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ndim );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1044;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }
            if ( par_bins == NULL )
            {
                Py_DECREF( tmp_called_name_6 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bins" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1044;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }

            tmp_subscribed_name_6 = par_bins;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_6 = var_i;
            tmp_args_element_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 1044;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }
            frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1044;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_compexpr_left_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_13 );
            if ( tmp_compexpr_left_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1044;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }
            tmp_compexpr_right_9 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            Py_DECREF( tmp_compexpr_left_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1044;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
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
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_called_name_7;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_args_element_name_14;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_subscript_name_7;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_ass_subscript_2;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 1045;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }

                tmp_source_name_8 = tmp_mvar_value_9;
                tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_asarray );
                if ( tmp_called_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1045;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
                if ( par_bins == NULL )
                {
                    Py_DECREF( tmp_called_name_7 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bins" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1045;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }

                tmp_subscribed_name_7 = par_bins;
                CHECK_OBJECT( var_i );
                tmp_subscript_name_7 = var_i;
                tmp_args_element_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                if ( tmp_args_element_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 1045;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
                frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1045;
                {
                    PyObject *call_args[] = { tmp_args_element_name_14 };
                    tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_14 );
                if ( tmp_ass_subvalue_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1045;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
                CHECK_OBJECT( PyCell_GET( var_edges ) );
                tmp_ass_subscribed_2 = PyCell_GET( var_edges );
                CHECK_OBJECT( var_i );
                tmp_ass_subscript_2 = var_i;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                Py_DECREF( tmp_ass_subvalue_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1045;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
            }
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_called_name_8;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_10;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_15;
                PyObject *tmp_compexpr_left_10;
                PyObject *tmp_compexpr_right_10;
                PyObject *tmp_subscribed_name_8;
                PyObject *tmp_subscribed_name_9;
                PyObject *tmp_subscript_name_8;
                PyObject *tmp_subscript_name_9;
                PyObject *tmp_subscribed_name_10;
                PyObject *tmp_subscribed_name_11;
                PyObject *tmp_subscript_name_10;
                PyObject *tmp_subscript_name_11;
                int tmp_truth_name_1;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 1046;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }

                tmp_source_name_9 = tmp_mvar_value_10;
                tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_any );
                if ( tmp_called_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1046;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
                CHECK_OBJECT( PyCell_GET( var_edges ) );
                tmp_subscribed_name_9 = PyCell_GET( var_edges );
                CHECK_OBJECT( var_i );
                tmp_subscript_name_8 = var_i;
                tmp_subscribed_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_8 );
                if ( tmp_subscribed_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_8 );

                    exception_lineno = 1046;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
                tmp_subscript_name_9 = const_slice_none_int_neg_1_none;
                tmp_compexpr_left_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_9 );
                Py_DECREF( tmp_subscribed_name_8 );
                if ( tmp_compexpr_left_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_8 );

                    exception_lineno = 1046;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
                CHECK_OBJECT( PyCell_GET( var_edges ) );
                tmp_subscribed_name_11 = PyCell_GET( var_edges );
                CHECK_OBJECT( var_i );
                tmp_subscript_name_10 = var_i;
                tmp_subscribed_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_10 );
                if ( tmp_subscribed_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_8 );
                    Py_DECREF( tmp_compexpr_left_10 );

                    exception_lineno = 1046;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
                tmp_subscript_name_11 = const_slice_int_pos_1_none_none;
                tmp_compexpr_right_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_11 );
                Py_DECREF( tmp_subscribed_name_10 );
                if ( tmp_compexpr_right_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_8 );
                    Py_DECREF( tmp_compexpr_left_10 );

                    exception_lineno = 1046;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
                tmp_args_element_name_15 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                Py_DECREF( tmp_compexpr_left_10 );
                Py_DECREF( tmp_compexpr_right_10 );
                if ( tmp_args_element_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_8 );

                    exception_lineno = 1046;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
                frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1046;
                {
                    PyObject *call_args[] = { tmp_args_element_name_15 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                }

                Py_DECREF( tmp_called_name_8 );
                Py_DECREF( tmp_args_element_name_15 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1046;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
                tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
                if ( tmp_truth_name_1 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_1 );

                    exception_lineno = 1046;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
                tmp_condition_result_10 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_1 );
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
                    PyObject *tmp_called_instance_4;
                    PyObject *tmp_args_element_name_16;
                    tmp_called_instance_4 = const_str_digest_be7969379f6251acfa304dfca2dad1ad;
                    CHECK_OBJECT( var_i );
                    tmp_args_element_name_16 = var_i;
                    frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1048;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_16 };
                        tmp_make_exception_arg_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_format, call_args );
                    }

                    if ( tmp_make_exception_arg_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 1048;
                        type_description_1 = "coooooooocoooooooooooo";
                        goto try_except_handler_10;
                    }
                    frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1047;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_4 };
                        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_4 );
                    assert( !(tmp_raise_type_4 == NULL) );
                    exception_type = tmp_raise_type_4;
                    exception_lineno = 1047;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
                branch_no_10:;
            }
            goto branch_end_9;
            branch_no_9:;
            {
                PyObject *tmp_raise_type_5;
                PyObject *tmp_make_exception_arg_5;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_args_element_name_17;
                tmp_called_instance_5 = const_str_digest_9c192b0b2ac7cdcecbecf3341562cbf8;
                CHECK_OBJECT( var_i );
                tmp_args_element_name_17 = var_i;
                frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1052;
                {
                    PyObject *call_args[] = { tmp_args_element_name_17 };
                    tmp_make_exception_arg_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_format, call_args );
                }

                if ( tmp_make_exception_arg_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1052;
                    type_description_1 = "coooooooocoooooooooooo";
                    goto try_except_handler_10;
                }
                frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1051;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_5 };
                    tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_5 );
                assert( !(tmp_raise_type_5 == NULL) );
                exception_type = tmp_raise_type_5;
                exception_lineno = 1051;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_10;
            }
            branch_end_9:;
        }
        branch_end_7:;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_6;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_right_name_6;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( PyCell_GET( var_edges ) );
        tmp_subscribed_name_12 = PyCell_GET( var_edges );
        CHECK_OBJECT( var_i );
        tmp_subscript_name_12 = var_i;
        tmp_len_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
        if ( tmp_len_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1054;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_10;
        }
        tmp_left_name_6 = BUILTIN_LEN( tmp_len_arg_3 );
        Py_DECREF( tmp_len_arg_3 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1054;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_10;
        }
        tmp_right_name_6 = const_int_pos_1;
        tmp_ass_subvalue_3 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        assert( !(tmp_ass_subvalue_3 == NULL) );
        CHECK_OBJECT( var_nbin );
        tmp_ass_subscribed_3 = var_nbin;
        CHECK_OBJECT( var_i );
        tmp_ass_subscript_3 = var_i;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1054;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_10;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_subscribed_name_13;
        PyObject *tmp_subscript_name_13;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1055;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_10;
        }

        tmp_source_name_10 = tmp_mvar_value_11;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_diff );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1055;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT( PyCell_GET( var_edges ) );
        tmp_subscribed_name_13 = PyCell_GET( var_edges );
        CHECK_OBJECT( var_i );
        tmp_subscript_name_13 = var_i;
        tmp_args_element_name_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
        if ( tmp_args_element_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 1055;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_10;
        }
        frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1055;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_ass_subvalue_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1055;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT( var_dedges );
        tmp_ass_subscribed_4 = var_dedges;
        CHECK_OBJECT( var_i );
        tmp_ass_subscript_4 = var_i;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1055;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_10;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1037;
        type_description_1 = "coooooooocoooooooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_arg_1;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_19;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__range );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__range );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_range" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1061;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_10 = tmp_mvar_value_12;
            if ( var_D == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "D" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1061;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_19 = var_D;
            frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1061;
            {
                PyObject *call_args[] = { tmp_args_element_name_19 };
                tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            if ( tmp_iter_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1061;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_5 );
            Py_DECREF( tmp_iter_arg_5 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1060;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_28;
        }
        // Tried code:
        tmp_tuple_arg_1 = numpy$lib$histograms$$$function_19_histogramdd$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[0] = var_edges;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[0] );
        ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[1] = PyCell_NEW0( tmp_genexpr_1__$0 );
        ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[2] = par_sample;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[2] );


        goto try_return_handler_13;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_19_histogramdd );
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_19_histogramdd );
        return NULL;
        outline_result_1:;
        tmp_assign_source_27 = PySequence_Tuple( tmp_tuple_arg_1 );
        Py_DECREF( tmp_tuple_arg_1 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1058;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Ncount == NULL );
        var_Ncount = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_20;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__range );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__range );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_range" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1067;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_13;
        if ( var_D == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "D" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1067;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_20 = var_D;
        frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1067;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_iter_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1067;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = MAKE_ITERATOR( tmp_iter_arg_6 );
        Py_DECREF( tmp_iter_arg_6 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1067;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_29;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_30 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_30 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "coooooooocoooooooooooo";
                exception_lineno = 1067;
                goto try_except_handler_14;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_30;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_31 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_31;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_subscribed_name_14;
        PyObject *tmp_subscript_name_14;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_subscribed_name_15;
        PyObject *tmp_subscribed_name_16;
        PyObject *tmp_subscript_name_15;
        PyObject *tmp_subscript_name_16;
        if ( PyCell_GET( par_sample ) == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sample" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1069;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_14;
        }

        tmp_subscribed_name_14 = PyCell_GET( par_sample );
        tmp_tuple_element_2 = const_slice_none_none_none;
        tmp_subscript_name_14 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_subscript_name_14, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_i );
        tmp_tuple_element_2 = var_i;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_subscript_name_14, 1, tmp_tuple_element_2 );
        tmp_compexpr_left_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
        Py_DECREF( tmp_subscript_name_14 );
        if ( tmp_compexpr_left_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1069;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT( PyCell_GET( var_edges ) );
        tmp_subscribed_name_16 = PyCell_GET( var_edges );
        CHECK_OBJECT( var_i );
        tmp_subscript_name_15 = var_i;
        tmp_subscribed_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_15 );
        if ( tmp_subscribed_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_11 );

            exception_lineno = 1069;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_14;
        }
        tmp_subscript_name_16 = const_int_neg_1;
        tmp_compexpr_right_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_15, tmp_subscript_name_16, -1 );
        Py_DECREF( tmp_subscribed_name_15 );
        if ( tmp_compexpr_right_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_11 );

            exception_lineno = 1069;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_32 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        Py_DECREF( tmp_compexpr_left_11 );
        Py_DECREF( tmp_compexpr_right_11 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1069;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = var_on_edge;
            var_on_edge = tmp_assign_source_32;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_subscribed_name_17;
        PyObject *tmp_subscript_name_17;
        CHECK_OBJECT( var_Ncount );
        tmp_subscribed_name_17 = var_Ncount;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_17 = var_i;
        tmp_assign_source_33 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1071;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_33;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT( var_on_edge );
        tmp_assign_source_34 = var_on_edge;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_34;
            Py_INCREF( tmp_inplace_assign_subscr_1__subscript );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_left_name_7;
        PyObject *tmp_subscribed_name_18;
        PyObject *tmp_subscript_name_18;
        PyObject *tmp_right_name_7;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_18 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_subscript_name_18 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1071;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_15;
        }
        tmp_right_name_7 = const_int_pos_1;
        tmp_ass_subvalue_5 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_ass_subvalue_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1071;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_ass_subscribed_5 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_ass_subscript_5 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subvalue_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1071;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_15;
        }
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_14;
    // End of try:
    try_end_12:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1067;
        type_description_1 = "coooooooocoooooooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1075;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_14;
        CHECK_OBJECT( var_Ncount );
        tmp_args_element_name_21 = var_Ncount;
        CHECK_OBJECT( var_nbin );
        tmp_args_element_name_22 = var_nbin;
        frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1075;
        {
            PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
            tmp_assign_source_35 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_ravel_multi_index, call_args );
        }

        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1075;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_xy == NULL );
        var_xy = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_name_12;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_7;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1079;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_15;
        tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_bincount );
        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1079;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_xy );
        tmp_tuple_element_3 = var_xy;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_weights );
        tmp_tuple_element_3 = par_weights;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_3 );
        tmp_dict_key_1 = const_str_plain_minlength;
        CHECK_OBJECT( var_nbin );
        tmp_called_instance_7 = var_nbin;
        frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1079;
        tmp_dict_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_prod );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 1079;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1079;
        tmp_assign_source_36 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1079;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_hist == NULL );
        var_hist = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_name_23;
        CHECK_OBJECT( var_hist );
        tmp_called_instance_8 = var_hist;
        CHECK_OBJECT( var_nbin );
        tmp_args_element_name_23 = var_nbin;
        frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1082;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_assign_source_37 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_reshape, call_args );
        }

        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1082;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_hist;
            assert( old != NULL );
            var_hist = tmp_assign_source_37;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_13;
        PyObject *tmp_source_name_12;
        PyObject *tmp_args_name_2;
        PyObject *tmp_kw_name_2;
        CHECK_OBJECT( var_hist );
        tmp_source_name_12 = var_hist;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_astype );
        if ( tmp_called_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1085;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = const_tuple_type_float_tuple;
        tmp_kw_name_2 = PyDict_Copy( const_dict_2933d301529eaa80255c257221b5eda6 );
        frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1085;
        tmp_assign_source_38 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1085;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_hist;
            assert( old != NULL );
            var_hist = tmp_assign_source_38;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        if ( var_D == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "D" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1088;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_8 = var_D;
        tmp_right_name_8 = const_tuple_slice_int_pos_1_int_neg_1_none_tuple;
        tmp_assign_source_39 = BINARY_OPERATION_MUL_OBJECT_TUPLE( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1088;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_core == NULL );
        var_core = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_subscribed_name_19;
        PyObject *tmp_subscript_name_19;
        CHECK_OBJECT( var_hist );
        tmp_subscribed_name_19 = var_hist;
        CHECK_OBJECT( var_core );
        tmp_subscript_name_19 = var_core;
        tmp_assign_source_40 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1089;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_hist;
            assert( old != NULL );
            var_hist = tmp_assign_source_40;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        CHECK_OBJECT( par_normed );
        tmp_compexpr_left_12 = par_normed;
        tmp_compexpr_right_12 = Py_None;
        tmp_condition_result_11 = ( tmp_compexpr_left_12 == tmp_compexpr_right_12 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_13;
            PyObject *tmp_compexpr_right_13;
            CHECK_OBJECT( par_density );
            tmp_compexpr_left_13 = par_density;
            tmp_compexpr_right_13 = Py_None;
            tmp_condition_result_12 = ( tmp_compexpr_left_13 == tmp_compexpr_right_13 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_41;
                tmp_assign_source_41 = Py_False;
                {
                    PyObject *old = par_density;
                    assert( old != NULL );
                    par_density = tmp_assign_source_41;
                    Py_INCREF( par_density );
                    Py_DECREF( old );
                }

            }
            branch_no_12:;
        }
        goto branch_end_11;
        branch_no_11:;
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_compexpr_left_14;
            PyObject *tmp_compexpr_right_14;
            CHECK_OBJECT( par_density );
            tmp_compexpr_left_14 = par_density;
            tmp_compexpr_right_14 = Py_None;
            tmp_condition_result_13 = ( tmp_compexpr_left_14 == tmp_compexpr_right_14 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_42;
                CHECK_OBJECT( par_normed );
                tmp_assign_source_42 = par_normed;
                {
                    PyObject *old = par_density;
                    assert( old != NULL );
                    par_density = tmp_assign_source_42;
                    Py_INCREF( par_density );
                    Py_DECREF( old );
                }

            }
            goto branch_end_13;
            branch_no_13:;
            {
                PyObject *tmp_raise_type_6;
                PyObject *tmp_make_exception_arg_6;
                tmp_make_exception_arg_6 = const_str_digest_6f68ca161a0e83f1ffb1aef6f03cbb13;
                frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1099;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_6 };
                    tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                assert( !(tmp_raise_type_6 == NULL) );
                exception_type = tmp_raise_type_6;
                exception_lineno = 1099;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_end_13:;
        }
        branch_end_11:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_2;
        if ( par_density == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "density" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1101;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE( par_density );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1101;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_instance_9;
            CHECK_OBJECT( var_hist );
            tmp_called_instance_9 = var_hist;
            frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1103;
            tmp_assign_source_43 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_sum );
            if ( tmp_assign_source_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1103;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_s == NULL );
            var_s = tmp_assign_source_43;
        }
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_called_name_14;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_element_name_24;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__range );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__range );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_range" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1104;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_14 = tmp_mvar_value_16;
            if ( var_D == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "D" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1104;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_24 = var_D;
            frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1104;
            {
                PyObject *call_args[] = { tmp_args_element_name_24 };
                tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
            }

            if ( tmp_iter_arg_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1104;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_44 = MAKE_ITERATOR( tmp_iter_arg_7 );
            Py_DECREF( tmp_iter_arg_7 );
            if ( tmp_assign_source_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1104;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_3__for_iterator == NULL );
            tmp_for_loop_3__for_iterator = tmp_assign_source_44;
        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_45;
            CHECK_OBJECT( tmp_for_loop_3__for_iterator );
            tmp_next_source_3 = tmp_for_loop_3__for_iterator;
            tmp_assign_source_45 = ITERATOR_NEXT( tmp_next_source_3 );
            if ( tmp_assign_source_45 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "coooooooocoooooooooooo";
                    exception_lineno = 1104;
                    goto try_except_handler_16;
                }
            }

            {
                PyObject *old = tmp_for_loop_3__iter_value;
                tmp_for_loop_3__iter_value = tmp_assign_source_45;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_46;
            CHECK_OBJECT( tmp_for_loop_3__iter_value );
            tmp_assign_source_46 = tmp_for_loop_3__iter_value;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_46;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_name_15;
            PyObject *tmp_source_name_13;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_args_element_name_26;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 1105;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_16;
            }

            tmp_source_name_13 = tmp_mvar_value_17;
            tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_ones );
            if ( tmp_called_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1105;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_16;
            }
            if ( var_D == NULL )
            {
                Py_DECREF( tmp_called_name_15 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "D" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1105;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_16;
            }

            tmp_args_element_name_25 = var_D;
            tmp_args_element_name_26 = (PyObject *)&PyLong_Type;
            frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1105;
            {
                PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26 };
                tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
            }

            Py_DECREF( tmp_called_name_15 );
            if ( tmp_assign_source_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1105;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_16;
            }
            {
                PyObject *old = var_shape;
                var_shape = tmp_assign_source_47;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_left_name_9;
            PyObject *tmp_subscribed_name_20;
            PyObject *tmp_subscript_name_20;
            PyObject *tmp_right_name_9;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            CHECK_OBJECT( var_nbin );
            tmp_subscribed_name_20 = var_nbin;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_20 = var_i;
            tmp_left_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1106;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_16;
            }
            tmp_right_name_9 = const_int_pos_2;
            tmp_ass_subvalue_6 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_9 );
            if ( tmp_ass_subvalue_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1106;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_16;
            }
            CHECK_OBJECT( var_shape );
            tmp_ass_subscribed_6 = var_shape;
            CHECK_OBJECT( var_i );
            tmp_ass_subscript_6 = var_i;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
            Py_DECREF( tmp_ass_subvalue_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1106;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_16;
            }
        }
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_subscribed_name_21;
            PyObject *tmp_subscript_name_21;
            PyObject *tmp_args_element_name_27;
            CHECK_OBJECT( var_hist );
            tmp_left_name_10 = var_hist;
            CHECK_OBJECT( var_dedges );
            tmp_subscribed_name_21 = var_dedges;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_21 = var_i;
            tmp_called_instance_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
            if ( tmp_called_instance_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1107;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_16;
            }
            CHECK_OBJECT( var_shape );
            tmp_args_element_name_27 = var_shape;
            frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1107;
            {
                PyObject *call_args[] = { tmp_args_element_name_27 };
                tmp_right_name_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_reshape, call_args );
            }

            Py_DECREF( tmp_called_instance_10 );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1107;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_16;
            }
            tmp_assign_source_48 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_assign_source_48 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1107;
                type_description_1 = "coooooooocoooooooooooo";
                goto try_except_handler_16;
            }
            {
                PyObject *old = var_hist;
                assert( old != NULL );
                var_hist = tmp_assign_source_48;
                Py_DECREF( old );
            }

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1104;
            type_description_1 = "coooooooocoooooooooooo";
            goto try_except_handler_16;
        }
        goto loop_start_3;
        loop_end_3:;
        goto try_end_14;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
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
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto frame_exception_exit_1;
        // End of try:
        try_end_14:;
        Py_XDECREF( tmp_for_loop_3__iter_value );
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
        Py_DECREF( tmp_for_loop_3__for_iterator );
        tmp_for_loop_3__for_iterator = NULL;

        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            CHECK_OBJECT( var_hist );
            tmp_left_name_11 = var_hist;
            CHECK_OBJECT( var_s );
            tmp_right_name_11 = var_s;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_11, tmp_right_name_11 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1108;
                type_description_1 = "coooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_49 = tmp_left_name_11;
            var_hist = tmp_assign_source_49;

        }
        branch_no_14:;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_source_name_14;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_3;
        CHECK_OBJECT( var_hist );
        tmp_source_name_14 = var_hist;
        tmp_compexpr_left_15 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_shape );
        if ( tmp_compexpr_left_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1110;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nbin );
        tmp_left_name_12 = var_nbin;
        tmp_right_name_12 = const_int_pos_2;
        tmp_compexpr_right_15 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_compexpr_right_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_15 );

            exception_lineno = 1110;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_11 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
        Py_DECREF( tmp_compexpr_left_15 );
        Py_DECREF( tmp_compexpr_right_15 );
        if ( tmp_called_instance_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1110;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1110;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_11, const_str_plain_any );
        Py_DECREF( tmp_called_instance_11 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1110;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 1110;
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
            PyObject *tmp_raise_type_7;
            PyObject *tmp_make_exception_arg_7;
            tmp_make_exception_arg_7 = const_str_digest_c36188fbce638baed40e442f74a20029;
            frame_d5c2e1b71e946657988a3f28097906d5->m_frame.f_lineno = 1111;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_7 };
                tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
            }

            assert( !(tmp_raise_type_7 == NULL) );
            exception_type = tmp_raise_type_7;
            exception_lineno = 1111;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_15:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5c2e1b71e946657988a3f28097906d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5c2e1b71e946657988a3f28097906d5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d5c2e1b71e946657988a3f28097906d5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d5c2e1b71e946657988a3f28097906d5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d5c2e1b71e946657988a3f28097906d5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d5c2e1b71e946657988a3f28097906d5,
        type_description_1,
        par_sample,
        par_bins,
        par_range,
        par_normed,
        par_weights,
        par_density,
        var_N,
        var_D,
        var_nbin,
        var_edges,
        var_dedges,
        var_M,
        var_i,
        var_smin,
        var_smax,
        var_Ncount,
        var_on_edge,
        var_xy,
        var_hist,
        var_core,
        var_s,
        var_shape
    );


    // Release cached frame.
    if ( frame_d5c2e1b71e946657988a3f28097906d5 == cache_frame_d5c2e1b71e946657988a3f28097906d5 )
    {
        Py_DECREF( frame_d5c2e1b71e946657988a3f28097906d5 );
    }
    cache_frame_d5c2e1b71e946657988a3f28097906d5 = NULL;

    assertFrameObject( frame_d5c2e1b71e946657988a3f28097906d5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT( var_hist );
        tmp_tuple_element_4 = var_hist;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( PyCell_GET( var_edges ) );
        tmp_tuple_element_4 = PyCell_GET( var_edges );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_19_histogramdd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_sample );
    Py_DECREF( par_sample );
    par_sample = NULL;

    Py_XDECREF( par_bins );
    par_bins = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)par_normed );
    Py_DECREF( par_normed );
    par_normed = NULL;

    CHECK_OBJECT( (PyObject *)par_weights );
    Py_DECREF( par_weights );
    par_weights = NULL;

    Py_XDECREF( par_density );
    par_density = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_D );
    var_D = NULL;

    CHECK_OBJECT( (PyObject *)var_nbin );
    Py_DECREF( var_nbin );
    var_nbin = NULL;

    CHECK_OBJECT( (PyObject *)var_edges );
    Py_DECREF( var_edges );
    var_edges = NULL;

    CHECK_OBJECT( (PyObject *)var_dedges );
    Py_DECREF( var_dedges );
    var_dedges = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_smin );
    var_smin = NULL;

    Py_XDECREF( var_smax );
    var_smax = NULL;

    CHECK_OBJECT( (PyObject *)var_Ncount );
    Py_DECREF( var_Ncount );
    var_Ncount = NULL;

    Py_XDECREF( var_on_edge );
    var_on_edge = NULL;

    CHECK_OBJECT( (PyObject *)var_xy );
    Py_DECREF( var_xy );
    var_xy = NULL;

    CHECK_OBJECT( (PyObject *)var_hist );
    Py_DECREF( var_hist );
    var_hist = NULL;

    CHECK_OBJECT( (PyObject *)var_core );
    Py_DECREF( var_core );
    var_core = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sample );
    Py_DECREF( par_sample );
    par_sample = NULL;

    Py_XDECREF( par_bins );
    par_bins = NULL;

    Py_XDECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)par_normed );
    Py_DECREF( par_normed );
    par_normed = NULL;

    Py_XDECREF( par_weights );
    par_weights = NULL;

    Py_XDECREF( par_density );
    par_density = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_D );
    var_D = NULL;

    Py_XDECREF( var_nbin );
    var_nbin = NULL;

    CHECK_OBJECT( (PyObject *)var_edges );
    Py_DECREF( var_edges );
    var_edges = NULL;

    Py_XDECREF( var_dedges );
    var_dedges = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_smin );
    var_smin = NULL;

    Py_XDECREF( var_smax );
    var_smax = NULL;

    Py_XDECREF( var_Ncount );
    var_Ncount = NULL;

    Py_XDECREF( var_on_edge );
    var_on_edge = NULL;

    Py_XDECREF( var_xy );
    var_xy = NULL;

    Py_XDECREF( var_hist );
    var_hist = NULL;

    Py_XDECREF( var_core );
    var_core = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$histograms$$$function_19_histogramdd );
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



struct numpy$lib$histograms$$$function_19_histogramdd$$$genexpr_1_genexpr_locals {
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

static PyObject *numpy$lib$histograms$$$function_19_histogramdd$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$lib$histograms$$$function_19_histogramdd$$$genexpr_1_genexpr_locals *generator_heap = (struct numpy$lib$histograms$$$function_19_histogramdd$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

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
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_c38ab722a98f9e0cde9049c647e40421, module_numpy$lib$histograms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
                generator_heap->type_description_1 = "Nocc";
                generator_heap->exception_lineno = 1060;
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
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np );

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

            generator_heap->exception_lineno = 1060;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_searchsorted );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 1060;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "edges" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 1060;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_subscribed_name_1 = PyCell_GET( generator->m_closure[0] );
        CHECK_OBJECT( generator_heap->var_i );
        tmp_subscript_name_1 = generator_heap->var_i;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_called_name_1 );

            generator_heap->exception_lineno = 1060;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( generator->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "sample" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 1060;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_subscribed_name_2 = PyCell_GET( generator->m_closure[2] );
        tmp_tuple_element_2 = const_slice_none_none_none;
        tmp_subscript_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( generator_heap->var_i );
        tmp_tuple_element_2 = generator_heap->var_i;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 1, tmp_tuple_element_2 );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            generator_heap->exception_lineno = 1060;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_607b85ec57ab5596c680ca014e9c8645 );
        generator->m_frame->m_frame.f_lineno = 1060;
        tmp_expression_name_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 1060;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_name_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_subscribed_name_1, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), &tmp_subscribed_name_2, sizeof(PyObject *), &tmp_subscript_name_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_kw_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_name_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_subscribed_name_1, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), &tmp_subscribed_name_2, sizeof(PyObject *), &tmp_subscript_name_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_kw_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 1060;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 1060;
        generator_heap->type_description_1 = "Nocc";
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
            generator_heap->var_i,
            generator->m_closure[0],
            generator->m_closure[2]
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

static PyObject *numpy$lib$histograms$$$function_19_histogramdd$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$lib$histograms$$$function_19_histogramdd$$$genexpr_1_genexpr_context,
        module_numpy$lib$histograms,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_0ce187624ef22ccd08ff04d3de49f4e9,
#endif
        codeobj_c38ab722a98f9e0cde9049c647e40421,
        3,
        sizeof(struct numpy$lib$histograms$$$function_19_histogramdd$$$genexpr_1_genexpr_locals)
    );
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_10__get_outer_edges(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_10__get_outer_edges,
        const_str_plain__get_outer_edges,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6982d8152b31ba371a39f8d4e80b36de,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_f67b6eddace5871d62bab883af23ebe9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_11__unsigned_subtract(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_11__unsigned_subtract,
        const_str_plain__unsigned_subtract,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6bd57f6a36a7ee6520f7ecfe72416d6e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_3cefa0bb3625752094038b41ef5e654c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_12__get_bin_edges(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_12__get_bin_edges,
        const_str_plain__get_bin_edges,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5fab391dee80b3d3f834b9da0ba3a89b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_b6553af7e853f5349ce1ed9ef52e2021,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_13__search_sorted_inclusive(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_13__search_sorted_inclusive,
        const_str_plain__search_sorted_inclusive,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c89db7d0025e925dfb2a00bc13aa67f8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_49dedb75c4afa2cec89418477bee7bcd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_14__histogram_bin_edges_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_14__histogram_bin_edges_dispatcher,
        const_str_plain__histogram_bin_edges_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2e9256a7b444842632feb90cd65551d3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_15_histogram_bin_edges( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_15_histogram_bin_edges,
        const_str_plain_histogram_bin_edges,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5548ee6dcc35f02ec796337627b54ff3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_e61b87eca95aeb2f6c42cc2c5d2c6f6d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_16__histogram_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_16__histogram_dispatcher,
        const_str_plain__histogram_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d167ec6db072acfd3e0204e748d2a1c7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_17_histogram( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_17_histogram,
        const_str_plain_histogram,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c3447a5136d984b1b7e11bb603fb456e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_65b356a128d857f2d8cc66bc4024af30,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_18__histogramdd_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_18__histogramdd_dispatcher,
        const_str_plain__histogramdd_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a8ce0620df4a2bf95ba314d232ef628e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_19_histogramdd( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_19_histogramdd,
        const_str_plain_histogramdd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d5c2e1b71e946657988a3f28097906d5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_ff1bd0df01b294d11a2a9c91b5393185,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_1__hist_bin_sqrt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_1__hist_bin_sqrt,
        const_str_plain__hist_bin_sqrt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3736cf4e87769543140c9057f2979cd4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_35cf97b698f90eb4dcd3bafcdca25774,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_2__hist_bin_sturges(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_2__hist_bin_sturges,
        const_str_plain__hist_bin_sturges,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_609b72220dfdbdaff332f082df0dc959,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_40a2bb5021a5bbd5a28abb51a74b34f0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_3__hist_bin_rice(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_3__hist_bin_rice,
        const_str_plain__hist_bin_rice,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1de5243f99717873b3da064bf56506df,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_074dc1166c4eba46d59726e482e22620,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_4__hist_bin_scott(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_4__hist_bin_scott,
        const_str_plain__hist_bin_scott,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ada34b60f1602cdc2f3574750d7197bf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_f441901e8ea0d0ddea5ee044a48aa25a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_5__hist_bin_stone(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_5__hist_bin_stone,
        const_str_plain__hist_bin_stone,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4f2f3c9538d10ba62b924e693c124747,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_82fc790eee97164d630d703544b810e9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_5__hist_bin_stone$$$function_1_jhat(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_5__hist_bin_stone$$$function_1_jhat,
        const_str_plain_jhat,
#if PYTHON_VERSION >= 300
        const_str_digest_0fd412be68fda30b7d8200dff02a084e,
#endif
        codeobj_9bea694e77a08851e14798dee14412b9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        NULL,
        4
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_6__hist_bin_doane(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_6__hist_bin_doane,
        const_str_plain__hist_bin_doane,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_05331d88e01bfa52624e541d26344fe0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_eb9aa7ba876fd396d9e99c470f069f32,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_7__hist_bin_fd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_7__hist_bin_fd,
        const_str_plain__hist_bin_fd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d22a25a45221aa5ded178df5fa85f32a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_a38e70e8e4a2e434070548a8308bdd75,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_8__hist_bin_auto(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_8__hist_bin_auto,
        const_str_plain__hist_bin_auto,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_94bd1074ae897dbc1b9eb4bdeb69f391,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_360a9460cd5e41f3703f9202eccb9a14,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$histograms$$$function_9__ravel_and_check_weights(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$histograms$$$function_9__ravel_and_check_weights,
        const_str_plain__ravel_and_check_weights,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_59a94186d386a9c941465a7aab238ddd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$histograms,
        const_str_digest_253c3683e1ad1330633483d345accb51,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$histograms =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.histograms",
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

MOD_INIT_DECL( numpy$lib$histograms )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$histograms );
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
    puts("numpy.lib.histograms: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.histograms: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.histograms: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$lib$histograms" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$histograms = Py_InitModule4(
        "numpy.lib.histograms",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$lib$histograms = PyModule_Create( &mdef_numpy$lib$histograms );
#endif

    moduledict_numpy$lib$histograms = MODULE_DICT( module_numpy$lib$histograms );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$lib$histograms,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$lib$histograms,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$histograms,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$histograms,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$lib$histograms );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_fc92ac17c5c16f543ce66d47da76a47e, module_numpy$lib$histograms );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_1106536b618d85314d82ddcb9cf1433b;
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
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_3e613db086e44e5d2faf08184ac1bd92;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_1106536b618d85314d82ddcb9cf1433b = MAKE_MODULE_FRAME( codeobj_1106536b618d85314d82ddcb9cf1433b, module_numpy$lib$histograms );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1106536b618d85314d82ddcb9cf1433b );
    assert( Py_REFCNT( frame_1106536b618d85314d82ddcb9cf1433b ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 4;
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
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_plain_contextlib;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$histograms;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_contextlib, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_functools;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$histograms;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 7;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_operator;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib$histograms;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 8;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_operator, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_warnings;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$lib$histograms;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 9;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_numpy;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$lib$histograms;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 11;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_65bec798bc2cd8b837759d8fe641668b;
        tmp_globals_name_6 = (PyObject *)moduledict_numpy$lib$histograms;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_basestring_tuple;
        tmp_level_name_6 = const_int_0;
        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 12;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_basestring );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_7 = (PyObject *)moduledict_numpy$lib$histograms;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_overrides_tuple;
        tmp_level_name_7 = const_int_0;
        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 13;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_overrides );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_overrides, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = LIST_COPY( const_list_6b84c5450eba456fbc28d20051c0a10b_list );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_functools );

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

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_partial );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_overrides );

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

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array_function_dispatch );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6e6659be28864e39bad7cab4409b7e16 );
        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 17;
        tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_array_function_dispatch, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = (PyObject *)&PyRange_Type;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__range, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$histograms$$$function_1__hist_bin_sqrt(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_sqrt, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_numpy$lib$histograms$$$function_2__hist_bin_sturges(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_sturges, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_numpy$lib$histograms$$$function_3__hist_bin_rice(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_rice, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_numpy$lib$histograms$$$function_4__hist_bin_scott(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_scott, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_numpy$lib$histograms$$$function_5__hist_bin_stone(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_stone, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_numpy$lib$histograms$$$function_6__hist_bin_doane(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_doane, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_FUNCTION_numpy$lib$histograms$$$function_7__hist_bin_fd(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_fd, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_numpy$lib$histograms$$$function_8__hist_bin_auto(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_auto, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_mvar_value_12;
        tmp_dict_key_1 = const_str_plain_stone;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_stone );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hist_bin_stone );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_dict_value_1 = tmp_mvar_value_5;
        tmp_assign_source_26 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem( tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_auto;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_auto );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hist_bin_auto );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_dict_value_2 = tmp_mvar_value_6;
        tmp_res = PyDict_SetItem( tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_doane;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_doane );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hist_bin_doane );
        }

        CHECK_OBJECT( tmp_mvar_value_7 );
        tmp_dict_value_3 = tmp_mvar_value_7;
        tmp_res = PyDict_SetItem( tmp_assign_source_26, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_fd;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_fd );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hist_bin_fd );
        }

        CHECK_OBJECT( tmp_mvar_value_8 );
        tmp_dict_value_4 = tmp_mvar_value_8;
        tmp_res = PyDict_SetItem( tmp_assign_source_26, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_rice;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_rice );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hist_bin_rice );
        }

        CHECK_OBJECT( tmp_mvar_value_9 );
        tmp_dict_value_5 = tmp_mvar_value_9;
        tmp_res = PyDict_SetItem( tmp_assign_source_26, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_scott;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_scott );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hist_bin_scott );
        }

        CHECK_OBJECT( tmp_mvar_value_10 );
        tmp_dict_value_6 = tmp_mvar_value_10;
        tmp_res = PyDict_SetItem( tmp_assign_source_26, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_sqrt;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_sqrt );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hist_bin_sqrt );
        }

        CHECK_OBJECT( tmp_mvar_value_11 );
        tmp_dict_value_7 = tmp_mvar_value_11;
        tmp_res = PyDict_SetItem( tmp_assign_source_26, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_sturges;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_sturges );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hist_bin_sturges );
        }

        CHECK_OBJECT( tmp_mvar_value_12 );
        tmp_dict_value_8 = tmp_mvar_value_12;
        tmp_res = PyDict_SetItem( tmp_assign_source_26, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__hist_bin_selectors, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_numpy$lib$histograms$$$function_9__ravel_and_check_weights(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__ravel_and_check_weights, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_numpy$lib$histograms$$$function_10__get_outer_edges(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__get_outer_edges, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_numpy$lib$histograms$$$function_11__unsigned_subtract(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__unsigned_subtract, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_FUNCTION_numpy$lib$histograms$$$function_12__get_bin_edges(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__get_bin_edges, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_numpy$lib$histograms$$$function_13__search_sorted_inclusive(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__search_sorted_inclusive, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_32 = MAKE_FUNCTION_numpy$lib$histograms$$$function_14__histogram_bin_edges_dispatcher( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__histogram_bin_edges_dispatcher, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_2;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        CHECK_OBJECT( tmp_mvar_value_13 );
        tmp_called_name_3 = tmp_mvar_value_13;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__histogram_bin_edges_dispatcher );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__histogram_bin_edges_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_14 );
        tmp_args_element_name_1 = tmp_mvar_value_14;
        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 463;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = const_tuple_int_pos_10_none_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$lib$histograms$$$function_15_histogram_bin_edges( tmp_defaults_2 );



        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 463;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_histogram_bin_edges, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_34 = MAKE_FUNCTION_numpy$lib$histograms$$$function_16__histogram_dispatcher( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__histogram_dispatcher, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_defaults_4;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 670;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_15;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__histogram_dispatcher );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__histogram_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_16 );
        tmp_args_element_name_3 = tmp_mvar_value_16;
        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 670;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_called_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 670;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = const_tuple_int_pos_10_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_args_element_name_4 = MAKE_FUNCTION_numpy$lib$histograms$$$function_17_histogram( tmp_defaults_4 );



        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 670;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 670;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_histogram, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_none_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_36 = MAKE_FUNCTION_numpy$lib$histograms$$$function_18__histogramdd_dispatcher( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__histogramdd_dispatcher, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_defaults_6;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 935;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_17;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain__histogramdd_dispatcher );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__histogramdd_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_18 );
        tmp_args_element_name_5 = tmp_mvar_value_18;
        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 935;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 935;

            goto frame_exception_exit_1;
        }
        tmp_defaults_6 = const_tuple_int_pos_10_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_args_element_name_6 = MAKE_FUNCTION_numpy$lib$histograms$$$function_19_histogramdd( tmp_defaults_6 );



        frame_1106536b618d85314d82ddcb9cf1433b->m_frame.f_lineno = 935;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 935;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain_histogramdd, tmp_assign_source_37 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1106536b618d85314d82ddcb9cf1433b );
#endif
    popFrameStack();

    assertFrameObject( frame_1106536b618d85314d82ddcb9cf1433b );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1106536b618d85314d82ddcb9cf1433b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1106536b618d85314d82ddcb9cf1433b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1106536b618d85314d82ddcb9cf1433b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1106536b618d85314d82ddcb9cf1433b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$lib$histograms, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$lib$histograms );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
