/* Generated code for Python module 'scipy.optimize._shgo_lib.sobol_seq'
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

/* The "_module_scipy$optimize$_shgo_lib$sobol_seq" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_shgo_lib$sobol_seq;
PyDictObject *moduledict_scipy$optimize$_shgo_lib$sobol_seq;

/* The declarations of module constants used, if any. */
static PyObject *const_list_b1c4a9010050c95a6f8ff64fc43755d8_list;
extern PyObject *const_str_plain_bitwise_xor;
static PyObject *const_str_digest_86d9864c299ff16b8ec2193f70be6e0e;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_list_c97220cb4d19be3c451121b1d777487e_list;
static PyObject *const_str_digest_bc84428aef7407bd28174fd939ae99b9;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple;
static PyObject *const_str_plain_quasi;
static PyObject *const_tuple_slice_int_pos_19_int_pos_40_none_int_pos_6_tuple;
static PyObject *const_int_pos_39;
extern PyObject *const_int_neg_1;
static PyObject *const_tuple_slice_int_pos_7_int_pos_40_none_int_pos_4_tuple;
extern PyObject *const_int_pos_19;
extern PyObject *const_str_plain_m;
extern PyObject *const_int_pos_23;
static PyObject *const_slice_int_pos_37_int_pos_40_none;
extern PyObject *const_str_plain_maxcol;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_e84b935958b78988ae359346dcc9a4b2;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_bit;
static PyObject *const_str_plain_includ;
static PyObject *const_list_int_pos_7_int_pos_23_int_pos_39_list;
extern PyObject *const_int_pos_5;
static PyObject *const_tuple_slice_int_pos_2_int_pos_40_none_int_pos_1_tuple;
extern PyObject *const_str_plain_full;
extern PyObject *const_tuple_int_pos_1_tuple;
static PyObject *const_slice_int_pos_2_int_pos_40_none;
extern PyObject *const_int_pos_30;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
static PyObject *const_slice_int_pos_5_int_pos_40_none;
extern PyObject *const_str_plain_transpose;
static PyObject *const_slice_int_pos_13_int_pos_40_none;
extern PyObject *const_str_plain_nan;
static PyObject *const_tuple_str_digest_8e40ef1b309754dc38148a7bf39b61d5_tuple;
static PyObject *const_tuple_slice_int_0_int_pos_40_none_int_0_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_n_str_plain_bit_str_plain_i_tuple;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_log_max;
static PyObject *const_str_digest_0b74c6637d2f0ddbd6508133ac0e8f82;
extern PyObject *const_str_plain_n;
static PyObject *const_str_plain_recipd;
extern PyObject *const_float_1_0;
static PyObject *const_str_plain_lastq;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_list_b7cdc496c8c20b5648df728ff37caa3a_list;
static PyObject *const_str_plain_lseed;
extern PyObject *const_str_plain_Sobol;
static PyObject *const_list_3b85c15c14cebd873f9700a8dd3c5b23_list;
static PyObject *const_str_plain_i4_bit_lo0;
static PyObject *const_str_digest_2e568f885ff0d5f96067fb3e56668d6c;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_j2;
static PyObject *const_str_plain_seed_temp;
static PyObject *const_str_plain_i4_bit_hi1;
static PyObject *const_str_plain_atmost;
static PyObject *const_str_plain_dim_max;
extern PyObject *const_str_plain_r;
static PyObject *const_tuple_slice_int_pos_3_int_pos_40_none_int_pos_2_tuple;
static PyObject *const_list_03c657ab5904b7922c9265cfab9616a0_list;
static PyObject *const_tuple_slice_int_pos_13_int_pos_40_none_int_pos_5_tuple;
static PyObject *const_str_digest_a6555550cbf149a290a3aa4d46948a07;
static PyObject *const_str_digest_819d46447ae2ccf7234a3ee89ab14808;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_k;
static PyObject *const_str_digest_1c6603da9b078e25421b7a2abe3bb185;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_6ecc4bd8ecb3979e06ed67db6c17565b;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_5f5faf5ba66bff0fbbfa89d013522cb2;
extern PyObject *const_str_plain_skip;
static PyObject *const_str_digest_4a7a3f24f10b308e9395106e95fc98ac;
extern PyObject *const_str_plain_seed;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_self_str_plain_n_str_plain_i_str_plain_bit_tuple;
static PyObject *const_list_d81a9cb4a013ecd5409c5051674e1fa2_list;
static PyObject *const_list_str_plain_Sobol_list;
static PyObject *const_str_plain_next_seed;
static PyObject *const_tuple_5c47318d5efc13293037968319529c80_tuple;
extern PyObject *const_int_pos_37;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_70ffdae28e81d03dbb014c0cc0f12cd0;
static PyObject *const_slice_int_pos_7_int_pos_40_none;
static PyObject *const_str_plain_newv;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_i4_sobol_generate;
static PyObject *const_list_74c5579d6633966ba5ddb411cd7a07ae_list;
extern PyObject *const_int_pos_4;
static PyObject *const_tuple_slice_int_pos_5_int_pos_40_none_int_pos_3_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_int_pos_13;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_dim_num_save;
static PyObject *const_str_plain_dim_num;
static PyObject *const_slice_int_pos_3_int_pos_40_none;
static PyObject *const_str_plain_i4_sobol;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_zeros;
static PyObject *const_slice_int_pos_19_int_pos_40_none;
static PyObject *const_slice_int_0_int_pos_40_none;
static PyObject *const_str_digest_acce7545fe267772039a2eca32733a00;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_initialized;
static PyObject *const_tuple_str_digest_86d9864c299ff16b8ec2193f70be6e0e_tuple;
static PyObject *const_str_digest_8e40ef1b309754dc38148a7bf39b61d5;
static PyObject *const_tuple_str_plain_Sobol_tuple_empty_tuple;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_floor;
static PyObject *const_list_a60083f07d105a037857e7a454dbcc1a_list;
extern PyObject *const_int_pos_40;
extern PyObject *const_int_pos_7;
static PyObject *const_str_digest_d2a58cd6f1473d244d6acd85dab2ef29;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_slice_int_pos_37_int_pos_40_none_int_pos_7_tuple;
extern PyObject *const_str_plain_poly;
static PyObject *const_str_digest_d4d9032e64fa8549cb64410ec636e8e0;
static PyObject *const_str_digest_f9c2e680290c4f3d0683bbfea94c6288;
static PyObject *const_str_plain_seed_save;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_list_b1c4a9010050c95a6f8ff64fc43755d8_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5054924 ], 140 );
    const_str_digest_86d9864c299ff16b8ec2193f70be6e0e = UNSTREAM_STRING_ASCII( &constant_bin[ 5055064 ], 23, 0 );
    const_list_c97220cb4d19be3c451121b1d777487e_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5055087 ], 170 );
    const_str_digest_bc84428aef7407bd28174fd939ae99b9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5055257 ], 37, 0 );
    const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_dim_num = UNSTREAM_STRING_ASCII( &constant_bin[ 5055294 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple, 1, const_str_plain_dim_num ); Py_INCREF( const_str_plain_dim_num );
    PyTuple_SET_ITEM( const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple, 2, const_str_plain_seed ); Py_INCREF( const_str_plain_seed );
    PyTuple_SET_ITEM( const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple, 4, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple, 5, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_str_plain_includ = UNSTREAM_STRING_ASCII( &constant_bin[ 4155 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple, 6, const_str_plain_includ ); Py_INCREF( const_str_plain_includ );
    PyTuple_SET_ITEM( const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple, 7, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_str_plain_j2 = UNSTREAM_STRING_ASCII( &constant_bin[ 707952 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple, 8, const_str_plain_j2 ); Py_INCREF( const_str_plain_j2 );
    const_str_plain_newv = UNSTREAM_STRING_ASCII( &constant_bin[ 5055301 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple, 9, const_str_plain_newv ); Py_INCREF( const_str_plain_newv );
    const_str_plain_lseed = UNSTREAM_STRING_ASCII( &constant_bin[ 5055305 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple, 10, const_str_plain_lseed ); Py_INCREF( const_str_plain_lseed );
    const_str_plain_seed_temp = UNSTREAM_STRING_ASCII( &constant_bin[ 5055310 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple, 11, const_str_plain_seed_temp ); Py_INCREF( const_str_plain_seed_temp );
    const_str_plain_quasi = UNSTREAM_STRING_ASCII( &constant_bin[ 4127107 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple, 12, const_str_plain_quasi ); Py_INCREF( const_str_plain_quasi );
    const_tuple_slice_int_pos_19_int_pos_40_none_int_pos_6_tuple = PyTuple_New( 2 );
    const_slice_int_pos_19_int_pos_40_none = PySlice_New( const_int_pos_19, const_int_pos_40, Py_None );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_19_int_pos_40_none_int_pos_6_tuple, 0, const_slice_int_pos_19_int_pos_40_none ); Py_INCREF( const_slice_int_pos_19_int_pos_40_none );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_19_int_pos_40_none_int_pos_6_tuple, 1, const_int_pos_6 ); Py_INCREF( const_int_pos_6 );
    const_int_pos_39 = PyLong_FromUnsignedLong( 39ul );
    const_tuple_slice_int_pos_7_int_pos_40_none_int_pos_4_tuple = PyTuple_New( 2 );
    const_slice_int_pos_7_int_pos_40_none = PySlice_New( const_int_pos_7, const_int_pos_40, Py_None );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_7_int_pos_40_none_int_pos_4_tuple, 0, const_slice_int_pos_7_int_pos_40_none ); Py_INCREF( const_slice_int_pos_7_int_pos_40_none );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_7_int_pos_40_none_int_pos_4_tuple, 1, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    const_slice_int_pos_37_int_pos_40_none = PySlice_New( const_int_pos_37, const_int_pos_40, Py_None );
    const_str_digest_e84b935958b78988ae359346dcc9a4b2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5055319 ], 1228, 0 );
    const_list_int_pos_7_int_pos_23_int_pos_39_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_int_pos_7_int_pos_23_int_pos_39_list, 0, const_int_pos_7 ); Py_INCREF( const_int_pos_7 );
    PyList_SET_ITEM( const_list_int_pos_7_int_pos_23_int_pos_39_list, 1, const_int_pos_23 ); Py_INCREF( const_int_pos_23 );
    PyList_SET_ITEM( const_list_int_pos_7_int_pos_23_int_pos_39_list, 2, const_int_pos_39 ); Py_INCREF( const_int_pos_39 );
    const_tuple_slice_int_pos_2_int_pos_40_none_int_pos_1_tuple = PyTuple_New( 2 );
    const_slice_int_pos_2_int_pos_40_none = PySlice_New( const_int_pos_2, const_int_pos_40, Py_None );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_2_int_pos_40_none_int_pos_1_tuple, 0, const_slice_int_pos_2_int_pos_40_none ); Py_INCREF( const_slice_int_pos_2_int_pos_40_none );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_2_int_pos_40_none_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_slice_int_pos_5_int_pos_40_none = PySlice_New( const_int_pos_5, const_int_pos_40, Py_None );
    const_slice_int_pos_13_int_pos_40_none = PySlice_New( const_int_pos_13, const_int_pos_40, Py_None );
    const_tuple_str_digest_8e40ef1b309754dc38148a7bf39b61d5_tuple = PyTuple_New( 1 );
    const_str_digest_8e40ef1b309754dc38148a7bf39b61d5 = UNSTREAM_STRING_ASCII( &constant_bin[ 5056547 ], 17, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_8e40ef1b309754dc38148a7bf39b61d5_tuple, 0, const_str_digest_8e40ef1b309754dc38148a7bf39b61d5 ); Py_INCREF( const_str_digest_8e40ef1b309754dc38148a7bf39b61d5 );
    const_tuple_slice_int_0_int_pos_40_none_int_0_tuple = PyTuple_New( 2 );
    const_slice_int_0_int_pos_40_none = PySlice_New( const_int_0, const_int_pos_40, Py_None );
    PyTuple_SET_ITEM( const_tuple_slice_int_0_int_pos_40_none_int_0_tuple, 0, const_slice_int_0_int_pos_40_none ); Py_INCREF( const_slice_int_0_int_pos_40_none );
    PyTuple_SET_ITEM( const_tuple_slice_int_0_int_pos_40_none_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_str_plain_self_str_plain_n_str_plain_bit_str_plain_i_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_bit_str_plain_i_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_bit_str_plain_i_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_bit_str_plain_i_tuple, 2, const_str_plain_bit ); Py_INCREF( const_str_plain_bit );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_bit_str_plain_i_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_plain_log_max = UNSTREAM_STRING_ASCII( &constant_bin[ 5056564 ], 7, 1 );
    const_str_digest_0b74c6637d2f0ddbd6508133ac0e8f82 = UNSTREAM_STRING_ASCII( &constant_bin[ 5056571 ], 16, 0 );
    const_str_plain_recipd = UNSTREAM_STRING_ASCII( &constant_bin[ 5056587 ], 6, 1 );
    const_str_plain_lastq = UNSTREAM_STRING_ASCII( &constant_bin[ 5056593 ], 5, 1 );
    const_list_b7cdc496c8c20b5648df728ff37caa3a_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5056598 ], 180 );
    const_list_3b85c15c14cebd873f9700a8dd3c5b23_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5056778 ], 205 );
    const_str_plain_i4_bit_lo0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5056577 ], 10, 1 );
    const_str_digest_2e568f885ff0d5f96067fb3e56668d6c = UNSTREAM_STRING_ASCII( &constant_bin[ 5056983 ], 541, 0 );
    const_str_plain_i4_bit_hi1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5055328 ], 10, 1 );
    const_str_plain_atmost = UNSTREAM_STRING_ASCII( &constant_bin[ 3538221 ], 6, 1 );
    const_str_plain_dim_max = UNSTREAM_STRING_ASCII( &constant_bin[ 5057524 ], 7, 1 );
    const_tuple_slice_int_pos_3_int_pos_40_none_int_pos_2_tuple = PyTuple_New( 2 );
    const_slice_int_pos_3_int_pos_40_none = PySlice_New( const_int_pos_3, const_int_pos_40, Py_None );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_3_int_pos_40_none_int_pos_2_tuple, 0, const_slice_int_pos_3_int_pos_40_none ); Py_INCREF( const_slice_int_pos_3_int_pos_40_none );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_3_int_pos_40_none_int_pos_2_tuple, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_list_03c657ab5904b7922c9265cfab9616a0_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5057531 ], 205 );
    const_tuple_slice_int_pos_13_int_pos_40_none_int_pos_5_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_13_int_pos_40_none_int_pos_5_tuple, 0, const_slice_int_pos_13_int_pos_40_none ); Py_INCREF( const_slice_int_pos_13_int_pos_40_none );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_13_int_pos_40_none_int_pos_5_tuple, 1, const_int_pos_5 ); Py_INCREF( const_int_pos_5 );
    const_str_digest_a6555550cbf149a290a3aa4d46948a07 = UNSTREAM_STRING_ASCII( &constant_bin[ 5057736 ], 34, 0 );
    const_str_digest_819d46447ae2ccf7234a3ee89ab14808 = UNSTREAM_STRING_ASCII( &constant_bin[ 5057770 ], 14, 0 );
    const_str_digest_1c6603da9b078e25421b7a2abe3bb185 = UNSTREAM_STRING_ASCII( &constant_bin[ 5057784 ], 14, 0 );
    const_str_digest_6ecc4bd8ecb3979e06ed67db6c17565b = UNSTREAM_STRING_ASCII( &constant_bin[ 5057798 ], 14, 0 );
    const_str_digest_5f5faf5ba66bff0fbbfa89d013522cb2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5057812 ], 23, 0 );
    const_str_digest_4a7a3f24f10b308e9395106e95fc98ac = UNSTREAM_STRING_ASCII( &constant_bin[ 5057835 ], 43, 0 );
    const_tuple_str_plain_self_str_plain_n_str_plain_i_str_plain_bit_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_i_str_plain_bit_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_i_str_plain_bit_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_i_str_plain_bit_tuple, 2, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_i_str_plain_bit_tuple, 3, const_str_plain_bit ); Py_INCREF( const_str_plain_bit );
    const_list_d81a9cb4a013ecd5409c5051674e1fa2_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5057878 ], 110 );
    const_list_str_plain_Sobol_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_Sobol_list, 0, const_str_plain_Sobol ); Py_INCREF( const_str_plain_Sobol );
    const_str_plain_next_seed = UNSTREAM_STRING_ASCII( &constant_bin[ 5057988 ], 9, 1 );
    const_tuple_5c47318d5efc13293037968319529c80_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_5c47318d5efc13293037968319529c80_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5c47318d5efc13293037968319529c80_tuple, 1, const_str_plain_dim_num ); Py_INCREF( const_str_plain_dim_num );
    PyTuple_SET_ITEM( const_tuple_5c47318d5efc13293037968319529c80_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_5c47318d5efc13293037968319529c80_tuple, 3, const_str_plain_skip ); Py_INCREF( const_str_plain_skip );
    PyTuple_SET_ITEM( const_tuple_5c47318d5efc13293037968319529c80_tuple, 4, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_5c47318d5efc13293037968319529c80_tuple, 5, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_5c47318d5efc13293037968319529c80_tuple, 6, const_str_plain_seed ); Py_INCREF( const_str_plain_seed );
    PyTuple_SET_ITEM( const_tuple_5c47318d5efc13293037968319529c80_tuple, 7, const_str_plain_next_seed ); Py_INCREF( const_str_plain_next_seed );
    const_str_digest_70ffdae28e81d03dbb014c0cc0f12cd0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5057997 ], 315, 0 );
    const_list_74c5579d6633966ba5ddb411cd7a07ae_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5058312 ], 190 );
    const_tuple_slice_int_pos_5_int_pos_40_none_int_pos_3_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_5_int_pos_40_none_int_pos_3_tuple, 0, const_slice_int_pos_5_int_pos_40_none ); Py_INCREF( const_slice_int_pos_5_int_pos_40_none );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_5_int_pos_40_none_int_pos_3_tuple, 1, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    const_str_plain_dim_num_save = UNSTREAM_STRING_ASCII( &constant_bin[ 5058502 ], 12, 1 );
    const_str_plain_i4_sobol = UNSTREAM_STRING_ASCII( &constant_bin[ 5029325 ], 8, 1 );
    const_str_digest_acce7545fe267772039a2eca32733a00 = UNSTREAM_STRING_ASCII( &constant_bin[ 5058514 ], 1787, 0 );
    const_tuple_str_digest_86d9864c299ff16b8ec2193f70be6e0e_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_86d9864c299ff16b8ec2193f70be6e0e_tuple, 0, const_str_digest_86d9864c299ff16b8ec2193f70be6e0e ); Py_INCREF( const_str_digest_86d9864c299ff16b8ec2193f70be6e0e );
    const_tuple_str_plain_Sobol_tuple_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Sobol_tuple_empty_tuple, 0, const_str_plain_Sobol ); Py_INCREF( const_str_plain_Sobol );
    PyTuple_SET_ITEM( const_tuple_str_plain_Sobol_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_list_a60083f07d105a037857e7a454dbcc1a_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5060301 ], 195 );
    const_str_digest_d2a58cd6f1473d244d6acd85dab2ef29 = UNSTREAM_STRING_ASCII( &constant_bin[ 5057812 ], 14, 0 );
    const_tuple_slice_int_pos_37_int_pos_40_none_int_pos_7_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_37_int_pos_40_none_int_pos_7_tuple, 0, const_slice_int_pos_37_int_pos_40_none ); Py_INCREF( const_slice_int_pos_37_int_pos_40_none );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_37_int_pos_40_none_int_pos_7_tuple, 1, const_int_pos_7 ); Py_INCREF( const_int_pos_7 );
    const_str_digest_d4d9032e64fa8549cb64410ec636e8e0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5060496 ], 16, 0 );
    const_str_digest_f9c2e680290c4f3d0683bbfea94c6288 = UNSTREAM_STRING_ASCII( &constant_bin[ 5060512 ], 1145, 0 );
    const_str_plain_seed_save = UNSTREAM_STRING_ASCII( &constant_bin[ 5061657 ], 9, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_shgo_lib$sobol_seq( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c0d0ea2e4f65b8da88d54912110dc5a0;
static PyCodeObject *codeobj_e487de93f29ea9c6b2054b9c0248b23f;
static PyCodeObject *codeobj_8f8d1669e873f6a2d27354dd36a622e0;
static PyCodeObject *codeobj_410aec6096216feb2be0782a4d47989c;
static PyCodeObject *codeobj_e68b02d8da136e17f96fa754dd9b61f3;
static PyCodeObject *codeobj_2d82b7338dc71d88b963f2a526d31d94;
static PyCodeObject *codeobj_19750c522a18958eed230f82c68f7fc5;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_bc84428aef7407bd28174fd939ae99b9 );
    codeobj_c0d0ea2e4f65b8da88d54912110dc5a0 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4a7a3f24f10b308e9395106e95fc98ac, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e487de93f29ea9c6b2054b9c0248b23f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Sobol, 27, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_8f8d1669e873f6a2d27354dd36a622e0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 28, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_410aec6096216feb2be0782a4d47989c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i4_bit_hi1, 60, const_tuple_str_plain_self_str_plain_n_str_plain_i_str_plain_bit_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e68b02d8da136e17f96fa754dd9b61f3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i4_bit_lo0, 104, const_tuple_str_plain_self_str_plain_n_str_plain_bit_str_plain_i_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2d82b7338dc71d88b963f2a526d31d94 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i4_sobol, 147, const_tuple_cf2a278050c9c87c44c94d12a77ff229_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_19750c522a18958eed230f82c68f7fc5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i4_sobol_generate, 42, const_tuple_5c47318d5efc13293037968319529c80_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_2_i4_sobol_generate( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_3_i4_bit_hi1(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_4_i4_bit_lo0(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_5_i4_sobol(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_shgo_lib$sobol_seq$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8f8d1669e873f6a2d27354dd36a622e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8f8d1669e873f6a2d27354dd36a622e0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8f8d1669e873f6a2d27354dd36a622e0, codeobj_8f8d1669e873f6a2d27354dd36a622e0, module_scipy$optimize$_shgo_lib$sobol_seq, sizeof(void *) );
    frame_8f8d1669e873f6a2d27354dd36a622e0 = cache_frame_8f8d1669e873f6a2d27354dd36a622e0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8f8d1669e873f6a2d27354dd36a622e0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8f8d1669e873f6a2d27354dd36a622e0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_atmost, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_dim_max, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_dim_num_save, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_initialized, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_lastq, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_log_max, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_name_7 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_maxcol, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_poly, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_name_9 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_recipd, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_name_10 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_seed_save, tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_name_11 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_v, tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f8d1669e873f6a2d27354dd36a622e0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f8d1669e873f6a2d27354dd36a622e0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8f8d1669e873f6a2d27354dd36a622e0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8f8d1669e873f6a2d27354dd36a622e0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8f8d1669e873f6a2d27354dd36a622e0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8f8d1669e873f6a2d27354dd36a622e0,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_8f8d1669e873f6a2d27354dd36a622e0 == cache_frame_8f8d1669e873f6a2d27354dd36a622e0 )
    {
        Py_DECREF( frame_8f8d1669e873f6a2d27354dd36a622e0 );
    }
    cache_frame_8f8d1669e873f6a2d27354dd36a622e0 = NULL;

    assertFrameObject( frame_8f8d1669e873f6a2d27354dd36a622e0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_shgo_lib$sobol_seq$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_shgo_lib$sobol_seq$$$function_1___init__ );
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


static PyObject *impl_scipy$optimize$_shgo_lib$sobol_seq$$$function_2_i4_sobol_generate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dim_num = python_pars[ 1 ];
    PyObject *par_n = python_pars[ 2 ];
    PyObject *par_skip = python_pars[ 3 ];
    PyObject *var_r = NULL;
    PyObject *var_j = NULL;
    PyObject *var_seed = NULL;
    PyObject *var_next_seed = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_19750c522a18958eed230f82c68f7fc5;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_19750c522a18958eed230f82c68f7fc5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_19750c522a18958eed230f82c68f7fc5, codeobj_19750c522a18958eed230f82c68f7fc5, module_scipy$optimize$_shgo_lib$sobol_seq, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_19750c522a18958eed230f82c68f7fc5 = cache_frame_19750c522a18958eed230f82c68f7fc5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_19750c522a18958eed230f82c68f7fc5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_19750c522a18958eed230f82c68f7fc5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 53;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_full );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_tuple_element_1 = par_n;
        tmp_args_element_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_dim_num );
        tmp_tuple_element_1 = par_dim_num;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_nan );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 53;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_19750c522a18958eed230f82c68f7fc5->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( par_n );
        tmp_xrange_low_1 = par_n;
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "oooooooo";
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
                type_description_1 = "oooooooo";
                exception_lineno = 54;
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
            PyObject *old = var_j;
            var_j = tmp_assign_source_4;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_j );
        tmp_left_name_1 = var_j;
        CHECK_OBJECT( par_skip );
        tmp_right_name_1 = par_skip;
        tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_seed;
            var_seed = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_dim_num );
        tmp_args_element_name_3 = par_dim_num;
        CHECK_OBJECT( var_seed );
        tmp_args_element_name_4 = var_seed;
        frame_19750c522a18958eed230f82c68f7fc5->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_i4_sobol, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF( old );
        }

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


            type_description_1 = "oooooooo";
            exception_lineno = 56;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF( old );
        }

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


            type_description_1 = "oooooooo";
            exception_lineno = 56;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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
                    exception_lineno = 56;
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
            exception_lineno = 56;
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
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_ass_subvalue_1 = tmp_tuple_unpack_1__element_1;
        CHECK_OBJECT( var_r );
        tmp_ass_subscribed_1 = var_r;
        CHECK_OBJECT( var_j );
        tmp_tuple_element_2 = var_j;
        tmp_ass_subscript_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_2 );
        tmp_start_name_1 = const_int_0;
        CHECK_OBJECT( par_dim_num );
        tmp_stop_name_1 = par_dim_num;
        tmp_step_name_1 = Py_None;
        tmp_tuple_element_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_tuple_element_2 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_2 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
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
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_next_seed;
            var_next_seed = tmp_assign_source_9;
            Py_INCREF( var_next_seed );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19750c522a18958eed230f82c68f7fc5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19750c522a18958eed230f82c68f7fc5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_19750c522a18958eed230f82c68f7fc5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_19750c522a18958eed230f82c68f7fc5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_19750c522a18958eed230f82c68f7fc5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_19750c522a18958eed230f82c68f7fc5,
        type_description_1,
        par_self,
        par_dim_num,
        par_n,
        par_skip,
        var_r,
        var_j,
        var_seed,
        var_next_seed
    );


    // Release cached frame.
    if ( frame_19750c522a18958eed230f82c68f7fc5 == cache_frame_19750c522a18958eed230f82c68f7fc5 )
    {
        Py_DECREF( frame_19750c522a18958eed230f82c68f7fc5 );
    }
    cache_frame_19750c522a18958eed230f82c68f7fc5 = NULL;

    assertFrameObject( frame_19750c522a18958eed230f82c68f7fc5 );

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

    CHECK_OBJECT( var_r );
    tmp_return_value = var_r;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_shgo_lib$sobol_seq$$$function_2_i4_sobol_generate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dim_num );
    Py_DECREF( par_dim_num );
    par_dim_num = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_skip );
    Py_DECREF( par_skip );
    par_skip = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_seed );
    var_seed = NULL;

    Py_XDECREF( var_next_seed );
    var_next_seed = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dim_num );
    Py_DECREF( par_dim_num );
    par_dim_num = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_skip );
    Py_DECREF( par_skip );
    par_skip = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_seed );
    var_seed = NULL;

    Py_XDECREF( var_next_seed );
    var_next_seed = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_shgo_lib$sobol_seq$$$function_2_i4_sobol_generate );
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


