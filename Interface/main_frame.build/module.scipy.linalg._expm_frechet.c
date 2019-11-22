/* Generated code for Python module 'scipy.linalg._expm_frechet'
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

/* The "_module_scipy$linalg$_expm_frechet" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$linalg$_expm_frechet;
PyDictObject *moduledict_scipy$linalg$_expm_frechet;

/* The declarations of module constants used, if any. */
extern PyObject *const_float_30270240_0;
extern PyObject *const_float_8821612800_0;
extern PyObject *const_float_670442572800_0;
extern PyObject *const_float_60_0;
static PyObject *const_str_digest_109bfac58c3594edd87b0f81e4c65cd7;
extern PyObject *const_float_3960_0;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_float_10559470521600_0;
extern PyObject *const_str_plain_fro;
extern PyObject *const_float_7771770303897600_0;
static PyObject *const_tuple_dc4e14055e35c574327634feb5a60388_tuple;
extern PyObject *const_str_plain_outer;
extern PyObject *const_str_plain_i;
extern PyObject *const_float_16380_0;
extern PyObject *const_int_pos_9;
extern PyObject *const_str_plain___file__;
extern PyObject *const_float_17643225600_0;
extern PyObject *const_str_plain_kappa;
extern PyObject *const_str_digest_7785251fc2bad4a591e26630c92c287b;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_zeros_like;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_float_1187353796428800_0;
static PyObject *const_str_plain_expm_M;
static PyObject *const_str_plain_K_norm;
static PyObject *const_str_plain_Lu;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_float_25200_0;
extern PyObject *const_str_plain_A4;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_check_finite;
static PyObject *const_tuple_60c8bcd9ffbb8f6b6820a70155a1bb12_tuple;
extern PyObject *const_int_pos_5;
static PyObject *const_str_digest_cb9c73bc6eccae14680740b48d350b18;
extern PyObject *const_float_110880_0;
extern PyObject *const_str_plain_hstack;
extern PyObject *const_str_plain_A8;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain_M2;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain__diff_pade3;
extern PyObject *const_str_plain_log2;
static PyObject *const_str_plain_compute_expm;
extern PyObject *const_float_8648640_0;
static PyObject *const_str_digest_91a8e3fbaecdb07f1eb2df377bb694c0;
extern PyObject *const_dict_f1529e05b445a690a7b0566edab83122;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_j;
static PyObject *const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple;
extern PyObject *const_float_6_476475253248e16;
extern PyObject *const_str_plain_n;
extern PyObject *const_float_1_0;
extern PyObject *const_tuple_none_true_true_tuple;
extern PyObject *const_str_plain_A2;
extern PyObject *const_float_2_0;
static PyObject *const_str_plain_expm_frechet_algo_64;
extern PyObject *const_float_2075673600_0;
static PyObject *const_str_plain_expm_frechet_kronform;
static PyObject *const_list_str_plain_expm_frechet_str_plain_expm_cond_list;
static PyObject *const_str_digest_562cac4033539922275c33e6f582b9b2;
static PyObject *const_str_plain__diff_pade5;
extern PyObject *const_str_plain_lu_factor;
static PyObject *const_str_digest_1607cdc26dc709d4771cd1c8dcf06649;
static PyObject *const_str_plain__diff_pade9;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_expm_frechet_AE;
extern PyObject *const_str_plain_V;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_float_90_0;
extern PyObject *const_str_plain_append;
extern PyObject *const_float_30240_0;
static PyObject *const_str_plain_SPS;
extern PyObject *const_float_33522128640_0;
extern PyObject *const_float_17297280_0;
extern PyObject *const_float_12_0;
extern PyObject *const_float_56_0;
extern PyObject *const_str_plain_expm_cond;
extern PyObject *const_str_plain_lu_solve;
extern PyObject *const_float_420_0;
extern PyObject *const_str_plain_b;
extern PyObject *const_float_960960_0;
static PyObject *const_str_digest_8b610048f461e38df66faf3c95e4f5cf;
static PyObject *const_tuple_a2c4b2f0ba2d57c3fe48f17f7bb87ad2_tuple;
extern PyObject *const_str_plain_vec;
static PyObject *const_str_digest_9841ab1c81d3ded8cc65e584d7d63d16;
static PyObject *const_tuple_d7b0d637a582e8428d075af68e95e8fe_tuple;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_M8;
extern PyObject *const_float_129060195264000_0;
extern PyObject *const_str_plain___all__;
extern PyObject *const_float_15120_0;
extern PyObject *const_str_plain_vstack;
static PyObject *const_str_plain_ell_table_61;
extern PyObject *const_str_plain_scipy;
extern PyObject *const_float_40840800_0;
extern PyObject *const_str_plain_K;
extern PyObject *const_int_0;
static PyObject *const_str_plain_blockEnlarge;
extern PyObject *const_float_30_0;
extern PyObject *const_float_302702400_0;
static PyObject *const_str_digest_9f27b271cd1863be2b2cc4a391338bb7;
static PyObject *const_tuple_5d81e4705371d3bf7f27bad452412c32_tuple;
extern PyObject *const_str_plain_expm_frechet;
static PyObject *const_str_plain_M4;
extern PyObject *const_str_plain_F;
extern PyObject *const_float_3_238237626624e16;
extern PyObject *const_tuple_none_true_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_float_2162160_0;
extern PyObject *const_str_plain_ravel;
static PyObject *const_str_plain_X_norm;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_plain_M6;
static PyObject *const_tuple_b2d7a6402b058b4ce9784652699cf813_tuple;
static PyObject *const_str_digest_af75f86c12fbfe99e47433ecd7d83ed8;
extern PyObject *const_float_120_0;
extern PyObject *const_str_plain_identity;
static PyObject *const_str_plain_Lv;
extern PyObject *const_float_3360_0;
extern PyObject *const_float_277200_0;
extern PyObject *const_float_1512_0;
extern PyObject *const_int_pos_13;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple;
extern PyObject *const_float_1995840_0;
extern PyObject *const_str_plain_expm;
extern PyObject *const_float_1323241920_0;
extern PyObject *const_str_plain_dot;
static PyObject *const_str_digest_2505ac079ded83a7d12b0002334f03c2;
static PyObject *const_str_plain_A_norm;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_expm_A;
extern PyObject *const_str_plain_ident;
extern PyObject *const_str_plain_M;
static PyObject *const_str_plain__diff_pade7;
extern PyObject *const_str_plain_X;
static PyObject *const_str_digest_d6b26ea83a8d6c53452d9e6ceee8ca48;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_cols;
extern PyObject *const_tuple_str_plain_M_tuple;
extern PyObject *const_float_182_0;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_method;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_asarray_chkfinite;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
static PyObject *const_str_plain_expm_frechet_block_enlarge;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_E;
static PyObject *const_tuple_f8be509aaad4b029427644e63f28c8a4_tuple;
extern PyObject *const_str_plain_A6;
static PyObject *const_str_digest_388e7a7e0cae350bdd5c884ec6165c74;
extern PyObject *const_str_plain_ceil;
static PyObject *const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple;
static PyObject *const_str_digest_c4b4bb256e2a215970eff897f4c22643;
extern PyObject *const_str_plain_U;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_109bfac58c3594edd87b0f81e4c65cd7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4487772 ], 1116, 0 );
    const_tuple_dc4e14055e35c574327634feb5a60388_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_dc4e14055e35c574327634feb5a60388_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_dc4e14055e35c574327634feb5a60388_tuple, 1, const_str_plain_E ); Py_INCREF( const_str_plain_E );
    PyTuple_SET_ITEM( const_tuple_dc4e14055e35c574327634feb5a60388_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_dc4e14055e35c574327634feb5a60388_tuple, 3, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    const_str_plain_expm_M = UNSTREAM_STRING_ASCII( &constant_bin[ 4488888 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_dc4e14055e35c574327634feb5a60388_tuple, 4, const_str_plain_expm_M ); Py_INCREF( const_str_plain_expm_M );
    const_str_plain_K_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 4488894 ], 6, 1 );
    const_str_plain_Lu = UNSTREAM_STRING_ASCII( &constant_bin[ 1034 ], 2, 1 );
    const_tuple_60c8bcd9ffbb8f6b6820a70155a1bb12_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_60c8bcd9ffbb8f6b6820a70155a1bb12_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_60c8bcd9ffbb8f6b6820a70155a1bb12_tuple, 1, const_str_plain_E ); Py_INCREF( const_str_plain_E );
    PyTuple_SET_ITEM( const_tuple_60c8bcd9ffbb8f6b6820a70155a1bb12_tuple, 2, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    const_str_plain_compute_expm = UNSTREAM_STRING_ASCII( &constant_bin[ 4488900 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_60c8bcd9ffbb8f6b6820a70155a1bb12_tuple, 3, const_str_plain_compute_expm ); Py_INCREF( const_str_plain_compute_expm );
    PyTuple_SET_ITEM( const_tuple_60c8bcd9ffbb8f6b6820a70155a1bb12_tuple, 4, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    const_str_plain_expm_A = UNSTREAM_STRING_ASCII( &constant_bin[ 4488912 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_60c8bcd9ffbb8f6b6820a70155a1bb12_tuple, 5, const_str_plain_expm_A ); Py_INCREF( const_str_plain_expm_A );
    const_str_plain_expm_frechet_AE = UNSTREAM_STRING_ASCII( &constant_bin[ 4488918 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_60c8bcd9ffbb8f6b6820a70155a1bb12_tuple, 6, const_str_plain_expm_frechet_AE ); Py_INCREF( const_str_plain_expm_frechet_AE );
    const_str_digest_cb9c73bc6eccae14680740b48d350b18 = UNSTREAM_STRING_ASCII( &constant_bin[ 4488933 ], 2569, 0 );
    const_str_plain__diff_pade3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4491502 ], 11, 1 );
    const_str_digest_91a8e3fbaecdb07f1eb2df377bb694c0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4488632 ], 45, 0 );
    const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple, 1, const_str_plain_E ); Py_INCREF( const_str_plain_E );
    PyTuple_SET_ITEM( const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple, 2, const_str_plain_ident ); Py_INCREF( const_str_plain_ident );
    PyTuple_SET_ITEM( const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple, 3, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple, 4, const_str_plain_A2 ); Py_INCREF( const_str_plain_A2 );
    PyTuple_SET_ITEM( const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple, 5, const_str_plain_M2 ); Py_INCREF( const_str_plain_M2 );
    PyTuple_SET_ITEM( const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple, 6, const_str_plain_A4 ); Py_INCREF( const_str_plain_A4 );
    const_str_plain_M4 = UNSTREAM_STRING_ASCII( &constant_bin[ 493808 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple, 7, const_str_plain_M4 ); Py_INCREF( const_str_plain_M4 );
    PyTuple_SET_ITEM( const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple, 8, const_str_plain_U ); Py_INCREF( const_str_plain_U );
    PyTuple_SET_ITEM( const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple, 9, const_str_plain_V ); Py_INCREF( const_str_plain_V );
    PyTuple_SET_ITEM( const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple, 10, const_str_plain_Lu ); Py_INCREF( const_str_plain_Lu );
    const_str_plain_Lv = UNSTREAM_STRING_ASCII( &constant_bin[ 594554 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple, 11, const_str_plain_Lv ); Py_INCREF( const_str_plain_Lv );
    const_str_plain_expm_frechet_algo_64 = UNSTREAM_STRING_ASCII( &constant_bin[ 4491513 ], 20, 1 );
    const_str_plain_expm_frechet_kronform = UNSTREAM_STRING_ASCII( &constant_bin[ 4491533 ], 21, 1 );
    const_list_str_plain_expm_frechet_str_plain_expm_cond_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_expm_frechet_str_plain_expm_cond_list, 0, const_str_plain_expm_frechet ); Py_INCREF( const_str_plain_expm_frechet );
    PyList_SET_ITEM( const_list_str_plain_expm_frechet_str_plain_expm_cond_list, 1, const_str_plain_expm_cond ); Py_INCREF( const_str_plain_expm_cond );
    const_str_digest_562cac4033539922275c33e6f582b9b2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4491554 ], 258, 0 );
    const_str_plain__diff_pade5 = UNSTREAM_STRING_ASCII( &constant_bin[ 4491812 ], 11, 1 );
    const_str_digest_1607cdc26dc709d4771cd1c8dcf06649 = UNSTREAM_STRING_ASCII( &constant_bin[ 4491823 ], 32, 0 );
    const_str_plain__diff_pade9 = UNSTREAM_STRING_ASCII( &constant_bin[ 4491855 ], 11, 1 );
    const_str_plain_SPS = UNSTREAM_STRING_ASCII( &constant_bin[ 4489299 ], 3, 1 );
    const_str_digest_8b610048f461e38df66faf3c95e4f5cf = UNSTREAM_STRING_ASCII( &constant_bin[ 4491866 ], 1036, 0 );
    const_tuple_a2c4b2f0ba2d57c3fe48f17f7bb87ad2_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4492902 ], 155 );
    const_str_digest_9841ab1c81d3ded8cc65e584d7d63d16 = UNSTREAM_STRING_ASCII( &constant_bin[ 4493057 ], 35, 0 );
    const_tuple_d7b0d637a582e8428d075af68e95e8fe_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4493092 ], 183 );
    const_str_plain_M8 = UNSTREAM_STRING_ASCII( &constant_bin[ 293080 ], 2, 1 );
    const_str_plain_ell_table_61 = UNSTREAM_STRING_ASCII( &constant_bin[ 4493275 ], 12, 1 );
    const_str_plain_blockEnlarge = UNSTREAM_STRING_ASCII( &constant_bin[ 4489325 ], 12, 1 );
    const_str_digest_9f27b271cd1863be2b2cc4a391338bb7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4493065 ], 26, 0 );
    const_tuple_5d81e4705371d3bf7f27bad452412c32_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_5d81e4705371d3bf7f27bad452412c32_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_5d81e4705371d3bf7f27bad452412c32_tuple, 1, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    PyTuple_SET_ITEM( const_tuple_5d81e4705371d3bf7f27bad452412c32_tuple, 2, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    PyTuple_SET_ITEM( const_tuple_5d81e4705371d3bf7f27bad452412c32_tuple, 3, const_str_plain_K ); Py_INCREF( const_str_plain_K );
    const_str_plain_A_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 4492925 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_5d81e4705371d3bf7f27bad452412c32_tuple, 4, const_str_plain_A_norm ); Py_INCREF( const_str_plain_A_norm );
    const_str_plain_X_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 4493287 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_5d81e4705371d3bf7f27bad452412c32_tuple, 5, const_str_plain_X_norm ); Py_INCREF( const_str_plain_X_norm );
    PyTuple_SET_ITEM( const_tuple_5d81e4705371d3bf7f27bad452412c32_tuple, 6, const_str_plain_K_norm ); Py_INCREF( const_str_plain_K_norm );
    PyTuple_SET_ITEM( const_tuple_5d81e4705371d3bf7f27bad452412c32_tuple, 7, const_str_plain_kappa ); Py_INCREF( const_str_plain_kappa );
    const_str_plain_M6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4492992 ], 2, 1 );
    const_tuple_b2d7a6402b058b4ce9784652699cf813_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_b2d7a6402b058b4ce9784652699cf813_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_b2d7a6402b058b4ce9784652699cf813_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_b2d7a6402b058b4ce9784652699cf813_tuple, 2, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    PyTuple_SET_ITEM( const_tuple_b2d7a6402b058b4ce9784652699cf813_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_b2d7a6402b058b4ce9784652699cf813_tuple, 4, const_str_plain_ident ); Py_INCREF( const_str_plain_ident );
    PyTuple_SET_ITEM( const_tuple_b2d7a6402b058b4ce9784652699cf813_tuple, 5, const_str_plain_cols ); Py_INCREF( const_str_plain_cols );
    PyTuple_SET_ITEM( const_tuple_b2d7a6402b058b4ce9784652699cf813_tuple, 6, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_b2d7a6402b058b4ce9784652699cf813_tuple, 7, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_b2d7a6402b058b4ce9784652699cf813_tuple, 8, const_str_plain_E ); Py_INCREF( const_str_plain_E );
    PyTuple_SET_ITEM( const_tuple_b2d7a6402b058b4ce9784652699cf813_tuple, 9, const_str_plain_F ); Py_INCREF( const_str_plain_F );
    const_str_digest_af75f86c12fbfe99e47433ecd7d83ed8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4493293 ], 25, 0 );
    const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 1, const_str_plain_E ); Py_INCREF( const_str_plain_E );
    PyTuple_SET_ITEM( const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 2, const_str_plain_ident ); Py_INCREF( const_str_plain_ident );
    PyTuple_SET_ITEM( const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 3, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 4, const_str_plain_A2 ); Py_INCREF( const_str_plain_A2 );
    PyTuple_SET_ITEM( const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 5, const_str_plain_M2 ); Py_INCREF( const_str_plain_M2 );
    PyTuple_SET_ITEM( const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 6, const_str_plain_A4 ); Py_INCREF( const_str_plain_A4 );
    PyTuple_SET_ITEM( const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 7, const_str_plain_M4 ); Py_INCREF( const_str_plain_M4 );
    PyTuple_SET_ITEM( const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 8, const_str_plain_A6 ); Py_INCREF( const_str_plain_A6 );
    PyTuple_SET_ITEM( const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 9, const_str_plain_M6 ); Py_INCREF( const_str_plain_M6 );
    PyTuple_SET_ITEM( const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 10, const_str_plain_U ); Py_INCREF( const_str_plain_U );
    PyTuple_SET_ITEM( const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 11, const_str_plain_V ); Py_INCREF( const_str_plain_V );
    PyTuple_SET_ITEM( const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 12, const_str_plain_Lu ); Py_INCREF( const_str_plain_Lu );
    PyTuple_SET_ITEM( const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 13, const_str_plain_Lv ); Py_INCREF( const_str_plain_Lv );
    const_str_digest_2505ac079ded83a7d12b0002334f03c2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4493318 ], 37, 0 );
    const_str_plain__diff_pade7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4493355 ], 11, 1 );
    const_str_digest_d6b26ea83a8d6c53452d9e6ceee8ca48 = UNSTREAM_STRING_ASCII( &constant_bin[ 4493366 ], 29, 0 );
    const_str_plain_expm_frechet_block_enlarge = UNSTREAM_STRING_ASCII( &constant_bin[ 4493395 ], 26, 1 );
    const_tuple_f8be509aaad4b029427644e63f28c8a4_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_f8be509aaad4b029427644e63f28c8a4_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_f8be509aaad4b029427644e63f28c8a4_tuple, 1, const_str_plain_E ); Py_INCREF( const_str_plain_E );
    PyTuple_SET_ITEM( const_tuple_f8be509aaad4b029427644e63f28c8a4_tuple, 2, const_str_plain_ident ); Py_INCREF( const_str_plain_ident );
    PyTuple_SET_ITEM( const_tuple_f8be509aaad4b029427644e63f28c8a4_tuple, 3, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_f8be509aaad4b029427644e63f28c8a4_tuple, 4, const_str_plain_A2 ); Py_INCREF( const_str_plain_A2 );
    PyTuple_SET_ITEM( const_tuple_f8be509aaad4b029427644e63f28c8a4_tuple, 5, const_str_plain_M2 ); Py_INCREF( const_str_plain_M2 );
    PyTuple_SET_ITEM( const_tuple_f8be509aaad4b029427644e63f28c8a4_tuple, 6, const_str_plain_U ); Py_INCREF( const_str_plain_U );
    PyTuple_SET_ITEM( const_tuple_f8be509aaad4b029427644e63f28c8a4_tuple, 7, const_str_plain_V ); Py_INCREF( const_str_plain_V );
    PyTuple_SET_ITEM( const_tuple_f8be509aaad4b029427644e63f28c8a4_tuple, 8, const_str_plain_Lu ); Py_INCREF( const_str_plain_Lu );
    PyTuple_SET_ITEM( const_tuple_f8be509aaad4b029427644e63f28c8a4_tuple, 9, const_str_plain_Lv ); Py_INCREF( const_str_plain_Lv );
    const_str_digest_388e7a7e0cae350bdd5c884ec6165c74 = UNSTREAM_STRING_ASCII( &constant_bin[ 4493421 ], 32, 0 );
    const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 1, const_str_plain_E ); Py_INCREF( const_str_plain_E );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 2, const_str_plain_ident ); Py_INCREF( const_str_plain_ident );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 3, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 4, const_str_plain_A2 ); Py_INCREF( const_str_plain_A2 );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 5, const_str_plain_M2 ); Py_INCREF( const_str_plain_M2 );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 6, const_str_plain_A4 ); Py_INCREF( const_str_plain_A4 );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 7, const_str_plain_M4 ); Py_INCREF( const_str_plain_M4 );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 8, const_str_plain_A6 ); Py_INCREF( const_str_plain_A6 );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 9, const_str_plain_M6 ); Py_INCREF( const_str_plain_M6 );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 10, const_str_plain_A8 ); Py_INCREF( const_str_plain_A8 );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 11, const_str_plain_M8 ); Py_INCREF( const_str_plain_M8 );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 12, const_str_plain_U ); Py_INCREF( const_str_plain_U );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 13, const_str_plain_V ); Py_INCREF( const_str_plain_V );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 14, const_str_plain_Lu ); Py_INCREF( const_str_plain_Lu );
    PyTuple_SET_ITEM( const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 15, const_str_plain_Lv ); Py_INCREF( const_str_plain_Lv );
    const_str_digest_c4b4bb256e2a215970eff897f4c22643 = UNSTREAM_STRING_ASCII( &constant_bin[ 4493453 ], 104, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$linalg$_expm_frechet( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9f1afcfe2c2c30269f53fc6613b4f465;
static PyCodeObject *codeobj_abf1f815123158eb40adf06cfa524f38;
static PyCodeObject *codeobj_b8ca142d73579edab8ced16ca0269240;
static PyCodeObject *codeobj_2c9783da96494fa6d353a44d14c39c0a;
static PyCodeObject *codeobj_f6cf6256f8d9212e09b74dec29838493;
static PyCodeObject *codeobj_4d8f5fdab5a92fc2e6d9daf96c753a91;
static PyCodeObject *codeobj_24e8bff663111bbf5d0ad3bc69715de6;
static PyCodeObject *codeobj_51f161f2e60baff3e3802d6ea10c3ca2;
static PyCodeObject *codeobj_29660e18748d5ca2799bae0bc8618f02;
static PyCodeObject *codeobj_1272030c70915e371f2b152612810a09;
static PyCodeObject *codeobj_2db48214dfaeebeb304731215157a192;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_d6b26ea83a8d6c53452d9e6ceee8ca48 );
    codeobj_9f1afcfe2c2c30269f53fc6613b4f465 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9841ab1c81d3ded8cc65e584d7d63d16, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_abf1f815123158eb40adf06cfa524f38 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__diff_pade3, 165, const_tuple_f8be509aaad4b029427644e63f28c8a4_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b8ca142d73579edab8ced16ca0269240 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__diff_pade5, 176, const_tuple_c6ddfbab565c3f688e176c5d3ec33a46_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2c9783da96494fa6d353a44d14c39c0a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__diff_pade7, 190, const_tuple_1fc782456f70693a482b3c727b5fa0db_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f6cf6256f8d9212e09b74dec29838493 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__diff_pade9, 206, const_tuple_bd7946e8c3a3a13dabc5e31afb20a536_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4d8f5fdab5a92fc2e6d9daf96c753a91 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_expm_cond, 353, const_tuple_5d81e4705371d3bf7f27bad452412c32_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_24e8bff663111bbf5d0ad3bc69715de6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_expm_frechet, 10, const_tuple_60c8bcd9ffbb8f6b6820a70155a1bb12_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_51f161f2e60baff3e3802d6ea10c3ca2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_expm_frechet_algo_64, 225, const_tuple_a2c4b2f0ba2d57c3fe48f17f7bb87ad2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_29660e18748d5ca2799bae0bc8618f02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_expm_frechet_block_enlarge, 117, const_tuple_dc4e14055e35c574327634feb5a60388_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1272030c70915e371f2b152612810a09 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_expm_frechet_kronform, 301, const_tuple_b2d7a6402b058b4ce9784652699cf813_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2db48214dfaeebeb304731215157a192 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_vec, 281, const_tuple_str_plain_M_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_10_expm_cond( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_1_expm_frechet( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_2_expm_frechet_block_enlarge(  );


static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_3__diff_pade3(  );


static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_4__diff_pade5(  );


static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_5__diff_pade7(  );


static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_6__diff_pade9(  );


static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_7_expm_frechet_algo_64(  );


static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_8_vec(  );


static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_9_expm_frechet_kronform( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$linalg$_expm_frechet$$$function_1_expm_frechet( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_E = python_pars[ 1 ];
    PyObject *par_method = python_pars[ 2 ];
    PyObject *par_compute_expm = python_pars[ 3 ];
    PyObject *par_check_finite = python_pars[ 4 ];
    PyObject *var_expm_A = NULL;
    PyObject *var_expm_frechet_AE = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_24e8bff663111bbf5d0ad3bc69715de6;
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
    static struct Nuitka_FrameObject *cache_frame_24e8bff663111bbf5d0ad3bc69715de6 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_24e8bff663111bbf5d0ad3bc69715de6, codeobj_24e8bff663111bbf5d0ad3bc69715de6, module_scipy$linalg$_expm_frechet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_24e8bff663111bbf5d0ad3bc69715de6 = cache_frame_24e8bff663111bbf5d0ad3bc69715de6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_24e8bff663111bbf5d0ad3bc69715de6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_24e8bff663111bbf5d0ad3bc69715de6 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_check_finite );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_check_finite );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 92;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_1 = par_A;
            frame_24e8bff663111bbf5d0ad3bc69715de6->m_frame.f_lineno = 92;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray_chkfinite, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "ooooooo";
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 93;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_E );
            tmp_args_element_name_2 = par_E;
            frame_24e8bff663111bbf5d0ad3bc69715de6->m_frame.f_lineno = 93;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray_chkfinite, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_E;
                assert( old != NULL );
                par_E = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 95;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_3 = par_A;
            frame_24e8bff663111bbf5d0ad3bc69715de6->m_frame.f_lineno = 95;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_asarray, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_A;
                assert( old != NULL );
                par_A = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 96;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_4;
            CHECK_OBJECT( par_E );
            tmp_args_element_name_4 = par_E;
            frame_24e8bff663111bbf5d0ad3bc69715de6->m_frame.f_lineno = 96;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_asarray, call_args );
            }

            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_E;
                assert( old != NULL );
                par_E = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
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
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_source_name_3 = par_A;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
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
            tmp_make_exception_arg_1 = const_str_digest_1607cdc26dc709d4771cd1c8dcf06649;
            frame_24e8bff663111bbf5d0ad3bc69715de6->m_frame.f_lineno = 98;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 98;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( par_E );
        tmp_source_name_4 = par_E;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndim );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
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
        CHECK_OBJECT( par_E );
        tmp_source_name_5 = par_E;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_E );
        tmp_source_name_6 = par_E;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_int_pos_1;
        tmp_compexpr_right_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_3 = tmp_or_left_value_2;
        or_end_2:;
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
            tmp_make_exception_arg_2 = const_str_digest_388e7a7e0cae350bdd5c884ec6165c74;
            frame_24e8bff663111bbf5d0ad3bc69715de6->m_frame.f_lineno = 100;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 100;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_A );
        tmp_source_name_7 = par_A;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_E );
        tmp_source_name_8 = par_E;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_5 );

            exception_lineno = 101;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_2505ac079ded83a7d12b0002334f03c2;
            frame_24e8bff663111bbf5d0ad3bc69715de6->m_frame.f_lineno = 102;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 102;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_6 = par_method;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_str_plain_SPS;
            {
                PyObject *old = par_method;
                assert( old != NULL );
                par_method = tmp_assign_source_5;
                Py_INCREF( par_method );
                Py_DECREF( old );
            }

        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_7 = par_method;
        tmp_compexpr_right_7 = const_str_plain_SPS;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "ooooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_expm_frechet_algo_64 );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_expm_frechet_algo_64 );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "expm_frechet_algo_64" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 106;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_1 = tmp_mvar_value_5;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_5 = par_A;
            CHECK_OBJECT( par_E );
            tmp_args_element_name_6 = par_E;
            frame_24e8bff663111bbf5d0ad3bc69715de6->m_frame.f_lineno = 106;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "ooooooo";
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


                type_description_1 = "ooooooo";
                exception_lineno = 106;
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


                type_description_1 = "ooooooo";
                exception_lineno = 106;
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

                        type_description_1 = "ooooooo";
                        exception_lineno = 106;
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
                exception_lineno = 106;
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
            assert( var_expm_A == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_expm_A = tmp_assign_source_9;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
            assert( var_expm_frechet_AE == NULL );
            Py_INCREF( tmp_assign_source_10 );
            var_expm_frechet_AE = tmp_assign_source_10;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        goto branch_end_6;
        branch_no_6:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            CHECK_OBJECT( par_method );
            tmp_compexpr_left_8 = par_method;
            tmp_compexpr_right_8 = const_str_plain_blockEnlarge;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;
                type_description_1 = "ooooooo";
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
            // Tried code:
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_args_element_name_8;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_expm_frechet_block_enlarge );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_expm_frechet_block_enlarge );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "expm_frechet_block_enlarge" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 108;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_2 = tmp_mvar_value_6;
                CHECK_OBJECT( par_A );
                tmp_args_element_name_7 = par_A;
                CHECK_OBJECT( par_E );
                tmp_args_element_name_8 = par_E;
                frame_24e8bff663111bbf5d0ad3bc69715de6->m_frame.f_lineno = 108;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                if ( tmp_iter_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 108;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 108;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                assert( tmp_tuple_unpack_2__source_iter == NULL );
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_12;
                PyObject *tmp_unpack_3;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


                    type_description_1 = "ooooooo";
                    exception_lineno = 108;
                    goto try_except_handler_5;
                }
                assert( tmp_tuple_unpack_2__element_1 == NULL );
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
            }
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_unpack_4;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


                    type_description_1 = "ooooooo";
                    exception_lineno = 108;
                    goto try_except_handler_5;
                }
                assert( tmp_tuple_unpack_2__element_2 == NULL );
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
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
                            exception_lineno = 108;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 108;
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
                PyObject *tmp_assign_source_14;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
                tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
                assert( var_expm_A == NULL );
                Py_INCREF( tmp_assign_source_14 );
                var_expm_A = tmp_assign_source_14;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_1 );
            tmp_tuple_unpack_2__element_1 = NULL;

            {
                PyObject *tmp_assign_source_15;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
                tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
                assert( var_expm_frechet_AE == NULL );
                Py_INCREF( tmp_assign_source_15 );
                var_expm_frechet_AE = tmp_assign_source_15;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_2 );
            tmp_tuple_unpack_2__element_2 = NULL;

            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_make_exception_arg_4;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_left_name_1 = const_str_digest_af75f86c12fbfe99e47433ecd7d83ed8;
                CHECK_OBJECT( par_method );
                tmp_right_name_1 = par_method;
                tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_make_exception_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 110;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                frame_24e8bff663111bbf5d0ad3bc69715de6->m_frame.f_lineno = 110;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_4 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_4 );
                assert( !(tmp_raise_type_4 == NULL) );
                exception_type = tmp_raise_type_4;
                exception_lineno = 110;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            branch_end_7:;
        }
        branch_end_6:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_compute_expm );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_compute_expm );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_tuple_element_1;
            if ( var_expm_A == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expm_A" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 112;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = var_expm_A;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            if ( var_expm_frechet_AE == NULL )
            {
                Py_DECREF( tmp_return_value );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expm_frechet_AE" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 112;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = var_expm_frechet_AE;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        goto branch_end_8;
        branch_no_8:;
        if ( var_expm_frechet_AE == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expm_frechet_AE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = var_expm_frechet_AE;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_8:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_24e8bff663111bbf5d0ad3bc69715de6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_24e8bff663111bbf5d0ad3bc69715de6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_24e8bff663111bbf5d0ad3bc69715de6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_24e8bff663111bbf5d0ad3bc69715de6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_24e8bff663111bbf5d0ad3bc69715de6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_24e8bff663111bbf5d0ad3bc69715de6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_24e8bff663111bbf5d0ad3bc69715de6,
        type_description_1,
        par_A,
        par_E,
        par_method,
        par_compute_expm,
        par_check_finite,
        var_expm_A,
        var_expm_frechet_AE
    );


    // Release cached frame.
    if ( frame_24e8bff663111bbf5d0ad3bc69715de6 == cache_frame_24e8bff663111bbf5d0ad3bc69715de6 )
    {
        Py_DECREF( frame_24e8bff663111bbf5d0ad3bc69715de6 );
    }
    cache_frame_24e8bff663111bbf5d0ad3bc69715de6 = NULL;

    assertFrameObject( frame_24e8bff663111bbf5d0ad3bc69715de6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_1_expm_frechet );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_E );
    Py_DECREF( par_E );
    par_E = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_compute_expm );
    Py_DECREF( par_compute_expm );
    par_compute_expm = NULL;

    CHECK_OBJECT( (PyObject *)par_check_finite );
    Py_DECREF( par_check_finite );
    par_check_finite = NULL;

    Py_XDECREF( var_expm_A );
    var_expm_A = NULL;

    Py_XDECREF( var_expm_frechet_AE );
    var_expm_frechet_AE = NULL;

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

    Py_XDECREF( par_A );
    par_A = NULL;

    Py_XDECREF( par_E );
    par_E = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_compute_expm );
    Py_DECREF( par_compute_expm );
    par_compute_expm = NULL;

    CHECK_OBJECT( (PyObject *)par_check_finite );
    Py_DECREF( par_check_finite );
    par_check_finite = NULL;

    Py_XDECREF( var_expm_A );
    var_expm_A = NULL;

    Py_XDECREF( var_expm_frechet_AE );
    var_expm_frechet_AE = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_1_expm_frechet );
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


