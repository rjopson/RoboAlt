/* Generated code for Python module 'numpy.fft.pocketfft'
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

/* The "_module_numpy$fft$pocketfft" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$fft$pocketfft;
PyDictObject *moduledict_numpy$fft$pocketfft;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_index;
static PyObject *const_str_plain_unitary;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_pfi;
static PyObject *const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
static PyObject *const_str_plain_irfft;
static PyObject *const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_conjugate;
static PyObject *const_tuple_str_plain_pocketfft_internal_tuple;
static PyObject *const_str_plain_irfft2;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_fft2;
static PyObject *const_str_plain_ihfft;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_swapaxes;
static PyObject *const_str_digest_ad30867cb50db197c788d8d9559403d4;
static PyObject *const_str_plain__fft_dispatcher;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_none_int_neg_1_none_tuple;
static PyObject *const_str_digest_4668369e132281bb3e0ee274b05ac5ba;
extern PyObject *const_str_plain_fct;
extern PyObject *const_tuple_int_neg_2_int_neg_1_tuple;
static PyObject *const_str_digest_a4494d32ceac06cab5e015824c1ebd87;
static PyObject *const_str_plain__unitary;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_tuple_str_plain_overrides_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
static PyObject *const_list_60f473887d8c78e2f768e087222cf620_list;
extern PyObject *const_str_plain_reverse;
static PyObject *const_str_plain_hfft;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_72f01e533c77be794cb83caa076fd016;
extern PyObject *const_str_digest_b53f3811d9d65c912707e9b896ba9934;
extern PyObject *const_str_plain_s;
static PyObject *const_tuple_d6536490248c336f11dd1461d65aba70_tuple;
static PyObject *const_str_digest_9494539ffb8411756149e487b446694f;
static PyObject *const_str_plain_shapeless;
extern PyObject *const_str_plain_n;
extern PyObject *const_int_neg_2;
static PyObject *const_tuple_7d21c0cd1ed3306f1652947b2f4e27de_tuple;
static PyObject *const_tuple_none_none_int_0_tuple;
static PyObject *const_str_plain_ortho;
static PyObject *const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple;
extern PyObject *const_str_plain_normalize_axis_index;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain__cook_nd_args;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_digest_67a439b64216fd79a420034aec6214a2;
extern PyObject *const_dict_c0d9920cdb2d132dd609908b9aa6b9e2;
static PyObject *const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple;
extern PyObject *const_str_plain_r;
static PyObject *const_str_plain_itl;
static PyObject *const_str_digest_dc52a9a74aa4ff1377be91ff132e602d;
extern PyObject *const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
static PyObject *const_str_plain_execute;
static PyObject *const_str_digest_b30ab4f0cf971b8781217b9cbe239761;
static PyObject *const_str_digest_13bc5b5254b7204a2573e3d7bbd1a0c7;
static PyObject *const_str_digest_8a2fb00203e71847ae308cf711795a30;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_plain_ifft2;
static PyObject *const_str_plain__raw_fft;
static PyObject *const_str_plain_is_real;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_4b356e2504275e6efb56ef14c5d648a6;
extern PyObject *const_str_plain_output;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_fftn;
extern PyObject *const_str_plain_overrides;
extern PyObject *const_int_0;
static PyObject *const_str_plain_rfft;
static PyObject *const_str_plain__raw_fftnd;
static PyObject *const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple;
static PyObject *const_str_digest_b3ffc6c71fed7a60fb1aa8d44a22494a;
static PyObject *const_str_plain_rfftn;
static PyObject *const_str_digest_0690581905707e5372848107d89737db;
static PyObject *const_str_plain_irfftn;
static PyObject *const_str_digest_f620fa34bb2674a9f2fa14dc6be43d65;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_fc36638fe159a5b2fed835b739242617_tuple;
extern PyObject *const_str_plain_ii;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_digest_4fde285245e0480bfbee40bbbdd9595f;
static PyObject *const_str_plain_pocketfft_internal;
static PyObject *const_str_plain__fftn_dispatcher;
extern PyObject *const_list_slice_none_none_none_list;
static PyObject *const_str_digest_242e8c397d863f4678e3108a3c04f924;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_2ebd01a7795c29958aaada191f1fd76a;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_digest_ab460e111c7690eebacb4cfd09eff01e;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_take;
extern PyObject *const_str_plain_z;
extern PyObject *const_str_plain_array_function_dispatch;
static PyObject *const_dict_dd45c77b755c75255009fd804f504c08;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_partial;
static PyObject *const_str_plain_invreal;
extern PyObject *const_str_plain_axis;
extern PyObject *const_tuple_str_plain_normalize_axis_index_tuple;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_function;
extern PyObject *const_str_plain_module;
extern PyObject *const_str_plain_axes;
static PyObject *const_str_digest_04474ea1ff5a6d3a0fdfd69e9fed721e;
extern PyObject *const_tuple_str_plain_norm_tuple;
static PyObject *const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_228dbbac8ee90f62048cd171a21defd6;
static PyObject *const_str_digest_07f33a01b29f69eaa8c79d0d21cec2b0;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_ifft;
extern PyObject *const_str_plain_ifftn;
static PyObject *const_str_plain_rfft2;
extern PyObject *const_str_empty;
static PyObject *const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple;
static PyObject *const_str_plain_is_forward;
extern PyObject *const_str_plain_fft;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_unitary = UNSTREAM_STRING_ASCII( &constant_bin[ 2824194 ], 7, 1 );
    const_str_plain_pfi = UNSTREAM_STRING_ASCII( &constant_bin[ 1047829 ], 3, 1 );
    const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple, 1, const_tuple_int_neg_2_int_neg_1_tuple ); Py_INCREF( const_tuple_int_neg_2_int_neg_1_tuple );
    PyTuple_SET_ITEM( const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_str_plain_irfft = UNSTREAM_STRING_ASCII( &constant_bin[ 2818108 ], 5, 1 );
    const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    const_tuple_str_plain_pocketfft_internal_tuple = PyTuple_New( 1 );
    const_str_plain_pocketfft_internal = UNSTREAM_STRING_ASCII( &constant_bin[ 2826560 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_pocketfft_internal_tuple, 0, const_str_plain_pocketfft_internal ); Py_INCREF( const_str_plain_pocketfft_internal );
    const_str_plain_irfft2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2820226 ], 6, 1 );
    const_str_plain_ihfft = UNSTREAM_STRING_ASCII( &constant_bin[ 2820555 ], 5, 1 );
    const_str_digest_ad30867cb50db197c788d8d9559403d4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2826578 ], 38, 0 );
    const_str_plain__fft_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 2826616 ], 15, 1 );
    const_tuple_none_int_neg_1_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_int_neg_1_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_neg_1_none_tuple, 1, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_none_int_neg_1_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_str_digest_4668369e132281bb3e0ee274b05ac5ba = UNSTREAM_STRING_ASCII( &constant_bin[ 2826631 ], 49, 0 );
    const_str_digest_a4494d32ceac06cab5e015824c1ebd87 = UNSTREAM_STRING_ASCII( &constant_bin[ 2826680 ], 22, 0 );
    const_str_plain__unitary = UNSTREAM_STRING_ASCII( &constant_bin[ 2826702 ], 8, 1 );
    const_list_60f473887d8c78e2f768e087222cf620_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 0, const_str_plain_fft ); Py_INCREF( const_str_plain_fft );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 1, const_str_plain_ifft ); Py_INCREF( const_str_plain_ifft );
    const_str_plain_rfft = UNSTREAM_STRING_ASCII( &constant_bin[ 2814905 ], 4, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 2, const_str_plain_rfft ); Py_INCREF( const_str_plain_rfft );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 3, const_str_plain_irfft ); Py_INCREF( const_str_plain_irfft );
    const_str_plain_hfft = UNSTREAM_STRING_ASCII( &constant_bin[ 2820504 ], 4, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 4, const_str_plain_hfft ); Py_INCREF( const_str_plain_hfft );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 5, const_str_plain_ihfft ); Py_INCREF( const_str_plain_ihfft );
    const_str_plain_rfftn = UNSTREAM_STRING_ASCII( &constant_bin[ 2820298 ], 5, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 6, const_str_plain_rfftn ); Py_INCREF( const_str_plain_rfftn );
    const_str_plain_irfftn = UNSTREAM_STRING_ASCII( &constant_bin[ 2820360 ], 6, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 7, const_str_plain_irfftn ); Py_INCREF( const_str_plain_irfftn );
    const_str_plain_rfft2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2820162 ], 5, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 8, const_str_plain_rfft2 ); Py_INCREF( const_str_plain_rfft2 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 9, const_str_plain_irfft2 ); Py_INCREF( const_str_plain_irfft2 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 10, const_str_plain_fft2 ); Py_INCREF( const_str_plain_fft2 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 11, const_str_plain_ifft2 ); Py_INCREF( const_str_plain_ifft2 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 12, const_str_plain_fftn ); Py_INCREF( const_str_plain_fftn );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 13, const_str_plain_ifftn ); Py_INCREF( const_str_plain_ifftn );
    const_str_digest_72f01e533c77be794cb83caa076fd016 = UNSTREAM_STRING_ASCII( &constant_bin[ 2826710 ], 774, 0 );
    const_tuple_d6536490248c336f11dd1461d65aba70_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_d6536490248c336f11dd1461d65aba70_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_d6536490248c336f11dd1461d65aba70_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_d6536490248c336f11dd1461d65aba70_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_d6536490248c336f11dd1461d65aba70_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_d6536490248c336f11dd1461d65aba70_tuple, 4, const_str_plain_fct ); Py_INCREF( const_str_plain_fct );
    PyTuple_SET_ITEM( const_tuple_d6536490248c336f11dd1461d65aba70_tuple, 5, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    const_str_digest_9494539ffb8411756149e487b446694f = UNSTREAM_STRING_ASCII( &constant_bin[ 2827484 ], 1794, 0 );
    const_str_plain_shapeless = UNSTREAM_STRING_ASCII( &constant_bin[ 2829278 ], 9, 1 );
    const_tuple_7d21c0cd1ed3306f1652947b2f4e27de_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_7d21c0cd1ed3306f1652947b2f4e27de_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_7d21c0cd1ed3306f1652947b2f4e27de_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_7d21c0cd1ed3306f1652947b2f4e27de_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_str_plain_is_real = UNSTREAM_STRING_ASCII( &constant_bin[ 2829287 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_7d21c0cd1ed3306f1652947b2f4e27de_tuple, 3, const_str_plain_is_real ); Py_INCREF( const_str_plain_is_real );
    const_str_plain_is_forward = UNSTREAM_STRING_ASCII( &constant_bin[ 2829294 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_7d21c0cd1ed3306f1652947b2f4e27de_tuple, 4, const_str_plain_is_forward ); Py_INCREF( const_str_plain_is_forward );
    PyTuple_SET_ITEM( const_tuple_7d21c0cd1ed3306f1652947b2f4e27de_tuple, 5, const_str_plain_fct ); Py_INCREF( const_str_plain_fct );
    PyTuple_SET_ITEM( const_tuple_7d21c0cd1ed3306f1652947b2f4e27de_tuple, 6, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_7d21c0cd1ed3306f1652947b2f4e27de_tuple, 7, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    PyTuple_SET_ITEM( const_tuple_7d21c0cd1ed3306f1652947b2f4e27de_tuple, 8, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_7d21c0cd1ed3306f1652947b2f4e27de_tuple, 9, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_tuple_none_none_int_0_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain_ortho = UNSTREAM_STRING_ASCII( &constant_bin[ 966156 ], 5, 1 );
    const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 4, const_str_plain_unitary ); Py_INCREF( const_str_plain_unitary );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 5, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    const_str_plain__cook_nd_args = UNSTREAM_STRING_ASCII( &constant_bin[ 2829304 ], 13, 1 );
    const_str_digest_67a439b64216fd79a420034aec6214a2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2829317 ], 741, 0 );
    const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    const_str_plain_itl = UNSTREAM_STRING_ASCII( &constant_bin[ 22186 ], 3, 1 );
    const_str_digest_dc52a9a74aa4ff1377be91ff132e602d = UNSTREAM_STRING_ASCII( &constant_bin[ 2830058 ], 3097, 0 );
    const_str_plain_execute = UNSTREAM_STRING_ASCII( &constant_bin[ 1147634 ], 7, 1 );
    const_str_digest_b30ab4f0cf971b8781217b9cbe239761 = UNSTREAM_STRING_ASCII( &constant_bin[ 2833155 ], 28, 0 );
    const_str_digest_13bc5b5254b7204a2573e3d7bbd1a0c7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2833183 ], 3643, 0 );
    const_str_digest_8a2fb00203e71847ae308cf711795a30 = UNSTREAM_STRING_ASCII( &constant_bin[ 2836826 ], 3353, 0 );
    const_str_plain__raw_fft = UNSTREAM_STRING_ASCII( &constant_bin[ 2840179 ], 8, 1 );
    const_str_digest_4b356e2504275e6efb56ef14c5d648a6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2833163 ], 19, 0 );
    const_str_plain__raw_fftnd = UNSTREAM_STRING_ASCII( &constant_bin[ 2840187 ], 10, 1 );
    const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 4, const_str_plain_ii ); Py_INCREF( const_str_plain_ii );
    const_str_digest_b3ffc6c71fed7a60fb1aa8d44a22494a = UNSTREAM_STRING_ASCII( &constant_bin[ 2840197 ], 3454, 0 );
    const_str_digest_0690581905707e5372848107d89737db = UNSTREAM_STRING_ASCII( &constant_bin[ 2843651 ], 3501, 0 );
    const_str_digest_f620fa34bb2674a9f2fa14dc6be43d65 = UNSTREAM_STRING_ASCII( &constant_bin[ 2847152 ], 2643, 0 );
    const_tuple_fc36638fe159a5b2fed835b739242617_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_fc36638fe159a5b2fed835b739242617_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_fc36638fe159a5b2fed835b739242617_tuple, 1, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    PyTuple_SET_ITEM( const_tuple_fc36638fe159a5b2fed835b739242617_tuple, 2, const_str_plain_swapaxes ); Py_INCREF( const_str_plain_swapaxes );
    PyTuple_SET_ITEM( const_tuple_fc36638fe159a5b2fed835b739242617_tuple, 3, const_str_plain_conjugate ); Py_INCREF( const_str_plain_conjugate );
    PyTuple_SET_ITEM( const_tuple_fc36638fe159a5b2fed835b739242617_tuple, 4, const_str_plain_take ); Py_INCREF( const_str_plain_take );
    PyTuple_SET_ITEM( const_tuple_fc36638fe159a5b2fed835b739242617_tuple, 5, const_str_plain_sqrt ); Py_INCREF( const_str_plain_sqrt );
    const_str_digest_4fde285245e0480bfbee40bbbdd9595f = UNSTREAM_STRING_ASCII( &constant_bin[ 2849795 ], 3141, 0 );
    const_str_plain__fftn_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 2852936 ], 16, 1 );
    const_str_digest_242e8c397d863f4678e3108a3c04f924 = UNSTREAM_STRING_ASCII( &constant_bin[ 2852952 ], 49, 0 );
    const_str_digest_2ebd01a7795c29958aaada191f1fd76a = UNSTREAM_STRING_ASCII( &constant_bin[ 2853001 ], 3765, 0 );
    const_str_digest_ab460e111c7690eebacb4cfd09eff01e = UNSTREAM_STRING_ASCII( &constant_bin[ 2856766 ], 655, 0 );
    const_dict_dd45c77b755c75255009fd804f504c08 = _PyDict_NewPresized( 1 );
    const_str_plain_invreal = UNSTREAM_STRING_ASCII( &constant_bin[ 2857421 ], 7, 1 );
    PyDict_SetItem( const_dict_dd45c77b755c75255009fd804f504c08, const_str_plain_invreal, const_int_pos_1 );
    assert( PyDict_Size( const_dict_dd45c77b755c75255009fd804f504c08 ) == 1 );
    const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 3, const_str_plain_function ); Py_INCREF( const_str_plain_function );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 4, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 5, const_str_plain_itl ); Py_INCREF( const_str_plain_itl );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 6, const_str_plain_ii ); Py_INCREF( const_str_plain_ii );
    const_str_digest_04474ea1ff5a6d3a0fdfd69e9fed721e = UNSTREAM_STRING_ASCII( &constant_bin[ 2857428 ], 3272, 0 );
    const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 3, const_str_plain_invreal ); Py_INCREF( const_str_plain_invreal );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 4, const_str_plain_shapeless ); Py_INCREF( const_str_plain_shapeless );
    const_str_digest_228dbbac8ee90f62048cd171a21defd6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2860700 ], 3001, 0 );
    const_str_digest_07f33a01b29f69eaa8c79d0d21cec2b0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2863701 ], 3014, 0 );
    const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 4, const_str_plain_unitary ); Py_INCREF( const_str_plain_unitary );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$fft$pocketfft( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_030557b0d4db53e9d86265a663f16636;
static PyCodeObject *codeobj_eeff621e7037b68f0797cb019ac1da99;
static PyCodeObject *codeobj_4f63044a9e130ded3a937fb8d43853c9;
static PyCodeObject *codeobj_07a90c6d7f41347112e12399254a6c69;
static PyCodeObject *codeobj_178519203b6651b65aae3228b4399f58;
static PyCodeObject *codeobj_71736c9a2548c4c2a78d35486bd33e48;
static PyCodeObject *codeobj_23e0eb4422e39226bffe77700c262b45;
static PyCodeObject *codeobj_b244d4f4742010f797e75237f6cab9c1;
static PyCodeObject *codeobj_606f73ccc987558fe23057727dbc846d;
static PyCodeObject *codeobj_85a729a385fb64f717e9d484029bedee;
static PyCodeObject *codeobj_b7d5de6a62c50fdf01ab5de59ac34aa1;
static PyCodeObject *codeobj_79333278124d62cae8a21bd2a8c95ca1;
static PyCodeObject *codeobj_a040c447ff50cdfb1e82383c38cb7b94;
static PyCodeObject *codeobj_5f2439d3df1b25d489195e26b0706f64;
static PyCodeObject *codeobj_f4134d4a4f70c8bc9c363db37872b04a;
static PyCodeObject *codeobj_3216c332bfafafdc57dacc033ff39e3f;
static PyCodeObject *codeobj_f899fe8ed8aad756e9b0df2014d98ee4;
static PyCodeObject *codeobj_61379bd17c5a0daffd41e565ba6a3e3f;
static PyCodeObject *codeobj_ad63535153fdf117bd09ab61b2bfc69d;
static PyCodeObject *codeobj_62a7f94ab4006160da02555616525b30;
static PyCodeObject *codeobj_3cca386d1afb77734dda7c432eb2c646;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_a4494d32ceac06cab5e015824c1ebd87 );
    codeobj_030557b0d4db53e9d86265a663f16636 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b30ab4f0cf971b8781217b9cbe239761, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_eeff621e7037b68f0797cb019ac1da99 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__cook_nd_args, 605, const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4f63044a9e130ded3a937fb8d43853c9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fft_dispatcher, 88, const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_07a90c6d7f41347112e12399254a6c69 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fftn_dispatcher, 634, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_178519203b6651b65aae3228b4399f58 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__raw_fft, 47, const_tuple_7d21c0cd1ed3306f1652947b2f4e27de_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_71736c9a2548c4c2a78d35486bd33e48 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__raw_fftnd, 624, const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_23e0eb4422e39226bffe77700c262b45 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unitary, 79, const_tuple_str_plain_norm_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b244d4f4742010f797e75237f6cab9c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fft, 92, const_tuple_d6536490248c336f11dd1461d65aba70_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_606f73ccc987558fe23057727dbc846d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fft2, 834, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_85a729a385fb64f717e9d484029bedee = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fftn, 638, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b7d5de6a62c50fdf01ab5de59ac34aa1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hfft, 462, const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_79333278124d62cae8a21bd2a8c95ca1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifft, 186, const_tuple_d6536490248c336f11dd1461d65aba70_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a040c447ff50cdfb1e82383c38cb7b94 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifft2, 925, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5f2439d3df1b25d489195e26b0706f64 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifftn, 736, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f4134d4a4f70c8bc9c363db37872b04a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ihfft, 544, const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3216c332bfafafdc57dacc033ff39e3f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_irfft, 371, const_tuple_d6536490248c336f11dd1461d65aba70_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f899fe8ed8aad756e9b0df2014d98ee4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_irfft2, 1237, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_61379bd17c5a0daffd41e565ba6a3e3f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_irfftn, 1143, const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ad63535153fdf117bd09ab61b2bfc69d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfft, 282, const_tuple_d6536490248c336f11dd1461d65aba70_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_62a7f94ab4006160da02555616525b30 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfft2, 1105, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3cca386d1afb77734dda7c432eb2c646 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfftn, 1013, const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_10__cook_nd_args( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_11__raw_fftnd( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_12__fftn_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_13_fftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_14_ifftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_15_fft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_16_ifft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_17_rfftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_18_rfft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_19_irfftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_1__raw_fft(  );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_20_irfft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_2__unitary(  );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_3__fft_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_4_fft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_5_ifft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_6_rfft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_7_irfft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_8_hfft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_9_ihfft( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$fft$pocketfft$$$function_1__raw_fft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_is_real = python_pars[ 3 ];
    PyObject *par_is_forward = python_pars[ 4 ];
    PyObject *par_fct = python_pars[ 5 ];
    PyObject *var_s = NULL;
    PyObject *var_index = NULL;
    PyObject *var_z = NULL;
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_178519203b6651b65aae3228b4399f58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_178519203b6651b65aae3228b4399f58 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_178519203b6651b65aae3228b4399f58, codeobj_178519203b6651b65aae3228b4399f58, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_178519203b6651b65aae3228b4399f58 = cache_frame_178519203b6651b65aae3228b4399f58;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_178519203b6651b65aae3228b4399f58 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_178519203b6651b65aae3228b4399f58 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalize_axis_index" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_1 = par_axis;
        CHECK_OBJECT( par_a );
        tmp_source_name_1 = par_a;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_178519203b6651b65aae3228b4399f58->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_axis;
            assert( old != NULL );
            par_axis = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_2 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_2 = par_n;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_242e8c397d863f4678e3108a3c04f924;
            CHECK_OBJECT( par_n );
            tmp_right_name_1 = par_n;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            frame_178519203b6651b65aae3228b4399f58->m_frame.f_lineno = 53;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 53;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_a );
        tmp_source_name_3 = par_a;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axis );
        tmp_subscript_name_2 = par_axis;
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_compexpr_right_3 = par_n;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_list_arg_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_a );
            tmp_source_name_4 = par_a;
            tmp_list_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
            if ( tmp_list_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = PySequence_List( tmp_list_arg_1 );
            Py_DECREF( tmp_list_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_s == NULL );
            var_s = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( var_s );
            tmp_subscribed_name_3 = var_s;
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_3 = par_axis;
            tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_n );
            tmp_compexpr_right_4 = par_n;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;
                type_description_1 = "oooooooooo";
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
                PyObject *tmp_assign_source_4;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_len_arg_1;
                tmp_left_name_2 = LIST_COPY( const_list_slice_none_none_none_list );
                CHECK_OBJECT( var_s );
                tmp_len_arg_1 = var_s;
                tmp_right_name_2 = BUILTIN_LEN( tmp_len_arg_1 );
                assert( !(tmp_right_name_2 == NULL) );
                tmp_assign_source_4 = BINARY_OPERATION_MUL_LIST_LONG( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_right_name_2 );
                assert( !(tmp_assign_source_4 == NULL) );
                assert( var_index == NULL );
                var_index = tmp_assign_source_4;
            }
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_start_name_1;
                PyObject *tmp_stop_name_1;
                PyObject *tmp_step_name_1;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                tmp_start_name_1 = const_int_0;
                CHECK_OBJECT( par_n );
                tmp_stop_name_1 = par_n;
                tmp_step_name_1 = Py_None;
                tmp_ass_subvalue_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                assert( !(tmp_ass_subvalue_1 == NULL) );
                CHECK_OBJECT( var_index );
                tmp_ass_subscribed_1 = var_index;
                CHECK_OBJECT( par_axis );
                tmp_ass_subscript_1 = par_axis;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subvalue_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 60;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_tuple_arg_1;
                CHECK_OBJECT( par_a );
                tmp_subscribed_name_4 = par_a;
                CHECK_OBJECT( var_index );
                tmp_tuple_arg_1 = var_index;
                tmp_subscript_name_4 = PySequence_Tuple( tmp_tuple_arg_1 );
                if ( tmp_subscript_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 61;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                Py_DECREF( tmp_subscript_name_4 );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 61;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_a;
                    assert( old != NULL );
                    par_a = tmp_assign_source_5;
                    Py_DECREF( old );
                }

            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_len_arg_2;
                tmp_left_name_3 = LIST_COPY( const_list_slice_none_none_none_list );
                CHECK_OBJECT( var_s );
                tmp_len_arg_2 = var_s;
                tmp_right_name_3 = BUILTIN_LEN( tmp_len_arg_2 );
                assert( !(tmp_right_name_3 == NULL) );
                tmp_assign_source_6 = BINARY_OPERATION_MUL_LIST_LONG( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_right_name_3 );
                assert( !(tmp_assign_source_6 == NULL) );
                assert( var_index == NULL );
                var_index = tmp_assign_source_6;
            }
            {
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_start_name_2;
                PyObject *tmp_stop_name_2;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_step_name_2;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_ass_subscript_2;
                tmp_start_name_2 = const_int_0;
                CHECK_OBJECT( var_s );
                tmp_subscribed_name_5 = var_s;
                CHECK_OBJECT( par_axis );
                tmp_subscript_name_5 = par_axis;
                tmp_stop_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                if ( tmp_stop_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_step_name_2 = Py_None;
                tmp_ass_subvalue_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                Py_DECREF( tmp_stop_name_2 );
                assert( !(tmp_ass_subvalue_2 == NULL) );
                CHECK_OBJECT( var_index );
                tmp_ass_subscribed_2 = var_index;
                CHECK_OBJECT( par_axis );
                tmp_ass_subscript_2 = par_axis;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                Py_DECREF( tmp_ass_subvalue_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_ass_subvalue_3;
                PyObject *tmp_ass_subscribed_3;
                PyObject *tmp_ass_subscript_3;
                CHECK_OBJECT( par_n );
                tmp_ass_subvalue_3 = par_n;
                CHECK_OBJECT( var_s );
                tmp_ass_subscribed_3 = var_s;
                CHECK_OBJECT( par_axis );
                tmp_ass_subscript_3 = par_axis;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_source_name_6;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_zeros );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 66;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_2;
                CHECK_OBJECT( var_s );
                tmp_args_element_name_3 = var_s;
                CHECK_OBJECT( par_a );
                tmp_source_name_6 = par_a;
                tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
                if ( tmp_source_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 66;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_char );
                Py_DECREF( tmp_source_name_5 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 66;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_178519203b6651b65aae3228b4399f58->m_frame.f_lineno = 66;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 66;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_z == NULL );
                var_z = tmp_assign_source_7;
            }
            {
                PyObject *tmp_ass_subvalue_4;
                PyObject *tmp_ass_subscribed_4;
                PyObject *tmp_ass_subscript_4;
                PyObject *tmp_tuple_arg_2;
                CHECK_OBJECT( par_a );
                tmp_ass_subvalue_4 = par_a;
                CHECK_OBJECT( var_z );
                tmp_ass_subscribed_4 = var_z;
                CHECK_OBJECT( var_index );
                tmp_tuple_arg_2 = var_index;
                tmp_ass_subscript_4 = PySequence_Tuple( tmp_tuple_arg_2 );
                if ( tmp_ass_subscript_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 67;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
                Py_DECREF( tmp_ass_subscript_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 67;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT( var_z );
                tmp_assign_source_8 = var_z;
                {
                    PyObject *old = par_a;
                    assert( old != NULL );
                    par_a = tmp_assign_source_8;
                    Py_INCREF( par_a );
                    Py_DECREF( old );
                }

            }
            branch_end_4:;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_left_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_5 = par_axis;
        if ( par_a == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 70;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = par_a;
        tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ndim );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_1;
        tmp_compexpr_right_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_pfi );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pfi );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pfi" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 71;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_3;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_execute );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            if ( par_a == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 71;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_5 = par_a;
            CHECK_OBJECT( par_is_real );
            tmp_args_element_name_6 = par_is_real;
            CHECK_OBJECT( par_is_forward );
            tmp_args_element_name_7 = par_is_forward;
            CHECK_OBJECT( par_fct );
            tmp_args_element_name_8 = par_fct;
            frame_178519203b6651b65aae3228b4399f58->m_frame.f_lineno = 71;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_r == NULL );
            var_r = tmp_assign_source_9;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_swapaxes );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_swapaxes );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "swapaxes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 73;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            if ( par_a == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 73;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_9 = par_a;
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_10 = par_axis;
            tmp_args_element_name_11 = const_int_neg_1;
            frame_178519203b6651b65aae3228b4399f58->m_frame.f_lineno = 73;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
            }

            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_a;
                par_a = tmp_assign_source_10;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_pfi );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pfi );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pfi" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 74;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_5;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_12 = par_a;
            CHECK_OBJECT( par_is_real );
            tmp_args_element_name_13 = par_is_real;
            CHECK_OBJECT( par_is_forward );
            tmp_args_element_name_14 = par_is_forward;
            CHECK_OBJECT( par_fct );
            tmp_args_element_name_15 = par_fct;
            frame_178519203b6651b65aae3228b4399f58->m_frame.f_lineno = 74;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
                tmp_assign_source_11 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_1, const_str_plain_execute, call_args );
            }

            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_r == NULL );
            var_r = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_swapaxes );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_swapaxes );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "swapaxes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 75;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_6;
            CHECK_OBJECT( var_r );
            tmp_args_element_name_16 = var_r;
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_17 = par_axis;
            tmp_args_element_name_18 = const_int_neg_1;
            frame_178519203b6651b65aae3228b4399f58->m_frame.f_lineno = 75;
            {
                PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
            }

            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_r;
                assert( old != NULL );
                var_r = tmp_assign_source_12;
                Py_DECREF( old );
            }

        }
        branch_end_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_178519203b6651b65aae3228b4399f58 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_178519203b6651b65aae3228b4399f58 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_178519203b6651b65aae3228b4399f58, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_178519203b6651b65aae3228b4399f58->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_178519203b6651b65aae3228b4399f58, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_178519203b6651b65aae3228b4399f58,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_is_real,
        par_is_forward,
        par_fct,
        var_s,
        var_index,
        var_z,
        var_r
    );


    // Release cached frame.
    if ( frame_178519203b6651b65aae3228b4399f58 == cache_frame_178519203b6651b65aae3228b4399f58 )
    {
        Py_DECREF( frame_178519203b6651b65aae3228b4399f58 );
    }
    cache_frame_178519203b6651b65aae3228b4399f58 = NULL;

    assertFrameObject( frame_178519203b6651b65aae3228b4399f58 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_r );
    tmp_return_value = var_r;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_1__raw_fft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_is_real );
    Py_DECREF( par_is_real );
    par_is_real = NULL;

    CHECK_OBJECT( (PyObject *)par_is_forward );
    Py_DECREF( par_is_forward );
    par_is_forward = NULL;

    CHECK_OBJECT( (PyObject *)par_fct );
    Py_DECREF( par_fct );
    par_fct = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_is_real );
    Py_DECREF( par_is_real );
    par_is_real = NULL;

    CHECK_OBJECT( (PyObject *)par_is_forward );
    Py_DECREF( par_is_forward );
    par_is_forward = NULL;

    CHECK_OBJECT( (PyObject *)par_fct );
    Py_DECREF( par_fct );
    par_fct = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_1__raw_fft );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_2__unitary( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_norm = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_23e0eb4422e39226bffe77700c262b45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_23e0eb4422e39226bffe77700c262b45 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_norm );
        tmp_compexpr_left_1 = par_norm;
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_1;
        branch_no_1:;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_23e0eb4422e39226bffe77700c262b45, codeobj_23e0eb4422e39226bffe77700c262b45, module_numpy$fft$pocketfft, sizeof(void *) );
    frame_23e0eb4422e39226bffe77700c262b45 = cache_frame_23e0eb4422e39226bffe77700c262b45;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_23e0eb4422e39226bffe77700c262b45 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_23e0eb4422e39226bffe77700c262b45 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_norm );
        tmp_compexpr_left_2 = par_norm;
        tmp_compexpr_right_2 = const_str_plain_ortho;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "o";
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
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_str_digest_4668369e132281bb3e0ee274b05ac5ba;
        CHECK_OBJECT( par_norm );
        tmp_right_name_1 = par_norm;
        tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_make_exception_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_23e0eb4422e39226bffe77700c262b45->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
        }

        Py_DECREF( tmp_make_exception_arg_1 );
        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 84;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23e0eb4422e39226bffe77700c262b45 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_23e0eb4422e39226bffe77700c262b45 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23e0eb4422e39226bffe77700c262b45 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_23e0eb4422e39226bffe77700c262b45, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_23e0eb4422e39226bffe77700c262b45->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_23e0eb4422e39226bffe77700c262b45, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_23e0eb4422e39226bffe77700c262b45,
        type_description_1,
        par_norm
    );


    // Release cached frame.
    if ( frame_23e0eb4422e39226bffe77700c262b45 == cache_frame_23e0eb4422e39226bffe77700c262b45 )
    {
        Py_DECREF( frame_23e0eb4422e39226bffe77700c262b45 );
    }
    cache_frame_23e0eb4422e39226bffe77700c262b45 = NULL;

    assertFrameObject( frame_23e0eb4422e39226bffe77700c262b45 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_2__unitary );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_2__unitary );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_3__fft_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
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
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_3__fft_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_3__fft_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$pocketfft$$$function_4_fft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_fct = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_b244d4f4742010f797e75237f6cab9c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b244d4f4742010f797e75237f6cab9c1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b244d4f4742010f797e75237f6cab9c1, codeobj_b244d4f4742010f797e75237f6cab9c1, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b244d4f4742010f797e75237f6cab9c1 = cache_frame_b244d4f4742010f797e75237f6cab9c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b244d4f4742010f797e75237f6cab9c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b244d4f4742010f797e75237f6cab9c1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

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

            exception_lineno = 176;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_b244d4f4742010f797e75237f6cab9c1->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "oooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_pos_1;
        assert( var_fct == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_fct = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_norm );
        tmp_compexpr_left_2 = par_norm;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unitary" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 180;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_2 = par_norm;
        frame_b244d4f4742010f797e75237f6cab9c1->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 180;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_left_name_1 = const_int_pos_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_sqrt );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sqrt" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 181;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_3 = par_n;
            frame_b244d4f4742010f797e75237f6cab9c1->m_frame.f_lineno = 181;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_fct;
                assert( old != NULL );
                var_fct = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_4 = par_a;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_5 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        tmp_args_element_name_7 = Py_False;
        tmp_args_element_name_8 = Py_True;
        CHECK_OBJECT( var_fct );
        tmp_args_element_name_9 = var_fct;
        frame_b244d4f4742010f797e75237f6cab9c1->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b244d4f4742010f797e75237f6cab9c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b244d4f4742010f797e75237f6cab9c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b244d4f4742010f797e75237f6cab9c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b244d4f4742010f797e75237f6cab9c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b244d4f4742010f797e75237f6cab9c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b244d4f4742010f797e75237f6cab9c1,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_fct,
        var_output
    );


    // Release cached frame.
    if ( frame_b244d4f4742010f797e75237f6cab9c1 == cache_frame_b244d4f4742010f797e75237f6cab9c1 )
    {
        Py_DECREF( frame_b244d4f4742010f797e75237f6cab9c1 );
    }
    cache_frame_b244d4f4742010f797e75237f6cab9c1 = NULL;

    assertFrameObject( frame_b244d4f4742010f797e75237f6cab9c1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_output );
    tmp_return_value = var_output;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_4_fft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_fct );
    Py_DECREF( var_fct );
    var_fct = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_fct );
    var_fct = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_4_fft );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_5_ifft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_fct = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_79333278124d62cae8a21bd2a8c95ca1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_79333278124d62cae8a21bd2a8c95ca1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_79333278124d62cae8a21bd2a8c95ca1, codeobj_79333278124d62cae8a21bd2a8c95ca1, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_79333278124d62cae8a21bd2a8c95ca1 = cache_frame_79333278124d62cae8a21bd2a8c95ca1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_79333278124d62cae8a21bd2a8c95ca1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_79333278124d62cae8a21bd2a8c95ca1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

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

            exception_lineno = 271;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_79333278124d62cae8a21bd2a8c95ca1->m_frame.f_lineno = 271;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;
            type_description_1 = "oooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 273;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 273;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_int_pos_1;
        CHECK_OBJECT( par_n );
        tmp_right_name_1 = par_n;
        tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_fct == NULL );
        var_fct = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_norm );
        tmp_compexpr_left_2 = par_norm;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unitary" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 275;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_2 = par_norm;
        frame_79333278124d62cae8a21bd2a8c95ca1->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 275;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_left_name_2 = const_int_pos_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_sqrt );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sqrt" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 276;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_3 = par_n;
            frame_79333278124d62cae8a21bd2a8c95ca1->m_frame.f_lineno = 276;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_fct;
                assert( old != NULL );
                var_fct = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_4 = par_a;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_5 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        tmp_args_element_name_7 = Py_False;
        tmp_args_element_name_8 = Py_False;
        CHECK_OBJECT( var_fct );
        tmp_args_element_name_9 = var_fct;
        frame_79333278124d62cae8a21bd2a8c95ca1->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79333278124d62cae8a21bd2a8c95ca1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79333278124d62cae8a21bd2a8c95ca1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_79333278124d62cae8a21bd2a8c95ca1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_79333278124d62cae8a21bd2a8c95ca1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_79333278124d62cae8a21bd2a8c95ca1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_79333278124d62cae8a21bd2a8c95ca1,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_fct,
        var_output
    );


    // Release cached frame.
    if ( frame_79333278124d62cae8a21bd2a8c95ca1 == cache_frame_79333278124d62cae8a21bd2a8c95ca1 )
    {
        Py_DECREF( frame_79333278124d62cae8a21bd2a8c95ca1 );
    }
    cache_frame_79333278124d62cae8a21bd2a8c95ca1 = NULL;

    assertFrameObject( frame_79333278124d62cae8a21bd2a8c95ca1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_output );
    tmp_return_value = var_output;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_5_ifft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_fct );
    Py_DECREF( var_fct );
    var_fct = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_fct );
    var_fct = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_5_ifft );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_6_rfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_fct = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_ad63535153fdf117bd09ab61b2bfc69d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ad63535153fdf117bd09ab61b2bfc69d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ad63535153fdf117bd09ab61b2bfc69d, codeobj_ad63535153fdf117bd09ab61b2bfc69d, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ad63535153fdf117bd09ab61b2bfc69d = cache_frame_ad63535153fdf117bd09ab61b2bfc69d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ad63535153fdf117bd09ab61b2bfc69d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ad63535153fdf117bd09ab61b2bfc69d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

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

            exception_lineno = 361;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_ad63535153fdf117bd09ab61b2bfc69d->m_frame.f_lineno = 361;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_pos_1;
        assert( var_fct == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_fct = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_norm );
        tmp_compexpr_left_1 = par_norm;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unitary" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 363;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_2 = par_norm;
        frame_ad63535153fdf117bd09ab61b2bfc69d->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 363;
            type_description_1 = "oooooo";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_n );
            tmp_compexpr_left_2 = par_n;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_source_name_1;
                PyObject *tmp_subscript_name_1;
                CHECK_OBJECT( par_a );
                tmp_source_name_1 = par_a;
                tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
                if ( tmp_subscribed_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 365;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_axis );
                tmp_subscript_name_1 = par_axis;
                tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscribed_name_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 365;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_n;
                    assert( old != NULL );
                    par_n = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_left_name_1 = const_int_pos_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_sqrt );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sqrt" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 366;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_3 = par_n;
            frame_ad63535153fdf117bd09ab61b2bfc69d->m_frame.f_lineno = 366;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 366;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 366;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_fct;
                assert( old != NULL );
                var_fct = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 367;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_4 = par_a;
        if ( par_n == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 367;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        tmp_args_element_name_7 = Py_True;
        tmp_args_element_name_8 = Py_True;
        CHECK_OBJECT( var_fct );
        tmp_args_element_name_9 = var_fct;
        frame_ad63535153fdf117bd09ab61b2bfc69d->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad63535153fdf117bd09ab61b2bfc69d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad63535153fdf117bd09ab61b2bfc69d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ad63535153fdf117bd09ab61b2bfc69d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ad63535153fdf117bd09ab61b2bfc69d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ad63535153fdf117bd09ab61b2bfc69d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ad63535153fdf117bd09ab61b2bfc69d,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_fct,
        var_output
    );


    // Release cached frame.
    if ( frame_ad63535153fdf117bd09ab61b2bfc69d == cache_frame_ad63535153fdf117bd09ab61b2bfc69d )
    {
        Py_DECREF( frame_ad63535153fdf117bd09ab61b2bfc69d );
    }
    cache_frame_ad63535153fdf117bd09ab61b2bfc69d = NULL;

    assertFrameObject( frame_ad63535153fdf117bd09ab61b2bfc69d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_output );
    tmp_return_value = var_output;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_6_rfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_fct );
    Py_DECREF( var_fct );
    var_fct = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_fct );
    var_fct = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_6_rfft );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_7_irfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_fct = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_3216c332bfafafdc57dacc033ff39e3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3216c332bfafafdc57dacc033ff39e3f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3216c332bfafafdc57dacc033ff39e3f, codeobj_3216c332bfafafdc57dacc033ff39e3f, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3216c332bfafafdc57dacc033ff39e3f = cache_frame_3216c332bfafafdc57dacc033ff39e3f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3216c332bfafafdc57dacc033ff39e3f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3216c332bfafafdc57dacc033ff39e3f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

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

            exception_lineno = 452;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_3216c332bfafafdc57dacc033ff39e3f->m_frame.f_lineno = 452;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "oooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 454;
                type_description_1 = "oooooo";
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


                exception_lineno = 454;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 454;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_2;
            tmp_assign_source_2 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 454;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_left_name_3 = const_int_pos_1;
        CHECK_OBJECT( par_n );
        tmp_right_name_3 = par_n;
        tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 455;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_fct == NULL );
        var_fct = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_norm );
        tmp_compexpr_left_2 = par_norm;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unitary" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 456;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_2 = par_norm;
        frame_3216c332bfafafdc57dacc033ff39e3f->m_frame.f_lineno = 456;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 456;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_left_name_4 = const_int_pos_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_sqrt );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sqrt" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 457;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_3 = par_n;
            frame_3216c332bfafafdc57dacc033ff39e3f->m_frame.f_lineno = 457;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 457;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 457;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_fct;
                assert( old != NULL );
                var_fct = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 458;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_4 = par_a;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_5 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        tmp_args_element_name_7 = Py_True;
        tmp_args_element_name_8 = Py_False;
        CHECK_OBJECT( var_fct );
        tmp_args_element_name_9 = var_fct;
        frame_3216c332bfafafdc57dacc033ff39e3f->m_frame.f_lineno = 458;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 458;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3216c332bfafafdc57dacc033ff39e3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3216c332bfafafdc57dacc033ff39e3f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3216c332bfafafdc57dacc033ff39e3f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3216c332bfafafdc57dacc033ff39e3f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3216c332bfafafdc57dacc033ff39e3f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3216c332bfafafdc57dacc033ff39e3f,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_fct,
        var_output
    );


    // Release cached frame.
    if ( frame_3216c332bfafafdc57dacc033ff39e3f == cache_frame_3216c332bfafafdc57dacc033ff39e3f )
    {
        Py_DECREF( frame_3216c332bfafafdc57dacc033ff39e3f );
    }
    cache_frame_3216c332bfafafdc57dacc033ff39e3f = NULL;

    assertFrameObject( frame_3216c332bfafafdc57dacc033ff39e3f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_output );
    tmp_return_value = var_output;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_7_irfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_fct );
    Py_DECREF( var_fct );
    var_fct = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_fct );
    var_fct = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_7_irfft );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_8_hfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_unitary = NULL;
    struct Nuitka_FrameObject *frame_b7d5de6a62c50fdf01ab5de59ac34aa1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b7d5de6a62c50fdf01ab5de59ac34aa1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b7d5de6a62c50fdf01ab5de59ac34aa1, codeobj_b7d5de6a62c50fdf01ab5de59ac34aa1, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b7d5de6a62c50fdf01ab5de59ac34aa1 = cache_frame_b7d5de6a62c50fdf01ab5de59ac34aa1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b7d5de6a62c50fdf01ab5de59ac34aa1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b7d5de6a62c50fdf01ab5de59ac34aa1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

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

            exception_lineno = 537;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_b7d5de6a62c50fdf01ab5de59ac34aa1->m_frame.f_lineno = 537;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 537;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 539;
                type_description_1 = "ooooo";
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


                exception_lineno = 539;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 539;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_2;
            tmp_assign_source_2 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 539;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unitary" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 540;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_2 = par_norm;
        frame_b7d5de6a62c50fdf01ab5de59ac34aa1->m_frame.f_lineno = 540;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 540;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_unitary == NULL );
        var_unitary = tmp_assign_source_3;
    }
    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_right_name_3;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_irfft );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_irfft );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "irfft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 541;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_conjugate );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_conjugate );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "conjugate" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 541;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_4 = par_a;
        frame_b7d5de6a62c50fdf01ab5de59ac34aa1->m_frame.f_lineno = 541;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 541;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_args_element_name_5 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        frame_b7d5de6a62c50fdf01ab5de59ac34aa1->m_frame.f_lineno = 541;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 541;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_unitary );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_unitary );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 541;
            type_description_1 = "ooooo";
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
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_sqrt );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sqrt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 541;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_7 = par_n;
        frame_b7d5de6a62c50fdf01ab5de59ac34aa1->m_frame.f_lineno = 541;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 541;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_n );
        tmp_right_name_3 = par_n;
        Py_INCREF( tmp_right_name_3 );
        condexpr_end_1:;
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 541;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7d5de6a62c50fdf01ab5de59ac34aa1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7d5de6a62c50fdf01ab5de59ac34aa1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7d5de6a62c50fdf01ab5de59ac34aa1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b7d5de6a62c50fdf01ab5de59ac34aa1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b7d5de6a62c50fdf01ab5de59ac34aa1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b7d5de6a62c50fdf01ab5de59ac34aa1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b7d5de6a62c50fdf01ab5de59ac34aa1,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_unitary
    );


    // Release cached frame.
    if ( frame_b7d5de6a62c50fdf01ab5de59ac34aa1 == cache_frame_b7d5de6a62c50fdf01ab5de59ac34aa1 )
    {
        Py_DECREF( frame_b7d5de6a62c50fdf01ab5de59ac34aa1 );
    }
    cache_frame_b7d5de6a62c50fdf01ab5de59ac34aa1 = NULL;

    assertFrameObject( frame_b7d5de6a62c50fdf01ab5de59ac34aa1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_8_hfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_unitary );
    Py_DECREF( var_unitary );
    var_unitary = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_unitary );
    var_unitary = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_8_hfft );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_9_ihfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_unitary = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_f4134d4a4f70c8bc9c363db37872b04a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f4134d4a4f70c8bc9c363db37872b04a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f4134d4a4f70c8bc9c363db37872b04a, codeobj_f4134d4a4f70c8bc9c363db37872b04a, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f4134d4a4f70c8bc9c363db37872b04a = cache_frame_f4134d4a4f70c8bc9c363db37872b04a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f4134d4a4f70c8bc9c363db37872b04a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f4134d4a4f70c8bc9c363db37872b04a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

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

            exception_lineno = 597;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_f4134d4a4f70c8bc9c363db37872b04a->m_frame.f_lineno = 597;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 597;
            type_description_1 = "oooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 599;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 599;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unitary" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 600;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_2 = par_norm;
        frame_f4134d4a4f70c8bc9c363db37872b04a->m_frame.f_lineno = 600;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 600;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_unitary == NULL );
        var_unitary = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_conjugate );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_conjugate );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "conjugate" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 601;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_rfft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rfft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rfft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 601;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_4 = par_a;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_5 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        frame_f4134d4a4f70c8bc9c363db37872b04a->m_frame.f_lineno = 601;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 601;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_f4134d4a4f70c8bc9c363db37872b04a->m_frame.f_lineno = 601;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 601;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_4;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_output );
        tmp_left_name_1 = var_output;
        tmp_left_name_2 = const_int_pos_1;
        CHECK_OBJECT( var_unitary );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_unitary );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 602;
            type_description_1 = "oooooo";
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
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_sqrt );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sqrt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 602;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_7 = par_n;
        frame_f4134d4a4f70c8bc9c363db37872b04a->m_frame.f_lineno = 602;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 602;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_n );
        tmp_right_name_2 = par_n;
        Py_INCREF( tmp_right_name_2 );
        condexpr_end_1:;
        tmp_right_name_1 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 602;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 602;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f4134d4a4f70c8bc9c363db37872b04a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f4134d4a4f70c8bc9c363db37872b04a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f4134d4a4f70c8bc9c363db37872b04a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f4134d4a4f70c8bc9c363db37872b04a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f4134d4a4f70c8bc9c363db37872b04a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f4134d4a4f70c8bc9c363db37872b04a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f4134d4a4f70c8bc9c363db37872b04a,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_unitary,
        var_output
    );


    // Release cached frame.
    if ( frame_f4134d4a4f70c8bc9c363db37872b04a == cache_frame_f4134d4a4f70c8bc9c363db37872b04a )
    {
        Py_DECREF( frame_f4134d4a4f70c8bc9c363db37872b04a );
    }
    cache_frame_f4134d4a4f70c8bc9c363db37872b04a = NULL;

    assertFrameObject( frame_f4134d4a4f70c8bc9c363db37872b04a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_9_ihfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_unitary );
    Py_DECREF( var_unitary );
    var_unitary = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_unitary );
    var_unitary = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_9_ihfft );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_10__cook_nd_args( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_invreal = python_pars[ 3 ];
    PyObject *var_shapeless = NULL;
    struct Nuitka_FrameObject *frame_eeff621e7037b68f0797cb019ac1da99;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_eeff621e7037b68f0797cb019ac1da99 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eeff621e7037b68f0797cb019ac1da99, codeobj_eeff621e7037b68f0797cb019ac1da99, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eeff621e7037b68f0797cb019ac1da99 = cache_frame_eeff621e7037b68f0797cb019ac1da99;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eeff621e7037b68f0797cb019ac1da99 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eeff621e7037b68f0797cb019ac1da99 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_s );
        tmp_compexpr_left_1 = par_s;
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
            tmp_assign_source_1 = const_int_pos_1;
            assert( var_shapeless == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_shapeless = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_axes );
            tmp_compexpr_left_2 = par_axes;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_list_arg_1;
                PyObject *tmp_source_name_1;
                CHECK_OBJECT( par_a );
                tmp_source_name_1 = par_a;
                tmp_list_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
                if ( tmp_list_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 609;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
                Py_DECREF( tmp_list_arg_1 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 609;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_s;
                    assert( old != NULL );
                    par_s = tmp_assign_source_2;
                    Py_DECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_args_element_name_2;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_take );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_take );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "take" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 611;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_1;
                CHECK_OBJECT( par_a );
                tmp_source_name_2 = par_a;
                tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 611;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_axes );
                tmp_args_element_name_2 = par_axes;
                frame_eeff621e7037b68f0797cb019ac1da99->m_frame.f_lineno = 611;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 611;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_s;
                    assert( old != NULL );
                    par_s = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_int_0;
            assert( var_shapeless == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_shapeless = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_list_arg_2;
        if ( par_s == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 614;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_2 = par_s;
        tmp_assign_source_5 = PySequence_List( tmp_list_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 614;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_s;
            par_s = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_axes );
        tmp_compexpr_left_3 = par_axes;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_list_arg_3;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_xrange_high_1;
            CHECK_OBJECT( par_s );
            tmp_len_arg_1 = par_s;
            tmp_operand_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
            assert( !(tmp_operand_name_1 == NULL) );
            tmp_xrange_low_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_xrange_low_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 616;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_xrange_high_1 = const_int_0;
            tmp_list_arg_3 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
            Py_DECREF( tmp_xrange_low_1 );
            if ( tmp_list_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 616;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = PySequence_List( tmp_list_arg_3 );
            Py_DECREF( tmp_list_arg_3 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 616;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_axes;
                assert( old != NULL );
                par_axes = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT( par_s );
        tmp_len_arg_2 = par_s;
        tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_2 );
        assert( !(tmp_compexpr_left_4 == NULL) );
        CHECK_OBJECT( par_axes );
        tmp_len_arg_3 = par_axes;
        tmp_compexpr_right_4 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 617;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_ad30867cb50db197c788d8d9559403d4;
            frame_eeff621e7037b68f0797cb019ac1da99->m_frame.f_lineno = 618;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 618;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_invreal );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_invreal );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 619;
            type_description_1 = "ooooo";
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
        CHECK_OBJECT( var_shapeless );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_shapeless );
        assert( !(tmp_truth_name_2 == -1) );
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            int tmp_ass_subscript_res_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_3 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 620;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axes );
            tmp_subscribed_name_2 = par_axes;
            tmp_subscript_name_2 = const_int_neg_1;
            tmp_subscript_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
            if ( tmp_subscript_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_1 );

                exception_lineno = 620;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 620;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 620;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_2;
            tmp_ass_subvalue_1 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 620;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_s );
            tmp_ass_subscribed_1 = par_s;
            tmp_ass_subscript_1 = const_int_neg_1;
            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_ass_subscript_res_1 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 620;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eeff621e7037b68f0797cb019ac1da99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eeff621e7037b68f0797cb019ac1da99 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eeff621e7037b68f0797cb019ac1da99, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eeff621e7037b68f0797cb019ac1da99->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eeff621e7037b68f0797cb019ac1da99, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eeff621e7037b68f0797cb019ac1da99,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_invreal,
        var_shapeless
    );


    // Release cached frame.
    if ( frame_eeff621e7037b68f0797cb019ac1da99 == cache_frame_eeff621e7037b68f0797cb019ac1da99 )
    {
        Py_DECREF( frame_eeff621e7037b68f0797cb019ac1da99 );
    }
    cache_frame_eeff621e7037b68f0797cb019ac1da99 = NULL;

    assertFrameObject( frame_eeff621e7037b68f0797cb019ac1da99 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_s );
        tmp_tuple_element_1 = par_s;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_axes );
        tmp_tuple_element_1 = par_axes;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_10__cook_nd_args );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_invreal );
    Py_DECREF( par_invreal );
    par_invreal = NULL;

    CHECK_OBJECT( (PyObject *)var_shapeless );
    Py_DECREF( var_shapeless );
    var_shapeless = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_invreal );
    Py_DECREF( par_invreal );
    par_invreal = NULL;

    Py_XDECREF( var_shapeless );
    var_shapeless = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_10__cook_nd_args );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_11__raw_fftnd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_function = python_pars[ 3 ];
    PyObject *par_norm = python_pars[ 4 ];
    PyObject *var_itl = NULL;
    PyObject *var_ii = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_71736c9a2548c4c2a78d35486bd33e48;
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
    static struct Nuitka_FrameObject *cache_frame_71736c9a2548c4c2a78d35486bd33e48 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_71736c9a2548c4c2a78d35486bd33e48, codeobj_71736c9a2548c4c2a78d35486bd33e48, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_71736c9a2548c4c2a78d35486bd33e48 = cache_frame_71736c9a2548c4c2a78d35486bd33e48;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_71736c9a2548c4c2a78d35486bd33e48 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_71736c9a2548c4c2a78d35486bd33e48 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

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

            exception_lineno = 625;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_71736c9a2548c4c2a78d35486bd33e48->m_frame.f_lineno = 625;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 625;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__cook_nd_args );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cook_nd_args );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_cook_nd_args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 626;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_3 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_4 = par_axes;
        frame_71736c9a2548c4c2a78d35486bd33e48->m_frame.f_lineno = 626;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 626;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 626;
            type_description_1 = "ooooooo";
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


            type_description_1 = "ooooooo";
            exception_lineno = 626;
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


            type_description_1 = "ooooooo";
            exception_lineno = 626;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 626;
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
            exception_lineno = 626;
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
        {
            PyObject *old = par_s;
            assert( old != NULL );
            par_s = tmp_assign_source_5;
            Py_INCREF( par_s );
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
            PyObject *old = par_axes;
            assert( old != NULL );
            par_axes = tmp_assign_source_6;
            Py_INCREF( par_axes );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_axes );
        tmp_len_arg_1 = par_axes;
        tmp_xrange_low_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_xrange_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 627;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 627;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 627;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_itl == NULL );
        var_itl = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_itl );
        tmp_called_instance_1 = var_itl;
        frame_71736c9a2548c4c2a78d35486bd33e48->m_frame.f_lineno = 628;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reverse );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 628;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( var_itl );
        tmp_iter_arg_2 = var_itl;
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 629;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                exception_lineno = 629;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ii;
            var_ii = tmp_assign_source_10;
            Py_INCREF( var_ii );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
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
        CHECK_OBJECT( par_function );
        tmp_called_name_3 = par_function;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_n;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_1 = par_s;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_1 = var_ii;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 630;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_axis;
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_2 = par_axes;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_2 = var_ii;
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 630;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_norm;
        CHECK_OBJECT( par_norm );
        tmp_dict_value_3 = par_norm;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_71736c9a2548c4c2a78d35486bd33e48->m_frame.f_lineno = 630;
        tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 630;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 629;
        type_description_1 = "ooooooo";
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
    RESTORE_FRAME_EXCEPTION( frame_71736c9a2548c4c2a78d35486bd33e48 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_71736c9a2548c4c2a78d35486bd33e48 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_71736c9a2548c4c2a78d35486bd33e48, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_71736c9a2548c4c2a78d35486bd33e48->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_71736c9a2548c4c2a78d35486bd33e48, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_71736c9a2548c4c2a78d35486bd33e48,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_function,
        par_norm,
        var_itl,
        var_ii
    );


    // Release cached frame.
    if ( frame_71736c9a2548c4c2a78d35486bd33e48 == cache_frame_71736c9a2548c4c2a78d35486bd33e48 )
    {
        Py_DECREF( frame_71736c9a2548c4c2a78d35486bd33e48 );
    }
    cache_frame_71736c9a2548c4c2a78d35486bd33e48 = NULL;

    assertFrameObject( frame_71736c9a2548c4c2a78d35486bd33e48 );

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

    CHECK_OBJECT( par_a );
    tmp_return_value = par_a;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_11__raw_fftnd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_function );
    Py_DECREF( par_function );
    par_function = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_itl );
    Py_DECREF( var_itl );
    var_itl = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_function );
    Py_DECREF( par_function );
    par_function = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_itl );
    var_itl = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_11__raw_fftnd );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_12__fftn_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
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
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_12__fftn_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_12__fftn_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$pocketfft$$$function_13_fftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_85a729a385fb64f717e9d484029bedee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_85a729a385fb64f717e9d484029bedee = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_85a729a385fb64f717e9d484029bedee, codeobj_85a729a385fb64f717e9d484029bedee, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_85a729a385fb64f717e9d484029bedee = cache_frame_85a729a385fb64f717e9d484029bedee;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_85a729a385fb64f717e9d484029bedee );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_85a729a385fb64f717e9d484029bedee ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fftnd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 733;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_fft );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 733;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_5 = par_norm;
        frame_85a729a385fb64f717e9d484029bedee->m_frame.f_lineno = 733;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 733;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_85a729a385fb64f717e9d484029bedee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_85a729a385fb64f717e9d484029bedee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_85a729a385fb64f717e9d484029bedee );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_85a729a385fb64f717e9d484029bedee, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_85a729a385fb64f717e9d484029bedee->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_85a729a385fb64f717e9d484029bedee, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_85a729a385fb64f717e9d484029bedee,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_85a729a385fb64f717e9d484029bedee == cache_frame_85a729a385fb64f717e9d484029bedee )
    {
        Py_DECREF( frame_85a729a385fb64f717e9d484029bedee );
    }
    cache_frame_85a729a385fb64f717e9d484029bedee = NULL;

    assertFrameObject( frame_85a729a385fb64f717e9d484029bedee );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_13_fftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_13_fftn );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_14_ifftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_5f2439d3df1b25d489195e26b0706f64;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5f2439d3df1b25d489195e26b0706f64 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5f2439d3df1b25d489195e26b0706f64, codeobj_5f2439d3df1b25d489195e26b0706f64, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5f2439d3df1b25d489195e26b0706f64 = cache_frame_5f2439d3df1b25d489195e26b0706f64;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5f2439d3df1b25d489195e26b0706f64 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5f2439d3df1b25d489195e26b0706f64 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fftnd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 831;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_ifft );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ifft );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ifft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 831;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_5 = par_norm;
        frame_5f2439d3df1b25d489195e26b0706f64->m_frame.f_lineno = 831;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 831;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f2439d3df1b25d489195e26b0706f64 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f2439d3df1b25d489195e26b0706f64 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f2439d3df1b25d489195e26b0706f64 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5f2439d3df1b25d489195e26b0706f64, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5f2439d3df1b25d489195e26b0706f64->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5f2439d3df1b25d489195e26b0706f64, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5f2439d3df1b25d489195e26b0706f64,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_5f2439d3df1b25d489195e26b0706f64 == cache_frame_5f2439d3df1b25d489195e26b0706f64 )
    {
        Py_DECREF( frame_5f2439d3df1b25d489195e26b0706f64 );
    }
    cache_frame_5f2439d3df1b25d489195e26b0706f64 = NULL;

    assertFrameObject( frame_5f2439d3df1b25d489195e26b0706f64 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_14_ifftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_14_ifftn );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_15_fft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_606f73ccc987558fe23057727dbc846d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_606f73ccc987558fe23057727dbc846d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_606f73ccc987558fe23057727dbc846d, codeobj_606f73ccc987558fe23057727dbc846d, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_606f73ccc987558fe23057727dbc846d = cache_frame_606f73ccc987558fe23057727dbc846d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_606f73ccc987558fe23057727dbc846d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_606f73ccc987558fe23057727dbc846d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fftnd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 922;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_fft );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 922;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_5 = par_norm;
        frame_606f73ccc987558fe23057727dbc846d->m_frame.f_lineno = 922;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 922;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_606f73ccc987558fe23057727dbc846d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_606f73ccc987558fe23057727dbc846d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_606f73ccc987558fe23057727dbc846d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_606f73ccc987558fe23057727dbc846d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_606f73ccc987558fe23057727dbc846d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_606f73ccc987558fe23057727dbc846d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_606f73ccc987558fe23057727dbc846d,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_606f73ccc987558fe23057727dbc846d == cache_frame_606f73ccc987558fe23057727dbc846d )
    {
        Py_DECREF( frame_606f73ccc987558fe23057727dbc846d );
    }
    cache_frame_606f73ccc987558fe23057727dbc846d = NULL;

    assertFrameObject( frame_606f73ccc987558fe23057727dbc846d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_15_fft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_15_fft2 );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_16_ifft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_a040c447ff50cdfb1e82383c38cb7b94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a040c447ff50cdfb1e82383c38cb7b94 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a040c447ff50cdfb1e82383c38cb7b94, codeobj_a040c447ff50cdfb1e82383c38cb7b94, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a040c447ff50cdfb1e82383c38cb7b94 = cache_frame_a040c447ff50cdfb1e82383c38cb7b94;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a040c447ff50cdfb1e82383c38cb7b94 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a040c447ff50cdfb1e82383c38cb7b94 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fftnd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1010;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_ifft );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ifft );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ifft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1010;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_5 = par_norm;
        frame_a040c447ff50cdfb1e82383c38cb7b94->m_frame.f_lineno = 1010;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1010;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a040c447ff50cdfb1e82383c38cb7b94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a040c447ff50cdfb1e82383c38cb7b94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a040c447ff50cdfb1e82383c38cb7b94 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a040c447ff50cdfb1e82383c38cb7b94, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a040c447ff50cdfb1e82383c38cb7b94->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a040c447ff50cdfb1e82383c38cb7b94, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a040c447ff50cdfb1e82383c38cb7b94,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_a040c447ff50cdfb1e82383c38cb7b94 == cache_frame_a040c447ff50cdfb1e82383c38cb7b94 )
    {
        Py_DECREF( frame_a040c447ff50cdfb1e82383c38cb7b94 );
    }
    cache_frame_a040c447ff50cdfb1e82383c38cb7b94 = NULL;

    assertFrameObject( frame_a040c447ff50cdfb1e82383c38cb7b94 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_16_ifft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_16_ifft2 );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_17_rfftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_ii = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3cca386d1afb77734dda7c432eb2c646;
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
    static struct Nuitka_FrameObject *cache_frame_3cca386d1afb77734dda7c432eb2c646 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3cca386d1afb77734dda7c432eb2c646, codeobj_3cca386d1afb77734dda7c432eb2c646, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3cca386d1afb77734dda7c432eb2c646 = cache_frame_3cca386d1afb77734dda7c432eb2c646;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3cca386d1afb77734dda7c432eb2c646 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3cca386d1afb77734dda7c432eb2c646 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

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

            exception_lineno = 1097;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_3cca386d1afb77734dda7c432eb2c646->m_frame.f_lineno = 1097;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1097;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__cook_nd_args );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cook_nd_args );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_cook_nd_args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1098;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_3 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_4 = par_axes;
        frame_3cca386d1afb77734dda7c432eb2c646->m_frame.f_lineno = 1098;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1098;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1098;
            type_description_1 = "ooooo";
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


            type_description_1 = "ooooo";
            exception_lineno = 1098;
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


            type_description_1 = "ooooo";
            exception_lineno = 1098;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 1098;
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

            type_description_1 = "ooooo";
            exception_lineno = 1098;
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
        {
            PyObject *old = par_s;
            assert( old != NULL );
            par_s = tmp_assign_source_5;
            Py_INCREF( par_s );
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
            PyObject *old = par_axes;
            assert( old != NULL );
            par_axes = tmp_assign_source_6;
            Py_INCREF( par_axes );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_rfft );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rfft );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rfft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1099;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_5 = par_a;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_1 = par_s;
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_args_element_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1099;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_2 = par_axes;
        tmp_subscript_name_2 = const_int_neg_1;
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 1099;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_8 = par_norm;
        frame_3cca386d1afb77734dda7c432eb2c646->m_frame.f_lineno = 1099;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1099;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_axes );
        tmp_len_arg_1 = par_axes;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1100;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_xrange_low_1 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        assert( !(tmp_xrange_low_1 == NULL) );
        tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1100;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1100;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                exception_lineno = 1100;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ii;
            var_ii = tmp_assign_source_10;
            Py_INCREF( var_ii );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_fft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1101;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_9 = par_a;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_3 = par_s;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_3 = var_ii;
        tmp_args_element_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1101;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_4 = par_axes;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_4 = var_ii;
        tmp_args_element_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 1101;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_12 = par_norm;
        frame_3cca386d1afb77734dda7c432eb2c646->m_frame.f_lineno = 1101;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1101;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1100;
        type_description_1 = "ooooo";
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
    RESTORE_FRAME_EXCEPTION( frame_3cca386d1afb77734dda7c432eb2c646 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3cca386d1afb77734dda7c432eb2c646 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3cca386d1afb77734dda7c432eb2c646, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3cca386d1afb77734dda7c432eb2c646->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3cca386d1afb77734dda7c432eb2c646, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3cca386d1afb77734dda7c432eb2c646,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm,
        var_ii
    );


    // Release cached frame.
    if ( frame_3cca386d1afb77734dda7c432eb2c646 == cache_frame_3cca386d1afb77734dda7c432eb2c646 )
    {
        Py_DECREF( frame_3cca386d1afb77734dda7c432eb2c646 );
    }
    cache_frame_3cca386d1afb77734dda7c432eb2c646 = NULL;

    assertFrameObject( frame_3cca386d1afb77734dda7c432eb2c646 );

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

    CHECK_OBJECT( par_a );
    tmp_return_value = par_a;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_17_rfftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_17_rfftn );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_18_rfft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_62a7f94ab4006160da02555616525b30;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_62a7f94ab4006160da02555616525b30 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_62a7f94ab4006160da02555616525b30, codeobj_62a7f94ab4006160da02555616525b30, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_62a7f94ab4006160da02555616525b30 = cache_frame_62a7f94ab4006160da02555616525b30;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_62a7f94ab4006160da02555616525b30 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_62a7f94ab4006160da02555616525b30 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_rfftn );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rfftn );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rfftn" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1140;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_4 = par_norm;
        frame_62a7f94ab4006160da02555616525b30->m_frame.f_lineno = 1140;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1140;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62a7f94ab4006160da02555616525b30 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_62a7f94ab4006160da02555616525b30 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62a7f94ab4006160da02555616525b30 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62a7f94ab4006160da02555616525b30, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62a7f94ab4006160da02555616525b30->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62a7f94ab4006160da02555616525b30, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_62a7f94ab4006160da02555616525b30,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_62a7f94ab4006160da02555616525b30 == cache_frame_62a7f94ab4006160da02555616525b30 )
    {
        Py_DECREF( frame_62a7f94ab4006160da02555616525b30 );
    }
    cache_frame_62a7f94ab4006160da02555616525b30 = NULL;

    assertFrameObject( frame_62a7f94ab4006160da02555616525b30 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_18_rfft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_18_rfft2 );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_19_irfftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_ii = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_61379bd17c5a0daffd41e565ba6a3e3f;
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
    static struct Nuitka_FrameObject *cache_frame_61379bd17c5a0daffd41e565ba6a3e3f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_61379bd17c5a0daffd41e565ba6a3e3f, codeobj_61379bd17c5a0daffd41e565ba6a3e3f, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_61379bd17c5a0daffd41e565ba6a3e3f = cache_frame_61379bd17c5a0daffd41e565ba6a3e3f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_61379bd17c5a0daffd41e565ba6a3e3f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_61379bd17c5a0daffd41e565ba6a3e3f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

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

            exception_lineno = 1229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_61379bd17c5a0daffd41e565ba6a3e3f->m_frame.f_lineno = 1229;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__cook_nd_args );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cook_nd_args );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_cook_nd_args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1230;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_s );
        tmp_tuple_element_1 = par_s;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_axes );
        tmp_tuple_element_1 = par_axes;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_dd45c77b755c75255009fd804f504c08 );
        frame_61379bd17c5a0daffd41e565ba6a3e3f->m_frame.f_lineno = 1230;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1230;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1230;
            type_description_1 = "ooooo";
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


            type_description_1 = "ooooo";
            exception_lineno = 1230;
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


            type_description_1 = "ooooo";
            exception_lineno = 1230;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 1230;
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

            type_description_1 = "ooooo";
            exception_lineno = 1230;
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
        {
            PyObject *old = par_s;
            assert( old != NULL );
            par_s = tmp_assign_source_5;
            Py_INCREF( par_s );
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
            PyObject *old = par_axes;
            assert( old != NULL );
            par_axes = tmp_assign_source_6;
            Py_INCREF( par_axes );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_axes );
        tmp_len_arg_1 = par_axes;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_xrange_low_1 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        assert( !(tmp_xrange_low_1 == NULL) );
        tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
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
                type_description_1 = "ooooo";
                exception_lineno = 1231;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ii;
            var_ii = tmp_assign_source_9;
            Py_INCREF( var_ii );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_ifft );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ifft );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ifft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1232;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_1 = par_s;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_1 = var_ii;
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1232;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_2 = par_axes;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_2 = var_ii;
        tmp_args_element_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 1232;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_5 = par_norm;
        frame_61379bd17c5a0daffd41e565ba6a3e3f->m_frame.f_lineno = 1232;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1232;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1231;
        type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_irfft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_irfft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "irfft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1233;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_6 = par_a;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_3 = par_s;
        tmp_subscript_name_3 = const_int_neg_1;
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, -1 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1233;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_4 = par_axes;
        tmp_subscript_name_4 = const_int_neg_1;
        tmp_args_element_name_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, -1 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 1233;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_9 = par_norm;
        frame_61379bd17c5a0daffd41e565ba6a3e3f->m_frame.f_lineno = 1233;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1233;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61379bd17c5a0daffd41e565ba6a3e3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61379bd17c5a0daffd41e565ba6a3e3f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_61379bd17c5a0daffd41e565ba6a3e3f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_61379bd17c5a0daffd41e565ba6a3e3f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_61379bd17c5a0daffd41e565ba6a3e3f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_61379bd17c5a0daffd41e565ba6a3e3f,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm,
        var_ii
    );


    // Release cached frame.
    if ( frame_61379bd17c5a0daffd41e565ba6a3e3f == cache_frame_61379bd17c5a0daffd41e565ba6a3e3f )
    {
        Py_DECREF( frame_61379bd17c5a0daffd41e565ba6a3e3f );
    }
    cache_frame_61379bd17c5a0daffd41e565ba6a3e3f = NULL;

    assertFrameObject( frame_61379bd17c5a0daffd41e565ba6a3e3f );

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
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_19_irfftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_19_irfftn );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_20_irfft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_f899fe8ed8aad756e9b0df2014d98ee4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f899fe8ed8aad756e9b0df2014d98ee4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f899fe8ed8aad756e9b0df2014d98ee4, codeobj_f899fe8ed8aad756e9b0df2014d98ee4, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f899fe8ed8aad756e9b0df2014d98ee4 = cache_frame_f899fe8ed8aad756e9b0df2014d98ee4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f899fe8ed8aad756e9b0df2014d98ee4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f899fe8ed8aad756e9b0df2014d98ee4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_irfftn );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_irfftn );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "irfftn" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_4 = par_norm;
        frame_f899fe8ed8aad756e9b0df2014d98ee4->m_frame.f_lineno = 1272;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f899fe8ed8aad756e9b0df2014d98ee4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f899fe8ed8aad756e9b0df2014d98ee4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f899fe8ed8aad756e9b0df2014d98ee4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f899fe8ed8aad756e9b0df2014d98ee4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f899fe8ed8aad756e9b0df2014d98ee4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f899fe8ed8aad756e9b0df2014d98ee4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f899fe8ed8aad756e9b0df2014d98ee4,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_f899fe8ed8aad756e9b0df2014d98ee4 == cache_frame_f899fe8ed8aad756e9b0df2014d98ee4 )
    {
        Py_DECREF( frame_f899fe8ed8aad756e9b0df2014d98ee4 );
    }
    cache_frame_f899fe8ed8aad756e9b0df2014d98ee4 = NULL;

    assertFrameObject( frame_f899fe8ed8aad756e9b0df2014d98ee4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_20_irfft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_20_irfft2 );
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



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_10__cook_nd_args( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_10__cook_nd_args,
        const_str_plain__cook_nd_args,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eeff621e7037b68f0797cb019ac1da99,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_11__raw_fftnd( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_11__raw_fftnd,
        const_str_plain__raw_fftnd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_71736c9a2548c4c2a78d35486bd33e48,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_12__fftn_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_12__fftn_dispatcher,
        const_str_plain__fftn_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_07a90c6d7f41347112e12399254a6c69,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_13_fftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_13_fftn,
        const_str_plain_fftn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_85a729a385fb64f717e9d484029bedee,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_13bc5b5254b7204a2573e3d7bbd1a0c7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_14_ifftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_14_ifftn,
        const_str_plain_ifftn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5f2439d3df1b25d489195e26b0706f64,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_2ebd01a7795c29958aaada191f1fd76a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_15_fft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_15_fft2,
        const_str_plain_fft2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_606f73ccc987558fe23057727dbc846d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_0690581905707e5372848107d89737db,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_16_ifft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_16_ifft2,
        const_str_plain_ifft2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a040c447ff50cdfb1e82383c38cb7b94,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_b3ffc6c71fed7a60fb1aa8d44a22494a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_17_rfftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_17_rfftn,
        const_str_plain_rfftn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3cca386d1afb77734dda7c432eb2c646,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_4fde285245e0480bfbee40bbbdd9595f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_18_rfft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_18_rfft2,
        const_str_plain_rfft2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_62a7f94ab4006160da02555616525b30,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_67a439b64216fd79a420034aec6214a2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_19_irfftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_19_irfftn,
        const_str_plain_irfftn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_61379bd17c5a0daffd41e565ba6a3e3f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_8a2fb00203e71847ae308cf711795a30,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_1__raw_fft(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_1__raw_fft,
        const_str_plain__raw_fft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_178519203b6651b65aae3228b4399f58,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_20_irfft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_20_irfft2,
        const_str_plain_irfft2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f899fe8ed8aad756e9b0df2014d98ee4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_72f01e533c77be794cb83caa076fd016,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_2__unitary(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_2__unitary,
        const_str_plain__unitary,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_23e0eb4422e39226bffe77700c262b45,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_3__fft_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_3__fft_dispatcher,
        const_str_plain__fft_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4f63044a9e130ded3a937fb8d43853c9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_4_fft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_4_fft,
        const_str_plain_fft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b244d4f4742010f797e75237f6cab9c1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_228dbbac8ee90f62048cd171a21defd6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_5_ifft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_5_ifft,
        const_str_plain_ifft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_79333278124d62cae8a21bd2a8c95ca1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_dc52a9a74aa4ff1377be91ff132e602d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_6_rfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_6_rfft,
        const_str_plain_rfft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ad63535153fdf117bd09ab61b2bfc69d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_07f33a01b29f69eaa8c79d0d21cec2b0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_7_irfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_7_irfft,
        const_str_plain_irfft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3216c332bfafafdc57dacc033ff39e3f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_04474ea1ff5a6d3a0fdfd69e9fed721e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_8_hfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_8_hfft,
        const_str_plain_hfft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b7d5de6a62c50fdf01ab5de59ac34aa1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_f620fa34bb2674a9f2fa14dc6be43d65,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_9_ihfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_9_ihfft,
        const_str_plain_ihfft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f4134d4a4f70c8bc9c363db37872b04a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_9494539ffb8411756149e487b446694f,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$fft$pocketfft =
{
    PyModuleDef_HEAD_INIT,
    "numpy.fft.pocketfft",
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

MOD_INIT_DECL( numpy$fft$pocketfft )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$fft$pocketfft );
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
    puts("numpy.fft.pocketfft: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.fft.pocketfft: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.fft.pocketfft: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$fft$pocketfft" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$fft$pocketfft = Py_InitModule4(
        "numpy.fft.pocketfft",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$fft$pocketfft = PyModule_Create( &mdef_numpy$fft$pocketfft );
#endif

    moduledict_numpy$fft$pocketfft = MODULE_DICT( module_numpy$fft$pocketfft );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$fft$pocketfft,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$fft$pocketfft,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$fft$pocketfft,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$fft$pocketfft,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$fft$pocketfft );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_4b356e2504275e6efb56ef14c5d648a6, module_numpy$fft$pocketfft );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_030557b0d4db53e9d86265a663f16636;
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
        tmp_assign_source_1 = const_str_digest_ab460e111c7690eebacb4cfd09eff01e;
        UPDATE_STRING_DICT0( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_030557b0d4db53e9d86265a663f16636 = MAKE_MODULE_FRAME( codeobj_030557b0d4db53e9d86265a663f16636, module_numpy$fft$pocketfft );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_030557b0d4db53e9d86265a663f16636 );
    assert( Py_REFCNT( frame_030557b0d4db53e9d86265a663f16636 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 30;
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


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        tmp_assign_source_8 = LIST_COPY( const_list_60f473887d8c78e2f768e087222cf620_list );
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_functools;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$fft$pocketfft;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 35;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$fft$pocketfft;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_fc36638fe159a5b2fed835b739242617_tuple;
        tmp_level_name_2 = const_int_0;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 37;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_asarray );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_zeros );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_swapaxes );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_swapaxes, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_conjugate );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_conjugate, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_take );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_take, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_sqrt );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_sqrt, tmp_assign_source_16 );
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
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_empty;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$fft$pocketfft;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_pocketfft_internal_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 38;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_numpy$fft$pocketfft,
                const_str_plain_pocketfft_internal,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_pocketfft_internal );
        }

        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_pfi, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$fft$pocketfft;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_normalize_axis_index_tuple;
        tmp_level_name_4 = const_int_0;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 39;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_normalize_axis_index );
        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_normalize_axis_index, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$fft$pocketfft;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_overrides_tuple;
        tmp_level_name_5 = const_int_0;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 40;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_overrides );
        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_overrides, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_functools );

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

            exception_lineno = 43;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_partial );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_overrides );

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

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array_function_dispatch );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c0d9920cdb2d132dd609908b9aa6b9e2 );
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 43;
        tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_1__raw_fft(  );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fft, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_2__unitary(  );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__unitary, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_23 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_3__fft_dispatcher( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fft_dispatcher, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_called_name_3 = tmp_mvar_value_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_args_element_name_1 = tmp_mvar_value_6;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_4_fft( tmp_defaults_2 );



        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_fft, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_defaults_3;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_8;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_called_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_args_element_name_4 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_5_ifft( tmp_defaults_3 );



        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_ifft, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_defaults_4;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 282;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_9;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 282;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = tmp_mvar_value_10;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_args_element_name_6 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_6_rfft( tmp_defaults_4 );



        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_rfft, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_defaults_5;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 371;

            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_11;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 371;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = tmp_mvar_value_12;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 371;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_defaults_5 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_args_element_name_8 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_7_irfft( tmp_defaults_5 );



        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 371;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_irfft, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_defaults_6;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 462;

            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_13;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 462;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = tmp_mvar_value_14;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 462;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_called_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;

            goto frame_exception_exit_1;
        }
        tmp_defaults_6 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_args_element_name_10 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_8_hfft( tmp_defaults_6 );



        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 462;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_hfft, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_12;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_defaults_7;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 544;

            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_15;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 544;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = tmp_mvar_value_16;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 544;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_called_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_defaults_7 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_7 );
        tmp_args_element_name_12 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_9_ihfft( tmp_defaults_7 );



        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 544;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_ihfft, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_8;
        tmp_defaults_8 = const_tuple_none_none_int_0_tuple;
        Py_INCREF( tmp_defaults_8 );
        tmp_assign_source_30 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_10__cook_nd_args( tmp_defaults_8 );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__cook_nd_args, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_9;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_17;
        tmp_tuple_element_2 = Py_None;
        tmp_defaults_9 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_9, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_None;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_9, 1, tmp_tuple_element_2 );
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_fft );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_defaults_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 624;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_17;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_9, 2, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_None;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_9, 3, tmp_tuple_element_2 );
        tmp_assign_source_31 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_11__raw_fftnd( tmp_defaults_9 );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fftnd, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_10;
        tmp_defaults_10 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_10 );
        tmp_assign_source_32 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_12__fftn_dispatcher( tmp_defaults_10 );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_defaults_11;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 638;

            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_18;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_19 );
        tmp_args_element_name_13 = tmp_mvar_value_19;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 638;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_called_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 638;

            goto frame_exception_exit_1;
        }
        tmp_defaults_11 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_11 );
        tmp_args_element_name_14 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_13_fftn( tmp_defaults_11 );



        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 638;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 638;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_fftn, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_name_16;
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_defaults_12;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 736;

            goto frame_exception_exit_1;
        }

        tmp_called_name_17 = tmp_mvar_value_20;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 736;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_15 = tmp_mvar_value_21;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 736;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_called_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        if ( tmp_called_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 736;

            goto frame_exception_exit_1;
        }
        tmp_defaults_12 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_12 );
        tmp_args_element_name_16 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_14_ifftn( tmp_defaults_12 );



        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 736;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 736;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_ifftn, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_18;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_defaults_13;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 834;

            goto frame_exception_exit_1;
        }

        tmp_called_name_19 = tmp_mvar_value_22;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 834;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_17 = tmp_mvar_value_23;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 834;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_called_name_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        if ( tmp_called_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 834;

            goto frame_exception_exit_1;
        }
        tmp_defaults_13 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
        Py_INCREF( tmp_defaults_13 );
        tmp_args_element_name_18 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_15_fft2( tmp_defaults_13 );



        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 834;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 834;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_fft2, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_name_20;
        PyObject *tmp_called_name_21;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_defaults_14;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 925;

            goto frame_exception_exit_1;
        }

        tmp_called_name_21 = tmp_mvar_value_24;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 925;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_19 = tmp_mvar_value_25;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 925;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_called_name_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        if ( tmp_called_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 925;

            goto frame_exception_exit_1;
        }
        tmp_defaults_14 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
        Py_INCREF( tmp_defaults_14 );
        tmp_args_element_name_20 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_16_ifft2( tmp_defaults_14 );



        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 925;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
        }

        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 925;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_ifft2, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_22;
        PyObject *tmp_called_name_23;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_defaults_15;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1013;

            goto frame_exception_exit_1;
        }

        tmp_called_name_23 = tmp_mvar_value_26;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1013;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_21 = tmp_mvar_value_27;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 1013;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_called_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
        }

        if ( tmp_called_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1013;

            goto frame_exception_exit_1;
        }
        tmp_defaults_15 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_15 );
        tmp_args_element_name_22 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_17_rfftn( tmp_defaults_15 );



        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 1013;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
        }

        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_args_element_name_22 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1013;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_rfftn, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_24;
        PyObject *tmp_called_name_25;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_defaults_16;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1105;

            goto frame_exception_exit_1;
        }

        tmp_called_name_25 = tmp_mvar_value_28;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1105;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_23 = tmp_mvar_value_29;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 1105;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_called_name_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
        }

        if ( tmp_called_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1105;

            goto frame_exception_exit_1;
        }
        tmp_defaults_16 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
        Py_INCREF( tmp_defaults_16 );
        tmp_args_element_name_24 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_18_rfft2( tmp_defaults_16 );



        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 1105;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
        }

        Py_DECREF( tmp_called_name_24 );
        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1105;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_rfft2, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_26;
        PyObject *tmp_called_name_27;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_defaults_17;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1143;

            goto frame_exception_exit_1;
        }

        tmp_called_name_27 = tmp_mvar_value_30;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1143;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_25 = tmp_mvar_value_31;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 1143;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_called_name_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
        }

        if ( tmp_called_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1143;

            goto frame_exception_exit_1;
        }
        tmp_defaults_17 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_17 );
        tmp_args_element_name_26 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_19_irfftn( tmp_defaults_17 );



        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 1143;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
        }

        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_args_element_name_26 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_irfftn, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_28;
        PyObject *tmp_called_name_29;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_defaults_18;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1237;

            goto frame_exception_exit_1;
        }

        tmp_called_name_29 = tmp_mvar_value_32;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_33 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1237;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_27 = tmp_mvar_value_33;
        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 1237;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_called_name_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
        }

        if ( tmp_called_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1237;

            goto frame_exception_exit_1;
        }
        tmp_defaults_18 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
        Py_INCREF( tmp_defaults_18 );
        tmp_args_element_name_28 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_20_irfft2( tmp_defaults_18 );



        frame_030557b0d4db53e9d86265a663f16636->m_frame.f_lineno = 1237;
        {
            PyObject *call_args[] = { tmp_args_element_name_28 };
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
        }

        Py_DECREF( tmp_called_name_28 );
        Py_DECREF( tmp_args_element_name_28 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1237;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_irfft2, tmp_assign_source_40 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_030557b0d4db53e9d86265a663f16636 );
#endif
    popFrameStack();

    assertFrameObject( frame_030557b0d4db53e9d86265a663f16636 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_030557b0d4db53e9d86265a663f16636 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_030557b0d4db53e9d86265a663f16636, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_030557b0d4db53e9d86265a663f16636->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_030557b0d4db53e9d86265a663f16636, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$fft$pocketfft );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