static PyObject *impl_scipy$optimize$_shgo_lib$sobol_seq$$$function_3_i4_bit_hi1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *var_i = NULL;
    PyObject *var_bit = NULL;
    struct Nuitka_FrameObject *frame_410aec6096216feb2be0782a4d47989c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_410aec6096216feb2be0782a4d47989c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_410aec6096216feb2be0782a4d47989c, codeobj_410aec6096216feb2be0782a4d47989c, module_scipy$optimize$_shgo_lib$sobol_seq, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_410aec6096216feb2be0782a4d47989c = cache_frame_410aec6096216feb2be0782a4d47989c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_410aec6096216feb2be0782a4d47989c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_410aec6096216feb2be0782a4d47989c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 97;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_1 = par_n;
        frame_410aec6096216feb2be0782a4d47989c->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_floor, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_i == NULL );
        var_i = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_0;
        assert( var_bit == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_bit = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_1 = var_i;
        tmp_compexpr_right_1 = const_int_0;
        tmp_operand_name_1 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_bit );
        tmp_left_name_1 = var_bit;
        tmp_right_name_1 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_name_1;
        var_bit = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_i );
        tmp_left_name_2 = var_i;
        tmp_right_name_2 = const_int_pos_2;
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceFloorDivide, &tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_left_name_2;
        var_i = tmp_assign_source_4;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_410aec6096216feb2be0782a4d47989c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_410aec6096216feb2be0782a4d47989c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_410aec6096216feb2be0782a4d47989c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_410aec6096216feb2be0782a4d47989c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_410aec6096216feb2be0782a4d47989c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_410aec6096216feb2be0782a4d47989c,
        type_description_1,
        par_self,
        par_n,
        var_i,
        var_bit
    );


    // Release cached frame.
    if ( frame_410aec6096216feb2be0782a4d47989c == cache_frame_410aec6096216feb2be0782a4d47989c )
    {
        Py_DECREF( frame_410aec6096216feb2be0782a4d47989c );
    }
    cache_frame_410aec6096216feb2be0782a4d47989c = NULL;

    assertFrameObject( frame_410aec6096216feb2be0782a4d47989c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_bit );
    tmp_return_value = var_bit;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_shgo_lib$sobol_seq$$$function_3_i4_bit_hi1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_i );
    Py_DECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_bit );
    Py_DECREF( var_bit );
    var_bit = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_bit );
    var_bit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_shgo_lib$sobol_seq$$$function_3_i4_bit_hi1 );
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