static PyObject *impl_scipy$linalg$_expm_frechet$$$function_2_expm_frechet_block_enlarge( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_E = python_pars[ 1 ];
    PyObject *var_n = NULL;
    PyObject *var_M = NULL;
    PyObject *var_expm_M = NULL;
    struct Nuitka_FrameObject *frame_29660e18748d5ca2799bae0bc8618f02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_29660e18748d5ca2799bae0bc8618f02 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_29660e18748d5ca2799bae0bc8618f02, codeobj_29660e18748d5ca2799bae0bc8618f02, module_scipy$linalg$_expm_frechet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_29660e18748d5ca2799bae0bc8618f02 = cache_frame_29660e18748d5ca2799bae0bc8618f02;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_29660e18748d5ca2799bae0bc8618f02 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_29660e18748d5ca2799bae0bc8618f02 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_vstack );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_list_element_2 = par_A;
        tmp_args_element_name_2 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_2 );
        CHECK_OBJECT( par_E );
        tmp_list_element_2 = par_E;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_args_element_name_2, 1, tmp_list_element_2 );
        frame_29660e18748d5ca2799bae0bc8618f02->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_hstack, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hstack );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_4 = par_A;
        frame_29660e18748d5ca2799bae0bc8618f02->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_list_element_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_zeros_like, call_args );
        }

        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_3 );
        CHECK_OBJECT( par_A );
        tmp_list_element_3 = par_A;
        Py_INCREF( tmp_list_element_3 );
        PyList_SET_ITEM( tmp_args_element_name_3, 1, tmp_list_element_3 );
        frame_29660e18748d5ca2799bae0bc8618f02->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
        frame_29660e18748d5ca2799bae0bc8618f02->m_frame.f_lineno = 123;
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


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M == NULL );
        var_M = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_linalg );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_M );
        tmp_args_element_name_5 = var_M;
        frame_29660e18748d5ca2799bae0bc8618f02->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_expm, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_expm_M == NULL );
        var_expm_M = tmp_assign_source_3;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_step_name_3;
        PyObject *tmp_start_name_4;
        PyObject *tmp_stop_name_4;
        PyObject *tmp_step_name_4;
        CHECK_OBJECT( var_expm_M );
        tmp_subscribed_name_2 = var_expm_M;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_n );
        tmp_stop_name_1 = var_n;
        tmp_step_name_1 = Py_None;
        tmp_tuple_element_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_tuple_element_2 == NULL) );
        tmp_subscript_name_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 0, tmp_tuple_element_2 );
        tmp_start_name_2 = Py_None;
        CHECK_OBJECT( var_n );
        tmp_stop_name_2 = var_n;
        tmp_step_name_2 = Py_None;
        tmp_tuple_element_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        assert( !(tmp_tuple_element_2 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 1, tmp_tuple_element_2 );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_expm_M );
        tmp_subscribed_name_3 = var_expm_M;
        tmp_start_name_3 = Py_None;
        CHECK_OBJECT( var_n );
        tmp_stop_name_3 = var_n;
        tmp_step_name_3 = Py_None;
        tmp_tuple_element_3 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        assert( !(tmp_tuple_element_3 == NULL) );
        tmp_subscript_name_3 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_n );
        tmp_start_name_4 = var_n;
        tmp_stop_name_4 = Py_None;
        tmp_step_name_4 = Py_None;
        tmp_tuple_element_3 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
        assert( !(tmp_tuple_element_3 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_3 );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 127;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29660e18748d5ca2799bae0bc8618f02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_29660e18748d5ca2799bae0bc8618f02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29660e18748d5ca2799bae0bc8618f02 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_29660e18748d5ca2799bae0bc8618f02, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_29660e18748d5ca2799bae0bc8618f02->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_29660e18748d5ca2799bae0bc8618f02, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_29660e18748d5ca2799bae0bc8618f02,
        type_description_1,
        par_A,
        par_E,
        var_n,
        var_M,
        var_expm_M
    );


    // Release cached frame.
    if ( frame_29660e18748d5ca2799bae0bc8618f02 == cache_frame_29660e18748d5ca2799bae0bc8618f02 )
    {
        Py_DECREF( frame_29660e18748d5ca2799bae0bc8618f02 );
    }
    cache_frame_29660e18748d5ca2799bae0bc8618f02 = NULL;

    assertFrameObject( frame_29660e18748d5ca2799bae0bc8618f02 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_2_expm_frechet_block_enlarge );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_E );
    Py_DECREF( par_E );
    par_E = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var_expm_M );
    Py_DECREF( var_expm_M );
    var_expm_M = NULL;

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

    CHECK_OBJECT( (PyObject *)par_E );
    Py_DECREF( par_E );
    par_E = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_expm_M );
    var_expm_M = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_2_expm_frechet_block_enlarge );
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