static PyObject *impl_scipy$optimize$_shgo_lib$sobol_seq$$$function_4_i4_bit_lo0( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *var_bit = NULL;
    PyObject *var_i = NULL;
    struct Nuitka_FrameObject *frame_e68b02d8da136e17f96fa754dd9b61f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e68b02d8da136e17f96fa754dd9b61f3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_pos_1;
        assert( var_bit == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_bit = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e68b02d8da136e17f96fa754dd9b61f3, codeobj_e68b02d8da136e17f96fa754dd9b61f3, module_scipy$optimize$_shgo_lib$sobol_seq, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e68b02d8da136e17f96fa754dd9b61f3 = cache_frame_e68b02d8da136e17f96fa754dd9b61f3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e68b02d8da136e17f96fa754dd9b61f3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e68b02d8da136e17f96fa754dd9b61f3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 141;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_1 = par_n;
        frame_e68b02d8da136e17f96fa754dd9b61f3->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_floor, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_i == NULL );
        var_i = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_1 = var_i;
        tmp_left_name_1 = const_int_pos_2;
        CHECK_OBJECT( var_i );
        tmp_left_name_2 = var_i;
        tmp_right_name_2 = const_int_pos_2;
        tmp_right_name_1 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_bit );
        tmp_left_name_3 = var_bit;
        tmp_right_name_3 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_name_3;
        var_bit = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_i );
        tmp_left_name_4 = var_i;
        tmp_right_name_4 = const_int_pos_2;
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceFloorDivide, &tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_left_name_4;
        var_i = tmp_assign_source_4;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e68b02d8da136e17f96fa754dd9b61f3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e68b02d8da136e17f96fa754dd9b61f3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e68b02d8da136e17f96fa754dd9b61f3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e68b02d8da136e17f96fa754dd9b61f3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e68b02d8da136e17f96fa754dd9b61f3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e68b02d8da136e17f96fa754dd9b61f3,
        type_description_1,
        par_self,
        par_n,
        var_bit,
        var_i
    );


    // Release cached frame.
    if ( frame_e68b02d8da136e17f96fa754dd9b61f3 == cache_frame_e68b02d8da136e17f96fa754dd9b61f3 )
    {
        Py_DECREF( frame_e68b02d8da136e17f96fa754dd9b61f3 );
    }
    cache_frame_e68b02d8da136e17f96fa754dd9b61f3 = NULL;

    assertFrameObject( frame_e68b02d8da136e17f96fa754dd9b61f3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_bit );
    tmp_return_value = var_bit;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_shgo_lib$sobol_seq$$$function_4_i4_bit_lo0 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_bit );
    Py_DECREF( var_bit );
    var_bit = NULL;

    CHECK_OBJECT( (PyObject *)var_i );
    Py_DECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_bit );
    var_bit = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_shgo_lib$sobol_seq$$$function_4_i4_bit_lo0 );
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


static PyObject *impl_scipy$optimize$_shgo_lib$sobol_seq$$$function_5_i4_sobol( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dim_num = python_pars[ 1 ];
    PyObject *par_seed = python_pars[ 2 ];
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *var_m = NULL;
    PyObject *var_includ = NULL;
    PyObject *var_k = NULL;
    PyObject *var_j2 = NULL;
    PyObject *var_newv = NULL;
    PyObject *var_lseed = NULL;
    PyObject *var_seed_temp = NULL;
    PyObject *var_quasi = NULL;
    PyObject *tmp_for_loop_10__for_iterator = NULL;
    PyObject *tmp_for_loop_10__iter_value = NULL;
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
    struct Nuitka_FrameObject *frame_2d82b7338dc71d88b963f2a526d31d94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_2d82b7338dc71d88b963f2a526d31d94 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d82b7338dc71d88b963f2a526d31d94, codeobj_2d82b7338dc71d88b963f2a526d31d94, module_scipy$optimize$_shgo_lib$sobol_seq, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2d82b7338dc71d88b963f2a526d31d94 = cache_frame_2d82b7338dc71d88b963f2a526d31d94;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d82b7338dc71d88b963f2a526d31d94 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d82b7338dc71d88b963f2a526d31d94 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_initialized );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = const_int_0;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_initialized, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 198;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = const_int_neg_1;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_dim_num_save, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_initialized );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooooooooooo";
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
        CHECK_OBJECT( par_dim_num );
        tmp_compexpr_left_2 = par_dim_num;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dim_num_save );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            tmp_assattr_name_3 = const_int_pos_1;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_initialized, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 202;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            tmp_assattr_name_4 = const_int_pos_40;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_dim_max, tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_assattr_target_5;
            tmp_assattr_name_5 = const_int_neg_1;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_5 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_dim_num_save, tmp_assattr_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_assattr_target_6;
            tmp_assattr_name_6 = const_int_pos_30;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_6 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_log_max, tmp_assattr_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_assattr_target_7;
            tmp_assattr_name_7 = const_int_neg_1;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_7 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_seed_save, tmp_assattr_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_8;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_assattr_target_8;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 209;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_zeros );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dim_max );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 209;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_log_max );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 209;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 209;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assattr_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assattr_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_8 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_v, tmp_assattr_name_8 );
            Py_DECREF( tmp_assattr_name_8 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_arg_element_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_source_name_7;
            PyObject *tmp_ass_subscript_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 210;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            tmp_call_arg_element_1 = LIST_COPY( const_list_3b85c15c14cebd873f9700a8dd3c5b23_list );
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 210;
            {
                PyObject *call_args[] = { tmp_call_arg_element_1 };
                tmp_ass_subvalue_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_transpose, call_args );
            }

            Py_DECREF( tmp_call_arg_element_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 210;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_v );
            if ( tmp_ass_subscribed_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 210;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_1 = const_tuple_slice_int_0_int_pos_40_none_int_0_tuple;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscribed_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 210;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_arg_element_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_source_name_8;
            PyObject *tmp_ass_subscript_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 216;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_3;
            tmp_call_arg_element_2 = LIST_COPY( const_list_a60083f07d105a037857e7a454dbcc1a_list );
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 216;
            {
                PyObject *call_args[] = { tmp_call_arg_element_2 };
                tmp_ass_subvalue_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_transpose, call_args );
            }

            Py_DECREF( tmp_call_arg_element_2 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_v );
            if ( tmp_ass_subscribed_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 216;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_2 = const_tuple_slice_int_pos_2_int_pos_40_none_int_pos_1_tuple;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscribed_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_arg_element_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_source_name_9;
            PyObject *tmp_ass_subscript_3;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 222;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_4;
            tmp_call_arg_element_3 = LIST_COPY( const_list_74c5579d6633966ba5ddb411cd7a07ae_list );
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 222;
            {
                PyObject *call_args[] = { tmp_call_arg_element_3 };
                tmp_ass_subvalue_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_transpose, call_args );
            }

            Py_DECREF( tmp_call_arg_element_3 );
            if ( tmp_ass_subvalue_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 222;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_v );
            if ( tmp_ass_subscribed_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_3 );

                exception_lineno = 222;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_3 = const_tuple_slice_int_pos_3_int_pos_40_none_int_pos_2_tuple;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            Py_DECREF( tmp_ass_subscribed_3 );
            Py_DECREF( tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 222;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_call_arg_element_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_source_name_10;
            PyObject *tmp_ass_subscript_4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 228;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_5;
            tmp_call_arg_element_4 = LIST_COPY( const_list_b7cdc496c8c20b5648df728ff37caa3a_list );
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 228;
            {
                PyObject *call_args[] = { tmp_call_arg_element_4 };
                tmp_ass_subvalue_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_transpose, call_args );
            }

            Py_DECREF( tmp_call_arg_element_4 );
            if ( tmp_ass_subvalue_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 228;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_v );
            if ( tmp_ass_subscribed_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_4 );

                exception_lineno = 228;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_4 = const_tuple_slice_int_pos_5_int_pos_40_none_int_pos_3_tuple;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
            Py_DECREF( tmp_ass_subscribed_4 );
            Py_DECREF( tmp_ass_subvalue_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 228;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_arg_element_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_source_name_11;
            PyObject *tmp_ass_subscript_5;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 234;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = tmp_mvar_value_6;
            tmp_call_arg_element_5 = LIST_COPY( const_list_c97220cb4d19be3c451121b1d777487e_list );
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 234;
            {
                PyObject *call_args[] = { tmp_call_arg_element_5 };
                tmp_ass_subvalue_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_transpose, call_args );
            }

            Py_DECREF( tmp_call_arg_element_5 );
            if ( tmp_ass_subvalue_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 234;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_ass_subscribed_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_v );
            if ( tmp_ass_subscribed_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_5 );

                exception_lineno = 234;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_5 = const_tuple_slice_int_pos_7_int_pos_40_none_int_pos_4_tuple;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
            Py_DECREF( tmp_ass_subscribed_5 );
            Py_DECREF( tmp_ass_subvalue_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 234;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_call_arg_element_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_source_name_12;
            PyObject *tmp_ass_subscript_6;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 240;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_7;
            tmp_call_arg_element_6 = LIST_COPY( const_list_b1c4a9010050c95a6f8ff64fc43755d8_list );
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 240;
            {
                PyObject *call_args[] = { tmp_call_arg_element_6 };
                tmp_ass_subvalue_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_transpose, call_args );
            }

            Py_DECREF( tmp_call_arg_element_6 );
            if ( tmp_ass_subvalue_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_ass_subscribed_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_v );
            if ( tmp_ass_subscribed_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_6 );

                exception_lineno = 240;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_6 = const_tuple_slice_int_pos_13_int_pos_40_none_int_pos_5_tuple;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
            Py_DECREF( tmp_ass_subscribed_6 );
            Py_DECREF( tmp_ass_subvalue_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_call_arg_element_7;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_source_name_13;
            PyObject *tmp_ass_subscript_7;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 245;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_7 = tmp_mvar_value_8;
            tmp_call_arg_element_7 = LIST_COPY( const_list_d81a9cb4a013ecd5409c5051674e1fa2_list );
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 245;
            {
                PyObject *call_args[] = { tmp_call_arg_element_7 };
                tmp_ass_subvalue_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_transpose, call_args );
            }

            Py_DECREF( tmp_call_arg_element_7 );
            if ( tmp_ass_subvalue_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_ass_subscribed_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_v );
            if ( tmp_ass_subscribed_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_7 );

                exception_lineno = 245;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_7 = const_tuple_slice_int_pos_19_int_pos_40_none_int_pos_6_tuple;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
            Py_DECREF( tmp_ass_subscribed_7 );
            Py_DECREF( tmp_ass_subvalue_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_call_arg_element_8;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_source_name_14;
            PyObject *tmp_ass_subscript_8;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 250;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_8 = tmp_mvar_value_9;
            tmp_call_arg_element_8 = LIST_COPY( const_list_int_pos_7_int_pos_23_int_pos_39_list );
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 250;
            {
                PyObject *call_args[] = { tmp_call_arg_element_8 };
                tmp_ass_subvalue_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_transpose, call_args );
            }

            Py_DECREF( tmp_call_arg_element_8 );
            if ( tmp_ass_subvalue_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_14 = par_self;
            tmp_ass_subscribed_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_v );
            if ( tmp_ass_subscribed_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_8 );

                exception_lineno = 250;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_8 = const_tuple_slice_int_pos_37_int_pos_40_none_int_pos_7_tuple;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8 );
            Py_DECREF( tmp_ass_subscribed_8 );
            Py_DECREF( tmp_ass_subvalue_8 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_9;
            PyObject *tmp_assattr_target_9;
            tmp_assattr_name_9 = LIST_COPY( const_list_03c657ab5904b7922c9265cfab9616a0_list );
            CHECK_OBJECT( par_self );
            tmp_assattr_target_9 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_poly, tmp_assattr_name_9 );
            Py_DECREF( tmp_assattr_name_9 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 254;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_10;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_source_name_15;
            PyObject *tmp_right_name_2;
            PyObject *tmp_assattr_target_10;
            tmp_left_name_2 = const_int_pos_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_15 = par_self;
            tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_log_max );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 260;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 260;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_1;
            tmp_assattr_name_10 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assattr_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 260;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_10 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_atmost, tmp_assattr_name_10 );
            Py_DECREF( tmp_assattr_name_10 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 260;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_11;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_16;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_17;
            PyObject *tmp_assattr_target_11;
            CHECK_OBJECT( par_self );
            tmp_source_name_16 = par_self;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_i4_bit_hi1 );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_17 = par_self;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_atmost );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 263;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 263;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assattr_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assattr_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_11 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_maxcol, tmp_assattr_name_11 );
            Py_DECREF( tmp_assattr_name_11 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_9;
            PyObject *tmp_ass_subscribed_9;
            PyObject *tmp_source_name_18;
            PyObject *tmp_ass_subscript_9;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_source_name_19;
            PyObject *tmp_step_name_1;
            tmp_ass_subvalue_9 = const_int_pos_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_18 = par_self;
            tmp_ass_subscribed_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_v );
            if ( tmp_ass_subscribed_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_2 = const_int_0;
            tmp_ass_subscript_9 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_ass_subscript_9, 0, tmp_tuple_element_2 );
            tmp_start_name_1 = const_int_0;
            CHECK_OBJECT( par_self );
            tmp_source_name_19 = par_self;
            tmp_stop_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_maxcol );
            if ( tmp_stop_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subscribed_9 );
                Py_DECREF( tmp_ass_subscript_9 );

                exception_lineno = 266;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_1 = Py_None;
            tmp_tuple_element_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            Py_DECREF( tmp_stop_name_1 );
            assert( !(tmp_tuple_element_2 == NULL) );
            PyTuple_SET_ITEM( tmp_ass_subscript_9, 1, tmp_tuple_element_2 );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9 );
            Py_DECREF( tmp_ass_subscribed_9 );
            Py_DECREF( tmp_ass_subscript_9 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_20;
        CHECK_OBJECT( par_dim_num );
        tmp_compexpr_left_3 = par_dim_num;
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_dim_num_save );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_assattr_name_12;
            PyObject *tmp_assattr_target_12;
            CHECK_OBJECT( par_dim_num );
            tmp_assattr_name_12 = par_dim_num;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_12 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_dim_num_save, tmp_assattr_name_12 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_xrange_high_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_xrange_low_1 = const_int_pos_2;
            CHECK_OBJECT( par_dim_num );
            tmp_left_name_3 = par_dim_num;
            tmp_right_name_3 = const_int_pos_1;
            tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_xrange_high_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 273;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_iter_arg_1 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
            Py_DECREF( tmp_xrange_high_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 273;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 273;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_1;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_2;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 273;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_2;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_3 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_3;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_21;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_21 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_poly );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_i );
            tmp_left_name_4 = var_i;
            tmp_right_name_4 = const_int_pos_1;
            tmp_subscript_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_subscript_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_1 );

                exception_lineno = 278;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_j;
                var_j = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_int_0;
            {
                PyObject *old = var_m;
                var_m = tmp_assign_source_5;
                Py_INCREF( var_m );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( var_j );
            tmp_left_name_5 = var_j;
            tmp_right_name_5 = const_int_pos_2;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceFloorDivide, &tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 280;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = tmp_left_name_5;
            var_j = tmp_assign_source_6;

        }
        loop_start_2:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_j );
            tmp_compexpr_left_4 = var_j;
            tmp_compexpr_right_4 = const_int_0;
            tmp_operand_name_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 281;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 281;
                type_description_1 = "ooooooooooooo";
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
            goto loop_end_2;
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( var_j );
            tmp_left_name_6 = var_j;
            tmp_right_name_6 = const_int_pos_2;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceFloorDivide, &tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_7 = tmp_left_name_6;
            var_j = tmp_assign_source_7;

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            CHECK_OBJECT( var_m );
            tmp_left_name_7 = var_m;
            tmp_right_name_7 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_8 = tmp_left_name_7;
            var_m = tmp_assign_source_8;

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        goto loop_start_2;
        loop_end_2:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_22;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            CHECK_OBJECT( par_self );
            tmp_source_name_22 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_poly );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 287;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_i );
            tmp_left_name_8 = var_i;
            tmp_right_name_8 = const_int_pos_1;
            tmp_subscript_name_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_2 );

                exception_lineno = 287;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 287;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_j;
                assert( old != NULL );
                var_j = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 288;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_9 = tmp_mvar_value_10;
            CHECK_OBJECT( var_m );
            tmp_args_element_name_3 = var_m;
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 288;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_zeros, call_args );
            }

            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 288;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_includ;
                var_includ = tmp_assign_source_10;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_xrange_low_2;
            PyObject *tmp_xrange_high_2;
            PyObject *tmp_xrange_step_1;
            CHECK_OBJECT( var_m );
            tmp_xrange_low_2 = var_m;
            tmp_xrange_high_2 = const_int_0;
            tmp_xrange_step_1 = const_int_neg_1;
            tmp_iter_arg_2 = BUILTIN_XRANGE3( tmp_xrange_low_2, tmp_xrange_high_2, tmp_xrange_step_1 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 289;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 289;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_for_loop_2__for_iterator;
                tmp_for_loop_2__for_iterator = tmp_assign_source_11;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_12 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 289;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_13 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_k;
                var_k = tmp_assign_source_13;
                Py_INCREF( var_k );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            CHECK_OBJECT( var_j );
            tmp_left_name_9 = var_j;
            tmp_right_name_9 = const_int_pos_2;
            tmp_assign_source_14 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 290;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = var_j2;
                var_j2 = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_10;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            PyObject *tmp_ass_subscribed_10;
            PyObject *tmp_ass_subscript_10;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            CHECK_OBJECT( var_j );
            tmp_compexpr_left_5 = var_j;
            tmp_left_name_10 = const_int_pos_2;
            CHECK_OBJECT( var_j2 );
            tmp_right_name_10 = var_j2;
            tmp_compexpr_right_5 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_10, tmp_right_name_10 );
            if ( tmp_compexpr_right_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 291;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_ass_subvalue_10 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_right_5 );
            if ( tmp_ass_subvalue_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 291;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( var_includ );
            tmp_ass_subscribed_10 = var_includ;
            CHECK_OBJECT( var_k );
            tmp_left_name_11 = var_k;
            tmp_right_name_11 = const_int_pos_1;
            tmp_ass_subscript_10 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_11, tmp_right_name_11 );
            if ( tmp_ass_subscript_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_10 );

                exception_lineno = 291;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10 );
            Py_DECREF( tmp_ass_subscript_10 );
            Py_DECREF( tmp_ass_subvalue_10 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 291;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( var_j2 );
            tmp_assign_source_15 = var_j2;
            {
                PyObject *old = var_j;
                assert( old != NULL );
                var_j = tmp_assign_source_15;
                Py_INCREF( var_j );
                Py_DECREF( old );
            }

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_3;
        loop_end_3:;
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

        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_xrange_low_3;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            PyObject *tmp_xrange_high_3;
            PyObject *tmp_left_name_13;
            PyObject *tmp_source_name_23;
            PyObject *tmp_right_name_13;
            CHECK_OBJECT( var_m );
            tmp_left_name_12 = var_m;
            tmp_right_name_12 = const_int_pos_1;
            tmp_xrange_low_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_12, tmp_right_name_12 );
            if ( tmp_xrange_low_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_23 = par_self;
            tmp_left_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_maxcol );
            if ( tmp_left_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_xrange_low_3 );

                exception_lineno = 296;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_13 = const_int_pos_1;
            tmp_xrange_high_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_13, tmp_right_name_13 );
            Py_DECREF( tmp_left_name_13 );
            if ( tmp_xrange_high_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_xrange_low_3 );

                exception_lineno = 296;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_iter_arg_3 = BUILTIN_XRANGE2( tmp_xrange_low_3, tmp_xrange_high_3 );
            Py_DECREF( tmp_xrange_low_3 );
            Py_DECREF( tmp_xrange_high_3 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_for_loop_3__for_iterator;
                tmp_for_loop_3__for_iterator = tmp_assign_source_16;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_for_loop_3__for_iterator );
            tmp_next_source_3 = tmp_for_loop_3__for_iterator;
            tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_3 );
            if ( tmp_assign_source_17 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_4;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 296;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_for_loop_3__iter_value;
                tmp_for_loop_3__iter_value = tmp_assign_source_17;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_for_loop_3__iter_value );
            tmp_assign_source_18 = tmp_for_loop_3__iter_value;
            {
                PyObject *old = var_j;
                assert( old != NULL );
                var_j = tmp_assign_source_18;
                Py_INCREF( var_j );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_source_name_24;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_left_name_14;
            PyObject *tmp_right_name_14;
            PyObject *tmp_left_name_15;
            PyObject *tmp_left_name_16;
            PyObject *tmp_right_name_15;
            PyObject *tmp_right_name_16;
            CHECK_OBJECT( par_self );
            tmp_source_name_24 = par_self;
            tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_v );
            if ( tmp_subscribed_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 297;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_i );
            tmp_left_name_14 = var_i;
            tmp_right_name_14 = const_int_pos_1;
            tmp_tuple_element_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_14, tmp_right_name_14 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_3 );

                exception_lineno = 297;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_subscript_name_3 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_j );
            tmp_left_name_16 = var_j;
            CHECK_OBJECT( var_m );
            tmp_right_name_15 = var_m;
            tmp_left_name_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_15 );
            if ( tmp_left_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_3 );
                Py_DECREF( tmp_subscript_name_3 );

                exception_lineno = 297;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_right_name_16 = const_int_pos_1;
            tmp_tuple_element_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_15, tmp_right_name_16 );
            Py_DECREF( tmp_left_name_15 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_3 );
                Py_DECREF( tmp_subscript_name_3 );

                exception_lineno = 297;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_3 );
            tmp_assign_source_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscribed_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 297;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = var_newv;
                var_newv = tmp_assign_source_19;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = const_int_pos_1;
            {
                PyObject *old = var_lseed;
                var_lseed = tmp_assign_source_20;
                Py_INCREF( var_lseed );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_xrange_low_4;
            PyObject *tmp_xrange_high_4;
            PyObject *tmp_left_name_17;
            PyObject *tmp_right_name_17;
            tmp_xrange_low_4 = const_int_pos_1;
            CHECK_OBJECT( var_m );
            tmp_left_name_17 = var_m;
            tmp_right_name_17 = const_int_pos_1;
            tmp_xrange_high_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_17, tmp_right_name_17 );
            if ( tmp_xrange_high_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 299;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_iter_arg_4 = BUILTIN_XRANGE2( tmp_xrange_low_4, tmp_xrange_high_4 );
            Py_DECREF( tmp_xrange_high_4 );
            if ( tmp_iter_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 299;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_4 );
            Py_DECREF( tmp_iter_arg_4 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 299;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_for_loop_4__for_iterator;
                tmp_for_loop_4__for_iterator = tmp_assign_source_21;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT( tmp_for_loop_4__for_iterator );
            tmp_next_source_4 = tmp_for_loop_4__for_iterator;
            tmp_assign_source_22 = ITERATOR_NEXT( tmp_next_source_4 );
            if ( tmp_assign_source_22 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_5;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 299;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_for_loop_4__iter_value;
                tmp_for_loop_4__iter_value = tmp_assign_source_22;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT( tmp_for_loop_4__iter_value );
            tmp_assign_source_23 = tmp_for_loop_4__iter_value;
            {
                PyObject *old = var_k;
                var_k = tmp_assign_source_23;
                Py_INCREF( var_k );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_left_name_18;
            PyObject *tmp_right_name_18;
            CHECK_OBJECT( var_lseed );
            tmp_left_name_18 = var_lseed;
            tmp_right_name_18 = const_int_pos_2;
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_18, tmp_right_name_18 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 300;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_24 = tmp_left_name_18;
            var_lseed = tmp_assign_source_24;

        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_left_name_19;
            PyObject *tmp_right_name_19;
            PyObject *tmp_subscript_result_1;
            int tmp_truth_name_1;
            CHECK_OBJECT( var_includ );
            tmp_subscribed_name_4 = var_includ;
            CHECK_OBJECT( var_k );
            tmp_left_name_19 = var_k;
            tmp_right_name_19 = const_int_pos_1;
            tmp_subscript_name_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_19, tmp_right_name_19 );
            if ( tmp_subscript_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 301;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_subscript_result_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_subscript_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 301;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_subscript_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscript_result_1 );

                exception_lineno = 301;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_subscript_result_1 );
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
                PyObject *tmp_assign_source_25;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_25;
                PyObject *tmp_mvar_value_11;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_int_arg_1;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_int_arg_2;
                PyObject *tmp_left_name_20;
                PyObject *tmp_right_name_20;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_source_name_26;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_left_name_21;
                PyObject *tmp_right_name_21;
                PyObject *tmp_left_name_22;
                PyObject *tmp_left_name_23;
                PyObject *tmp_right_name_22;
                PyObject *tmp_right_name_23;
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 302;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }

                tmp_source_name_25 = tmp_mvar_value_11;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_bitwise_xor );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 302;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }
                if ( var_newv == NULL )
                {
                    Py_DECREF( tmp_called_name_3 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "newv" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 303;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }

                tmp_int_arg_1 = var_newv;
                tmp_args_element_name_4 = PyNumber_Int( tmp_int_arg_1 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 303;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( var_lseed );
                tmp_left_name_20 = var_lseed;
                CHECK_OBJECT( par_self );
                tmp_source_name_26 = par_self;
                tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_v );
                if ( tmp_subscribed_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_element_name_4 );

                    exception_lineno = 304;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( var_i );
                tmp_left_name_21 = var_i;
                tmp_right_name_21 = const_int_pos_1;
                tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_21, tmp_right_name_21 );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_element_name_4 );
                    Py_DECREF( tmp_subscribed_name_5 );

                    exception_lineno = 304;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_subscript_name_5 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_subscript_name_5, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( var_j );
                tmp_left_name_23 = var_j;
                CHECK_OBJECT( var_k );
                tmp_right_name_22 = var_k;
                tmp_left_name_22 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_22 );
                if ( tmp_left_name_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_element_name_4 );
                    Py_DECREF( tmp_subscribed_name_5 );
                    Py_DECREF( tmp_subscript_name_5 );

                    exception_lineno = 304;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_right_name_23 = const_int_pos_1;
                tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_22, tmp_right_name_23 );
                Py_DECREF( tmp_left_name_22 );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_element_name_4 );
                    Py_DECREF( tmp_subscribed_name_5 );
                    Py_DECREF( tmp_subscript_name_5 );

                    exception_lineno = 304;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM( tmp_subscript_name_5, 1, tmp_tuple_element_4 );
                tmp_right_name_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                Py_DECREF( tmp_subscribed_name_5 );
                Py_DECREF( tmp_subscript_name_5 );
                if ( tmp_right_name_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_element_name_4 );

                    exception_lineno = 304;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_int_arg_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_20 );
                Py_DECREF( tmp_right_name_20 );
                if ( tmp_int_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_element_name_4 );

                    exception_lineno = 304;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_args_element_name_5 = PyNumber_Int( tmp_int_arg_2 );
                Py_DECREF( tmp_int_arg_2 );
                if ( tmp_args_element_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_element_name_4 );

                    exception_lineno = 304;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }
                frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 302;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_4 );
                Py_DECREF( tmp_args_element_name_5 );
                if ( tmp_assign_source_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 302;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }
                {
                    PyObject *old = var_newv;
                    var_newv = tmp_assign_source_25;
                    Py_XDECREF( old );
                }

            }
            branch_no_5:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        goto loop_start_5;
        loop_end_5:;
        goto try_end_2;
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

        Py_XDECREF( tmp_for_loop_4__iter_value );
        tmp_for_loop_4__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
        Py_DECREF( tmp_for_loop_4__for_iterator );
        tmp_for_loop_4__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_4;
        // End of try:
        try_end_2:;
        Py_XDECREF( tmp_for_loop_4__iter_value );
        tmp_for_loop_4__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
        Py_DECREF( tmp_for_loop_4__for_iterator );
        tmp_for_loop_4__for_iterator = NULL;

        {
            PyObject *tmp_ass_subvalue_11;
            PyObject *tmp_ass_subscribed_11;
            PyObject *tmp_source_name_27;
            PyObject *tmp_ass_subscript_11;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_left_name_24;
            PyObject *tmp_right_name_24;
            PyObject *tmp_left_name_25;
            PyObject *tmp_right_name_25;
            if ( var_newv == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "newv" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 305;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_ass_subvalue_11 = var_newv;
            CHECK_OBJECT( par_self );
            tmp_source_name_27 = par_self;
            tmp_ass_subscribed_11 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_v );
            if ( tmp_ass_subscribed_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_i );
            tmp_left_name_24 = var_i;
            tmp_right_name_24 = const_int_pos_1;
            tmp_tuple_element_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_24, tmp_right_name_24 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subscribed_11 );

                exception_lineno = 305;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_ass_subscript_11 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_ass_subscript_11, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( var_j );
            tmp_left_name_25 = var_j;
            tmp_right_name_25 = const_int_pos_1;
            tmp_tuple_element_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_25, tmp_right_name_25 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subscribed_11 );
                Py_DECREF( tmp_ass_subscript_11 );

                exception_lineno = 305;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            PyTuple_SET_ITEM( tmp_ass_subscript_11, 1, tmp_tuple_element_5 );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11 );
            Py_DECREF( tmp_ass_subscribed_11 );
            Py_DECREF( tmp_ass_subscript_11 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_4;
        loop_end_4:;
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

        Py_XDECREF( tmp_for_loop_3__iter_value );
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
        Py_DECREF( tmp_for_loop_3__for_iterator );
        tmp_for_loop_3__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_2;
        // End of try:
        try_end_3:;
        Py_XDECREF( tmp_for_loop_3__iter_value );
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
        Py_DECREF( tmp_for_loop_3__for_iterator );
        tmp_for_loop_3__for_iterator = NULL;

        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        goto try_end_4;
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
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = const_int_pos_1;
            {
                PyObject *old = var_lseed;
                var_lseed = tmp_assign_source_26;
                Py_INCREF( var_lseed );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_xrange_low_5;
            PyObject *tmp_left_name_26;
            PyObject *tmp_source_name_28;
            PyObject *tmp_right_name_26;
            PyObject *tmp_xrange_high_5;
            PyObject *tmp_xrange_step_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_28 = par_self;
            tmp_left_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_maxcol );
            if ( tmp_left_name_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 309;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_26 = const_int_pos_1;
            tmp_xrange_low_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_26, tmp_right_name_26 );
            Py_DECREF( tmp_left_name_26 );
            if ( tmp_xrange_low_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 309;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_xrange_high_5 = const_int_0;
            tmp_xrange_step_2 = const_int_neg_1;
            tmp_iter_arg_5 = BUILTIN_XRANGE3( tmp_xrange_low_5, tmp_xrange_high_5, tmp_xrange_step_2 );
            Py_DECREF( tmp_xrange_low_5 );
            if ( tmp_iter_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 309;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_5 );
            Py_DECREF( tmp_iter_arg_5 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 309;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_5__for_iterator == NULL );
            tmp_for_loop_5__for_iterator = tmp_assign_source_27;
        }
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT( tmp_for_loop_5__for_iterator );
            tmp_next_source_5 = tmp_for_loop_5__for_iterator;
            tmp_assign_source_28 = ITERATOR_NEXT( tmp_next_source_5 );
            if ( tmp_assign_source_28 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_6;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 309;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_for_loop_5__iter_value;
                tmp_for_loop_5__iter_value = tmp_assign_source_28;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_29;
            CHECK_OBJECT( tmp_for_loop_5__iter_value );
            tmp_assign_source_29 = tmp_for_loop_5__iter_value;
            {
                PyObject *old = var_j;
                var_j = tmp_assign_source_29;
                Py_INCREF( var_j );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_left_name_27;
            PyObject *tmp_right_name_27;
            CHECK_OBJECT( var_lseed );
            tmp_left_name_27 = var_lseed;
            tmp_right_name_27 = const_int_pos_2;
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_27, tmp_right_name_27 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_30 = tmp_left_name_27;
            var_lseed = tmp_assign_source_30;

        }
        {
            PyObject *tmp_ass_subvalue_12;
            PyObject *tmp_left_name_28;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_source_name_29;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            PyObject *tmp_left_name_29;
            PyObject *tmp_right_name_28;
            PyObject *tmp_right_name_29;
            PyObject *tmp_ass_subscribed_12;
            PyObject *tmp_source_name_30;
            PyObject *tmp_ass_subscript_12;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_start_name_3;
            PyObject *tmp_stop_name_3;
            PyObject *tmp_step_name_3;
            PyObject *tmp_left_name_30;
            PyObject *tmp_right_name_30;
            CHECK_OBJECT( par_self );
            tmp_source_name_29 = par_self;
            tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_v );
            if ( tmp_subscribed_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_start_name_2 = const_int_0;
            CHECK_OBJECT( par_dim_num );
            tmp_stop_name_2 = par_dim_num;
            tmp_step_name_2 = Py_None;
            tmp_tuple_element_6 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            assert( !(tmp_tuple_element_6 == NULL) );
            tmp_subscript_name_6 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_6, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_j );
            tmp_left_name_29 = var_j;
            tmp_right_name_28 = const_int_pos_1;
            tmp_tuple_element_6 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_29, tmp_right_name_28 );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_6 );
                Py_DECREF( tmp_subscript_name_6 );

                exception_lineno = 311;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            PyTuple_SET_ITEM( tmp_subscript_name_6, 1, tmp_tuple_element_6 );
            tmp_left_name_28 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            Py_DECREF( tmp_subscribed_name_6 );
            Py_DECREF( tmp_subscript_name_6 );
            if ( tmp_left_name_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( var_lseed );
            tmp_right_name_29 = var_lseed;
            tmp_ass_subvalue_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_28, tmp_right_name_29 );
            Py_DECREF( tmp_left_name_28 );
            if ( tmp_ass_subvalue_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_30 = par_self;
            tmp_ass_subscribed_12 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_v );
            if ( tmp_ass_subscribed_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_12 );

                exception_lineno = 311;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_start_name_3 = const_int_0;
            CHECK_OBJECT( par_dim_num );
            tmp_stop_name_3 = par_dim_num;
            tmp_step_name_3 = Py_None;
            tmp_tuple_element_7 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
            assert( !(tmp_tuple_element_7 == NULL) );
            tmp_ass_subscript_12 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_ass_subscript_12, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( var_j );
            tmp_left_name_30 = var_j;
            tmp_right_name_30 = const_int_pos_1;
            tmp_tuple_element_7 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_30, tmp_right_name_30 );
            if ( tmp_tuple_element_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_12 );
                Py_DECREF( tmp_ass_subscribed_12 );
                Py_DECREF( tmp_ass_subscript_12 );

                exception_lineno = 311;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            PyTuple_SET_ITEM( tmp_ass_subscript_12, 1, tmp_tuple_element_7 );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12 );
            Py_DECREF( tmp_ass_subscribed_12 );
            Py_DECREF( tmp_ass_subscript_12 );
            Py_DECREF( tmp_ass_subvalue_12 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 309;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        goto loop_start_6;
        loop_end_6:;
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

        Py_XDECREF( tmp_for_loop_5__iter_value );
        tmp_for_loop_5__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
        Py_DECREF( tmp_for_loop_5__for_iterator );
        tmp_for_loop_5__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_1;
        // End of try:
        try_end_5:;
        Py_XDECREF( tmp_for_loop_5__iter_value );
        tmp_for_loop_5__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
        Py_DECREF( tmp_for_loop_5__for_iterator );
        tmp_for_loop_5__for_iterator = NULL;

        {
            PyObject *tmp_assattr_name_13;
            PyObject *tmp_left_name_31;
            PyObject *tmp_right_name_31;
            PyObject *tmp_left_name_32;
            PyObject *tmp_right_name_32;
            PyObject *tmp_assattr_target_13;
            tmp_left_name_31 = const_float_1_0;
            tmp_left_name_32 = const_int_pos_2;
            CHECK_OBJECT( var_lseed );
            tmp_right_name_32 = var_lseed;
            tmp_right_name_31 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_32, tmp_right_name_32 );
            if ( tmp_right_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 314;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_13 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_31, tmp_right_name_31 );
            Py_DECREF( tmp_right_name_31 );
            if ( tmp_assattr_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 314;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_13 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_recipd, tmp_assattr_name_13 );
            Py_DECREF( tmp_assattr_name_13 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 314;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_14;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_assattr_target_14;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 315;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_10 = tmp_mvar_value_12;
            CHECK_OBJECT( par_dim_num );
            tmp_args_element_name_6 = par_dim_num;
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 315;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_assattr_name_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_zeros, call_args );
            }

            if ( tmp_assattr_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 315;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_14 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_lastq, tmp_assattr_name_14 );
            Py_DECREF( tmp_assattr_name_14 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 315;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 317;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = tmp_mvar_value_13;
        CHECK_OBJECT( par_seed );
        tmp_args_element_name_7 = par_seed;
        frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_int_arg_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_floor, call_args );
        }

        if ( tmp_int_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_31 = PyNumber_Int( tmp_int_arg_3 );
        Py_DECREF( tmp_int_arg_3 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_seed;
            assert( old != NULL );
            par_seed = tmp_assign_source_31;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_seed );
        tmp_compexpr_left_6 = par_seed;
        tmp_compexpr_right_6 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_assign_source_32;
            tmp_assign_source_32 = const_int_0;
            {
                PyObject *old = par_seed;
                assert( old != NULL );
                par_seed = tmp_assign_source_32;
                Py_INCREF( par_seed );
                Py_DECREF( old );
            }

        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = const_int_pos_1;
        {
            PyObject *old = var_lseed;
            var_lseed = tmp_assign_source_33;
            Py_INCREF( var_lseed );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( par_seed );
        tmp_compexpr_left_7 = par_seed;
        tmp_compexpr_right_7 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_assattr_name_15;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_assattr_target_15;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 324;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_12 = tmp_mvar_value_14;
            CHECK_OBJECT( par_dim_num );
            tmp_args_element_name_8 = par_dim_num;
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 324;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_assattr_name_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_zeros, call_args );
            }

            if ( tmp_assattr_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 324;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_15 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_lastq, tmp_assattr_name_15 );
            Py_DECREF( tmp_assattr_name_15 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 324;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_7;
        branch_no_7:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_left_name_33;
            PyObject *tmp_source_name_31;
            PyObject *tmp_right_name_33;
            CHECK_OBJECT( par_seed );
            tmp_compexpr_left_8 = par_seed;
            CHECK_OBJECT( par_self );
            tmp_source_name_31 = par_self;
            tmp_left_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_seed_save );
            if ( tmp_left_name_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_33 = const_int_pos_1;
            tmp_compexpr_right_8 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_33, tmp_right_name_33 );
            Py_DECREF( tmp_left_name_33 );
            if ( tmp_compexpr_right_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            Py_DECREF( tmp_compexpr_right_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "ooooooooooooo";
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
            {
                PyObject *tmp_assign_source_34;
                PyObject *tmp_called_instance_13;
                PyObject *tmp_args_element_name_9;
                CHECK_OBJECT( par_self );
                tmp_called_instance_13 = par_self;
                CHECK_OBJECT( par_seed );
                tmp_args_element_name_9 = par_seed;
                frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 329;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9 };
                    tmp_assign_source_34 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_i4_bit_lo0, call_args );
                }

                if ( tmp_assign_source_34 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 329;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_lseed;
                    assert( old != NULL );
                    var_lseed = tmp_assign_source_34;
                    Py_DECREF( old );
                }

            }
            goto branch_end_8;
            branch_no_8:;
            {
                nuitka_bool tmp_condition_result_9;
                PyObject *tmp_compexpr_left_9;
                PyObject *tmp_compexpr_right_9;
                PyObject *tmp_source_name_32;
                CHECK_OBJECT( par_seed );
                tmp_compexpr_left_9 = par_seed;
                CHECK_OBJECT( par_self );
                tmp_source_name_32 = par_self;
                tmp_compexpr_right_9 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_seed_save );
                if ( tmp_compexpr_right_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 331;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                Py_DECREF( tmp_compexpr_right_9 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 331;
                    type_description_1 = "ooooooooooooo";
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
                    PyObject *tmp_assattr_name_16;
                    PyObject *tmp_assattr_target_16;
                    tmp_assattr_name_16 = const_int_0;
                    CHECK_OBJECT( par_self );
                    tmp_assattr_target_16 = par_self;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_seed_save, tmp_assattr_name_16 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 333;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                }
                {
                    PyObject *tmp_assattr_name_17;
                    PyObject *tmp_called_instance_14;
                    PyObject *tmp_mvar_value_15;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_assattr_target_17;
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 334;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_14 = tmp_mvar_value_15;
                    CHECK_OBJECT( par_dim_num );
                    tmp_args_element_name_10 = par_dim_num;
                    frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 334;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_10 };
                        tmp_assattr_name_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_zeros, call_args );
                    }

                    if ( tmp_assattr_name_17 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 334;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_assattr_target_17 = par_self;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_lastq, tmp_assattr_name_17 );
                    Py_DECREF( tmp_assattr_name_17 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 334;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                }
                {
                    PyObject *tmp_assign_source_35;
                    PyObject *tmp_iter_arg_6;
                    PyObject *tmp_xrange_low_6;
                    PyObject *tmp_int_arg_4;
                    PyObject *tmp_source_name_33;
                    PyObject *tmp_xrange_high_6;
                    PyObject *tmp_int_arg_5;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_33 = par_self;
                    tmp_int_arg_4 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_seed_save );
                    if ( tmp_int_arg_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 336;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_xrange_low_6 = PyNumber_Int( tmp_int_arg_4 );
                    Py_DECREF( tmp_int_arg_4 );
                    if ( tmp_xrange_low_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 336;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_seed );
                    tmp_int_arg_5 = par_seed;
                    tmp_xrange_high_6 = PyNumber_Int( tmp_int_arg_5 );
                    if ( tmp_xrange_high_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_xrange_low_6 );

                        exception_lineno = 336;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_iter_arg_6 = BUILTIN_XRANGE2( tmp_xrange_low_6, tmp_xrange_high_6 );
                    Py_DECREF( tmp_xrange_low_6 );
                    Py_DECREF( tmp_xrange_high_6 );
                    if ( tmp_iter_arg_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 336;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_35 = MAKE_ITERATOR( tmp_iter_arg_6 );
                    Py_DECREF( tmp_iter_arg_6 );
                    if ( tmp_assign_source_35 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 336;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( tmp_for_loop_6__for_iterator == NULL );
                    tmp_for_loop_6__for_iterator = tmp_assign_source_35;
                }
                // Tried code:
                loop_start_7:;
                {
                    PyObject *tmp_next_source_6;
                    PyObject *tmp_assign_source_36;
                    CHECK_OBJECT( tmp_for_loop_6__for_iterator );
                    tmp_next_source_6 = tmp_for_loop_6__for_iterator;
                    tmp_assign_source_36 = ITERATOR_NEXT( tmp_next_source_6 );
                    if ( tmp_assign_source_36 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_7;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "ooooooooooooo";
                            exception_lineno = 336;
                            goto try_except_handler_7;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_6__iter_value;
                        tmp_for_loop_6__iter_value = tmp_assign_source_36;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_37;
                    CHECK_OBJECT( tmp_for_loop_6__iter_value );
                    tmp_assign_source_37 = tmp_for_loop_6__iter_value;
                    {
                        PyObject *old = var_seed_temp;
                        var_seed_temp = tmp_assign_source_37;
                        Py_INCREF( var_seed_temp );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_38;
                    PyObject *tmp_called_instance_15;
                    PyObject *tmp_args_element_name_11;
                    CHECK_OBJECT( par_self );
                    tmp_called_instance_15 = par_self;
                    CHECK_OBJECT( var_seed_temp );
                    tmp_args_element_name_11 = var_seed_temp;
                    frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 337;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_11 };
                        tmp_assign_source_38 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_15, const_str_plain_i4_bit_lo0, call_args );
                    }

                    if ( tmp_assign_source_38 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 337;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_7;
                    }
                    {
                        PyObject *old = var_lseed;
                        assert( old != NULL );
                        var_lseed = tmp_assign_source_38;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_39;
                    PyObject *tmp_iter_arg_7;
                    PyObject *tmp_xrange_low_7;
                    PyObject *tmp_xrange_high_7;
                    PyObject *tmp_left_name_34;
                    PyObject *tmp_right_name_34;
                    tmp_xrange_low_7 = const_int_pos_1;
                    CHECK_OBJECT( par_dim_num );
                    tmp_left_name_34 = par_dim_num;
                    tmp_right_name_34 = const_int_pos_1;
                    tmp_xrange_high_7 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_34, tmp_right_name_34 );
                    if ( tmp_xrange_high_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 338;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_iter_arg_7 = BUILTIN_XRANGE2( tmp_xrange_low_7, tmp_xrange_high_7 );
                    Py_DECREF( tmp_xrange_high_7 );
                    if ( tmp_iter_arg_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 338;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_assign_source_39 = MAKE_ITERATOR( tmp_iter_arg_7 );
                    Py_DECREF( tmp_iter_arg_7 );
                    if ( tmp_assign_source_39 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 338;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_7;
                    }
                    {
                        PyObject *old = tmp_for_loop_7__for_iterator;
                        tmp_for_loop_7__for_iterator = tmp_assign_source_39;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                loop_start_8:;
                {
                    PyObject *tmp_next_source_7;
                    PyObject *tmp_assign_source_40;
                    CHECK_OBJECT( tmp_for_loop_7__for_iterator );
                    tmp_next_source_7 = tmp_for_loop_7__for_iterator;
                    tmp_assign_source_40 = ITERATOR_NEXT( tmp_next_source_7 );
                    if ( tmp_assign_source_40 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_8;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "ooooooooooooo";
                            exception_lineno = 338;
                            goto try_except_handler_8;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_7__iter_value;
                        tmp_for_loop_7__iter_value = tmp_assign_source_40;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_41;
                    CHECK_OBJECT( tmp_for_loop_7__iter_value );
                    tmp_assign_source_41 = tmp_for_loop_7__iter_value;
                    {
                        PyObject *old = var_i;
                        var_i = tmp_assign_source_41;
                        Py_INCREF( var_i );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_ass_subvalue_13;
                    PyObject *tmp_called_name_4;
                    PyObject *tmp_source_name_34;
                    PyObject *tmp_mvar_value_16;
                    PyObject *tmp_args_element_name_12;
                    PyObject *tmp_int_arg_6;
                    PyObject *tmp_subscribed_name_7;
                    PyObject *tmp_source_name_35;
                    PyObject *tmp_subscript_name_7;
                    PyObject *tmp_left_name_35;
                    PyObject *tmp_right_name_35;
                    PyObject *tmp_args_element_name_13;
                    PyObject *tmp_int_arg_7;
                    PyObject *tmp_subscribed_name_8;
                    PyObject *tmp_source_name_36;
                    PyObject *tmp_subscript_name_8;
                    PyObject *tmp_tuple_element_8;
                    PyObject *tmp_left_name_36;
                    PyObject *tmp_right_name_36;
                    PyObject *tmp_left_name_37;
                    PyObject *tmp_right_name_37;
                    PyObject *tmp_ass_subscribed_13;
                    PyObject *tmp_source_name_37;
                    PyObject *tmp_ass_subscript_13;
                    PyObject *tmp_left_name_38;
                    PyObject *tmp_right_name_38;
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 339;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }

                    tmp_source_name_34 = tmp_mvar_value_16;
                    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_bitwise_xor );
                    if ( tmp_called_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 339;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_35 = par_self;
                    tmp_subscribed_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_lastq );
                    if ( tmp_subscribed_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );

                        exception_lineno = 340;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }
                    CHECK_OBJECT( var_i );
                    tmp_left_name_35 = var_i;
                    tmp_right_name_35 = const_int_pos_1;
                    tmp_subscript_name_7 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_35, tmp_right_name_35 );
                    if ( tmp_subscript_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_subscribed_name_7 );

                        exception_lineno = 340;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }
                    tmp_int_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                    Py_DECREF( tmp_subscribed_name_7 );
                    Py_DECREF( tmp_subscript_name_7 );
                    if ( tmp_int_arg_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );

                        exception_lineno = 340;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }
                    tmp_args_element_name_12 = PyNumber_Int( tmp_int_arg_6 );
                    Py_DECREF( tmp_int_arg_6 );
                    if ( tmp_args_element_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );

                        exception_lineno = 340;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_36 = par_self;
                    tmp_subscribed_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_v );
                    if ( tmp_subscribed_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_args_element_name_12 );

                        exception_lineno = 340;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }
                    CHECK_OBJECT( var_i );
                    tmp_left_name_36 = var_i;
                    tmp_right_name_36 = const_int_pos_1;
                    tmp_tuple_element_8 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_36, tmp_right_name_36 );
                    if ( tmp_tuple_element_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_args_element_name_12 );
                        Py_DECREF( tmp_subscribed_name_8 );

                        exception_lineno = 340;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }
                    tmp_subscript_name_8 = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_subscript_name_8, 0, tmp_tuple_element_8 );
                    CHECK_OBJECT( var_lseed );
                    tmp_left_name_37 = var_lseed;
                    tmp_right_name_37 = const_int_pos_1;
                    tmp_tuple_element_8 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_37, tmp_right_name_37 );
                    if ( tmp_tuple_element_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_args_element_name_12 );
                        Py_DECREF( tmp_subscribed_name_8 );
                        Py_DECREF( tmp_subscript_name_8 );

                        exception_lineno = 340;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }
                    PyTuple_SET_ITEM( tmp_subscript_name_8, 1, tmp_tuple_element_8 );
                    tmp_int_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
                    Py_DECREF( tmp_subscribed_name_8 );
                    Py_DECREF( tmp_subscript_name_8 );
                    if ( tmp_int_arg_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_args_element_name_12 );

                        exception_lineno = 340;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }
                    tmp_args_element_name_13 = PyNumber_Int( tmp_int_arg_7 );
                    Py_DECREF( tmp_int_arg_7 );
                    if ( tmp_args_element_name_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_args_element_name_12 );

                        exception_lineno = 340;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }
                    frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 339;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
                        tmp_ass_subvalue_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                    }

                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_element_name_12 );
                    Py_DECREF( tmp_args_element_name_13 );
                    if ( tmp_ass_subvalue_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 339;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_37 = par_self;
                    tmp_ass_subscribed_13 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_lastq );
                    if ( tmp_ass_subscribed_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_ass_subvalue_13 );

                        exception_lineno = 339;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }
                    CHECK_OBJECT( var_i );
                    tmp_left_name_38 = var_i;
                    tmp_right_name_38 = const_int_pos_1;
                    tmp_ass_subscript_13 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_38, tmp_right_name_38 );
                    if ( tmp_ass_subscript_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_ass_subvalue_13 );
                        Py_DECREF( tmp_ass_subscribed_13 );

                        exception_lineno = 339;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }
                    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13 );
                    Py_DECREF( tmp_ass_subscribed_13 );
                    Py_DECREF( tmp_ass_subscript_13 );
                    Py_DECREF( tmp_ass_subvalue_13 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 339;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_8;
                    }
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 338;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_8;
                }
                goto loop_start_8;
                loop_end_8:;
                goto try_end_6;
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

                Py_XDECREF( tmp_for_loop_7__iter_value );
                tmp_for_loop_7__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_7__for_iterator );
                Py_DECREF( tmp_for_loop_7__for_iterator );
                tmp_for_loop_7__for_iterator = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_6;
                exception_value = exception_keeper_value_6;
                exception_tb = exception_keeper_tb_6;
                exception_lineno = exception_keeper_lineno_6;

                goto try_except_handler_7;
                // End of try:
                try_end_6:;
                Py_XDECREF( tmp_for_loop_7__iter_value );
                tmp_for_loop_7__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_7__for_iterator );
                Py_DECREF( tmp_for_loop_7__for_iterator );
                tmp_for_loop_7__for_iterator = NULL;

                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 336;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_7;
                }
                goto loop_start_7;
                loop_end_7:;
                goto try_end_7;
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

                Py_XDECREF( tmp_for_loop_6__iter_value );
                tmp_for_loop_6__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
                Py_DECREF( tmp_for_loop_6__for_iterator );
                tmp_for_loop_6__for_iterator = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_7;
                exception_value = exception_keeper_value_7;
                exception_tb = exception_keeper_tb_7;
                exception_lineno = exception_keeper_lineno_7;

                goto frame_exception_exit_1;
                // End of try:
                try_end_7:;
                Py_XDECREF( tmp_for_loop_6__iter_value );
                tmp_for_loop_6__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
                Py_DECREF( tmp_for_loop_6__for_iterator );
                tmp_for_loop_6__for_iterator = NULL;

                {
                    PyObject *tmp_assign_source_42;
                    PyObject *tmp_called_instance_16;
                    PyObject *tmp_args_element_name_14;
                    CHECK_OBJECT( par_self );
                    tmp_called_instance_16 = par_self;
                    CHECK_OBJECT( par_seed );
                    tmp_args_element_name_14 = par_seed;
                    frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 342;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_14 };
                        tmp_assign_source_42 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_16, const_str_plain_i4_bit_lo0, call_args );
                    }

                    if ( tmp_assign_source_42 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 342;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_lseed;
                        assert( old != NULL );
                        var_lseed = tmp_assign_source_42;
                        Py_DECREF( old );
                    }

                }
                goto branch_end_9;
                branch_no_9:;
                {
                    nuitka_bool tmp_condition_result_10;
                    PyObject *tmp_compexpr_left_10;
                    PyObject *tmp_compexpr_right_10;
                    PyObject *tmp_left_name_39;
                    PyObject *tmp_source_name_38;
                    PyObject *tmp_right_name_39;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_38 = par_self;
                    tmp_left_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_seed_save );
                    if ( tmp_left_name_39 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 344;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_39 = const_int_pos_1;
                    tmp_compexpr_left_10 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_39, tmp_right_name_39 );
                    Py_DECREF( tmp_left_name_39 );
                    if ( tmp_compexpr_left_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 344;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_seed );
                    tmp_compexpr_right_10 = par_seed;
                    tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                    Py_DECREF( tmp_compexpr_left_10 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 344;
                        type_description_1 = "ooooooooooooo";
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
                        PyObject *tmp_assign_source_43;
                        PyObject *tmp_iter_arg_8;
                        PyObject *tmp_xrange_low_8;
                        PyObject *tmp_int_arg_8;
                        PyObject *tmp_left_name_40;
                        PyObject *tmp_source_name_39;
                        PyObject *tmp_right_name_40;
                        PyObject *tmp_xrange_high_8;
                        PyObject *tmp_int_arg_9;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_39 = par_self;
                        tmp_left_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_seed_save );
                        if ( tmp_left_name_40 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 346;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_right_name_40 = const_int_pos_1;
                        tmp_int_arg_8 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_40, tmp_right_name_40 );
                        Py_DECREF( tmp_left_name_40 );
                        if ( tmp_int_arg_8 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 346;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_xrange_low_8 = PyNumber_Int( tmp_int_arg_8 );
                        Py_DECREF( tmp_int_arg_8 );
                        if ( tmp_xrange_low_8 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 346;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( par_seed );
                        tmp_int_arg_9 = par_seed;
                        tmp_xrange_high_8 = PyNumber_Int( tmp_int_arg_9 );
                        if ( tmp_xrange_high_8 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_xrange_low_8 );

                            exception_lineno = 346;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_iter_arg_8 = BUILTIN_XRANGE2( tmp_xrange_low_8, tmp_xrange_high_8 );
                        Py_DECREF( tmp_xrange_low_8 );
                        Py_DECREF( tmp_xrange_high_8 );
                        if ( tmp_iter_arg_8 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 346;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_43 = MAKE_ITERATOR( tmp_iter_arg_8 );
                        Py_DECREF( tmp_iter_arg_8 );
                        if ( tmp_assign_source_43 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 346;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( tmp_for_loop_8__for_iterator == NULL );
                        tmp_for_loop_8__for_iterator = tmp_assign_source_43;
                    }
                    // Tried code:
                    loop_start_9:;
                    {
                        PyObject *tmp_next_source_8;
                        PyObject *tmp_assign_source_44;
                        CHECK_OBJECT( tmp_for_loop_8__for_iterator );
                        tmp_next_source_8 = tmp_for_loop_8__for_iterator;
                        tmp_assign_source_44 = ITERATOR_NEXT( tmp_next_source_8 );
                        if ( tmp_assign_source_44 == NULL )
                        {
                            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                            {

                                goto loop_end_9;
                            }
                            else
                            {

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                type_description_1 = "ooooooooooooo";
                                exception_lineno = 346;
                                goto try_except_handler_9;
                            }
                        }

                        {
                            PyObject *old = tmp_for_loop_8__iter_value;
                            tmp_for_loop_8__iter_value = tmp_assign_source_44;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_45;
                        CHECK_OBJECT( tmp_for_loop_8__iter_value );
                        tmp_assign_source_45 = tmp_for_loop_8__iter_value;
                        {
                            PyObject *old = var_seed_temp;
                            var_seed_temp = tmp_assign_source_45;
                            Py_INCREF( var_seed_temp );
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_46;
                        PyObject *tmp_called_instance_17;
                        PyObject *tmp_args_element_name_15;
                        CHECK_OBJECT( par_self );
                        tmp_called_instance_17 = par_self;
                        CHECK_OBJECT( var_seed_temp );
                        tmp_args_element_name_15 = var_seed_temp;
                        frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 347;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_15 };
                            tmp_assign_source_46 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_17, const_str_plain_i4_bit_lo0, call_args );
                        }

                        if ( tmp_assign_source_46 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 347;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_9;
                        }
                        {
                            PyObject *old = var_lseed;
                            assert( old != NULL );
                            var_lseed = tmp_assign_source_46;
                            Py_DECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_47;
                        PyObject *tmp_iter_arg_9;
                        PyObject *tmp_xrange_low_9;
                        PyObject *tmp_xrange_high_9;
                        PyObject *tmp_left_name_41;
                        PyObject *tmp_right_name_41;
                        tmp_xrange_low_9 = const_int_pos_1;
                        CHECK_OBJECT( par_dim_num );
                        tmp_left_name_41 = par_dim_num;
                        tmp_right_name_41 = const_int_pos_1;
                        tmp_xrange_high_9 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_41, tmp_right_name_41 );
                        if ( tmp_xrange_high_9 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 348;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_9;
                        }
                        tmp_iter_arg_9 = BUILTIN_XRANGE2( tmp_xrange_low_9, tmp_xrange_high_9 );
                        Py_DECREF( tmp_xrange_high_9 );
                        if ( tmp_iter_arg_9 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 348;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_9;
                        }
                        tmp_assign_source_47 = MAKE_ITERATOR( tmp_iter_arg_9 );
                        Py_DECREF( tmp_iter_arg_9 );
                        if ( tmp_assign_source_47 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 348;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_9;
                        }
                        {
                            PyObject *old = tmp_for_loop_9__for_iterator;
                            tmp_for_loop_9__for_iterator = tmp_assign_source_47;
                            Py_XDECREF( old );
                        }

                    }
                    // Tried code:
                    loop_start_10:;
                    {
                        PyObject *tmp_next_source_9;
                        PyObject *tmp_assign_source_48;
                        CHECK_OBJECT( tmp_for_loop_9__for_iterator );
                        tmp_next_source_9 = tmp_for_loop_9__for_iterator;
                        tmp_assign_source_48 = ITERATOR_NEXT( tmp_next_source_9 );
                        if ( tmp_assign_source_48 == NULL )
                        {
                            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                            {

                                goto loop_end_10;
                            }
                            else
                            {

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                type_description_1 = "ooooooooooooo";
                                exception_lineno = 348;
                                goto try_except_handler_10;
                            }
                        }

                        {
                            PyObject *old = tmp_for_loop_9__iter_value;
                            tmp_for_loop_9__iter_value = tmp_assign_source_48;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_49;
                        CHECK_OBJECT( tmp_for_loop_9__iter_value );
                        tmp_assign_source_49 = tmp_for_loop_9__iter_value;
                        {
                            PyObject *old = var_i;
                            var_i = tmp_assign_source_49;
                            Py_INCREF( var_i );
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_ass_subvalue_14;
                        PyObject *tmp_called_name_5;
                        PyObject *tmp_source_name_40;
                        PyObject *tmp_mvar_value_17;
                        PyObject *tmp_args_element_name_16;
                        PyObject *tmp_int_arg_10;
                        PyObject *tmp_subscribed_name_9;
                        PyObject *tmp_source_name_41;
                        PyObject *tmp_subscript_name_9;
                        PyObject *tmp_left_name_42;
                        PyObject *tmp_right_name_42;
                        PyObject *tmp_args_element_name_17;
                        PyObject *tmp_int_arg_11;
                        PyObject *tmp_subscribed_name_10;
                        PyObject *tmp_source_name_42;
                        PyObject *tmp_subscript_name_10;
                        PyObject *tmp_tuple_element_9;
                        PyObject *tmp_left_name_43;
                        PyObject *tmp_right_name_43;
                        PyObject *tmp_left_name_44;
                        PyObject *tmp_right_name_44;
                        PyObject *tmp_ass_subscribed_14;
                        PyObject *tmp_source_name_43;
                        PyObject *tmp_ass_subscript_14;
                        PyObject *tmp_left_name_45;
                        PyObject *tmp_right_name_45;
                        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

                            exception_lineno = 349;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }

                        tmp_source_name_40 = tmp_mvar_value_17;
                        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_bitwise_xor );
                        if ( tmp_called_name_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 349;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }
                        CHECK_OBJECT( par_self );
                        tmp_source_name_41 = par_self;
                        tmp_subscribed_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_lastq );
                        if ( tmp_subscribed_name_9 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_5 );

                            exception_lineno = 350;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }
                        CHECK_OBJECT( var_i );
                        tmp_left_name_42 = var_i;
                        tmp_right_name_42 = const_int_pos_1;
                        tmp_subscript_name_9 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_42, tmp_right_name_42 );
                        if ( tmp_subscript_name_9 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_5 );
                            Py_DECREF( tmp_subscribed_name_9 );

                            exception_lineno = 350;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }
                        tmp_int_arg_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
                        Py_DECREF( tmp_subscribed_name_9 );
                        Py_DECREF( tmp_subscript_name_9 );
                        if ( tmp_int_arg_10 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_5 );

                            exception_lineno = 350;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }
                        tmp_args_element_name_16 = PyNumber_Int( tmp_int_arg_10 );
                        Py_DECREF( tmp_int_arg_10 );
                        if ( tmp_args_element_name_16 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_5 );

                            exception_lineno = 350;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }
                        CHECK_OBJECT( par_self );
                        tmp_source_name_42 = par_self;
                        tmp_subscribed_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_v );
                        if ( tmp_subscribed_name_10 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_5 );
                            Py_DECREF( tmp_args_element_name_16 );

                            exception_lineno = 350;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }
                        CHECK_OBJECT( var_i );
                        tmp_left_name_43 = var_i;
                        tmp_right_name_43 = const_int_pos_1;
                        tmp_tuple_element_9 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_43, tmp_right_name_43 );
                        if ( tmp_tuple_element_9 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_5 );
                            Py_DECREF( tmp_args_element_name_16 );
                            Py_DECREF( tmp_subscribed_name_10 );

                            exception_lineno = 350;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }
                        tmp_subscript_name_10 = PyTuple_New( 2 );
                        PyTuple_SET_ITEM( tmp_subscript_name_10, 0, tmp_tuple_element_9 );
                        CHECK_OBJECT( var_lseed );
                        tmp_left_name_44 = var_lseed;
                        tmp_right_name_44 = const_int_pos_1;
                        tmp_tuple_element_9 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_44, tmp_right_name_44 );
                        if ( tmp_tuple_element_9 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_5 );
                            Py_DECREF( tmp_args_element_name_16 );
                            Py_DECREF( tmp_subscribed_name_10 );
                            Py_DECREF( tmp_subscript_name_10 );

                            exception_lineno = 350;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }
                        PyTuple_SET_ITEM( tmp_subscript_name_10, 1, tmp_tuple_element_9 );
                        tmp_int_arg_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
                        Py_DECREF( tmp_subscribed_name_10 );
                        Py_DECREF( tmp_subscript_name_10 );
                        if ( tmp_int_arg_11 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_5 );
                            Py_DECREF( tmp_args_element_name_16 );

                            exception_lineno = 350;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }
                        tmp_args_element_name_17 = PyNumber_Int( tmp_int_arg_11 );
                        Py_DECREF( tmp_int_arg_11 );
                        if ( tmp_args_element_name_17 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_5 );
                            Py_DECREF( tmp_args_element_name_16 );

                            exception_lineno = 350;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }
                        frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 349;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
                            tmp_ass_subvalue_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
                        }

                        Py_DECREF( tmp_called_name_5 );
                        Py_DECREF( tmp_args_element_name_16 );
                        Py_DECREF( tmp_args_element_name_17 );
                        if ( tmp_ass_subvalue_14 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 349;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }
                        CHECK_OBJECT( par_self );
                        tmp_source_name_43 = par_self;
                        tmp_ass_subscribed_14 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_lastq );
                        if ( tmp_ass_subscribed_14 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_ass_subvalue_14 );

                            exception_lineno = 349;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }
                        CHECK_OBJECT( var_i );
                        tmp_left_name_45 = var_i;
                        tmp_right_name_45 = const_int_pos_1;
                        tmp_ass_subscript_14 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_45, tmp_right_name_45 );
                        if ( tmp_ass_subscript_14 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_ass_subvalue_14 );
                            Py_DECREF( tmp_ass_subscribed_14 );

                            exception_lineno = 349;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }
                        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14 );
                        Py_DECREF( tmp_ass_subscribed_14 );
                        Py_DECREF( tmp_ass_subscript_14 );
                        Py_DECREF( tmp_ass_subvalue_14 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 349;
                            type_description_1 = "ooooooooooooo";
                            goto try_except_handler_10;
                        }
                    }
                    if ( CONSIDER_THREADING() == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 348;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_10;
                    }
                    goto loop_start_10;
                    loop_end_10:;
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

                    Py_XDECREF( tmp_for_loop_9__iter_value );
                    tmp_for_loop_9__iter_value = NULL;

                    CHECK_OBJECT( (PyObject *)tmp_for_loop_9__for_iterator );
                    Py_DECREF( tmp_for_loop_9__for_iterator );
                    tmp_for_loop_9__for_iterator = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_8;
                    exception_value = exception_keeper_value_8;
                    exception_tb = exception_keeper_tb_8;
                    exception_lineno = exception_keeper_lineno_8;

                    goto try_except_handler_9;
                    // End of try:
                    try_end_8:;
                    Py_XDECREF( tmp_for_loop_9__iter_value );
                    tmp_for_loop_9__iter_value = NULL;

                    CHECK_OBJECT( (PyObject *)tmp_for_loop_9__for_iterator );
                    Py_DECREF( tmp_for_loop_9__for_iterator );
                    tmp_for_loop_9__for_iterator = NULL;

                    if ( CONSIDER_THREADING() == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 346;
                        type_description_1 = "ooooooooooooo";
                        goto try_except_handler_9;
                    }
                    goto loop_start_9;
                    loop_end_9:;
                    goto try_end_9;
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

                    Py_XDECREF( tmp_for_loop_8__iter_value );
                    tmp_for_loop_8__iter_value = NULL;

                    CHECK_OBJECT( (PyObject *)tmp_for_loop_8__for_iterator );
                    Py_DECREF( tmp_for_loop_8__for_iterator );
                    tmp_for_loop_8__for_iterator = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_9;
                    exception_value = exception_keeper_value_9;
                    exception_tb = exception_keeper_tb_9;
                    exception_lineno = exception_keeper_lineno_9;

                    goto frame_exception_exit_1;
                    // End of try:
                    try_end_9:;
                    Py_XDECREF( tmp_for_loop_8__iter_value );
                    tmp_for_loop_8__iter_value = NULL;

                    CHECK_OBJECT( (PyObject *)tmp_for_loop_8__for_iterator );
                    Py_DECREF( tmp_for_loop_8__for_iterator );
                    tmp_for_loop_8__for_iterator = NULL;

                    {
                        PyObject *tmp_assign_source_50;
                        PyObject *tmp_called_instance_18;
                        PyObject *tmp_args_element_name_18;
                        CHECK_OBJECT( par_self );
                        tmp_called_instance_18 = par_self;
                        CHECK_OBJECT( par_seed );
                        tmp_args_element_name_18 = par_seed;
                        frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 352;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_18 };
                            tmp_assign_source_50 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_18, const_str_plain_i4_bit_lo0, call_args );
                        }

                        if ( tmp_assign_source_50 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 352;
                            type_description_1 = "ooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_lseed;
                            assert( old != NULL );
                            var_lseed = tmp_assign_source_50;
                            Py_DECREF( old );
                        }

                    }
                    branch_no_10:;
                }
                branch_end_9:;
            }
            branch_end_8:;
        }
        branch_end_7:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_source_name_44;
        CHECK_OBJECT( par_self );
        tmp_source_name_44 = par_self;
        tmp_compexpr_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_maxcol );
        if ( tmp_compexpr_left_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_lseed == NULL )
        {
            Py_DECREF( tmp_compexpr_left_11 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lseed" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 355;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_11 = var_lseed;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        Py_DECREF( tmp_compexpr_left_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_called_name_6;
            PyObject *tmp_call_result_1;
            tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_6 != NULL );
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 356;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_digest_86d9864c299ff16b8ec2193f70be6e0e_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 356;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_called_name_7;
            PyObject *tmp_call_result_2;
            tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_7 != NULL );
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 357;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_str_digest_8e40ef1b309754dc38148a7bf39b61d5_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 357;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_called_name_8;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_left_name_46;
            PyObject *tmp_right_name_46;
            PyObject *tmp_source_name_45;
            tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_8 != NULL );
            tmp_left_name_46 = const_str_digest_6ecc4bd8ecb3979e06ed67db6c17565b;
            CHECK_OBJECT( par_self );
            tmp_source_name_45 = par_self;
            tmp_right_name_46 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_maxcol );
            if ( tmp_right_name_46 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 358;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_19 = BINARY_OPERATION_REMAINDER( tmp_left_name_46, tmp_right_name_46 );
            Py_DECREF( tmp_right_name_46 );
            if ( tmp_args_element_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 358;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 358;
            {
                PyObject *call_args[] = { tmp_args_element_name_19 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_args_element_name_19 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 358;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        {
            PyObject *tmp_called_name_9;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_left_name_47;
            PyObject *tmp_right_name_47;
            tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_9 != NULL );
            tmp_left_name_47 = const_str_digest_1c6603da9b078e25421b7a2abe3bb185;
            if ( var_lseed == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lseed" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 359;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_47 = var_lseed;
            tmp_args_element_name_20 = BINARY_OPERATION_REMAINDER( tmp_left_name_47, tmp_right_name_47 );
            if ( tmp_args_element_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 359;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 359;
            {
                PyObject *call_args[] = { tmp_args_element_name_20 };
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_args_element_name_20 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 359;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_11:;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_21;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 363;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_19 = tmp_mvar_value_18;
        CHECK_OBJECT( par_dim_num );
        tmp_args_element_name_21 = par_dim_num;
        frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_assign_source_51 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_19, const_str_plain_zeros, call_args );
        }

        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_quasi == NULL );
        var_quasi = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_xrange_low_10;
        PyObject *tmp_xrange_high_10;
        PyObject *tmp_left_name_48;
        PyObject *tmp_right_name_48;
        tmp_xrange_low_10 = const_int_pos_1;
        CHECK_OBJECT( par_dim_num );
        tmp_left_name_48 = par_dim_num;
        tmp_right_name_48 = const_int_pos_1;
        tmp_xrange_high_10 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_48, tmp_right_name_48 );
        if ( tmp_xrange_high_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_10 = BUILTIN_XRANGE2( tmp_xrange_low_10, tmp_xrange_high_10 );
        Py_DECREF( tmp_xrange_high_10 );
        if ( tmp_iter_arg_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_52 = MAKE_ITERATOR( tmp_iter_arg_10 );
        Py_DECREF( tmp_iter_arg_10 );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_10__for_iterator == NULL );
        tmp_for_loop_10__for_iterator = tmp_assign_source_52;
    }
    // Tried code:
    loop_start_11:;
    {
        PyObject *tmp_next_source_10;
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT( tmp_for_loop_10__for_iterator );
        tmp_next_source_10 = tmp_for_loop_10__for_iterator;
        tmp_assign_source_53 = ITERATOR_NEXT( tmp_next_source_10 );
        if ( tmp_assign_source_53 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_11;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooo";
                exception_lineno = 364;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_10__iter_value;
            tmp_for_loop_10__iter_value = tmp_assign_source_53;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT( tmp_for_loop_10__iter_value );
        tmp_assign_source_54 = tmp_for_loop_10__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_54;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_15;
        PyObject *tmp_left_name_49;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_source_name_46;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_left_name_50;
        PyObject *tmp_right_name_49;
        PyObject *tmp_right_name_50;
        PyObject *tmp_source_name_47;
        PyObject *tmp_ass_subscribed_15;
        PyObject *tmp_ass_subscript_15;
        PyObject *tmp_left_name_51;
        PyObject *tmp_right_name_51;
        CHECK_OBJECT( par_self );
        tmp_source_name_46 = par_self;
        tmp_subscribed_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_lastq );
        if ( tmp_subscribed_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT( var_i );
        tmp_left_name_50 = var_i;
        tmp_right_name_49 = const_int_pos_1;
        tmp_subscript_name_11 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_50, tmp_right_name_49 );
        if ( tmp_subscript_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_11 );

            exception_lineno = 365;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_left_name_49 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
        Py_DECREF( tmp_subscribed_name_11 );
        Py_DECREF( tmp_subscript_name_11 );
        if ( tmp_left_name_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_47 = par_self;
        tmp_right_name_50 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_recipd );
        if ( tmp_right_name_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_49 );

            exception_lineno = 365;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_ass_subvalue_15 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_49, tmp_right_name_50 );
        Py_DECREF( tmp_left_name_49 );
        Py_DECREF( tmp_right_name_50 );
        if ( tmp_ass_subvalue_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT( var_quasi );
        tmp_ass_subscribed_15 = var_quasi;
        CHECK_OBJECT( var_i );
        tmp_left_name_51 = var_i;
        tmp_right_name_51 = const_int_pos_1;
        tmp_ass_subscript_15 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_51, tmp_right_name_51 );
        if ( tmp_ass_subscript_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_15 );

            exception_lineno = 365;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15 );
        Py_DECREF( tmp_ass_subscript_15 );
        Py_DECREF( tmp_ass_subvalue_15 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
    }
    {
        PyObject *tmp_ass_subvalue_16;
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_48;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_int_arg_12;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_source_name_49;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_left_name_52;
        PyObject *tmp_right_name_52;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_int_arg_13;
        PyObject *tmp_subscribed_name_13;
        PyObject *tmp_source_name_50;
        PyObject *tmp_subscript_name_13;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_left_name_53;
        PyObject *tmp_right_name_53;
        PyObject *tmp_left_name_54;
        PyObject *tmp_right_name_54;
        PyObject *tmp_ass_subscribed_16;
        PyObject *tmp_source_name_51;
        PyObject *tmp_ass_subscript_16;
        PyObject *tmp_left_name_55;
        PyObject *tmp_right_name_55;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 366;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_source_name_48 = tmp_mvar_value_19;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_bitwise_xor );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_49 = par_self;
        tmp_subscribed_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_lastq );
        if ( tmp_subscribed_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT( var_i );
        tmp_left_name_52 = var_i;
        tmp_right_name_52 = const_int_pos_1;
        tmp_subscript_name_12 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_52, tmp_right_name_52 );
        if ( tmp_subscript_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_subscribed_name_12 );

            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_int_arg_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
        Py_DECREF( tmp_subscribed_name_12 );
        Py_DECREF( tmp_subscript_name_12 );
        if ( tmp_int_arg_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_args_element_name_22 = PyNumber_Int( tmp_int_arg_12 );
        Py_DECREF( tmp_int_arg_12 );
        if ( tmp_args_element_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_50 = par_self;
        tmp_subscribed_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_v );
        if ( tmp_subscribed_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_22 );

            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT( var_i );
        tmp_left_name_53 = var_i;
        tmp_right_name_53 = const_int_pos_1;
        tmp_tuple_element_10 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_53, tmp_right_name_53 );
        if ( tmp_tuple_element_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_22 );
            Py_DECREF( tmp_subscribed_name_13 );

            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_subscript_name_13 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_13, 0, tmp_tuple_element_10 );
        if ( var_lseed == NULL )
        {
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_22 );
            Py_DECREF( tmp_subscribed_name_13 );
            Py_DECREF( tmp_subscript_name_13 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lseed" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_left_name_54 = var_lseed;
        tmp_right_name_54 = const_int_pos_1;
        tmp_tuple_element_10 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_54, tmp_right_name_54 );
        if ( tmp_tuple_element_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_22 );
            Py_DECREF( tmp_subscribed_name_13 );
            Py_DECREF( tmp_subscript_name_13 );

            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        PyTuple_SET_ITEM( tmp_subscript_name_13, 1, tmp_tuple_element_10 );
        tmp_int_arg_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
        Py_DECREF( tmp_subscribed_name_13 );
        Py_DECREF( tmp_subscript_name_13 );
        if ( tmp_int_arg_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_22 );

            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_args_element_name_23 = PyNumber_Int( tmp_int_arg_13 );
        Py_DECREF( tmp_int_arg_13 );
        if ( tmp_args_element_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_22 );

            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        frame_2d82b7338dc71d88b963f2a526d31d94->m_frame.f_lineno = 366;
        {
            PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23 };
            tmp_ass_subvalue_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_22 );
        Py_DECREF( tmp_args_element_name_23 );
        if ( tmp_ass_subvalue_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_51 = par_self;
        tmp_ass_subscribed_16 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_lastq );
        if ( tmp_ass_subscribed_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_16 );

            exception_lineno = 366;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT( var_i );
        tmp_left_name_55 = var_i;
        tmp_right_name_55 = const_int_pos_1;
        tmp_ass_subscript_16 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_55, tmp_right_name_55 );
        if ( tmp_ass_subscript_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_16 );
            Py_DECREF( tmp_ass_subscribed_16 );

            exception_lineno = 366;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16 );
        Py_DECREF( tmp_ass_subscribed_16 );
        Py_DECREF( tmp_ass_subscript_16 );
        Py_DECREF( tmp_ass_subvalue_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_11;
    loop_end_11:;
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

    Py_XDECREF( tmp_for_loop_10__iter_value );
    tmp_for_loop_10__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_10__for_iterator );
    Py_DECREF( tmp_for_loop_10__for_iterator );
    tmp_for_loop_10__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF( tmp_for_loop_10__iter_value );
    tmp_for_loop_10__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_10__for_iterator );
    Py_DECREF( tmp_for_loop_10__for_iterator );
    tmp_for_loop_10__for_iterator = NULL;

    {
        PyObject *tmp_assattr_name_18;
        PyObject *tmp_assattr_target_18;
        CHECK_OBJECT( par_seed );
        tmp_assattr_name_18 = par_seed;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_seed_save, tmp_assattr_name_18 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_left_name_56;
        PyObject *tmp_right_name_56;
        CHECK_OBJECT( par_seed );
        tmp_left_name_56 = par_seed;
        tmp_right_name_56 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_56, tmp_right_name_56 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_55 = tmp_left_name_56;
        par_seed = tmp_assign_source_55;

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d82b7338dc71d88b963f2a526d31d94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d82b7338dc71d88b963f2a526d31d94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d82b7338dc71d88b963f2a526d31d94 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d82b7338dc71d88b963f2a526d31d94, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d82b7338dc71d88b963f2a526d31d94->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d82b7338dc71d88b963f2a526d31d94, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d82b7338dc71d88b963f2a526d31d94,
        type_description_1,
        par_self,
        par_dim_num,
        par_seed,
        var_i,
        var_j,
        var_m,
        var_includ,
        var_k,
        var_j2,
        var_newv,
        var_lseed,
        var_seed_temp,
        var_quasi
    );


    // Release cached frame.
    if ( frame_2d82b7338dc71d88b963f2a526d31d94 == cache_frame_2d82b7338dc71d88b963f2a526d31d94 )
    {
        Py_DECREF( frame_2d82b7338dc71d88b963f2a526d31d94 );
    }
    cache_frame_2d82b7338dc71d88b963f2a526d31d94 = NULL;

    assertFrameObject( frame_2d82b7338dc71d88b963f2a526d31d94 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_list_element_1;
        CHECK_OBJECT( var_quasi );
        tmp_list_element_1 = var_quasi;
        tmp_return_value = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_seed );
        tmp_list_element_1 = par_seed;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_return_value, 1, tmp_list_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_shgo_lib$sobol_seq$$$function_5_i4_sobol );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dim_num );
    Py_DECREF( par_dim_num );
    par_dim_num = NULL;

    Py_XDECREF( par_seed );
    par_seed = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_includ );
    var_includ = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_j2 );
    var_j2 = NULL;

    Py_XDECREF( var_newv );
    var_newv = NULL;

    Py_XDECREF( var_lseed );
    var_lseed = NULL;

    Py_XDECREF( var_seed_temp );
    var_seed_temp = NULL;

    Py_XDECREF( var_quasi );
    var_quasi = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dim_num );
    Py_DECREF( par_dim_num );
    par_dim_num = NULL;

    Py_XDECREF( par_seed );
    par_seed = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_includ );
    var_includ = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_j2 );
    var_j2 = NULL;

    Py_XDECREF( var_newv );
    var_newv = NULL;

    Py_XDECREF( var_lseed );
    var_lseed = NULL;

    Py_XDECREF( var_seed_temp );
    var_seed_temp = NULL;

    Py_XDECREF( var_quasi );
    var_quasi = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_shgo_lib$sobol_seq$$$function_5_i4_sobol );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_shgo_lib$sobol_seq$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_819d46447ae2ccf7234a3ee89ab14808,