static PyObject *impl_scipy$linalg$_expm_frechet$$$function_3__diff_pade3( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_E = python_pars[ 1 ];
    PyObject *par_ident = python_pars[ 2 ];
    PyObject *var_A2 = NULL;
    PyObject *var_M2 = NULL;
    PyObject *var_U = NULL;
    PyObject *var_V = NULL;
    PyObject *var_Lu = NULL;
    PyObject *var_Lv = NULL;
    struct Nuitka_FrameObject *frame_abf1f815123158eb40adf06cfa524f38;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_abf1f815123158eb40adf06cfa524f38 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_abf1f815123158eb40adf06cfa524f38, codeobj_abf1f815123158eb40adf06cfa524f38, module_scipy$linalg$_expm_frechet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_abf1f815123158eb40adf06cfa524f38 = cache_frame_abf1f815123158eb40adf06cfa524f38;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_abf1f815123158eb40adf06cfa524f38 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_abf1f815123158eb40adf06cfa524f38 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_A );
        tmp_called_instance_1 = par_A;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_abf1f815123158eb40adf06cfa524f38->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A2 == NULL );
        var_A2 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 168;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        CHECK_OBJECT( par_E );
        tmp_args_element_name_3 = par_E;
        frame_abf1f815123158eb40adf06cfa524f38->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 168;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT( par_E );
        tmp_args_element_name_4 = par_E;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_5 = par_A;
        frame_abf1f815123158eb40adf06cfa524f38->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 168;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M2 == NULL );
        var_M2 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = const_float_1_0;
        CHECK_OBJECT( var_A2 );
        tmp_right_name_2 = var_A2;
        tmp_left_name_2 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 169;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = const_float_60_0;
        CHECK_OBJECT( par_ident );
        tmp_right_name_4 = par_ident;
        tmp_right_name_3 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 169;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 169;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_abf1f815123158eb40adf06cfa524f38->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert( var_U == NULL );
        var_U = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        tmp_left_name_6 = const_float_12_0;
        CHECK_OBJECT( var_A2 );
        tmp_right_name_5 = var_A2;
        tmp_left_name_5 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = const_float_120_0;
        CHECK_OBJECT( par_ident );
        tmp_right_name_7 = par_ident;
        tmp_right_name_6 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 170;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert( var_V == NULL );
        var_V = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_8;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_10;
        PyObject *tmp_right_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dot );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = const_float_1_0;
        CHECK_OBJECT( var_M2 );
        tmp_right_name_8 = var_M2;
        tmp_args_element_name_7 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_9, tmp_right_name_8 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 171;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_abf1f815123158eb40adf06cfa524f38->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_left_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_E );
        tmp_source_name_3 = par_E;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dot );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 171;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_11 = const_float_1_0;
        CHECK_OBJECT( var_A2 );
        tmp_right_name_10 = var_A2;
        tmp_left_name_10 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_11, tmp_right_name_10 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 171;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = const_float_60_0;
        CHECK_OBJECT( par_ident );
        tmp_right_name_12 = par_ident;
        tmp_right_name_11 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 171;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_10 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 171;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_abf1f815123158eb40adf06cfa524f38->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_right_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 171;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Lu == NULL );
        var_Lu = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        tmp_left_name_13 = const_float_12_0;
        CHECK_OBJECT( var_M2 );
        tmp_right_name_13 = var_M2;
        tmp_assign_source_6 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Lv == NULL );
        var_Lv = tmp_assign_source_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abf1f815123158eb40adf06cfa524f38 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abf1f815123158eb40adf06cfa524f38 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_abf1f815123158eb40adf06cfa524f38, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_abf1f815123158eb40adf06cfa524f38->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_abf1f815123158eb40adf06cfa524f38, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_abf1f815123158eb40adf06cfa524f38,
        type_description_1,
        par_A,
        par_E,
        par_ident,
        NULL,
        var_A2,
        var_M2,
        var_U,
        var_V,
        var_Lu,
        var_Lv
    );


    // Release cached frame.
    if ( frame_abf1f815123158eb40adf06cfa524f38 == cache_frame_abf1f815123158eb40adf06cfa524f38 )
    {
        Py_DECREF( frame_abf1f815123158eb40adf06cfa524f38 );
    }
    cache_frame_abf1f815123158eb40adf06cfa524f38 = NULL;

    assertFrameObject( frame_abf1f815123158eb40adf06cfa524f38 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_U );
        tmp_tuple_element_1 = var_U;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_V );
        tmp_tuple_element_1 = var_V;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_Lu );
        tmp_tuple_element_1 = var_Lu;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( var_Lv );
        tmp_tuple_element_1 = var_Lv;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_3__diff_pade3 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_E );
    Py_DECREF( par_E );
    par_E = NULL;

    CHECK_OBJECT( (PyObject *)par_ident );
    Py_DECREF( par_ident );
    par_ident = NULL;

    CHECK_OBJECT( (PyObject *)var_A2 );
    Py_DECREF( var_A2 );
    var_A2 = NULL;

    CHECK_OBJECT( (PyObject *)var_M2 );
    Py_DECREF( var_M2 );
    var_M2 = NULL;

    CHECK_OBJECT( (PyObject *)var_U );
    Py_DECREF( var_U );
    var_U = NULL;

    CHECK_OBJECT( (PyObject *)var_V );
    Py_DECREF( var_V );
    var_V = NULL;

    CHECK_OBJECT( (PyObject *)var_Lu );
    Py_DECREF( var_Lu );
    var_Lu = NULL;

    CHECK_OBJECT( (PyObject *)var_Lv );
    Py_DECREF( var_Lv );
    var_Lv = NULL;

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

    CHECK_OBJECT( (PyObject *)par_E );
    Py_DECREF( par_E );
    par_E = NULL;

    CHECK_OBJECT( (PyObject *)par_ident );
    Py_DECREF( par_ident );
    par_ident = NULL;

    Py_XDECREF( var_A2 );
    var_A2 = NULL;

    Py_XDECREF( var_M2 );
    var_M2 = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_V );
    var_V = NULL;

    Py_XDECREF( var_Lu );
    var_Lu = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_3__diff_pade3 );
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


static PyObject *impl_scipy$linalg$_expm_frechet$$$function_4__diff_pade5( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_E = python_pars[ 1 ];
    PyObject *par_ident = python_pars[ 2 ];
    PyObject *var_A2 = NULL;
    PyObject *var_M2 = NULL;
    PyObject *var_A4 = NULL;
    PyObject *var_M4 = NULL;
    PyObject *var_U = NULL;
    PyObject *var_V = NULL;
    PyObject *var_Lu = NULL;
    PyObject *var_Lv = NULL;
    struct Nuitka_FrameObject *frame_b8ca142d73579edab8ced16ca0269240;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b8ca142d73579edab8ced16ca0269240 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b8ca142d73579edab8ced16ca0269240, codeobj_b8ca142d73579edab8ced16ca0269240, module_scipy$linalg$_expm_frechet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b8ca142d73579edab8ced16ca0269240 = cache_frame_b8ca142d73579edab8ced16ca0269240;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b8ca142d73579edab8ced16ca0269240 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b8ca142d73579edab8ced16ca0269240 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_A );
        tmp_called_instance_1 = par_A;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_b8ca142d73579edab8ced16ca0269240->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A2 == NULL );
        var_A2 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 179;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        CHECK_OBJECT( par_E );
        tmp_args_element_name_3 = par_E;
        frame_b8ca142d73579edab8ced16ca0269240->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 179;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT( par_E );
        tmp_args_element_name_4 = par_E;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_5 = par_A;
        frame_b8ca142d73579edab8ced16ca0269240->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 179;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M2 == NULL );
        var_M2 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 180;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_3;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_6 = var_A2;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_7 = var_A2;
        frame_b8ca142d73579edab8ced16ca0269240->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A4 == NULL );
        var_A4 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 181;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_4;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_8 = var_A2;
        CHECK_OBJECT( var_M2 );
        tmp_args_element_name_9 = var_M2;
        frame_b8ca142d73579edab8ced16ca0269240->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_left_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 181;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_5;
        CHECK_OBJECT( var_M2 );
        tmp_args_element_name_10 = var_M2;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_11 = var_A2;
        frame_b8ca142d73579edab8ced16ca0269240->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 181;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M4 == NULL );
        var_M4 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = const_float_1_0;
        CHECK_OBJECT( var_A4 );
        tmp_right_name_3 = var_A4;
        tmp_left_name_4 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_5, tmp_right_name_3 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 182;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = const_float_420_0;
        CHECK_OBJECT( var_A2 );
        tmp_right_name_5 = var_A2;
        tmp_right_name_4 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 182;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 182;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = const_float_15120_0;
        CHECK_OBJECT( par_ident );
        tmp_right_name_7 = par_ident;
        tmp_right_name_6 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 182;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 182;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_b8ca142d73579edab8ced16ca0269240->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_U == NULL );
        var_U = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_10;
        PyObject *tmp_right_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        tmp_left_name_10 = const_float_30_0;
        CHECK_OBJECT( var_A4 );
        tmp_right_name_8 = var_A4;
        tmp_left_name_9 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_10, tmp_right_name_8 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_11 = const_float_3360_0;
        CHECK_OBJECT( var_A2 );
        tmp_right_name_10 = var_A2;
        tmp_right_name_9 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_11, tmp_right_name_10 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 183;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = const_float_30240_0;
        CHECK_OBJECT( par_ident );
        tmp_right_name_12 = par_ident;
        tmp_right_name_11 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 183;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_V == NULL );
        var_V = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_13;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_13;
        PyObject *tmp_right_name_14;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_15;
        PyObject *tmp_right_name_16;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_left_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_17;
        PyObject *tmp_right_name_18;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_19;
        PyObject *tmp_right_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_21;
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dot );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_15 = const_float_1_0;
        CHECK_OBJECT( var_M4 );
        tmp_right_name_13 = var_M4;
        tmp_left_name_14 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_15, tmp_right_name_13 );
        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 184;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_16 = const_float_420_0;
        CHECK_OBJECT( var_M2 );
        tmp_right_name_15 = var_M2;
        tmp_right_name_14 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_16, tmp_right_name_15 );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_14 );

            exception_lineno = 184;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_14 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 184;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_b8ca142d73579edab8ced16ca0269240->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_left_name_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_E );
        tmp_source_name_3 = par_E;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dot );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 185;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_19 = const_float_1_0;
        CHECK_OBJECT( var_A4 );
        tmp_right_name_17 = var_A4;
        tmp_left_name_18 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_19, tmp_right_name_17 );
        if ( tmp_left_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 185;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_20 = const_float_420_0;
        CHECK_OBJECT( var_A2 );
        tmp_right_name_19 = var_A2;
        tmp_right_name_18 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_20, tmp_right_name_19 );
        if ( tmp_right_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_18 );

            exception_lineno = 185;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
        Py_DECREF( tmp_left_name_18 );
        Py_DECREF( tmp_right_name_18 );
        if ( tmp_left_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 185;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_21 = const_float_15120_0;
        CHECK_OBJECT( par_ident );
        tmp_right_name_21 = par_ident;
        tmp_right_name_20 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_21, tmp_right_name_21 );
        if ( tmp_right_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_17 );

            exception_lineno = 185;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_20 );
        Py_DECREF( tmp_left_name_17 );
        Py_DECREF( tmp_right_name_20 );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 185;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_b8ca142d73579edab8ced16ca0269240->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_right_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_right_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 185;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_16 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_16 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Lu == NULL );
        var_Lu = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_22;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_22;
        PyObject *tmp_right_name_23;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_24;
        tmp_left_name_23 = const_float_30_0;
        CHECK_OBJECT( var_M4 );
        tmp_right_name_22 = var_M4;
        tmp_left_name_22 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_23, tmp_right_name_22 );
        if ( tmp_left_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_24 = const_float_3360_0;
        CHECK_OBJECT( var_M2 );
        tmp_right_name_24 = var_M2;
        tmp_right_name_23 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_24, tmp_right_name_24 );
        if ( tmp_right_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_22 );

            exception_lineno = 186;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_23 );
        Py_DECREF( tmp_left_name_22 );
        Py_DECREF( tmp_right_name_23 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Lv == NULL );
        var_Lv = tmp_assign_source_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b8ca142d73579edab8ced16ca0269240 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b8ca142d73579edab8ced16ca0269240 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b8ca142d73579edab8ced16ca0269240, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b8ca142d73579edab8ced16ca0269240->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b8ca142d73579edab8ced16ca0269240, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b8ca142d73579edab8ced16ca0269240,
        type_description_1,
        par_A,
        par_E,
        par_ident,
        NULL,
        var_A2,
        var_M2,
        var_A4,
        var_M4,
        var_U,
        var_V,
        var_Lu,
        var_Lv
    );


    // Release cached frame.
    if ( frame_b8ca142d73579edab8ced16ca0269240 == cache_frame_b8ca142d73579edab8ced16ca0269240 )
    {
        Py_DECREF( frame_b8ca142d73579edab8ced16ca0269240 );
    }
    cache_frame_b8ca142d73579edab8ced16ca0269240 = NULL;

    assertFrameObject( frame_b8ca142d73579edab8ced16ca0269240 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_U );
        tmp_tuple_element_1 = var_U;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_V );
        tmp_tuple_element_1 = var_V;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_Lu );
        tmp_tuple_element_1 = var_Lu;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( var_Lv );
        tmp_tuple_element_1 = var_Lv;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_4__diff_pade5 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_E );
    Py_DECREF( par_E );
    par_E = NULL;

    CHECK_OBJECT( (PyObject *)par_ident );
    Py_DECREF( par_ident );
    par_ident = NULL;

    CHECK_OBJECT( (PyObject *)var_A2 );
    Py_DECREF( var_A2 );
    var_A2 = NULL;

    CHECK_OBJECT( (PyObject *)var_M2 );
    Py_DECREF( var_M2 );
    var_M2 = NULL;

    CHECK_OBJECT( (PyObject *)var_A4 );
    Py_DECREF( var_A4 );
    var_A4 = NULL;

    CHECK_OBJECT( (PyObject *)var_M4 );
    Py_DECREF( var_M4 );
    var_M4 = NULL;

    CHECK_OBJECT( (PyObject *)var_U );
    Py_DECREF( var_U );
    var_U = NULL;

    CHECK_OBJECT( (PyObject *)var_V );
    Py_DECREF( var_V );
    var_V = NULL;

    CHECK_OBJECT( (PyObject *)var_Lu );
    Py_DECREF( var_Lu );
    var_Lu = NULL;

    CHECK_OBJECT( (PyObject *)var_Lv );
    Py_DECREF( var_Lv );
    var_Lv = NULL;

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

    CHECK_OBJECT( (PyObject *)par_E );
    Py_DECREF( par_E );
    par_E = NULL;

    CHECK_OBJECT( (PyObject *)par_ident );
    Py_DECREF( par_ident );
    par_ident = NULL;

    Py_XDECREF( var_A2 );
    var_A2 = NULL;

    Py_XDECREF( var_M2 );
    var_M2 = NULL;

    Py_XDECREF( var_A4 );
    var_A4 = NULL;

    Py_XDECREF( var_M4 );
    var_M4 = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_V );
    var_V = NULL;

    Py_XDECREF( var_Lu );
    var_Lu = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_4__diff_pade5 );
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


static PyObject *impl_scipy$linalg$_expm_frechet$$$function_5__diff_pade7( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_E = python_pars[ 1 ];
    PyObject *par_ident = python_pars[ 2 ];
    PyObject *var_A2 = NULL;
    PyObject *var_M2 = NULL;
    PyObject *var_A4 = NULL;
    PyObject *var_M4 = NULL;
    PyObject *var_A6 = NULL;
    PyObject *var_M6 = NULL;
    PyObject *var_U = NULL;
    PyObject *var_V = NULL;
    PyObject *var_Lu = NULL;
    PyObject *var_Lv = NULL;
    struct Nuitka_FrameObject *frame_2c9783da96494fa6d353a44d14c39c0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2c9783da96494fa6d353a44d14c39c0a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2c9783da96494fa6d353a44d14c39c0a, codeobj_2c9783da96494fa6d353a44d14c39c0a, module_scipy$linalg$_expm_frechet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2c9783da96494fa6d353a44d14c39c0a = cache_frame_2c9783da96494fa6d353a44d14c39c0a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2c9783da96494fa6d353a44d14c39c0a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2c9783da96494fa6d353a44d14c39c0a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_A );
        tmp_called_instance_1 = par_A;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_2c9783da96494fa6d353a44d14c39c0a->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A2 == NULL );
        var_A2 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        CHECK_OBJECT( par_E );
        tmp_args_element_name_3 = par_E;
        frame_2c9783da96494fa6d353a44d14c39c0a->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 193;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT( par_E );
        tmp_args_element_name_4 = par_E;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_5 = par_A;
        frame_2c9783da96494fa6d353a44d14c39c0a->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 193;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M2 == NULL );
        var_M2 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 194;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_3;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_6 = var_A2;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_7 = var_A2;
        frame_2c9783da96494fa6d353a44d14c39c0a->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A4 == NULL );
        var_A4 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 195;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_4;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_8 = var_A2;
        CHECK_OBJECT( var_M2 );
        tmp_args_element_name_9 = var_M2;
        frame_2c9783da96494fa6d353a44d14c39c0a->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_left_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 195;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_5;
        CHECK_OBJECT( var_M2 );
        tmp_args_element_name_10 = var_M2;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_11 = var_A2;
        frame_2c9783da96494fa6d353a44d14c39c0a->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 195;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M4 == NULL );
        var_M4 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 196;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = tmp_mvar_value_6;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_12 = var_A2;
        CHECK_OBJECT( var_A4 );
        tmp_args_element_name_13 = var_A4;
        frame_2c9783da96494fa6d353a44d14c39c0a->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A6 == NULL );
        var_A6 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 197;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = tmp_mvar_value_7;
        CHECK_OBJECT( var_A4 );
        tmp_args_element_name_14 = var_A4;
        CHECK_OBJECT( var_M2 );
        tmp_args_element_name_15 = var_M2;
        frame_2c9783da96494fa6d353a44d14c39c0a->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_left_name_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 197;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = tmp_mvar_value_8;
        CHECK_OBJECT( var_M4 );
        tmp_args_element_name_16 = var_M4;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_17 = var_A2;
        frame_2c9783da96494fa6d353a44d14c39c0a->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_right_name_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_9, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 197;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M6 == NULL );
        var_M6 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = const_float_1_0;
        CHECK_OBJECT( var_A6 );
        tmp_right_name_4 = var_A6;
        tmp_left_name_6 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_7, tmp_right_name_4 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 198;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = const_float_1512_0;
        CHECK_OBJECT( var_A4 );
        tmp_right_name_6 = var_A4;
        tmp_right_name_5 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_8, tmp_right_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 198;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 198;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = const_float_277200_0;
        CHECK_OBJECT( var_A2 );
        tmp_right_name_8 = var_A2;
        tmp_right_name_7 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_9, tmp_right_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 198;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 198;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_10 = const_float_8648640_0;
        CHECK_OBJECT( par_ident );
        tmp_right_name_10 = par_ident;
        tmp_right_name_9 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 198;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_args_element_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 198;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2c9783da96494fa6d353a44d14c39c0a->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_U == NULL );
        var_U = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_13;
        PyObject *tmp_right_name_14;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_15;
        PyObject *tmp_right_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        tmp_left_name_14 = const_float_56_0;
        CHECK_OBJECT( var_A6 );
        tmp_right_name_11 = var_A6;
        tmp_left_name_13 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_14, tmp_right_name_11 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_15 = const_float_25200_0;
        CHECK_OBJECT( var_A4 );
        tmp_right_name_13 = var_A4;
        tmp_right_name_12 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_15, tmp_right_name_13 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 199;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_16 = const_float_1995840_0;
        CHECK_OBJECT( var_A2 );
        tmp_right_name_15 = var_A2;
        tmp_right_name_14 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_16, tmp_right_name_15 );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_12 );

            exception_lineno = 199;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_12 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_17 = const_float_17297280_0;
        CHECK_OBJECT( par_ident );
        tmp_right_name_17 = par_ident;
        tmp_right_name_16 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_17, tmp_right_name_17 );
        if ( tmp_right_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 199;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_16 );
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_right_name_16 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_V == NULL );
        var_V = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_18;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_left_name_19;
        PyObject *tmp_left_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_18;
        PyObject *tmp_right_name_19;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_20;
        PyObject *tmp_right_name_21;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_22;
        PyObject *tmp_right_name_23;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_left_name_24;
        PyObject *tmp_left_name_25;
        PyObject *tmp_left_name_26;
        PyObject *tmp_left_name_27;
        PyObject *tmp_right_name_24;
        PyObject *tmp_right_name_25;
        PyObject *tmp_left_name_28;
        PyObject *tmp_right_name_26;
        PyObject *tmp_right_name_27;
        PyObject *tmp_left_name_29;
        PyObject *tmp_right_name_28;
        PyObject *tmp_right_name_29;
        PyObject *tmp_left_name_30;
        PyObject *tmp_right_name_30;
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dot );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_21 = const_float_1_0;
        CHECK_OBJECT( var_M6 );
        tmp_right_name_18 = var_M6;
        tmp_left_name_20 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_21, tmp_right_name_18 );
        if ( tmp_left_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 200;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_22 = const_float_1512_0;
        CHECK_OBJECT( var_M4 );
        tmp_right_name_20 = var_M4;
        tmp_right_name_19 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_22, tmp_right_name_20 );
        if ( tmp_right_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_20 );

            exception_lineno = 200;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_19 );
        Py_DECREF( tmp_left_name_20 );
        Py_DECREF( tmp_right_name_19 );
        if ( tmp_left_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 200;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_23 = const_float_277200_0;
        CHECK_OBJECT( var_M2 );
        tmp_right_name_22 = var_M2;
        tmp_right_name_21 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_23, tmp_right_name_22 );
        if ( tmp_right_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_19 );

            exception_lineno = 200;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_21 );
        Py_DECREF( tmp_left_name_19 );
        Py_DECREF( tmp_right_name_21 );
        if ( tmp_args_element_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 200;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2c9783da96494fa6d353a44d14c39c0a->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_left_name_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_19 );
        if ( tmp_left_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_E );
        tmp_source_name_3 = par_E;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dot );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );

            exception_lineno = 201;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_27 = const_float_1_0;
        CHECK_OBJECT( var_A6 );
        tmp_right_name_24 = var_A6;
        tmp_left_name_26 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_27, tmp_right_name_24 );
        if ( tmp_left_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 201;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_28 = const_float_1512_0;
        CHECK_OBJECT( var_A4 );
        tmp_right_name_26 = var_A4;
        tmp_right_name_25 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_28, tmp_right_name_26 );
        if ( tmp_right_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_26 );

            exception_lineno = 201;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_26, tmp_right_name_25 );
        Py_DECREF( tmp_left_name_26 );
        Py_DECREF( tmp_right_name_25 );
        if ( tmp_left_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 201;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_29 = const_float_277200_0;
        CHECK_OBJECT( var_A2 );
        tmp_right_name_28 = var_A2;
        tmp_right_name_27 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_29, tmp_right_name_28 );
        if ( tmp_right_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_25 );

            exception_lineno = 201;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_25, tmp_right_name_27 );
        Py_DECREF( tmp_left_name_25 );
        Py_DECREF( tmp_right_name_27 );
        if ( tmp_left_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 201;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_30 = const_float_8648640_0;
        CHECK_OBJECT( par_ident );
        tmp_right_name_30 = par_ident;
        tmp_right_name_29 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_30, tmp_right_name_30 );
        if ( tmp_right_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_24 );

            exception_lineno = 201;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_29 );
        Py_DECREF( tmp_left_name_24 );
        Py_DECREF( tmp_right_name_29 );
        if ( tmp_args_element_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 201;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2c9783da96494fa6d353a44d14c39c0a->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_right_name_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_right_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );

            exception_lineno = 201;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_23 );
        Py_DECREF( tmp_left_name_18 );
        Py_DECREF( tmp_right_name_23 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Lu == NULL );
        var_Lu = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_31;
        PyObject *tmp_left_name_32;
        PyObject *tmp_left_name_33;
        PyObject *tmp_right_name_31;
        PyObject *tmp_right_name_32;
        PyObject *tmp_left_name_34;
        PyObject *tmp_right_name_33;
        PyObject *tmp_right_name_34;
        PyObject *tmp_left_name_35;
        PyObject *tmp_right_name_35;
        tmp_left_name_33 = const_float_56_0;
        CHECK_OBJECT( var_M6 );
        tmp_right_name_31 = var_M6;
        tmp_left_name_32 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_33, tmp_right_name_31 );
        if ( tmp_left_name_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_34 = const_float_25200_0;
        CHECK_OBJECT( var_M4 );
        tmp_right_name_33 = var_M4;
        tmp_right_name_32 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_34, tmp_right_name_33 );
        if ( tmp_right_name_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_32 );

            exception_lineno = 202;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_32, tmp_right_name_32 );
        Py_DECREF( tmp_left_name_32 );
        Py_DECREF( tmp_right_name_32 );
        if ( tmp_left_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_35 = const_float_1995840_0;
        CHECK_OBJECT( var_M2 );
        tmp_right_name_35 = var_M2;
        tmp_right_name_34 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_35, tmp_right_name_35 );
        if ( tmp_right_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_31 );

            exception_lineno = 202;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_31, tmp_right_name_34 );
        Py_DECREF( tmp_left_name_31 );
        Py_DECREF( tmp_right_name_34 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "oooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Lv == NULL );
        var_Lv = tmp_assign_source_10;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c9783da96494fa6d353a44d14c39c0a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c9783da96494fa6d353a44d14c39c0a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2c9783da96494fa6d353a44d14c39c0a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2c9783da96494fa6d353a44d14c39c0a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2c9783da96494fa6d353a44d14c39c0a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2c9783da96494fa6d353a44d14c39c0a,
        type_description_1,
        par_A,
        par_E,
        par_ident,
        NULL,
        var_A2,
        var_M2,
        var_A4,
        var_M4,
        var_A6,
        var_M6,
        var_U,
        var_V,
        var_Lu,
        var_Lv
    );


    // Release cached frame.
    if ( frame_2c9783da96494fa6d353a44d14c39c0a == cache_frame_2c9783da96494fa6d353a44d14c39c0a )
    {
        Py_DECREF( frame_2c9783da96494fa6d353a44d14c39c0a );
    }
    cache_frame_2c9783da96494fa6d353a44d14c39c0a = NULL;

    assertFrameObject( frame_2c9783da96494fa6d353a44d14c39c0a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_U );
        tmp_tuple_element_1 = var_U;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_V );
        tmp_tuple_element_1 = var_V;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_Lu );
        tmp_tuple_element_1 = var_Lu;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( var_Lv );
        tmp_tuple_element_1 = var_Lv;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_5__diff_pade7 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_E );
    Py_DECREF( par_E );
    par_E = NULL;

    CHECK_OBJECT( (PyObject *)par_ident );
    Py_DECREF( par_ident );
    par_ident = NULL;

    CHECK_OBJECT( (PyObject *)var_A2 );
    Py_DECREF( var_A2 );
    var_A2 = NULL;

    CHECK_OBJECT( (PyObject *)var_M2 );
    Py_DECREF( var_M2 );
    var_M2 = NULL;

    CHECK_OBJECT( (PyObject *)var_A4 );
    Py_DECREF( var_A4 );
    var_A4 = NULL;

    CHECK_OBJECT( (PyObject *)var_M4 );
    Py_DECREF( var_M4 );
    var_M4 = NULL;

    CHECK_OBJECT( (PyObject *)var_A6 );
    Py_DECREF( var_A6 );
    var_A6 = NULL;

    CHECK_OBJECT( (PyObject *)var_M6 );
    Py_DECREF( var_M6 );
    var_M6 = NULL;

    CHECK_OBJECT( (PyObject *)var_U );
    Py_DECREF( var_U );
    var_U = NULL;

    CHECK_OBJECT( (PyObject *)var_V );
    Py_DECREF( var_V );
    var_V = NULL;

    CHECK_OBJECT( (PyObject *)var_Lu );
    Py_DECREF( var_Lu );
    var_Lu = NULL;

    CHECK_OBJECT( (PyObject *)var_Lv );
    Py_DECREF( var_Lv );
    var_Lv = NULL;

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

    CHECK_OBJECT( (PyObject *)par_E );
    Py_DECREF( par_E );
    par_E = NULL;

    CHECK_OBJECT( (PyObject *)par_ident );
    Py_DECREF( par_ident );
    par_ident = NULL;

    Py_XDECREF( var_A2 );
    var_A2 = NULL;

    Py_XDECREF( var_M2 );
    var_M2 = NULL;

    Py_XDECREF( var_A4 );
    var_A4 = NULL;

    Py_XDECREF( var_M4 );
    var_M4 = NULL;

    Py_XDECREF( var_A6 );
    var_A6 = NULL;

    Py_XDECREF( var_M6 );
    var_M6 = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_V );
    var_V = NULL;

    Py_XDECREF( var_Lu );
    var_Lu = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_5__diff_pade7 );
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