#endif
        codeobj_8f8d1669e873f6a2d27354dd36a622e0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_shgo_lib$sobol_seq,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_2_i4_sobol_generate( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_shgo_lib$sobol_seq$$$function_2_i4_sobol_generate,
        const_str_plain_i4_sobol_generate,
#if PYTHON_VERSION >= 300
        const_str_digest_5f5faf5ba66bff0fbbfa89d013522cb2,
#endif
        codeobj_19750c522a18958eed230f82c68f7fc5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_shgo_lib$sobol_seq,
        const_str_digest_70ffdae28e81d03dbb014c0cc0f12cd0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_3_i4_bit_hi1(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_shgo_lib$sobol_seq$$$function_3_i4_bit_hi1,
        const_str_plain_i4_bit_hi1,
#if PYTHON_VERSION >= 300
        const_str_digest_d4d9032e64fa8549cb64410ec636e8e0,
#endif
        codeobj_410aec6096216feb2be0782a4d47989c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_shgo_lib$sobol_seq,
        const_str_digest_e84b935958b78988ae359346dcc9a4b2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_4_i4_bit_lo0(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_shgo_lib$sobol_seq$$$function_4_i4_bit_lo0,
        const_str_plain_i4_bit_lo0,
#if PYTHON_VERSION >= 300
        const_str_digest_0b74c6637d2f0ddbd6508133ac0e8f82,
#endif
        codeobj_e68b02d8da136e17f96fa754dd9b61f3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_shgo_lib$sobol_seq,
        const_str_digest_f9c2e680290c4f3d0683bbfea94c6288,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_5_i4_sobol(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_shgo_lib$sobol_seq$$$function_5_i4_sobol,
        const_str_plain_i4_sobol,
#if PYTHON_VERSION >= 300
        const_str_digest_d2a58cd6f1473d244d6acd85dab2ef29,
#endif
        codeobj_2d82b7338dc71d88b963f2a526d31d94,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_shgo_lib$sobol_seq,
        const_str_digest_acce7545fe267772039a2eca32733a00,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_shgo_lib$sobol_seq =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._shgo_lib.sobol_seq",
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

MOD_INIT_DECL( scipy$optimize$_shgo_lib$sobol_seq )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_shgo_lib$sobol_seq );
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
    puts("scipy.optimize._shgo_lib.sobol_seq: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._shgo_lib.sobol_seq: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._shgo_lib.sobol_seq: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_shgo_lib$sobol_seq" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_shgo_lib$sobol_seq = Py_InitModule4(
        "scipy.optimize._shgo_lib.sobol_seq",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_shgo_lib$sobol_seq = PyModule_Create( &mdef_scipy$optimize$_shgo_lib$sobol_seq );
#endif

    moduledict_scipy$optimize$_shgo_lib$sobol_seq = MODULE_DICT( module_scipy$optimize$_shgo_lib$sobol_seq );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_shgo_lib$sobol_seq,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_shgo_lib$sobol_seq,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_shgo_lib$sobol_seq,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_shgo_lib$sobol_seq,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_shgo_lib$sobol_seq );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_a6555550cbf149a290a3aa4d46948a07, module_scipy$optimize$_shgo_lib$sobol_seq );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_c0d0ea2e4f65b8da88d54912110dc5a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_scipy$optimize$_shgo_lib$sobol_seq_27 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_e487de93f29ea9c6b2054b9c0248b23f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e487de93f29ea9c6b2054b9c0248b23f_2 = NULL;
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
        tmp_assign_source_1 = const_str_digest_2e568f885ff0d5f96067fb3e56668d6c;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_c0d0ea2e4f65b8da88d54912110dc5a0 = MAKE_MODULE_FRAME( codeobj_c0d0ea2e4f65b8da88d54912110dc5a0, module_scipy$optimize$_shgo_lib$sobol_seq );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c0d0ea2e4f65b8da88d54912110dc5a0 );
    assert( Py_REFCNT( frame_c0d0ea2e4f65b8da88d54912110dc5a0 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_shgo_lib$sobol_seq;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_c0d0ea2e4f65b8da88d54912110dc5a0->m_frame.f_lineno = 22;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = LIST_COPY( const_list_str_plain_Sobol_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_1;
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


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_empty;
        tmp_assign_source_7 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_7;
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


            exception_lineno = 27;

            goto try_except_handler_1;
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


            exception_lineno = 27;

            goto try_except_handler_1;
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;

                goto try_except_handler_1;
            }
            tmp_args_name_1 = const_tuple_str_plain_Sobol_tuple_empty_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_c0d0ea2e4f65b8da88d54912110dc5a0->m_frame.f_lineno = 27;
            tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_8;
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


                exception_lineno = 27;

                goto try_except_handler_1;
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
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_type_arg_1;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 27;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_1 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_1 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 27;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 27;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 27;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_9;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$optimize$_shgo_lib$sobol_seq_27 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_a6555550cbf149a290a3aa4d46948a07;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_shgo_lib$sobol_seq_27, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_Sobol;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_shgo_lib$sobol_seq_27, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_e487de93f29ea9c6b2054b9c0248b23f_2, codeobj_e487de93f29ea9c6b2054b9c0248b23f, module_scipy$optimize$_shgo_lib$sobol_seq, sizeof(void *) );
        frame_e487de93f29ea9c6b2054b9c0248b23f_2 = cache_frame_e487de93f29ea9c6b2054b9c0248b23f_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_e487de93f29ea9c6b2054b9c0248b23f_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_e487de93f29ea9c6b2054b9c0248b23f_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_shgo_lib$sobol_seq_27, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_int_pos_1_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_2_i4_sobol_generate( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_scipy$optimize$_shgo_lib$sobol_seq_27, const_str_plain_i4_sobol_generate, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_3_i4_bit_hi1(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_shgo_lib$sobol_seq_27, const_str_plain_i4_bit_hi1, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_4_i4_bit_lo0(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_shgo_lib$sobol_seq_27, const_str_plain_i4_bit_lo0, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_shgo_lib$sobol_seq$$$function_5_i4_sobol(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_shgo_lib$sobol_seq_27, const_str_plain_i4_sobol, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_e487de93f29ea9c6b2054b9c0248b23f_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_e487de93f29ea9c6b2054b9c0248b23f_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_e487de93f29ea9c6b2054b9c0248b23f_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_e487de93f29ea9c6b2054b9c0248b23f_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_e487de93f29ea9c6b2054b9c0248b23f_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_e487de93f29ea9c6b2054b9c0248b23f_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_e487de93f29ea9c6b2054b9c0248b23f_2 == cache_frame_e487de93f29ea9c6b2054b9c0248b23f_2 )
        {
            Py_DECREF( frame_e487de93f29ea9c6b2054b9c0248b23f_2 );
        }
        cache_frame_e487de93f29ea9c6b2054b9c0248b23f_2 = NULL;

        assertFrameObject( frame_e487de93f29ea9c6b2054b9c0248b23f_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_Sobol;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_empty;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_scipy$optimize$_shgo_lib$sobol_seq_27;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_c0d0ea2e4f65b8da88d54912110dc5a0->m_frame.f_lineno = 27;
            tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_11;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_10 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_10 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_shgo_lib$sobol_seq );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_scipy$optimize$_shgo_lib$sobol_seq_27 );
        locals_scipy$optimize$_shgo_lib$sobol_seq_27 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF( locals_scipy$optimize$_shgo_lib$sobol_seq_27 );
        locals_scipy$optimize$_shgo_lib$sobol_seq_27 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_shgo_lib$sobol_seq );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

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

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_shgo_lib$sobol_seq );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 27;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain_Sobol, tmp_assign_source_10 );
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0d0ea2e4f65b8da88d54912110dc5a0 );
#endif
    popFrameStack();

    assertFrameObject( frame_c0d0ea2e4f65b8da88d54912110dc5a0 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0d0ea2e4f65b8da88d54912110dc5a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c0d0ea2e4f65b8da88d54912110dc5a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c0d0ea2e4f65b8da88d54912110dc5a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c0d0ea2e4f65b8da88d54912110dc5a0, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_shgo_lib$sobol_seq, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_shgo_lib$sobol_seq );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