static PyObject *impl_scipy$linalg$_expm_frechet$$$function_6__diff_pade9( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_E = python_pars[ 1 ];
    PyObject *par_ident = python_pars[ 2 ];
    PyObject *var_A2 = NULL;
    PyObject *var_M2 = NULL;
    PyObject *var_A4 = NULL;
    PyObject *var_M4 = NULL;
    PyObject *var_A6 = NULL;
    PyObject *var_M6 = NULL;
    PyObject *var_A8 = NULL;
    PyObject *var_M8 = NULL;
    PyObject *var_U = NULL;
    PyObject *var_V = NULL;
    PyObject *var_Lu = NULL;
    PyObject *var_Lv = NULL;
    struct Nuitka_FrameObject *frame_f6cf6256f8d9212e09b74dec29838493;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f6cf6256f8d9212e09b74dec29838493 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f6cf6256f8d9212e09b74dec29838493, codeobj_f6cf6256f8d9212e09b74dec29838493, module_scipy$linalg$_expm_frechet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f6cf6256f8d9212e09b74dec29838493 = cache_frame_f6cf6256f8d9212e09b74dec29838493;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f6cf6256f8d9212e09b74dec29838493 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f6cf6256f8d9212e09b74dec29838493 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_A );
        tmp_called_instance_1 = par_A;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A2 == NULL );
        var_A2 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 210;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        CHECK_OBJECT( par_E );
        tmp_args_element_name_3 = par_E;
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 210;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT( par_E );
        tmp_args_element_name_4 = par_E;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_5 = par_A;
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 210;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M2 == NULL );
        var_M2 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 211;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_3;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_6 = var_A2;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_7 = var_A2;
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A4 == NULL );
        var_A4 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 212;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_4;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_8 = var_A2;
        CHECK_OBJECT( var_M2 );
        tmp_args_element_name_9 = var_M2;
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_left_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 212;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_5;
        CHECK_OBJECT( var_M2 );
        tmp_args_element_name_10 = var_M2;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_11 = var_A2;
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 212;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M4 == NULL );
        var_M4 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 213;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = tmp_mvar_value_6;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_12 = var_A2;
        CHECK_OBJECT( var_A4 );
        tmp_args_element_name_13 = var_A4;
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A6 == NULL );
        var_A6 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 214;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = tmp_mvar_value_7;
        CHECK_OBJECT( var_A4 );
        tmp_args_element_name_14 = var_A4;
        CHECK_OBJECT( var_M2 );
        tmp_args_element_name_15 = var_M2;
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_left_name_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 214;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = tmp_mvar_value_8;
        CHECK_OBJECT( var_M4 );
        tmp_args_element_name_16 = var_M4;
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_17 = var_A2;
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_right_name_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_9, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 214;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M6 == NULL );
        var_M6 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 215;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = tmp_mvar_value_9;
        CHECK_OBJECT( var_A4 );
        tmp_args_element_name_18 = var_A4;
        CHECK_OBJECT( var_A4 );
        tmp_args_element_name_19 = var_A4;
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_10, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A8 == NULL );
        var_A8 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_4;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 216;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = tmp_mvar_value_10;
        CHECK_OBJECT( var_A4 );
        tmp_args_element_name_20 = var_A4;
        CHECK_OBJECT( var_M4 );
        tmp_args_element_name_21 = var_M4;
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
            tmp_left_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_11, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_left_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 216;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_12 = tmp_mvar_value_11;
        CHECK_OBJECT( var_M4 );
        tmp_args_element_name_22 = var_M4;
        CHECK_OBJECT( var_A4 );
        tmp_args_element_name_23 = var_A4;
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23 };
            tmp_right_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_12, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 216;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M8 == NULL );
        var_M8 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = const_float_1_0;
        CHECK_OBJECT( var_A8 );
        tmp_right_name_5 = var_A8;
        tmp_left_name_8 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_9, tmp_right_name_5 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 217;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_10 = const_float_3960_0;
        CHECK_OBJECT( var_A6 );
        tmp_right_name_7 = var_A6;
        tmp_right_name_6 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_10, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 217;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 217;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_11 = const_float_2162160_0;
        CHECK_OBJECT( var_A4 );
        tmp_right_name_9 = var_A4;
        tmp_right_name_8 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_11, tmp_right_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 217;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 217;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = const_float_302702400_0;
        CHECK_OBJECT( var_A2 );
        tmp_right_name_11 = var_A2;
        tmp_right_name_10 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_12, tmp_right_name_11 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 217;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 217;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_13 = const_float_8821612800_0;
        CHECK_OBJECT( par_ident );
        tmp_right_name_13 = par_ident;
        tmp_right_name_12 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 217;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_args_element_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 217;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_U == NULL );
        var_U = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_14;
        PyObject *tmp_right_name_15;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_16;
        PyObject *tmp_right_name_17;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_18;
        PyObject *tmp_right_name_19;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_20;
        PyObject *tmp_right_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_22;
        tmp_left_name_18 = const_float_90_0;
        CHECK_OBJECT( var_A8 );
        tmp_right_name_14 = var_A8;
        tmp_left_name_17 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_18, tmp_right_name_14 );
        if ( tmp_left_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_19 = const_float_110880_0;
        CHECK_OBJECT( var_A6 );
        tmp_right_name_16 = var_A6;
        tmp_right_name_15 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_19, tmp_right_name_16 );
        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_17 );

            exception_lineno = 218;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_17 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_left_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_20 = const_float_30270240_0;
        CHECK_OBJECT( var_A4 );
        tmp_right_name_18 = var_A4;
        tmp_right_name_17 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_20, tmp_right_name_18 );
        if ( tmp_right_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_16 );

            exception_lineno = 218;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_17 );
        Py_DECREF( tmp_left_name_16 );
        Py_DECREF( tmp_right_name_17 );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_21 = const_float_2075673600_0;
        CHECK_OBJECT( var_A2 );
        tmp_right_name_20 = var_A2;
        tmp_right_name_19 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_21, tmp_right_name_20 );
        if ( tmp_right_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );

            exception_lineno = 218;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_19 );
        Py_DECREF( tmp_left_name_15 );
        Py_DECREF( tmp_right_name_19 );
        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_22 = const_float_17643225600_0;
        CHECK_OBJECT( par_ident );
        tmp_right_name_22 = par_ident;
        tmp_right_name_21 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_22, tmp_right_name_22 );
        if ( tmp_right_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_14 );

            exception_lineno = 218;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_21 );
        Py_DECREF( tmp_left_name_14 );
        Py_DECREF( tmp_right_name_21 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_V == NULL );
        var_V = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_23;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_left_name_24;
        PyObject *tmp_left_name_25;
        PyObject *tmp_left_name_26;
        PyObject *tmp_left_name_27;
        PyObject *tmp_right_name_23;
        PyObject *tmp_right_name_24;
        PyObject *tmp_left_name_28;
        PyObject *tmp_right_name_25;
        PyObject *tmp_right_name_26;
        PyObject *tmp_left_name_29;
        PyObject *tmp_right_name_27;
        PyObject *tmp_right_name_28;
        PyObject *tmp_left_name_30;
        PyObject *tmp_right_name_29;
        PyObject *tmp_right_name_30;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_left_name_31;
        PyObject *tmp_left_name_32;
        PyObject *tmp_left_name_33;
        PyObject *tmp_left_name_34;
        PyObject *tmp_left_name_35;
        PyObject *tmp_right_name_31;
        PyObject *tmp_right_name_32;
        PyObject *tmp_left_name_36;
        PyObject *tmp_right_name_33;
        PyObject *tmp_right_name_34;
        PyObject *tmp_left_name_37;
        PyObject *tmp_right_name_35;
        PyObject *tmp_right_name_36;
        PyObject *tmp_left_name_38;
        PyObject *tmp_right_name_37;
        PyObject *tmp_right_name_38;
        PyObject *tmp_left_name_39;
        PyObject *tmp_right_name_39;
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dot );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_27 = const_float_1_0;
        CHECK_OBJECT( var_M8 );
        tmp_right_name_23 = var_M8;
        tmp_left_name_26 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_27, tmp_right_name_23 );
        if ( tmp_left_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 219;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_28 = const_float_3960_0;
        CHECK_OBJECT( var_M6 );
        tmp_right_name_25 = var_M6;
        tmp_right_name_24 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_28, tmp_right_name_25 );
        if ( tmp_right_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_26 );

            exception_lineno = 219;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_26, tmp_right_name_24 );
        Py_DECREF( tmp_left_name_26 );
        Py_DECREF( tmp_right_name_24 );
        if ( tmp_left_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 219;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_29 = const_float_2162160_0;
        CHECK_OBJECT( var_M4 );
        tmp_right_name_27 = var_M4;
        tmp_right_name_26 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_29, tmp_right_name_27 );
        if ( tmp_right_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_25 );

            exception_lineno = 219;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_25, tmp_right_name_26 );
        Py_DECREF( tmp_left_name_25 );
        Py_DECREF( tmp_right_name_26 );
        if ( tmp_left_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 219;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_30 = const_float_302702400_0;
        CHECK_OBJECT( var_M2 );
        tmp_right_name_29 = var_M2;
        tmp_right_name_28 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_30, tmp_right_name_29 );
        if ( tmp_right_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_24 );

            exception_lineno = 219;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_28 );
        Py_DECREF( tmp_left_name_24 );
        Py_DECREF( tmp_right_name_28 );
        if ( tmp_args_element_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 219;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_left_name_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_25 );
        if ( tmp_left_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_E );
        tmp_source_name_3 = par_E;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dot );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_23 );

            exception_lineno = 220;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_35 = const_float_1_0;
        CHECK_OBJECT( var_A8 );
        tmp_right_name_31 = var_A8;
        tmp_left_name_34 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_35, tmp_right_name_31 );
        if ( tmp_left_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_23 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 220;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_36 = const_float_3960_0;
        CHECK_OBJECT( var_A6 );
        tmp_right_name_33 = var_A6;
        tmp_right_name_32 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_36, tmp_right_name_33 );
        if ( tmp_right_name_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_23 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_34 );

            exception_lineno = 220;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_34, tmp_right_name_32 );
        Py_DECREF( tmp_left_name_34 );
        Py_DECREF( tmp_right_name_32 );
        if ( tmp_left_name_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_23 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 220;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_37 = const_float_2162160_0;
        CHECK_OBJECT( var_A4 );
        tmp_right_name_35 = var_A4;
        tmp_right_name_34 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_37, tmp_right_name_35 );
        if ( tmp_right_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_23 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_33 );

            exception_lineno = 220;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_33, tmp_right_name_34 );
        Py_DECREF( tmp_left_name_33 );
        Py_DECREF( tmp_right_name_34 );
        if ( tmp_left_name_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_23 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 220;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_38 = const_float_302702400_0;
        CHECK_OBJECT( var_A2 );
        tmp_right_name_37 = var_A2;
        tmp_right_name_36 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_38, tmp_right_name_37 );
        if ( tmp_right_name_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_23 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_32 );

            exception_lineno = 220;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_32, tmp_right_name_36 );
        Py_DECREF( tmp_left_name_32 );
        Py_DECREF( tmp_right_name_36 );
        if ( tmp_left_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_23 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 220;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_39 = const_float_8821612800_0;
        CHECK_OBJECT( par_ident );
        tmp_right_name_39 = par_ident;
        tmp_right_name_38 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_39, tmp_right_name_39 );
        if ( tmp_right_name_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_23 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_left_name_31 );

            exception_lineno = 220;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_31, tmp_right_name_38 );
        Py_DECREF( tmp_left_name_31 );
        Py_DECREF( tmp_right_name_38 );
        if ( tmp_args_element_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_23 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 220;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f6cf6256f8d9212e09b74dec29838493->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_right_name_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_26 );
        if ( tmp_right_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_23 );

            exception_lineno = 220;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_30 );
        Py_DECREF( tmp_left_name_23 );
        Py_DECREF( tmp_right_name_30 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Lu == NULL );
        var_Lu = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_40;
        PyObject *tmp_left_name_41;
        PyObject *tmp_left_name_42;
        PyObject *tmp_left_name_43;
        PyObject *tmp_right_name_40;
        PyObject *tmp_right_name_41;
        PyObject *tmp_left_name_44;
        PyObject *tmp_right_name_42;
        PyObject *tmp_right_name_43;
        PyObject *tmp_left_name_45;
        PyObject *tmp_right_name_44;
        PyObject *tmp_right_name_45;
        PyObject *tmp_left_name_46;
        PyObject *tmp_right_name_46;
        tmp_left_name_43 = const_float_90_0;
        CHECK_OBJECT( var_M8 );
        tmp_right_name_40 = var_M8;
        tmp_left_name_42 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_43, tmp_right_name_40 );
        if ( tmp_left_name_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_44 = const_float_110880_0;
        CHECK_OBJECT( var_M6 );
        tmp_right_name_42 = var_M6;
        tmp_right_name_41 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_44, tmp_right_name_42 );
        if ( tmp_right_name_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_42 );

            exception_lineno = 221;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_41 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_42, tmp_right_name_41 );
        Py_DECREF( tmp_left_name_42 );
        Py_DECREF( tmp_right_name_41 );
        if ( tmp_left_name_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_45 = const_float_30270240_0;
        CHECK_OBJECT( var_M4 );
        tmp_right_name_44 = var_M4;
        tmp_right_name_43 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_45, tmp_right_name_44 );
        if ( tmp_right_name_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_41 );

            exception_lineno = 221;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_40 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_41, tmp_right_name_43 );
        Py_DECREF( tmp_left_name_41 );
        Py_DECREF( tmp_right_name_43 );
        if ( tmp_left_name_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_46 = const_float_2075673600_0;
        CHECK_OBJECT( var_M2 );
        tmp_right_name_46 = var_M2;
        tmp_right_name_45 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_46, tmp_right_name_46 );
        if ( tmp_right_name_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_40 );

            exception_lineno = 221;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_40, tmp_right_name_45 );
        Py_DECREF( tmp_left_name_40 );
        Py_DECREF( tmp_right_name_45 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "oooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Lv == NULL );
        var_Lv = tmp_assign_source_12;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6cf6256f8d9212e09b74dec29838493 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6cf6256f8d9212e09b74dec29838493 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f6cf6256f8d9212e09b74dec29838493, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f6cf6256f8d9212e09b74dec29838493->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f6cf6256f8d9212e09b74dec29838493, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f6cf6256f8d9212e09b74dec29838493,
        type_description_1,
        par_A,
        par_E,
        par_ident,
        NULL,
        var_A2,
        var_M2,
        var_A4,
        var_M4,
        var_A6,
        var_M6,
        var_A8,
        var_M8,
        var_U,
        var_V,
        var_Lu,
        var_Lv
    );


    // Release cached frame.
    if ( frame_f6cf6256f8d9212e09b74dec29838493 == cache_frame_f6cf6256f8d9212e09b74dec29838493 )
    {
        Py_DECREF( frame_f6cf6256f8d9212e09b74dec29838493 );
    }
    cache_frame_f6cf6256f8d9212e09b74dec29838493 = NULL;

    assertFrameObject( frame_f6cf6256f8d9212e09b74dec29838493 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_U );
        tmp_tuple_element_1 = var_U;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_V );
        tmp_tuple_element_1 = var_V;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_Lu );
        tmp_tuple_element_1 = var_Lu;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( var_Lv );
        tmp_tuple_element_1 = var_Lv;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_6__diff_pade9 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_E );
    Py_DECREF( par_E );
    par_E = NULL;

    CHECK_OBJECT( (PyObject *)par_ident );
    Py_DECREF( par_ident );
    par_ident = NULL;

    CHECK_OBJECT( (PyObject *)var_A2 );
    Py_DECREF( var_A2 );
    var_A2 = NULL;

    CHECK_OBJECT( (PyObject *)var_M2 );
    Py_DECREF( var_M2 );
    var_M2 = NULL;

    CHECK_OBJECT( (PyObject *)var_A4 );
    Py_DECREF( var_A4 );
    var_A4 = NULL;

    CHECK_OBJECT( (PyObject *)var_M4 );
    Py_DECREF( var_M4 );
    var_M4 = NULL;

    CHECK_OBJECT( (PyObject *)var_A6 );
    Py_DECREF( var_A6 );
    var_A6 = NULL;

    CHECK_OBJECT( (PyObject *)var_M6 );
    Py_DECREF( var_M6 );
    var_M6 = NULL;

    CHECK_OBJECT( (PyObject *)var_A8 );
    Py_DECREF( var_A8 );
    var_A8 = NULL;

    CHECK_OBJECT( (PyObject *)var_M8 );
    Py_DECREF( var_M8 );
    var_M8 = NULL;

    CHECK_OBJECT( (PyObject *)var_U );
    Py_DECREF( var_U );
    var_U = NULL;

    CHECK_OBJECT( (PyObject *)var_V );
    Py_DECREF( var_V );
    var_V = NULL;

    CHECK_OBJECT( (PyObject *)var_Lu );
    Py_DECREF( var_Lu );
    var_Lu = NULL;

    CHECK_OBJECT( (PyObject *)var_Lv );
    Py_DECREF( var_Lv );
    var_Lv = NULL;

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

    CHECK_OBJECT( (PyObject *)par_E );
    Py_DECREF( par_E );
    par_E = NULL;

    CHECK_OBJECT( (PyObject *)par_ident );
    Py_DECREF( par_ident );
    par_ident = NULL;

    Py_XDECREF( var_A2 );
    var_A2 = NULL;

    Py_XDECREF( var_M2 );
    var_M2 = NULL;

    Py_XDECREF( var_A4 );
    var_A4 = NULL;

    Py_XDECREF( var_M4 );
    var_M4 = NULL;

    Py_XDECREF( var_A6 );
    var_A6 = NULL;

    Py_XDECREF( var_M6 );
    var_M6 = NULL;

    Py_XDECREF( var_A8 );
    var_A8 = NULL;

    Py_XDECREF( var_M8 );
    var_M8 = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_V );
    var_V = NULL;

    Py_XDECREF( var_Lu );
    var_Lu = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_6__diff_pade9 );
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


static PyObject *impl_scipy$linalg$_expm_frechet$$$function_7_expm_frechet_algo_64( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_E = python_pars[ 1 ];
    PyObject *var_n = NULL;
    PyObject *var_s = NULL;
    PyObject *var_ident = NULL;
    PyObject *var_A_norm_1 = NULL;
    PyObject *var_m_pade_pairs = NULL;
    PyObject *var_m = NULL;
    PyObject *var_pade = NULL;
    PyObject *var_U = NULL;
    PyObject *var_V = NULL;
    PyObject *var_Lu = NULL;
    PyObject *var_Lv = NULL;
    PyObject *var_A2 = NULL;
    PyObject *var_M2 = NULL;
    PyObject *var_A4 = NULL;
    PyObject *var_M4 = NULL;
    PyObject *var_A6 = NULL;
    PyObject *var_M6 = NULL;
    PyObject *var_W1 = NULL;
    PyObject *var_W2 = NULL;
    PyObject *var_Z1 = NULL;
    PyObject *var_Z2 = NULL;
    PyObject *var_W = NULL;
    PyObject *var_Lw1 = NULL;
    PyObject *var_Lw2 = NULL;
    PyObject *var_Lz1 = NULL;
    PyObject *var_Lz2 = NULL;
    PyObject *var_Lw = NULL;
    PyObject *var_lu_piv = NULL;
    PyObject *var_R = NULL;
    PyObject *var_L = NULL;
    PyObject *var_k = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_51f161f2e60baff3e3802d6ea10c3ca2;
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
    static struct Nuitka_FrameObject *cache_frame_51f161f2e60baff3e3802d6ea10c3ca2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_51f161f2e60baff3e3802d6ea10c3ca2, codeobj_51f161f2e60baff3e3802d6ea10c3ca2, module_scipy$linalg$_expm_frechet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_51f161f2e60baff3e3802d6ea10c3ca2 = cache_frame_51f161f2e60baff3e3802d6ea10c3ca2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_51f161f2e60baff3e3802d6ea10c3ca2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_51f161f2e60baff3e3802d6ea10c3ca2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert( var_s == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_s = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_1 = var_n;
        frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_identity, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ident == NULL );
        var_ident = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_linalg );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        tmp_args_element_name_3 = const_int_pos_1;
        frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_norm, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A_norm_1 == NULL );
        var_A_norm_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_6;
        tmp_tuple_element_2 = const_int_pos_3;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain__diff_pade3 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__diff_pade3 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_diff_pade3" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_3;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_assign_source_5 = PyTuple_New( 4 );
        PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
        tmp_tuple_element_3 = const_int_pos_5;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_3 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain__diff_pade5 );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__diff_pade5 );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assign_source_5 );
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_diff_pade5" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = tmp_mvar_value_4;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_5, 1, tmp_tuple_element_1 );
        tmp_tuple_element_4 = const_int_pos_7;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_4 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain__diff_pade7 );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__diff_pade7 );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assign_source_5 );
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_diff_pade7" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 233;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = tmp_mvar_value_5;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_assign_source_5, 2, tmp_tuple_element_1 );
        tmp_tuple_element_5 = const_int_pos_9;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_5 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain__diff_pade9 );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__diff_pade9 );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_assign_source_5 );
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_diff_pade9" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 234;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_5 = tmp_mvar_value_6;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_assign_source_5, 3, tmp_tuple_element_1 );
        assert( var_m_pade_pairs == NULL );
        var_m_pade_pairs = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_m_pade_pairs );
        tmp_iter_arg_1 = var_m_pade_pairs;
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
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
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                exception_lineno = 235;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            exception_lineno = 235;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            exception_lineno = 235;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
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

                    type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                    exception_lineno = 235;
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

            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            exception_lineno = 235;
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
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_11;
            Py_INCREF( var_m );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_pade;
            var_pade = tmp_assign_source_12;
            Py_INCREF( var_pade );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_A_norm_1 );
        tmp_compexpr_left_1 = var_A_norm_1;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_ell_table_61 );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ell_table_61 );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ell_table_61" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscribed_name_2 = tmp_mvar_value_7;
        CHECK_OBJECT( var_m );
        tmp_subscript_name_2 = var_m;
        tmp_compexpr_right_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( var_pade );
            tmp_called_name_1 = var_pade;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_4 = par_A;
            CHECK_OBJECT( par_E );
            tmp_args_element_name_5 = par_E;
            CHECK_OBJECT( var_ident );
            tmp_args_element_name_6 = var_ident;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 237;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
            }

            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_3, 0, 4 );
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


                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                exception_lineno = 237;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_4, 1, 4 );
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


                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                exception_lineno = 237;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_5, 2, 4 );
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


                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                exception_lineno = 237;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_2__element_3 == NULL );
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_6, 3, 4 );
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


                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                exception_lineno = 237;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_2__element_4 == NULL );
            tmp_tuple_unpack_2__element_4 = tmp_assign_source_17;
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

                        type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                        exception_lineno = 237;
                        goto try_except_handler_6;
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

                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                exception_lineno = 237;
                goto try_except_handler_6;
            }
        }
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_5;
        // End of try:
        try_end_3:;
        goto try_end_4;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_4 );
        tmp_tuple_unpack_2__element_4 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_2;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_U;
                var_U = tmp_assign_source_18;
                Py_INCREF( var_U );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_V;
                var_V = tmp_assign_source_19;
                Py_INCREF( var_V );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
            tmp_assign_source_20 = tmp_tuple_unpack_2__element_3;
            {
                PyObject *old = var_Lu;
                var_Lu = tmp_assign_source_20;
                Py_INCREF( var_Lu );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_4 );
            tmp_assign_source_21 = tmp_tuple_unpack_2__element_4;
            {
                PyObject *old = var_Lv;
                var_Lv = tmp_assign_source_21;
                Py_INCREF( var_Lv );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_4 );
        tmp_tuple_unpack_2__element_4 = NULL;

        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = const_int_0;
            {
                PyObject *old = var_s;
                assert( old != NULL );
                var_s = tmp_assign_source_22;
                Py_INCREF( var_s );
                Py_DECREF( old );
            }

        }
        goto loop_end_1;
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description_1 = "oooooooooooooooooooNoooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        if ( var_s == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = var_s;
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
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_subscript_name_3;
            tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_2 != NULL );
            tmp_args_element_name_7 = const_int_0;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_8;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ceil );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_9 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_9;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_log2 );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_A_norm_1 );
            tmp_left_name_1 = var_A_norm_1;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_ell_table_61 );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ell_table_61 );
            }

            if ( tmp_mvar_value_10 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ell_table_61" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_3 = tmp_mvar_value_10;
            tmp_subscript_name_3 = const_int_pos_13;
            tmp_right_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 13 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 242;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 242;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_8 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 242;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_s;
                var_s = tmp_assign_source_23;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( par_A );
            tmp_left_name_2 = par_A;
            tmp_left_name_3 = const_float_2_0;
            CHECK_OBJECT( var_s );
            tmp_operand_name_1 = var_s;
            tmp_right_name_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_24 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_A;
                assert( old != NULL );
                par_A = tmp_assign_source_24;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_operand_name_2;
            CHECK_OBJECT( par_E );
            tmp_left_name_4 = par_E;
            tmp_left_name_5 = const_float_2_0;
            CHECK_OBJECT( var_s );
            tmp_operand_name_2 = var_s;
            tmp_right_name_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = POWER_OPERATION( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_25 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_E;
                assert( old != NULL );
                par_E = tmp_assign_source_25;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 246;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_11;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_11 = par_A;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_12 = par_A;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 246;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_assign_source_26 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_dot, call_args );
            }

            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 246;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_A2 == NULL );
            var_A2 = tmp_assign_source_26;
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_left_name_6;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_right_name_6;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 247;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_12;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_13 = par_A;
            CHECK_OBJECT( par_E );
            tmp_args_element_name_14 = par_E;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 247;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                tmp_left_name_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_dot, call_args );
            }

            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 247;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_13 == NULL )
            {
                Py_DECREF( tmp_left_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 247;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = tmp_mvar_value_13;
            CHECK_OBJECT( par_E );
            tmp_args_element_name_15 = par_E;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_16 = par_A;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 247;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_right_name_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_dot, call_args );
            }

            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 247;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 247;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_M2 == NULL );
            var_M2 = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 248;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_14;
            CHECK_OBJECT( var_A2 );
            tmp_args_element_name_17 = var_A2;
            CHECK_OBJECT( var_A2 );
            tmp_args_element_name_18 = var_A2;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 248;
            {
                PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
                tmp_assign_source_28 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_dot, call_args );
            }

            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 248;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_A4 == NULL );
            var_A4 = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_left_name_7;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_right_name_7;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_args_element_name_22;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 249;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_7 = tmp_mvar_value_15;
            CHECK_OBJECT( var_A2 );
            tmp_args_element_name_19 = var_A2;
            CHECK_OBJECT( var_M2 );
            tmp_args_element_name_20 = var_M2;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 249;
            {
                PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
                tmp_left_name_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_dot, call_args );
            }

            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_16 == NULL )
            {
                Py_DECREF( tmp_left_name_7 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 249;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_8 = tmp_mvar_value_16;
            CHECK_OBJECT( var_M2 );
            tmp_args_element_name_21 = var_M2;
            CHECK_OBJECT( var_A2 );
            tmp_args_element_name_22 = var_A2;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 249;
            {
                PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
                tmp_right_name_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_dot, call_args );
            }

            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 249;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_M4 == NULL );
            var_M4 = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_args_element_name_24;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 250;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_9 = tmp_mvar_value_17;
            CHECK_OBJECT( var_A2 );
            tmp_args_element_name_23 = var_A2;
            CHECK_OBJECT( var_A4 );
            tmp_args_element_name_24 = var_A4;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 250;
            {
                PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
                tmp_assign_source_30 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_9, const_str_plain_dot, call_args );
            }

            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_A6 == NULL );
            var_A6 = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_left_name_8;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_right_name_8;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_args_element_name_28;
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 251;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_10 = tmp_mvar_value_18;
            CHECK_OBJECT( var_A4 );
            tmp_args_element_name_25 = var_A4;
            CHECK_OBJECT( var_M2 );
            tmp_args_element_name_26 = var_M2;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 251;
            {
                PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26 };
                tmp_left_name_8 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_10, const_str_plain_dot, call_args );
            }

            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_19 == NULL )
            {
                Py_DECREF( tmp_left_name_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 251;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_11 = tmp_mvar_value_19;
            CHECK_OBJECT( var_M4 );
            tmp_args_element_name_27 = var_M4;
            CHECK_OBJECT( var_A2 );
            tmp_args_element_name_28 = var_A2;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 251;
            {
                PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28 };
                tmp_right_name_8 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_11, const_str_plain_dot, call_args );
            }

            if ( tmp_right_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 251;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_right_name_8 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_M6 == NULL );
            var_M6 = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_left_name_9;
            PyObject *tmp_left_name_10;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_9;
            PyObject *tmp_right_name_10;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_11;
            PyObject *tmp_right_name_12;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_13;
            tmp_left_name_11 = const_float_1_0;
            CHECK_OBJECT( var_A6 );
            tmp_right_name_9 = var_A6;
            tmp_left_name_10 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_11, tmp_right_name_9 );
            if ( tmp_left_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_12 = const_float_16380_0;
            CHECK_OBJECT( var_A4 );
            tmp_right_name_11 = var_A4;
            tmp_right_name_10 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_12, tmp_right_name_11 );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_10 );

                exception_lineno = 256;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_10 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_13 = const_float_40840800_0;
            CHECK_OBJECT( var_A2 );
            tmp_right_name_13 = var_A2;
            tmp_right_name_12 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
            if ( tmp_right_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_9 );

                exception_lineno = 256;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_12 );
            Py_DECREF( tmp_left_name_9 );
            Py_DECREF( tmp_right_name_12 );
            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_W1 == NULL );
            var_W1 = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_left_name_14;
            PyObject *tmp_left_name_15;
            PyObject *tmp_left_name_16;
            PyObject *tmp_left_name_17;
            PyObject *tmp_right_name_14;
            PyObject *tmp_right_name_15;
            PyObject *tmp_left_name_18;
            PyObject *tmp_right_name_16;
            PyObject *tmp_right_name_17;
            PyObject *tmp_left_name_19;
            PyObject *tmp_right_name_18;
            PyObject *tmp_right_name_19;
            PyObject *tmp_left_name_20;
            PyObject *tmp_right_name_20;
            tmp_left_name_17 = const_float_33522128640_0;
            CHECK_OBJECT( var_A6 );
            tmp_right_name_14 = var_A6;
            tmp_left_name_16 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_17, tmp_right_name_14 );
            if ( tmp_left_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_18 = const_float_10559470521600_0;
            CHECK_OBJECT( var_A4 );
            tmp_right_name_16 = var_A4;
            tmp_right_name_15 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_18, tmp_right_name_16 );
            if ( tmp_right_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );

                exception_lineno = 257;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_15 );
            Py_DECREF( tmp_left_name_16 );
            Py_DECREF( tmp_right_name_15 );
            if ( tmp_left_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_19 = const_float_1187353796428800_0;
            CHECK_OBJECT( var_A2 );
            tmp_right_name_18 = var_A2;
            tmp_right_name_17 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_19, tmp_right_name_18 );
            if ( tmp_right_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_15 );

                exception_lineno = 257;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_17 );
            Py_DECREF( tmp_left_name_15 );
            Py_DECREF( tmp_right_name_17 );
            if ( tmp_left_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_20 = const_float_3_238237626624e16;
            CHECK_OBJECT( var_ident );
            tmp_right_name_20 = var_ident;
            tmp_right_name_19 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_20, tmp_right_name_20 );
            if ( tmp_right_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_14 );

                exception_lineno = 257;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_19 );
            Py_DECREF( tmp_left_name_14 );
            Py_DECREF( tmp_right_name_19 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_W2 == NULL );
            var_W2 = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_left_name_21;
            PyObject *tmp_left_name_22;
            PyObject *tmp_left_name_23;
            PyObject *tmp_right_name_21;
            PyObject *tmp_right_name_22;
            PyObject *tmp_left_name_24;
            PyObject *tmp_right_name_23;
            PyObject *tmp_right_name_24;
            PyObject *tmp_left_name_25;
            PyObject *tmp_right_name_25;
            tmp_left_name_23 = const_float_182_0;
            CHECK_OBJECT( var_A6 );
            tmp_right_name_21 = var_A6;
            tmp_left_name_22 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_23, tmp_right_name_21 );
            if ( tmp_left_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 258;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_24 = const_float_960960_0;
            CHECK_OBJECT( var_A4 );
            tmp_right_name_23 = var_A4;
            tmp_right_name_22 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_24, tmp_right_name_23 );
            if ( tmp_right_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_22 );

                exception_lineno = 258;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_22 );
            Py_DECREF( tmp_left_name_22 );
            Py_DECREF( tmp_right_name_22 );
            if ( tmp_left_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 258;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_25 = const_float_1323241920_0;
            CHECK_OBJECT( var_A2 );
            tmp_right_name_25 = var_A2;
            tmp_right_name_24 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_25, tmp_right_name_25 );
            if ( tmp_right_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_21 );

                exception_lineno = 258;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_34 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_24 );
            Py_DECREF( tmp_left_name_21 );
            Py_DECREF( tmp_right_name_24 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 258;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_Z1 == NULL );
            var_Z1 = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_left_name_26;
            PyObject *tmp_left_name_27;
            PyObject *tmp_left_name_28;
            PyObject *tmp_left_name_29;
            PyObject *tmp_right_name_26;
            PyObject *tmp_right_name_27;
            PyObject *tmp_left_name_30;
            PyObject *tmp_right_name_28;
            PyObject *tmp_right_name_29;
            PyObject *tmp_left_name_31;
            PyObject *tmp_right_name_30;
            PyObject *tmp_right_name_31;
            PyObject *tmp_left_name_32;
            PyObject *tmp_right_name_32;
            tmp_left_name_29 = const_float_670442572800_0;
            CHECK_OBJECT( var_A6 );
            tmp_right_name_26 = var_A6;
            tmp_left_name_28 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_29, tmp_right_name_26 );
            if ( tmp_left_name_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 259;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_30 = const_float_129060195264000_0;
            CHECK_OBJECT( var_A4 );
            tmp_right_name_28 = var_A4;
            tmp_right_name_27 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_30, tmp_right_name_28 );
            if ( tmp_right_name_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_28 );

                exception_lineno = 259;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_28, tmp_right_name_27 );
            Py_DECREF( tmp_left_name_28 );
            Py_DECREF( tmp_right_name_27 );
            if ( tmp_left_name_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 259;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_31 = const_float_7771770303897600_0;
            CHECK_OBJECT( var_A2 );
            tmp_right_name_30 = var_A2;
            tmp_right_name_29 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_31, tmp_right_name_30 );
            if ( tmp_right_name_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_27 );

                exception_lineno = 259;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_27, tmp_right_name_29 );
            Py_DECREF( tmp_left_name_27 );
            Py_DECREF( tmp_right_name_29 );
            if ( tmp_left_name_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 259;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_32 = const_float_6_476475253248e16;
            CHECK_OBJECT( var_ident );
            tmp_right_name_32 = var_ident;
            tmp_right_name_31 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_32, tmp_right_name_32 );
            if ( tmp_right_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_26 );

                exception_lineno = 259;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_35 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_26, tmp_right_name_31 );
            Py_DECREF( tmp_left_name_26 );
            Py_DECREF( tmp_right_name_31 );
            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 259;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_Z2 == NULL );
            var_Z2 = tmp_assign_source_35;
        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_left_name_33;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_args_element_name_29;
            PyObject *tmp_args_element_name_30;
            PyObject *tmp_right_name_33;
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_20 == NULL ))
            {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_20 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 260;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_12 = tmp_mvar_value_20;
            CHECK_OBJECT( var_A6 );
            tmp_args_element_name_29 = var_A6;
            CHECK_OBJECT( var_W1 );
            tmp_args_element_name_30 = var_W1;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 260;
            {
                PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30 };
                tmp_left_name_33 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_12, const_str_plain_dot, call_args );
            }

            if ( tmp_left_name_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 260;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_W2 );
            tmp_right_name_33 = var_W2;
            tmp_assign_source_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_33, tmp_right_name_33 );
            Py_DECREF( tmp_left_name_33 );
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 260;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_W == NULL );
            var_W = tmp_assign_source_36;
        }
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_instance_13;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_args_element_name_31;
            PyObject *tmp_args_element_name_32;
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 261;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_13 = tmp_mvar_value_21;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_31 = par_A;
            CHECK_OBJECT( var_W );
            tmp_args_element_name_32 = var_W;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 261;
            {
                PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32 };
                tmp_assign_source_37 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_13, const_str_plain_dot, call_args );
            }

            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 261;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_U;
                var_U = tmp_assign_source_37;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_left_name_34;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_mvar_value_22;
            PyObject *tmp_args_element_name_33;
            PyObject *tmp_args_element_name_34;
            PyObject *tmp_right_name_34;
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_22 == NULL ))
            {
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_22 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 262;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_14 = tmp_mvar_value_22;
            CHECK_OBJECT( var_A6 );
            tmp_args_element_name_33 = var_A6;
            CHECK_OBJECT( var_Z1 );
            tmp_args_element_name_34 = var_Z1;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 262;
            {
                PyObject *call_args[] = { tmp_args_element_name_33, tmp_args_element_name_34 };
                tmp_left_name_34 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_14, const_str_plain_dot, call_args );
            }

            if ( tmp_left_name_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_Z2 );
            tmp_right_name_34 = var_Z2;
            tmp_assign_source_38 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_34, tmp_right_name_34 );
            Py_DECREF( tmp_left_name_34 );
            if ( tmp_assign_source_38 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_V;
                var_V = tmp_assign_source_38;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_left_name_35;
            PyObject *tmp_left_name_36;
            PyObject *tmp_left_name_37;
            PyObject *tmp_right_name_35;
            PyObject *tmp_right_name_36;
            PyObject *tmp_left_name_38;
            PyObject *tmp_right_name_37;
            PyObject *tmp_right_name_38;
            PyObject *tmp_left_name_39;
            PyObject *tmp_right_name_39;
            tmp_left_name_37 = const_float_1_0;
            CHECK_OBJECT( var_M6 );
            tmp_right_name_35 = var_M6;
            tmp_left_name_36 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_37, tmp_right_name_35 );
            if ( tmp_left_name_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_38 = const_float_16380_0;
            CHECK_OBJECT( var_M4 );
            tmp_right_name_37 = var_M4;
            tmp_right_name_36 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_38, tmp_right_name_37 );
            if ( tmp_right_name_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_36 );

                exception_lineno = 263;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_35 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_36, tmp_right_name_36 );
            Py_DECREF( tmp_left_name_36 );
            Py_DECREF( tmp_right_name_36 );
            if ( tmp_left_name_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_39 = const_float_40840800_0;
            CHECK_OBJECT( var_M2 );
            tmp_right_name_39 = var_M2;
            tmp_right_name_38 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_39, tmp_right_name_39 );
            if ( tmp_right_name_38 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_35 );

                exception_lineno = 263;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_39 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_35, tmp_right_name_38 );
            Py_DECREF( tmp_left_name_35 );
            Py_DECREF( tmp_right_name_38 );
            if ( tmp_assign_source_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_Lw1 == NULL );
            var_Lw1 = tmp_assign_source_39;
        }
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_left_name_40;
            PyObject *tmp_left_name_41;
            PyObject *tmp_left_name_42;
            PyObject *tmp_right_name_40;
            PyObject *tmp_right_name_41;
            PyObject *tmp_left_name_43;
            PyObject *tmp_right_name_42;
            PyObject *tmp_right_name_43;
            PyObject *tmp_left_name_44;
            PyObject *tmp_right_name_44;
            tmp_left_name_42 = const_float_33522128640_0;
            CHECK_OBJECT( var_M6 );
            tmp_right_name_40 = var_M6;
            tmp_left_name_41 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_42, tmp_right_name_40 );
            if ( tmp_left_name_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 264;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_43 = const_float_10559470521600_0;
            CHECK_OBJECT( var_M4 );
            tmp_right_name_42 = var_M4;
            tmp_right_name_41 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_43, tmp_right_name_42 );
            if ( tmp_right_name_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_41 );

                exception_lineno = 264;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_40 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_41, tmp_right_name_41 );
            Py_DECREF( tmp_left_name_41 );
            Py_DECREF( tmp_right_name_41 );
            if ( tmp_left_name_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 264;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_44 = const_float_1187353796428800_0;
            CHECK_OBJECT( var_M2 );
            tmp_right_name_44 = var_M2;
            tmp_right_name_43 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_44, tmp_right_name_44 );
            if ( tmp_right_name_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_40 );

                exception_lineno = 264;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_40 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_40, tmp_right_name_43 );
            Py_DECREF( tmp_left_name_40 );
            Py_DECREF( tmp_right_name_43 );
            if ( tmp_assign_source_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 264;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_Lw2 == NULL );
            var_Lw2 = tmp_assign_source_40;
        }
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_left_name_45;
            PyObject *tmp_left_name_46;
            PyObject *tmp_left_name_47;
            PyObject *tmp_right_name_45;
            PyObject *tmp_right_name_46;
            PyObject *tmp_left_name_48;
            PyObject *tmp_right_name_47;
            PyObject *tmp_right_name_48;
            PyObject *tmp_left_name_49;
            PyObject *tmp_right_name_49;
            tmp_left_name_47 = const_float_182_0;
            CHECK_OBJECT( var_M6 );
            tmp_right_name_45 = var_M6;
            tmp_left_name_46 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_47, tmp_right_name_45 );
            if ( tmp_left_name_46 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 265;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_48 = const_float_960960_0;
            CHECK_OBJECT( var_M4 );
            tmp_right_name_47 = var_M4;
            tmp_right_name_46 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_48, tmp_right_name_47 );
            if ( tmp_right_name_46 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_46 );

                exception_lineno = 265;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_45 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_46, tmp_right_name_46 );
            Py_DECREF( tmp_left_name_46 );
            Py_DECREF( tmp_right_name_46 );
            if ( tmp_left_name_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 265;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_49 = const_float_1323241920_0;
            CHECK_OBJECT( var_M2 );
            tmp_right_name_49 = var_M2;
            tmp_right_name_48 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_49, tmp_right_name_49 );
            if ( tmp_right_name_48 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_45 );

                exception_lineno = 265;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_41 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_45, tmp_right_name_48 );
            Py_DECREF( tmp_left_name_45 );
            Py_DECREF( tmp_right_name_48 );
            if ( tmp_assign_source_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 265;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_Lz1 == NULL );
            var_Lz1 = tmp_assign_source_41;
        }
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_left_name_50;
            PyObject *tmp_left_name_51;
            PyObject *tmp_left_name_52;
            PyObject *tmp_right_name_50;
            PyObject *tmp_right_name_51;
            PyObject *tmp_left_name_53;
            PyObject *tmp_right_name_52;
            PyObject *tmp_right_name_53;
            PyObject *tmp_left_name_54;
            PyObject *tmp_right_name_54;
            tmp_left_name_52 = const_float_670442572800_0;
            CHECK_OBJECT( var_M6 );
            tmp_right_name_50 = var_M6;
            tmp_left_name_51 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_52, tmp_right_name_50 );
            if ( tmp_left_name_51 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_53 = const_float_129060195264000_0;
            CHECK_OBJECT( var_M4 );
            tmp_right_name_52 = var_M4;
            tmp_right_name_51 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_53, tmp_right_name_52 );
            if ( tmp_right_name_51 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_51 );

                exception_lineno = 266;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_50 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_51, tmp_right_name_51 );
            Py_DECREF( tmp_left_name_51 );
            Py_DECREF( tmp_right_name_51 );
            if ( tmp_left_name_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_54 = const_float_7771770303897600_0;
            CHECK_OBJECT( var_M2 );
            tmp_right_name_54 = var_M2;
            tmp_right_name_53 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_54, tmp_right_name_54 );
            if ( tmp_right_name_53 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_50 );

                exception_lineno = 266;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_42 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_50, tmp_right_name_53 );
            Py_DECREF( tmp_left_name_50 );
            Py_DECREF( tmp_right_name_53 );
            if ( tmp_assign_source_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_Lz2 == NULL );
            var_Lz2 = tmp_assign_source_42;
        }
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_left_name_55;
            PyObject *tmp_left_name_56;
            PyObject *tmp_called_instance_15;
            PyObject *tmp_mvar_value_23;
            PyObject *tmp_args_element_name_35;
            PyObject *tmp_args_element_name_36;
            PyObject *tmp_right_name_55;
            PyObject *tmp_called_instance_16;
            PyObject *tmp_mvar_value_24;
            PyObject *tmp_args_element_name_37;
            PyObject *tmp_args_element_name_38;
            PyObject *tmp_right_name_56;
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 267;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_15 = tmp_mvar_value_23;
            CHECK_OBJECT( var_A6 );
            tmp_args_element_name_35 = var_A6;
            CHECK_OBJECT( var_Lw1 );
            tmp_args_element_name_36 = var_Lw1;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 267;
            {
                PyObject *call_args[] = { tmp_args_element_name_35, tmp_args_element_name_36 };
                tmp_left_name_56 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_15, const_str_plain_dot, call_args );
            }

            if ( tmp_left_name_56 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_24 == NULL ))
            {
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_24 == NULL )
            {
                Py_DECREF( tmp_left_name_56 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 267;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_16 = tmp_mvar_value_24;
            CHECK_OBJECT( var_M6 );
            tmp_args_element_name_37 = var_M6;
            CHECK_OBJECT( var_W1 );
            tmp_args_element_name_38 = var_W1;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 267;
            {
                PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38 };
                tmp_right_name_55 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_16, const_str_plain_dot, call_args );
            }

            if ( tmp_right_name_55 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_56 );

                exception_lineno = 267;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_55 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_56, tmp_right_name_55 );
            Py_DECREF( tmp_left_name_56 );
            Py_DECREF( tmp_right_name_55 );
            if ( tmp_left_name_55 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_Lw2 );
            tmp_right_name_56 = var_Lw2;
            tmp_assign_source_43 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_55, tmp_right_name_56 );
            Py_DECREF( tmp_left_name_55 );
            if ( tmp_assign_source_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_Lw == NULL );
            var_Lw = tmp_assign_source_43;
        }
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_left_name_57;
            PyObject *tmp_called_instance_17;
            PyObject *tmp_mvar_value_25;
            PyObject *tmp_args_element_name_39;
            PyObject *tmp_args_element_name_40;
            PyObject *tmp_right_name_57;
            PyObject *tmp_called_instance_18;
            PyObject *tmp_mvar_value_26;
            PyObject *tmp_args_element_name_41;
            PyObject *tmp_args_element_name_42;
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 268;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_17 = tmp_mvar_value_25;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_39 = par_A;
            CHECK_OBJECT( var_Lw );
            tmp_args_element_name_40 = var_Lw;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 268;
            {
                PyObject *call_args[] = { tmp_args_element_name_39, tmp_args_element_name_40 };
                tmp_left_name_57 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_17, const_str_plain_dot, call_args );
            }

            if ( tmp_left_name_57 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 268;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_26 == NULL ))
            {
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_26 == NULL )
            {
                Py_DECREF( tmp_left_name_57 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 268;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_18 = tmp_mvar_value_26;
            CHECK_OBJECT( par_E );
            tmp_args_element_name_41 = par_E;
            CHECK_OBJECT( var_W );
            tmp_args_element_name_42 = var_W;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 268;
            {
                PyObject *call_args[] = { tmp_args_element_name_41, tmp_args_element_name_42 };
                tmp_right_name_57 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_18, const_str_plain_dot, call_args );
            }

            if ( tmp_right_name_57 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_57 );

                exception_lineno = 268;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_44 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_57, tmp_right_name_57 );
            Py_DECREF( tmp_left_name_57 );
            Py_DECREF( tmp_right_name_57 );
            if ( tmp_assign_source_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 268;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_Lu;
                var_Lu = tmp_assign_source_44;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_left_name_58;
            PyObject *tmp_left_name_59;
            PyObject *tmp_called_instance_19;
            PyObject *tmp_mvar_value_27;
            PyObject *tmp_args_element_name_43;
            PyObject *tmp_args_element_name_44;
            PyObject *tmp_right_name_58;
            PyObject *tmp_called_instance_20;
            PyObject *tmp_mvar_value_28;
            PyObject *tmp_args_element_name_45;
            PyObject *tmp_args_element_name_46;
            PyObject *tmp_right_name_59;
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_27 == NULL ))
            {
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_27 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 269;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_19 = tmp_mvar_value_27;
            CHECK_OBJECT( var_A6 );
            tmp_args_element_name_43 = var_A6;
            CHECK_OBJECT( var_Lz1 );
            tmp_args_element_name_44 = var_Lz1;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 269;
            {
                PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44 };
                tmp_left_name_59 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_19, const_str_plain_dot, call_args );
            }

            if ( tmp_left_name_59 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_28 == NULL ))
            {
                tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_28 == NULL )
            {
                Py_DECREF( tmp_left_name_59 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 269;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_20 = tmp_mvar_value_28;
            CHECK_OBJECT( var_M6 );
            tmp_args_element_name_45 = var_M6;
            CHECK_OBJECT( var_Z1 );
            tmp_args_element_name_46 = var_Z1;
            frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 269;
            {
                PyObject *call_args[] = { tmp_args_element_name_45, tmp_args_element_name_46 };
                tmp_right_name_58 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_20, const_str_plain_dot, call_args );
            }

            if ( tmp_right_name_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_59 );

                exception_lineno = 269;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_58 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_59, tmp_right_name_58 );
            Py_DECREF( tmp_left_name_59 );
            Py_DECREF( tmp_right_name_58 );
            if ( tmp_left_name_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_Lz2 );
            tmp_right_name_59 = var_Lz2;
            tmp_assign_source_45 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_58, tmp_right_name_59 );
            Py_DECREF( tmp_left_name_58 );
            if ( tmp_assign_source_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_Lv;
                var_Lv = tmp_assign_source_45;
                Py_XDECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_left_name_60;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_right_name_60;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_29;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_linalg );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_lu_factor );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_U == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "U" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_3 = var_U;
        tmp_left_name_60 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
        if ( tmp_left_name_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_V == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_60 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "V" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_60 = var_V;
        tmp_args_element_name_47 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_60, tmp_right_name_60 );
        Py_DECREF( tmp_left_name_60 );
        if ( tmp_args_element_name_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 271;
        {
            PyObject *call_args[] = { tmp_args_element_name_47 };
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_47 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lu_piv == NULL );
        var_lu_piv = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_left_name_61;
        PyObject *tmp_right_name_61;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_30;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_linalg );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_lu_solve );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lu_piv );
        tmp_args_element_name_48 = var_lu_piv;
        if ( var_U == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "U" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_61 = var_U;
        if ( var_V == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "V" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_61 = var_V;
        tmp_args_element_name_49 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_61, tmp_right_name_61 );
        if ( tmp_args_element_name_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = { tmp_args_element_name_48, tmp_args_element_name_49 };
            tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_49 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_R == NULL );
        var_R = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_left_name_62;
        PyObject *tmp_left_name_63;
        PyObject *tmp_right_name_62;
        PyObject *tmp_right_name_63;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_left_name_64;
        PyObject *tmp_right_name_64;
        PyObject *tmp_args_element_name_53;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_31;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_linalg );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_lu_solve );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lu_piv );
        tmp_args_element_name_50 = var_lu_piv;
        if ( var_Lu == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Lu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_63 = var_Lu;
        if ( var_Lv == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Lv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_62 = var_Lv;
        tmp_left_name_62 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_63, tmp_right_name_62 );
        if ( tmp_left_name_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_32 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_left_name_62 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_32;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_dot );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_left_name_62 );

            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_Lu == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_left_name_62 );
            Py_DECREF( tmp_called_name_8 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Lu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_64 = var_Lu;
        if ( var_Lv == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_left_name_62 );
            Py_DECREF( tmp_called_name_8 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Lv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_64 = var_Lv;
        tmp_args_element_name_52 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_64, tmp_right_name_64 );
        if ( tmp_args_element_name_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_left_name_62 );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_R );
        tmp_args_element_name_53 = var_R;
        frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = { tmp_args_element_name_52, tmp_args_element_name_53 };
            tmp_right_name_63 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_52 );
        if ( tmp_right_name_63 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_left_name_62 );

            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_51 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_62, tmp_right_name_63 );
        Py_DECREF( tmp_left_name_62 );
        Py_DECREF( tmp_right_name_63 );
        if ( tmp_args_element_name_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = { tmp_args_element_name_50, tmp_args_element_name_51 };
            tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_51 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_L == NULL );
        var_L = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_xrange_low_1;
        if ( var_s == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 275;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_xrange_low_1 = var_s;
        tmp_iter_arg_4 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_49 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_49;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_50 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_50 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooNoooooooooooooo";
                exception_lineno = 275;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_50;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_51 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_51;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_left_name_65;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_right_name_65;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_mvar_value_34;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_args_element_name_57;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 276;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_instance_21 = tmp_mvar_value_33;
        CHECK_OBJECT( var_R );
        tmp_args_element_name_54 = var_R;
        CHECK_OBJECT( var_L );
        tmp_args_element_name_55 = var_L;
        frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = { tmp_args_element_name_54, tmp_args_element_name_55 };
            tmp_left_name_65 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_21, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_65 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_34 == NULL )
        {
            Py_DECREF( tmp_left_name_65 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 276;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_instance_22 = tmp_mvar_value_34;
        CHECK_OBJECT( var_L );
        tmp_args_element_name_56 = var_L;
        CHECK_OBJECT( var_R );
        tmp_args_element_name_57 = var_R;
        frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = { tmp_args_element_name_56, tmp_args_element_name_57 };
            tmp_right_name_65 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_22, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_65 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_65 );

            exception_lineno = 276;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_52 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_65, tmp_right_name_65 );
        Py_DECREF( tmp_left_name_65 );
        Py_DECREF( tmp_right_name_65 );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_L;
            assert( old != NULL );
            var_L = tmp_assign_source_52;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_args_element_name_59;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_35 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_instance_23 = tmp_mvar_value_35;
        CHECK_OBJECT( var_R );
        tmp_args_element_name_58 = var_R;
        CHECK_OBJECT( var_R );
        tmp_args_element_name_59 = var_R;
        frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = { tmp_args_element_name_58, tmp_args_element_name_59 };
            tmp_assign_source_53 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_23, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooNoooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_R;
            assert( old != NULL );
            var_R = tmp_assign_source_53;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description_1 = "oooooooooooooooooooNoooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_51f161f2e60baff3e3802d6ea10c3ca2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_51f161f2e60baff3e3802d6ea10c3ca2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_51f161f2e60baff3e3802d6ea10c3ca2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_51f161f2e60baff3e3802d6ea10c3ca2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_51f161f2e60baff3e3802d6ea10c3ca2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_51f161f2e60baff3e3802d6ea10c3ca2,
        type_description_1,
        par_A,
        par_E,
        var_n,
        var_s,
        var_ident,
        var_A_norm_1,
        var_m_pade_pairs,
        var_m,
        var_pade,
        var_U,
        var_V,
        var_Lu,
        var_Lv,
        var_A2,
        var_M2,
        var_A4,
        var_M4,
        var_A6,
        var_M6,
        NULL,
        var_W1,
        var_W2,
        var_Z1,
        var_Z2,
        var_W,
        var_Lw1,
        var_Lw2,
        var_Lz1,
        var_Lz2,
        var_Lw,
        var_lu_piv,
        var_R,
        var_L,
        var_k
    );


    // Release cached frame.
    if ( frame_51f161f2e60baff3e3802d6ea10c3ca2 == cache_frame_51f161f2e60baff3e3802d6ea10c3ca2 )
    {
        Py_DECREF( frame_51f161f2e60baff3e3802d6ea10c3ca2 );
    }
    cache_frame_51f161f2e60baff3e3802d6ea10c3ca2 = NULL;

    assertFrameObject( frame_51f161f2e60baff3e3802d6ea10c3ca2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT( var_R );
        tmp_tuple_element_6 = var_R;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_L );
        tmp_tuple_element_6 = var_L;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_7_expm_frechet_algo_64 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_E );
    Py_DECREF( par_E );
    par_E = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)var_ident );
    Py_DECREF( var_ident );
    var_ident = NULL;

    CHECK_OBJECT( (PyObject *)var_A_norm_1 );
    Py_DECREF( var_A_norm_1 );
    var_A_norm_1 = NULL;

    CHECK_OBJECT( (PyObject *)var_m_pade_pairs );
    Py_DECREF( var_m_pade_pairs );
    var_m_pade_pairs = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_pade );
    var_pade = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_V );
    var_V = NULL;

    Py_XDECREF( var_Lu );
    var_Lu = NULL;

    Py_XDECREF( var_Lv );
    var_Lv = NULL;

    Py_XDECREF( var_A2 );
    var_A2 = NULL;

    Py_XDECREF( var_M2 );
    var_M2 = NULL;

    Py_XDECREF( var_A4 );
    var_A4 = NULL;

    Py_XDECREF( var_M4 );
    var_M4 = NULL;

    Py_XDECREF( var_A6 );
    var_A6 = NULL;

    Py_XDECREF( var_M6 );
    var_M6 = NULL;

    Py_XDECREF( var_W1 );
    var_W1 = NULL;

    Py_XDECREF( var_W2 );
    var_W2 = NULL;

    Py_XDECREF( var_Z1 );
    var_Z1 = NULL;

    Py_XDECREF( var_Z2 );
    var_Z2 = NULL;

    Py_XDECREF( var_W );
    var_W = NULL;

    Py_XDECREF( var_Lw1 );
    var_Lw1 = NULL;

    Py_XDECREF( var_Lw2 );
    var_Lw2 = NULL;

    Py_XDECREF( var_Lz1 );
    var_Lz1 = NULL;

    Py_XDECREF( var_Lz2 );
    var_Lz2 = NULL;

    Py_XDECREF( var_Lw );
    var_Lw = NULL;

    CHECK_OBJECT( (PyObject *)var_lu_piv );
    Py_DECREF( var_lu_piv );
    var_lu_piv = NULL;

    CHECK_OBJECT( (PyObject *)var_R );
    Py_DECREF( var_R );
    var_R = NULL;

    CHECK_OBJECT( (PyObject *)var_L );
    Py_DECREF( var_L );
    var_L = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

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

    Py_XDECREF( par_A );
    par_A = NULL;

    Py_XDECREF( par_E );
    par_E = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_ident );
    var_ident = NULL;

    Py_XDECREF( var_A_norm_1 );
    var_A_norm_1 = NULL;

    Py_XDECREF( var_m_pade_pairs );
    var_m_pade_pairs = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_pade );
    var_pade = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_V );
    var_V = NULL;

    Py_XDECREF( var_Lu );
    var_Lu = NULL;

    Py_XDECREF( var_Lv );
    var_Lv = NULL;

    Py_XDECREF( var_A2 );
    var_A2 = NULL;

    Py_XDECREF( var_M2 );
    var_M2 = NULL;

    Py_XDECREF( var_A4 );
    var_A4 = NULL;

    Py_XDECREF( var_M4 );
    var_M4 = NULL;

    Py_XDECREF( var_A6 );
    var_A6 = NULL;

    Py_XDECREF( var_M6 );
    var_M6 = NULL;

    Py_XDECREF( var_W1 );
    var_W1 = NULL;

    Py_XDECREF( var_W2 );
    var_W2 = NULL;

    Py_XDECREF( var_Z1 );
    var_Z1 = NULL;

    Py_XDECREF( var_Z2 );
    var_Z2 = NULL;

    Py_XDECREF( var_W );
    var_W = NULL;

    Py_XDECREF( var_Lw1 );
    var_Lw1 = NULL;

    Py_XDECREF( var_Lw2 );
    var_Lw2 = NULL;

    Py_XDECREF( var_Lz1 );
    var_Lz1 = NULL;

    Py_XDECREF( var_Lz2 );
    var_Lz2 = NULL;

    Py_XDECREF( var_Lw );
    var_Lw = NULL;

    Py_XDECREF( var_lu_piv );
    var_lu_piv = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_L );
    var_L = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_7_expm_frechet_algo_64 );
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


static PyObject *impl_scipy$linalg$_expm_frechet$$$function_8_vec( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_M = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_2db48214dfaeebeb304731215157a192;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2db48214dfaeebeb304731215157a192 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2db48214dfaeebeb304731215157a192, codeobj_2db48214dfaeebeb304731215157a192, module_scipy$linalg$_expm_frechet, sizeof(void *) );
    frame_2db48214dfaeebeb304731215157a192 = cache_frame_2db48214dfaeebeb304731215157a192;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2db48214dfaeebeb304731215157a192 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2db48214dfaeebeb304731215157a192 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_M );
        tmp_source_name_1 = par_M;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_T );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2db48214dfaeebeb304731215157a192->m_frame.f_lineno = 298;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ravel );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2db48214dfaeebeb304731215157a192 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2db48214dfaeebeb304731215157a192 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2db48214dfaeebeb304731215157a192 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2db48214dfaeebeb304731215157a192, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2db48214dfaeebeb304731215157a192->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2db48214dfaeebeb304731215157a192, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2db48214dfaeebeb304731215157a192,
        type_description_1,
        par_M
    );


    // Release cached frame.
    if ( frame_2db48214dfaeebeb304731215157a192 == cache_frame_2db48214dfaeebeb304731215157a192 )
    {
        Py_DECREF( frame_2db48214dfaeebeb304731215157a192 );
    }
    cache_frame_2db48214dfaeebeb304731215157a192 = NULL;

    assertFrameObject( frame_2db48214dfaeebeb304731215157a192 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_8_vec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

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

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_8_vec );
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


static PyObject *impl_scipy$linalg$_expm_frechet$$$function_9_expm_frechet_kronform( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_check_finite = python_pars[ 2 ];
    PyObject *var_n = NULL;
    PyObject *var_ident = NULL;
    PyObject *var_cols = NULL;
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *var_E = NULL;
    PyObject *var_F = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1272030c70915e371f2b152612810a09;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1272030c70915e371f2b152612810a09 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1272030c70915e371f2b152612810a09, codeobj_1272030c70915e371f2b152612810a09, module_scipy$linalg$_expm_frechet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1272030c70915e371f2b152612810a09 = cache_frame_1272030c70915e371f2b152612810a09;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1272030c70915e371f2b152612810a09 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1272030c70915e371f2b152612810a09 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_check_finite );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_check_finite );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 335;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_1 = par_A;
            frame_1272030c70915e371f2b152612810a09->m_frame.f_lineno = 335;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray_chkfinite, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "oooooooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 337;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_2 = par_A;
            frame_1272030c70915e371f2b152612810a09->m_frame.f_lineno = 337;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 337;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_A;
                assert( old != NULL );
                par_A = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
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
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_source_name_3 = par_A;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 338;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 338;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "oooooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_7785251fc2bad4a591e26630c92c287b;
            frame_1272030c70915e371f2b152612810a09->m_frame.f_lineno = 339;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 339;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( par_A );
        tmp_source_name_4 = par_A;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 342;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_3 = var_n;
        frame_1272030c70915e371f2b152612810a09->m_frame.f_lineno = 342;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_identity, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ident == NULL );
        var_ident = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyList_New( 0 );
        assert( var_cols == NULL );
        var_cols = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( var_n );
        tmp_xrange_low_1 = var_n;
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooooooooo";
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
                type_description_1 = "oooooooooo";
                exception_lineno = 344;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_8;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_2;
        CHECK_OBJECT( var_n );
        tmp_xrange_low_2 = var_n;
        tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_2 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooo";
                exception_lineno = 345;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_11 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_11;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 346;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_5 = tmp_mvar_value_4;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_outer );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_ident );
        tmp_subscribed_name_4 = var_ident;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_4 = var_i;
        tmp_args_element_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 346;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_ident );
        tmp_subscribed_name_5 = var_ident;
        CHECK_OBJECT( var_j );
        tmp_subscript_name_5 = var_j;
        tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 346;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        frame_1272030c70915e371f2b152612810a09->m_frame.f_lineno = 346;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_E;
            var_E = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_expm_frechet );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_expm_frechet );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "expm_frechet" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 347;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_2 = tmp_mvar_value_5;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_E );
        tmp_tuple_element_1 = var_E;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_method;
        CHECK_OBJECT( par_method );
        tmp_dict_value_1 = par_method;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_compute_expm;
        tmp_dict_value_2 = Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_check_finite;
        tmp_dict_value_3 = Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_1272030c70915e371f2b152612810a09->m_frame.f_lineno = 347;
        tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 347;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_F;
            var_F = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_cols );
        tmp_source_name_6 = var_cols;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_vec );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_vec );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "vec" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_4 = tmp_mvar_value_6;
        CHECK_OBJECT( var_F );
        tmp_args_element_name_7 = var_F;
        frame_1272030c70915e371f2b152612810a09->m_frame.f_lineno = 349;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        frame_1272030c70915e371f2b152612810a09->m_frame.f_lineno = 349;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_source_name_7;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 350;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_7;
        CHECK_OBJECT( var_cols );
        tmp_args_element_name_8 = var_cols;
        frame_1272030c70915e371f2b152612810a09->m_frame.f_lineno = 350;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_source_name_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_vstack, call_args );
        }

        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_T );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1272030c70915e371f2b152612810a09 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1272030c70915e371f2b152612810a09 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1272030c70915e371f2b152612810a09 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1272030c70915e371f2b152612810a09, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1272030c70915e371f2b152612810a09->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1272030c70915e371f2b152612810a09, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1272030c70915e371f2b152612810a09,
        type_description_1,
        par_A,
        par_method,
        par_check_finite,
        var_n,
        var_ident,
        var_cols,
        var_i,
        var_j,
        var_E,
        var_F
    );


    // Release cached frame.
    if ( frame_1272030c70915e371f2b152612810a09 == cache_frame_1272030c70915e371f2b152612810a09 )
    {
        Py_DECREF( frame_1272030c70915e371f2b152612810a09 );
    }
    cache_frame_1272030c70915e371f2b152612810a09 = NULL;

    assertFrameObject( frame_1272030c70915e371f2b152612810a09 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_9_expm_frechet_kronform );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_check_finite );
    Py_DECREF( par_check_finite );
    par_check_finite = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_ident );
    Py_DECREF( var_ident );
    var_ident = NULL;

    CHECK_OBJECT( (PyObject *)var_cols );
    Py_DECREF( var_cols );
    var_cols = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_E );
    var_E = NULL;

    Py_XDECREF( var_F );
    var_F = NULL;

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

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_check_finite );
    Py_DECREF( par_check_finite );
    par_check_finite = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_ident );
    var_ident = NULL;

    Py_XDECREF( var_cols );
    var_cols = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_E );
    var_E = NULL;

    Py_XDECREF( var_F );
    var_F = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_9_expm_frechet_kronform );
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


static PyObject *impl_scipy$linalg$_expm_frechet$$$function_10_expm_cond( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_check_finite = python_pars[ 1 ];
    PyObject *var_X = NULL;
    PyObject *var_K = NULL;
    PyObject *var_A_norm = NULL;
    PyObject *var_X_norm = NULL;
    PyObject *var_K_norm = NULL;
    PyObject *var_kappa = NULL;
    struct Nuitka_FrameObject *frame_4d8f5fdab5a92fc2e6d9daf96c753a91;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4d8f5fdab5a92fc2e6d9daf96c753a91 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4d8f5fdab5a92fc2e6d9daf96c753a91, codeobj_4d8f5fdab5a92fc2e6d9daf96c753a91, module_scipy$linalg$_expm_frechet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4d8f5fdab5a92fc2e6d9daf96c753a91 = cache_frame_4d8f5fdab5a92fc2e6d9daf96c753a91;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4d8f5fdab5a92fc2e6d9daf96c753a91 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4d8f5fdab5a92fc2e6d9daf96c753a91 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_check_finite );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_check_finite );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 394;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_1 = par_A;
            frame_4d8f5fdab5a92fc2e6d9daf96c753a91->m_frame.f_lineno = 394;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray_chkfinite, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 394;
                type_description_1 = "oooooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 396;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_2 = par_A;
            frame_4d8f5fdab5a92fc2e6d9daf96c753a91->m_frame.f_lineno = 396;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 396;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_A;
                assert( old != NULL );
                par_A = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
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
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_source_name_3 = par_A;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 397;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 397;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_7785251fc2bad4a591e26630c92c287b;
            frame_4d8f5fdab5a92fc2e6d9daf96c753a91->m_frame.f_lineno = 398;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 398;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_linalg );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_args_element_name_3 = par_A;
        frame_4d8f5fdab5a92fc2e6d9daf96c753a91->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_expm, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_X == NULL );
        var_X = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_expm_frechet_kronform );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_expm_frechet_kronform );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "expm_frechet_kronform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 401;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_4;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_f1529e05b445a690a7b0566edab83122 );
        frame_4d8f5fdab5a92fc2e6d9daf96c753a91->m_frame.f_lineno = 401;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_K == NULL );
        var_K = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 406;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_linalg );
        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_args_element_name_4 = par_A;
        tmp_args_element_name_5 = const_str_plain_fro;
        frame_4d8f5fdab5a92fc2e6d9daf96c753a91->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_norm, call_args );
        }

        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A_norm == NULL );
        var_A_norm = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 407;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_6;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_linalg );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_X );
        tmp_args_element_name_6 = var_X;
        tmp_args_element_name_7 = const_str_plain_fro;
        frame_4d8f5fdab5a92fc2e6d9daf96c753a91->m_frame.f_lineno = 407;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_norm, call_args );
        }

        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_X_norm == NULL );
        var_X_norm = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 408;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_7;
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_linalg );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 408;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_K );
        tmp_args_element_name_8 = var_K;
        tmp_args_element_name_9 = const_int_pos_2;
        frame_4d8f5fdab5a92fc2e6d9daf96c753a91->m_frame.f_lineno = 408;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_norm, call_args );
        }

        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 408;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_K_norm == NULL );
        var_K_norm = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_K_norm );
        tmp_left_name_2 = var_K_norm;
        CHECK_OBJECT( var_A_norm );
        tmp_right_name_1 = var_A_norm;
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_X_norm );
        tmp_right_name_2 = var_X_norm;
        tmp_assign_source_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_kappa == NULL );
        var_kappa = tmp_assign_source_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d8f5fdab5a92fc2e6d9daf96c753a91 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d8f5fdab5a92fc2e6d9daf96c753a91 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d8f5fdab5a92fc2e6d9daf96c753a91, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d8f5fdab5a92fc2e6d9daf96c753a91->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d8f5fdab5a92fc2e6d9daf96c753a91, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4d8f5fdab5a92fc2e6d9daf96c753a91,
        type_description_1,
        par_A,
        par_check_finite,
        var_X,
        var_K,
        var_A_norm,
        var_X_norm,
        var_K_norm,
        var_kappa
    );


    // Release cached frame.
    if ( frame_4d8f5fdab5a92fc2e6d9daf96c753a91 == cache_frame_4d8f5fdab5a92fc2e6d9daf96c753a91 )
    {
        Py_DECREF( frame_4d8f5fdab5a92fc2e6d9daf96c753a91 );
    }
    cache_frame_4d8f5fdab5a92fc2e6d9daf96c753a91 = NULL;

    assertFrameObject( frame_4d8f5fdab5a92fc2e6d9daf96c753a91 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_kappa );
    tmp_return_value = var_kappa;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_10_expm_cond );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_check_finite );
    Py_DECREF( par_check_finite );
    par_check_finite = NULL;

    CHECK_OBJECT( (PyObject *)var_X );
    Py_DECREF( var_X );
    var_X = NULL;

    CHECK_OBJECT( (PyObject *)var_K );
    Py_DECREF( var_K );
    var_K = NULL;

    CHECK_OBJECT( (PyObject *)var_A_norm );
    Py_DECREF( var_A_norm );
    var_A_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_X_norm );
    Py_DECREF( var_X_norm );
    var_X_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_K_norm );
    Py_DECREF( var_K_norm );
    var_K_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_kappa );
    Py_DECREF( var_kappa );
    var_kappa = NULL;

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

    Py_XDECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_check_finite );
    Py_DECREF( par_check_finite );
    par_check_finite = NULL;

    Py_XDECREF( var_X );
    var_X = NULL;

    Py_XDECREF( var_K );
    var_K = NULL;

    Py_XDECREF( var_A_norm );
    var_A_norm = NULL;

    Py_XDECREF( var_X_norm );
    var_X_norm = NULL;

    Py_XDECREF( var_K_norm );
    var_K_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_expm_frechet$$$function_10_expm_cond );
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



static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_10_expm_cond( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_expm_frechet$$$function_10_expm_cond,
        const_str_plain_expm_cond,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4d8f5fdab5a92fc2e6d9daf96c753a91,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_expm_frechet,
        const_str_digest_109bfac58c3594edd87b0f81e4c65cd7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_1_expm_frechet( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_expm_frechet$$$function_1_expm_frechet,
        const_str_plain_expm_frechet,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_24e8bff663111bbf5d0ad3bc69715de6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_expm_frechet,
        const_str_digest_cb9c73bc6eccae14680740b48d350b18,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_2_expm_frechet_block_enlarge(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_expm_frechet$$$function_2_expm_frechet_block_enlarge,
        const_str_plain_expm_frechet_block_enlarge,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_29660e18748d5ca2799bae0bc8618f02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_expm_frechet,
        const_str_digest_c4b4bb256e2a215970eff897f4c22643,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_3__diff_pade3(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_expm_frechet$$$function_3__diff_pade3,
        const_str_plain__diff_pade3,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_abf1f815123158eb40adf06cfa524f38,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_expm_frechet,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_4__diff_pade5(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_expm_frechet$$$function_4__diff_pade5,
        const_str_plain__diff_pade5,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b8ca142d73579edab8ced16ca0269240,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_expm_frechet,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_5__diff_pade7(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_expm_frechet$$$function_5__diff_pade7,
        const_str_plain__diff_pade7,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2c9783da96494fa6d353a44d14c39c0a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_expm_frechet,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_6__diff_pade9(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_expm_frechet$$$function_6__diff_pade9,
        const_str_plain__diff_pade9,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f6cf6256f8d9212e09b74dec29838493,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_expm_frechet,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_7_expm_frechet_algo_64(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_expm_frechet$$$function_7_expm_frechet_algo_64,
        const_str_plain_expm_frechet_algo_64,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_51f161f2e60baff3e3802d6ea10c3ca2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_expm_frechet,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_8_vec(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_expm_frechet$$$function_8_vec,
        const_str_plain_vec,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2db48214dfaeebeb304731215157a192,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_expm_frechet,
        const_str_digest_562cac4033539922275c33e6f582b9b2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_9_expm_frechet_kronform( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_expm_frechet$$$function_9_expm_frechet_kronform,
        const_str_plain_expm_frechet_kronform,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1272030c70915e371f2b152612810a09,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_expm_frechet,
        const_str_digest_8b610048f461e38df66faf3c95e4f5cf,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$linalg$_expm_frechet =
{
    PyModuleDef_HEAD_INIT,
    "scipy.linalg._expm_frechet",
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

MOD_INIT_DECL( scipy$linalg$_expm_frechet )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$linalg$_expm_frechet );
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
    puts("scipy.linalg._expm_frechet: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg._expm_frechet: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg._expm_frechet: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$linalg$_expm_frechet" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$linalg$_expm_frechet = Py_InitModule4(
        "scipy.linalg._expm_frechet",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$linalg$_expm_frechet = PyModule_Create( &mdef_scipy$linalg$_expm_frechet );
#endif

    moduledict_scipy$linalg$_expm_frechet = MODULE_DICT( module_scipy$linalg$_expm_frechet );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$linalg$_expm_frechet,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$linalg$_expm_frechet,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$_expm_frechet,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$_expm_frechet,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$linalg$_expm_frechet );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_9f27b271cd1863be2b2cc4a391338bb7, module_scipy$linalg$_expm_frechet );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_9f1afcfe2c2c30269f53fc6613b4f465;
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
        tmp_assign_source_1 = const_str_digest_91a8e3fbaecdb07f1eb2df377bb694c0;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_9f1afcfe2c2c30269f53fc6613b4f465 = MAKE_MODULE_FRAME( codeobj_9f1afcfe2c2c30269f53fc6613b4f465, module_scipy$linalg$_expm_frechet );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_9f1afcfe2c2c30269f53fc6613b4f465 );
    assert( Py_REFCNT( frame_9f1afcfe2c2c30269f53fc6613b4f465 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_9f1afcfe2c2c30269f53fc6613b4f465->m_frame.f_lineno = 2;
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$linalg$_expm_frechet;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_9f1afcfe2c2c30269f53fc6613b4f465->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$linalg$_expm_frechet;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_9f1afcfe2c2c30269f53fc6613b4f465->m_frame.f_lineno = 5;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_scipy, tmp_assign_source_9 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f1afcfe2c2c30269f53fc6613b4f465 );
#endif
    popFrameStack();

    assertFrameObject( frame_9f1afcfe2c2c30269f53fc6613b4f465 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f1afcfe2c2c30269f53fc6613b4f465 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9f1afcfe2c2c30269f53fc6613b4f465, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9f1afcfe2c2c30269f53fc6613b4f465->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9f1afcfe2c2c30269f53fc6613b4f465, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = LIST_COPY( const_list_str_plain_expm_frechet_str_plain_expm_cond_list );
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_true_true_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_11 = MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_1_expm_frechet( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_expm_frechet, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_2_expm_frechet_block_enlarge(  );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_expm_frechet_block_enlarge, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_tuple_d7b0d637a582e8428d075af68e95e8fe_tuple;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_ell_table_61, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_3__diff_pade3(  );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain__diff_pade3, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_4__diff_pade5(  );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain__diff_pade5, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_5__diff_pade7(  );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain__diff_pade7, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_6__diff_pade9(  );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain__diff_pade9, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_7_expm_frechet_algo_64(  );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_expm_frechet_algo_64, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_8_vec(  );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_vec, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_true_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_20 = MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_9_expm_frechet_kronform( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_expm_frechet_kronform, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_true_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_21 = MAKE_FUNCTION_scipy$linalg$_expm_frechet$$$function_10_expm_cond( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain_expm_cond, tmp_assign_source_21 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_expm_frechet, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$linalg$_expm_frechet );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
