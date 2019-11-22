/* Generated code for Python module 'scipy.sparse.linalg._expm_multiply'
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

/* The "_module_scipy$sparse$linalg$_expm_multiply" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$linalg$_expm_multiply;
PyDictObject *moduledict_scipy$sparse$linalg$_expm_multiply;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_49e95ee1591820577ed79e88659cc0ef;
static PyObject *const_str_digest_54242a366d22d150c940d0dc789b3749;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_c24641d0eb4a8fb9b0e14ca5a0b1390a_tuple;
static PyObject *const_tuple_dece427533dea97000308c02e96f6e72_tuple;
static PyObject *const_str_plain__expm_multiply_interval_core_2;
static PyObject *const_str_digest_86829bda044c8b64db7d5e87aec45ce8;
extern PyObject *const_str_plain___name__;
extern PyObject *const_dict_8e69410c061eba6e508a80360a25be09;
extern PyObject *const_str_plain_eta;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_str_plain_p_high;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_inf;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain_aslinearoperator_tuple;
static PyObject *const_str_digest_296a8b4edd604f1f6da07eb51b7d7570;
extern PyObject *const_str_plain_h;
extern PyObject *const_int_pos_55;
extern PyObject *const_str_plain_arg;
static PyObject *const_str_plain__theta;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain_scale;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_5f72e0e59f2f8710dd71eb4289235928;
static PyObject *const_tuple_c56684a16e2a952717aad28c515d6161_tuple;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_compute_v;
static PyObject *const_str_plain_u_d;
static PyObject *const_str_digest_da47621552c73b2153a0955280144810;
extern PyObject *const_str_plain_num;
static PyObject *const_list_str_plain_expm_multiply_list;
extern PyObject *const_str_plain_m;
static PyObject *const_str_digest_131dd0e90a3fdb693b42942b688cd92d;
static PyObject *const_str_digest_ae9d6c2faf4cc34bb629d373cfaaf306;
static PyObject *const_str_digest_aeb89c132661541d51dd61ca7675fdf1;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_diagonal;
static PyObject *const_str_digest_11cc5d3858c16eab560627cb1c21a305;
extern PyObject *const_str_plain_linspace;
extern PyObject *const_str_plain_q;
extern PyObject *const_int_pos_5;
static PyObject *const_str_digest_d019029f251c8ee017167984f901595b;
static PyObject *const_str_plain__A_1_norm;
extern PyObject *const_str_plain_aslinearoperator;
static PyObject *const_str_digest_867467e8a00d613d0d2f77250a7a3441;
extern PyObject *const_str_plain_start;
static PyObject *const_str_plain__exact_inf_norm;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_linalg;
static PyObject *const_tuple_none_int_pos_2_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_775cb6a1fcfc673e427ba6dd258cf26d;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_tuple_int_pos_2_int_pos_5_false_false_tuple;
static PyObject *const_str_plain_LazyOperatorNormInfo;
static PyObject *const_tuple_str_plain_LazyOperatorNormInfo_tuple_empty_tuple;
extern PyObject *const_str_plain__onenormest_matrix_power;
static PyObject *const_str_digest_11215ef702acd5caa94f9e689d5779c8;
static PyObject *const_str_digest_cbd2583fac9e04f237e98f5add8add2f;
extern PyObject *const_str_plain_s;
extern PyObject *const_tuple_none_false_tuple;
static PyObject *const_tuple_eb002429929efc19ff9491e77d8debb8_tuple;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_tuple_none_none_none_none_tuple;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
static PyObject *const_tuple_4f7b6de4c1d5a27728dddd0e2595969d_tuple;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_est;
extern PyObject *const_str_plain_c2;
extern PyObject *const_str_plain_p;
static PyObject *const_str_plain__compute_p_max;
extern PyObject *const_str_plain_exp;
extern PyObject *const_str_plain__ell;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_float;
static PyObject *const_tuple_821657b469f64003297af8bedaa09c73_tuple;
static PyObject *const_str_digest_e6008250daf431f4d9e4bb7643ac274a;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_digest_2190b2eeffafd9b593f58a902c7523c2;
static PyObject *const_str_plain__expm_multiply_simple_core;
extern PyObject *const_str_plain_alpha;
static PyObject *const_str_digest_9da5641b7d0bb959104990ff7e2139ea;
static PyObject *const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_endpoint;
extern PyObject *const_str_plain_norm;
static PyObject *const_str_digest_bc78c37b277c80c6202ed2274944e5b2;
extern PyObject *const_tuple_str_plain_self_str_plain_p_tuple;
static PyObject *const_str_plain_expm_multiply;
static PyObject *const_str_digest_4c4d4693b23f4e1bbb4295584a5a712f;
static PyObject *const_tuple_int_pos_55_int_pos_2_tuple;
static PyObject *const_str_plain__expm_multiply_interval;
static PyObject *const_str_digest_c4407ed67fb012ed560e528c89537b6f;
static PyObject *const_str_plain_balance;
extern PyObject *const_str_plain_theta;
extern PyObject *const_str_digest_9947053d0c63bc81f08a8b20d9d4c742;
extern PyObject *const_tuple_float_1_0_false_tuple;
static PyObject *const_str_digest_7390b2a28bab04b0bcb10e8ce24d01b1;
static PyObject *const_str_plain__condition_3_13;
extern PyObject *const_str_plain_b;
static PyObject *const_str_plain__expm_multiply_simple;
static PyObject *const_tuple_str_plain_m_str_plain_p_str_plain_norm_info_tuple;
extern PyObject *const_str_plain_mu;
extern PyObject *const_str_plain_compute_w;
static PyObject *const_dict_832874aa199d68fe5be4260e3b883a50;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_result_type;
static PyObject *const_tuple_ce73fa3466cfeec14eaed529497cef69_tuple;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_construct;
static PyObject *const_str_plain__expm_multiply_interval_core_0;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_digest_8783708b6421c71a0892a844e756fb02;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_coeff;
extern PyObject *const_str_plain_onenormest;
extern PyObject *const_str_plain_c1;
extern PyObject *const_str_plain_scipy;
static PyObject *const_str_digest_c206d2583525ed1da2e1577e97afd0ca;
extern PyObject *const_str_plain_pow;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_eye;
extern PyObject *const_tuple_int_0_int_pos_1_tuple;
static PyObject *const_str_plain__trace;
static PyObject *const_str_digest_0031667e595cff07ba224b79ac1df5b2;
static PyObject *const_str_plain__exact_1_norm;
extern PyObject *const_str_plain_F;
static PyObject *const_tuple_466d0ecde5a048a8d2d34075c2cde2a5_tuple;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arg_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_B;
static PyObject *const_dict_f15f701e78ae50b1584fd652a45e9c0d;
static PyObject *const_str_digest_f98c003394e7f215deb85662acd8e067;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_sparse;
extern PyObject *const_str_digest_4df09d989e4dd8fe06da54447f217faa;
static PyObject *const_str_plain__compute_cost_div_m;
static PyObject *const_str_plain_ell;
extern PyObject *const_str_plain__scale;
extern PyObject *const_str_plain_set_scale;
extern PyObject *const_str_plain__d;
static PyObject *const_str_plain_best_s;
extern PyObject *const_str_plain_flat;
static PyObject *const_str_digest_d3bd22db7129a99be49ea4796b4b6d4c;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_retstep;
extern PyObject *const_str_plain_d;
static PyObject *const_str_digest_2c0b367f0cc83279a09d314036bd3077;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_best_m;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
extern PyObject *const_float_1_1102230246251565eminus_16;
static PyObject *const_tuple_str_plain_self_str_plain_p_str_plain_est_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_e1d168b40d7be24880c86863889c54ab;
extern PyObject *const_str_plain_dot;
static PyObject *const_str_digest_5c538fb1c3ee21482901566ad2cd977b;
extern PyObject *const_str_plain_isspmatrix;
extern PyObject *const_tuple_str_plain_A_tuple;
static PyObject *const_str_plain_p_max;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_2e820d070a7913bf1d33037e152322e0;
extern PyObject *const_str_plain_ident;
extern PyObject *const_str_plain_axis;
static PyObject *const_str_plain__fragment_3_1;
extern PyObject *const_tuple_str_plain_self_str_plain_scale_tuple;
static PyObject *const_tuple_b98a72a1ae4bd9e21c0974dc29a5aea4_tuple;
static PyObject *const_str_plain_m_max;
extern PyObject *const_str_plain_X;
extern PyObject *const_str_plain_stop;
extern PyObject *const_dict_c4b01644824ba6bad132707fcdaa03f1;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain_norm_info;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_tuple_none_none_none_none_false_false_tuple;
static PyObject *const_tuple_d64af6025589d83c1438f5960c1d3058_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_sqrt_m_max;
extern PyObject *const_str_plain_floor;
extern PyObject *const_str_plain_itmax;
extern PyObject *const_str_plain_tol;
extern PyObject *const_tuple_31c53e19600a8674c9c8511e066a73d4_tuple;
static PyObject *const_str_plain_p_low;
static PyObject *const_str_digest_f04e1dbe8ecc68ede267181d27546f41;
static PyObject *const_str_digest_ad8947ea140363db57ed4e251e1fb17e;
static PyObject *const_str_plain_onenorm;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_5393163836a59530eff1219bca164b40_tuple;
static PyObject *const_str_digest_59572bb5d0506822b3e5db1476b233ef;
static PyObject *const_str_plain_m_star;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_trace;
extern PyObject *const_str_plain__A;
extern PyObject *const_str_plain_ceil;
static PyObject *const_str_plain_n0;
extern PyObject *const_str_plain__ident_like;
static PyObject *const_str_plain__expm_multiply_interval_core_1;
static PyObject *const_str_plain_A_1_norm;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_49e95ee1591820577ed79e88659cc0ef = UNSTREAM_STRING_ASCII( &constant_bin[ 5393768 ], 1362, 0 );
    const_str_digest_54242a366d22d150c940d0dc789b3749 = UNSTREAM_STRING_ASCII( &constant_bin[ 5395130 ], 49, 0 );
    const_tuple_c24641d0eb4a8fb9b0e14ca5a0b1390a_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_c24641d0eb4a8fb9b0e14ca5a0b1390a_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_c24641d0eb4a8fb9b0e14ca5a0b1390a_tuple, 1, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_str_plain_m_max = UNSTREAM_STRING_ASCII( &constant_bin[ 2024174 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_c24641d0eb4a8fb9b0e14ca5a0b1390a_tuple, 2, const_str_plain_m_max ); Py_INCREF( const_str_plain_m_max );
    const_tuple_dece427533dea97000308c02e96f6e72_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5395179 ], 196 );
    const_str_plain__expm_multiply_interval_core_2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5395375 ], 30, 1 );
    const_str_digest_86829bda044c8b64db7d5e87aec45ce8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5395405 ], 34, 0 );
    const_str_plain_p_high = UNSTREAM_STRING_ASCII( &constant_bin[ 5395439 ], 6, 1 );
    const_str_digest_296a8b4edd604f1f6da07eb51b7d7570 = UNSTREAM_STRING_ASCII( &constant_bin[ 5395445 ], 975, 0 );
    const_str_plain__theta = UNSTREAM_STRING_ASCII( &constant_bin[ 1754314 ], 6, 1 );
    const_str_digest_5f72e0e59f2f8710dd71eb4289235928 = UNSTREAM_STRING_ASCII( &constant_bin[ 5396420 ], 43, 0 );
    const_tuple_c56684a16e2a952717aad28c515d6161_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5396463 ], 116 );
    const_str_plain_u_d = UNSTREAM_STRING_ASCII( &constant_bin[ 755985 ], 3, 1 );
    const_str_digest_da47621552c73b2153a0955280144810 = UNSTREAM_STRING_ASCII( &constant_bin[ 5396579 ], 28, 0 );
    const_list_str_plain_expm_multiply_list = PyList_New( 1 );
    const_str_plain_expm_multiply = UNSTREAM_STRING_ASCII( &constant_bin[ 5391264 ], 13, 1 );
    PyList_SET_ITEM( const_list_str_plain_expm_multiply_list, 0, const_str_plain_expm_multiply ); Py_INCREF( const_str_plain_expm_multiply );
    const_str_digest_131dd0e90a3fdb693b42942b688cd92d = UNSTREAM_STRING_ASCII( &constant_bin[ 5396607 ], 354, 0 );
    const_str_digest_ae9d6c2faf4cc34bb629d373cfaaf306 = UNSTREAM_STRING_ASCII( &constant_bin[ 5396961 ], 42, 0 );
    const_str_digest_aeb89c132661541d51dd61ca7675fdf1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5397003 ], 43, 0 );
    const_str_digest_11cc5d3858c16eab560627cb1c21a305 = UNSTREAM_STRING_ASCII( &constant_bin[ 5397046 ], 63, 0 );
    const_str_digest_d019029f251c8ee017167984f901595b = UNSTREAM_STRING_ASCII( &constant_bin[ 5397109 ], 446, 0 );
    const_str_plain__A_1_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 5397555 ], 9, 1 );
    const_str_digest_867467e8a00d613d0d2f77250a7a3441 = UNSTREAM_STRING_ASCII( &constant_bin[ 5397564 ], 459, 0 );
    const_str_plain__exact_inf_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 5398023 ], 15, 1 );
    const_tuple_none_int_pos_2_int_pos_1_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_2_int_pos_1_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_2_int_pos_1_tuple, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_2_int_pos_1_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_digest_775cb6a1fcfc673e427ba6dd258cf26d = UNSTREAM_STRING_ASCII( &constant_bin[ 5398038 ], 46, 0 );
    const_str_plain_LazyOperatorNormInfo = UNSTREAM_STRING_ASCII( &constant_bin[ 5395551 ], 20, 1 );
    const_tuple_str_plain_LazyOperatorNormInfo_tuple_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LazyOperatorNormInfo_tuple_empty_tuple, 0, const_str_plain_LazyOperatorNormInfo ); Py_INCREF( const_str_plain_LazyOperatorNormInfo );
    PyTuple_SET_ITEM( const_tuple_str_plain_LazyOperatorNormInfo_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_str_digest_11215ef702acd5caa94f9e689d5779c8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5398084 ], 28, 0 );
    const_str_digest_cbd2583fac9e04f237e98f5add8add2f = UNSTREAM_STRING_ASCII( &constant_bin[ 5398112 ], 33, 0 );
    const_tuple_eb002429929efc19ff9491e77d8debb8_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_eb002429929efc19ff9491e77d8debb8_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_eb002429929efc19ff9491e77d8debb8_tuple, 1, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    PyTuple_SET_ITEM( const_tuple_eb002429929efc19ff9491e77d8debb8_tuple, 2, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    PyTuple_SET_ITEM( const_tuple_eb002429929efc19ff9491e77d8debb8_tuple, 3, const_str_plain_mu ); Py_INCREF( const_str_plain_mu );
    PyTuple_SET_ITEM( const_tuple_eb002429929efc19ff9491e77d8debb8_tuple, 4, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    const_str_plain_norm_info = UNSTREAM_STRING_ASCII( &constant_bin[ 5395355 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_eb002429929efc19ff9491e77d8debb8_tuple, 5, const_str_plain_norm_info ); Py_INCREF( const_str_plain_norm_info );
    PyTuple_SET_ITEM( const_tuple_eb002429929efc19ff9491e77d8debb8_tuple, 6, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    const_str_plain_ell = UNSTREAM_STRING_ASCII( &constant_bin[ 3805 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_eb002429929efc19ff9491e77d8debb8_tuple, 7, const_str_plain_ell ); Py_INCREF( const_str_plain_ell );
    const_str_plain_n0 = UNSTREAM_STRING_ASCII( &constant_bin[ 900507 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_eb002429929efc19ff9491e77d8debb8_tuple, 8, const_str_plain_n0 ); Py_INCREF( const_str_plain_n0 );
    const_str_plain_m_star = UNSTREAM_STRING_ASCII( &constant_bin[ 5395366 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_eb002429929efc19ff9491e77d8debb8_tuple, 9, const_str_plain_m_star ); Py_INCREF( const_str_plain_m_star );
    PyTuple_SET_ITEM( const_tuple_eb002429929efc19ff9491e77d8debb8_tuple, 10, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_eb002429929efc19ff9491e77d8debb8_tuple, 11, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_tuple_4f7b6de4c1d5a27728dddd0e2595969d_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4f7b6de4c1d5a27728dddd0e2595969d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4f7b6de4c1d5a27728dddd0e2595969d_tuple, 1, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    const_str_plain_A_1_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 5395340 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_4f7b6de4c1d5a27728dddd0e2595969d_tuple, 2, const_str_plain_A_1_norm ); Py_INCREF( const_str_plain_A_1_norm );
    PyTuple_SET_ITEM( const_tuple_4f7b6de4c1d5a27728dddd0e2595969d_tuple, 3, const_str_plain_ell ); Py_INCREF( const_str_plain_ell );
    PyTuple_SET_ITEM( const_tuple_4f7b6de4c1d5a27728dddd0e2595969d_tuple, 4, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    const_str_plain__compute_p_max = UNSTREAM_STRING_ASCII( &constant_bin[ 5398112 ], 14, 1 );
    const_tuple_821657b469f64003297af8bedaa09c73_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_821657b469f64003297af8bedaa09c73_tuple, 0, const_str_plain_m_max ); Py_INCREF( const_str_plain_m_max );
    const_str_plain_sqrt_m_max = UNSTREAM_STRING_ASCII( &constant_bin[ 5398145 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_821657b469f64003297af8bedaa09c73_tuple, 1, const_str_plain_sqrt_m_max ); Py_INCREF( const_str_plain_sqrt_m_max );
    const_str_plain_p_low = UNSTREAM_STRING_ASCII( &constant_bin[ 5398155 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_821657b469f64003297af8bedaa09c73_tuple, 2, const_str_plain_p_low ); Py_INCREF( const_str_plain_p_low );
    PyTuple_SET_ITEM( const_tuple_821657b469f64003297af8bedaa09c73_tuple, 3, const_str_plain_p_high ); Py_INCREF( const_str_plain_p_high );
    const_str_digest_e6008250daf431f4d9e4bb7643ac274a = UNSTREAM_STRING_ASCII( &constant_bin[ 5398160 ], 227, 0 );
    const_str_plain__expm_multiply_simple_core = UNSTREAM_STRING_ASCII( &constant_bin[ 5398387 ], 26, 1 );
    const_str_digest_9da5641b7d0bb959104990ff7e2139ea = UNSTREAM_STRING_ASCII( &constant_bin[ 5398413 ], 62, 0 );
    const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 1, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 2, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 3, const_str_plain_mu ); Py_INCREF( const_str_plain_mu );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 4, const_str_plain_m_star ); Py_INCREF( const_str_plain_m_star );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 5, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 6, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    const_str_plain_balance = UNSTREAM_STRING_ASCII( &constant_bin[ 2944080 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 7, const_str_plain_balance ); Py_INCREF( const_str_plain_balance );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 8, const_str_plain_u_d ); Py_INCREF( const_str_plain_u_d );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 9, const_str_plain_F ); Py_INCREF( const_str_plain_F );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 10, const_str_plain_eta ); Py_INCREF( const_str_plain_eta );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 11, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 12, const_str_plain_c1 ); Py_INCREF( const_str_plain_c1 );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 13, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 14, const_str_plain_coeff ); Py_INCREF( const_str_plain_coeff );
    PyTuple_SET_ITEM( const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 15, const_str_plain_c2 ); Py_INCREF( const_str_plain_c2 );
    const_str_digest_bc78c37b277c80c6202ed2274944e5b2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5398475 ], 26, 0 );
    const_str_digest_4c4d4693b23f4e1bbb4295584a5a712f = UNSTREAM_STRING_ASCII( &constant_bin[ 5398501 ], 37, 0 );
    const_tuple_int_pos_55_int_pos_2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_55_int_pos_2_tuple, 0, const_int_pos_55 ); Py_INCREF( const_int_pos_55 );
    PyTuple_SET_ITEM( const_tuple_int_pos_55_int_pos_2_tuple, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_str_plain__expm_multiply_interval = UNSTREAM_STRING_ASCII( &constant_bin[ 5395375 ], 23, 1 );
    const_str_digest_c4407ed67fb012ed560e528c89537b6f = UNSTREAM_STRING_ASCII( &constant_bin[ 5398538 ], 86, 0 );
    const_str_digest_7390b2a28bab04b0bcb10e8ce24d01b1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5398624 ], 51, 0 );
    const_str_plain__condition_3_13 = UNSTREAM_STRING_ASCII( &constant_bin[ 5398675 ], 15, 1 );
    const_str_plain__expm_multiply_simple = UNSTREAM_STRING_ASCII( &constant_bin[ 5398387 ], 21, 1 );
    const_tuple_str_plain_m_str_plain_p_str_plain_norm_info_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_m_str_plain_p_str_plain_norm_info_tuple, 0, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_str_plain_m_str_plain_p_str_plain_norm_info_tuple, 1, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_str_plain_m_str_plain_p_str_plain_norm_info_tuple, 2, const_str_plain_norm_info ); Py_INCREF( const_str_plain_norm_info );
    const_dict_832874aa199d68fe5be4260e3b883a50 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_832874aa199d68fe5be4260e3b883a50, const_str_plain_ell, const_int_pos_2 );
    assert( PyDict_Size( const_dict_832874aa199d68fe5be4260e3b883a50 ) == 1 );
    const_tuple_ce73fa3466cfeec14eaed529497cef69_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_ce73fa3466cfeec14eaed529497cef69_tuple, 0, const_str_plain_A_1_norm ); Py_INCREF( const_str_plain_A_1_norm );
    PyTuple_SET_ITEM( const_tuple_ce73fa3466cfeec14eaed529497cef69_tuple, 1, const_str_plain_n0 ); Py_INCREF( const_str_plain_n0 );
    PyTuple_SET_ITEM( const_tuple_ce73fa3466cfeec14eaed529497cef69_tuple, 2, const_str_plain_m_max ); Py_INCREF( const_str_plain_m_max );
    PyTuple_SET_ITEM( const_tuple_ce73fa3466cfeec14eaed529497cef69_tuple, 3, const_str_plain_ell ); Py_INCREF( const_str_plain_ell );
    const_str_plain_p_max = UNSTREAM_STRING_ASCII( &constant_bin[ 5398121 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_ce73fa3466cfeec14eaed529497cef69_tuple, 4, const_str_plain_p_max ); Py_INCREF( const_str_plain_p_max );
    PyTuple_SET_ITEM( const_tuple_ce73fa3466cfeec14eaed529497cef69_tuple, 5, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_ce73fa3466cfeec14eaed529497cef69_tuple, 6, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_str_plain__expm_multiply_interval_core_0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5398690 ], 30, 1 );
    const_str_digest_c206d2583525ed1da2e1577e97afd0ca = UNSTREAM_STRING_ASCII( &constant_bin[ 5398720 ], 605, 0 );
    const_str_plain__trace = UNSTREAM_STRING_ASCII( &constant_bin[ 2583560 ], 6, 1 );
    const_str_digest_0031667e595cff07ba224b79ac1df5b2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5399325 ], 29, 0 );
    const_str_plain__exact_1_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 5399354 ], 13, 1 );
    const_tuple_466d0ecde5a048a8d2d34075c2cde2a5_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5399367 ], 135 );
    const_dict_f15f701e78ae50b1584fd652a45e9c0d = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5399502 ], 492 );
    const_str_digest_f98c003394e7f215deb85662acd8e067 = UNSTREAM_STRING_ASCII( &constant_bin[ 5399994 ], 32, 0 );
    const_str_plain__compute_cost_div_m = UNSTREAM_STRING_ASCII( &constant_bin[ 5400026 ], 19, 1 );
    const_str_plain_best_s = UNSTREAM_STRING_ASCII( &constant_bin[ 1590222 ], 6, 1 );
    const_str_digest_d3bd22db7129a99be49ea4796b4b6d4c = UNSTREAM_STRING_ASCII( &constant_bin[ 5400045 ], 37, 0 );
    const_str_digest_2c0b367f0cc83279a09d314036bd3077 = UNSTREAM_STRING_ASCII( &constant_bin[ 5400082 ], 540, 0 );
    const_str_plain_best_m = UNSTREAM_STRING_ASCII( &constant_bin[ 5396076 ], 6, 1 );
    const_tuple_str_plain_self_str_plain_p_str_plain_est_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_p_str_plain_est_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_p_str_plain_est_tuple, 1, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_p_str_plain_est_tuple, 2, const_str_plain_est ); Py_INCREF( const_str_plain_est );
    const_str_digest_e1d168b40d7be24880c86863889c54ab = UNSTREAM_STRING_ASCII( &constant_bin[ 5400622 ], 3194, 0 );
    const_str_digest_5c538fb1c3ee21482901566ad2cd977b = UNSTREAM_STRING_ASCII( &constant_bin[ 5403816 ], 30, 0 );
    const_str_digest_2e820d070a7913bf1d33037e152322e0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5403846 ], 37, 0 );
    const_str_plain__fragment_3_1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5403883 ], 13, 1 );
    const_tuple_b98a72a1ae4bd9e21c0974dc29a5aea4_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_b98a72a1ae4bd9e21c0974dc29a5aea4_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_b98a72a1ae4bd9e21c0974dc29a5aea4_tuple, 1, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_b98a72a1ae4bd9e21c0974dc29a5aea4_tuple, 2, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_b98a72a1ae4bd9e21c0974dc29a5aea4_tuple, 3, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_b98a72a1ae4bd9e21c0974dc29a5aea4_tuple, 4, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_b98a72a1ae4bd9e21c0974dc29a5aea4_tuple, 5, const_str_plain_endpoint ); Py_INCREF( const_str_plain_endpoint );
    PyTuple_SET_ITEM( const_tuple_b98a72a1ae4bd9e21c0974dc29a5aea4_tuple, 6, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    PyTuple_SET_ITEM( const_tuple_b98a72a1ae4bd9e21c0974dc29a5aea4_tuple, 7, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    const_tuple_none_none_none_none_false_false_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_false_false_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_false_false_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_false_false_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_false_false_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_false_false_tuple, 4, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_false_false_tuple, 5, Py_False ); Py_INCREF( Py_False );
    const_tuple_d64af6025589d83c1438f5960c1d3058_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 1, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 2, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 3, const_str_plain_balance ); Py_INCREF( const_str_plain_balance );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 4, const_str_plain_ident ); Py_INCREF( const_str_plain_ident );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 5, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 6, const_str_plain_n0 ); Py_INCREF( const_str_plain_n0 );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 7, const_str_plain_u_d ); Py_INCREF( const_str_plain_u_d );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 8, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 9, const_str_plain_mu ); Py_INCREF( const_str_plain_mu );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 10, const_str_plain_A_1_norm ); Py_INCREF( const_str_plain_A_1_norm );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 11, const_str_plain_m_star ); Py_INCREF( const_str_plain_m_star );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 12, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 13, const_str_plain_ell ); Py_INCREF( const_str_plain_ell );
    PyTuple_SET_ITEM( const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 14, const_str_plain_norm_info ); Py_INCREF( const_str_plain_norm_info );
    const_str_digest_f04e1dbe8ecc68ede267181d27546f41 = UNSTREAM_STRING_ASCII( &constant_bin[ 5403896 ], 45, 0 );
    const_str_digest_ad8947ea140363db57ed4e251e1fb17e = UNSTREAM_STRING_ASCII( &constant_bin[ 5403941 ], 22, 0 );
    const_str_plain_onenorm = UNSTREAM_STRING_ASCII( &constant_bin[ 4505867 ], 7, 1 );
    const_tuple_5393163836a59530eff1219bca164b40_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_5393163836a59530eff1219bca164b40_tuple, 0, const_str_plain_norm_info ); Py_INCREF( const_str_plain_norm_info );
    PyTuple_SET_ITEM( const_tuple_5393163836a59530eff1219bca164b40_tuple, 1, const_str_plain_n0 ); Py_INCREF( const_str_plain_n0 );
    PyTuple_SET_ITEM( const_tuple_5393163836a59530eff1219bca164b40_tuple, 2, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_5393163836a59530eff1219bca164b40_tuple, 3, const_str_plain_m_max ); Py_INCREF( const_str_plain_m_max );
    PyTuple_SET_ITEM( const_tuple_5393163836a59530eff1219bca164b40_tuple, 4, const_str_plain_ell ); Py_INCREF( const_str_plain_ell );
    PyTuple_SET_ITEM( const_tuple_5393163836a59530eff1219bca164b40_tuple, 5, const_str_plain_best_m ); Py_INCREF( const_str_plain_best_m );
    PyTuple_SET_ITEM( const_tuple_5393163836a59530eff1219bca164b40_tuple, 6, const_str_plain_best_s ); Py_INCREF( const_str_plain_best_s );
    PyTuple_SET_ITEM( const_tuple_5393163836a59530eff1219bca164b40_tuple, 7, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_5393163836a59530eff1219bca164b40_tuple, 8, const_str_plain_theta ); Py_INCREF( const_str_plain_theta );
    PyTuple_SET_ITEM( const_tuple_5393163836a59530eff1219bca164b40_tuple, 9, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_5393163836a59530eff1219bca164b40_tuple, 10, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_str_digest_59572bb5d0506822b3e5db1476b233ef = UNSTREAM_STRING_ASCII( &constant_bin[ 5403963 ], 42, 0 );
    const_str_plain__expm_multiply_interval_core_1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5404005 ], 30, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$sparse$linalg$_expm_multiply( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1b99fe4b7a38180f10b094af64b1bae0;
static PyCodeObject *codeobj_fce11b5bb02a8323f80940179fd94d9c;
static PyCodeObject *codeobj_a28c616e0d0ea24a23f786035404638e;
static PyCodeObject *codeobj_cdbd19e279980b9b896e7eedca78558c;
static PyCodeObject *codeobj_3f5d51b422b32d338e7a9e243a65edd6;
static PyCodeObject *codeobj_d6034223fdba4670dca805d13a128820;
static PyCodeObject *codeobj_67a8b6ce6fe6a3ebf3368c5d4cdbf801;
static PyCodeObject *codeobj_2098c05df940ba301ada022ba44e6c28;
static PyCodeObject *codeobj_bedcacaac234ad22bfdbd4f8ebe5a807;
static PyCodeObject *codeobj_de85936ba718bbc8b05dcc810d40b174;
static PyCodeObject *codeobj_a2a151311d33ecae001931a9c71c6467;
static PyCodeObject *codeobj_1525777ecfd5b0663eef475b4da2badf;
static PyCodeObject *codeobj_0ad49419948a3653d0e0cecded70f763;
static PyCodeObject *codeobj_7d97195ceeeb542d5abbe574ecaeb420;
static PyCodeObject *codeobj_cbd77539f782d02d5fb98dd8f33c5c29;
static PyCodeObject *codeobj_8e28ddfb76360c27c997370a3c46d286;
static PyCodeObject *codeobj_417aedc129e01bb529999ddfc2dc3e1f;
static PyCodeObject *codeobj_8d08e1f9603f0d8700ce1a4b91fe483a;
static PyCodeObject *codeobj_1f7f8c85d88fdd455952b184c5b13978;
static PyCodeObject *codeobj_8dcd2060990937feb10dfe41e013283e;
static PyCodeObject *codeobj_83d154203bf6a7ddc9dda998ac144f88;
static PyCodeObject *codeobj_62224183dfee57c04d75024423282e4d;
static PyCodeObject *codeobj_b5f6f9e63cfba62bc5cfe21f6e0ae353;
static PyCodeObject *codeobj_42d53edfe9bc6acc34f35ef1c7a3a3d7;
static PyCodeObject *codeobj_e28a9a87875d93f370e1ce735077acc7;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_4c4d4693b23f4e1bbb4295584a5a712f );
    codeobj_1b99fe4b7a38180f10b094af64b1bae0 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 130, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arg_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fce11b5bb02a8323f80940179fd94d9c = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 407, const_tuple_c24641d0eb4a8fb9b0e14ca5a0b1390a_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a28c616e0d0ea24a23f786035404638e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_5f72e0e59f2f8710dd71eb4289235928, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_cdbd19e279980b9b896e7eedca78558c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_LazyOperatorNormInfo, 305, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_3f5d51b422b32d338e7a9e243a65edd6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 316, const_tuple_4f7b6de4c1d5a27728dddd0e2595969d_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d6034223fdba4670dca805d13a128820 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compute_cost_div_m, 367, const_tuple_str_plain_m_str_plain_p_str_plain_norm_info_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_67a8b6ce6fe6a3ebf3368c5d4cdbf801 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compute_p_max, 392, const_tuple_821657b469f64003297af8bedaa09c73_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2098c05df940ba301ada022ba44e6c28 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__condition_3_13, 468, const_tuple_ce73fa3466cfeec14eaed529497cef69_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bedcacaac234ad22bfdbd4f8ebe5a807 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__exact_1_norm, 23, const_tuple_str_plain_A_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_de85936ba718bbc8b05dcc810d40b174 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__exact_inf_norm, 15, const_tuple_str_plain_A_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a2a151311d33ecae001931a9c71c6467 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__expm_multiply_interval, 504, const_tuple_dece427533dea97000308c02e96f6e72_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1525777ecfd5b0663eef475b4da2badf = MAKE_CODEOBJ( module_filename_obj, const_str_plain__expm_multiply_interval_core_0, 622, const_tuple_eb002429929efc19ff9491e77d8debb8_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0ad49419948a3653d0e0cecded70f763 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__expm_multiply_interval_core_1, 641, const_tuple_c56684a16e2a952717aad28c515d6161_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7d97195ceeeb542d5abbe574ecaeb420 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__expm_multiply_interval_core_2, 670, const_tuple_466d0ecde5a048a8d2d34075c2cde2a5_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cbd77539f782d02d5fb98dd8f33c5c29 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__expm_multiply_simple, 137, const_tuple_d64af6025589d83c1438f5960c1d3058_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8e28ddfb76360c27c997370a3c46d286 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__expm_multiply_simple_core, 190, const_tuple_4d27bb561d70c1835c3c9388d63f6da7_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_417aedc129e01bb529999ddfc2dc3e1f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fragment_3_1, 410, const_tuple_5393163836a59530eff1219bca164b40_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8d08e1f9603f0d8700ce1a4b91fe483a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ident_like, 39, const_tuple_str_plain_A_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1f7f8c85d88fdd455952b184c5b13978 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__onenormest_matrix_power, 263, const_tuple_31c53e19600a8674c9c8511e066a73d4_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8dcd2060990937feb10dfe41e013283e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__trace, 31, const_tuple_str_plain_A_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_83d154203bf6a7ddc9dda998ac144f88 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_alpha, 361, const_tuple_str_plain_self_str_plain_p_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_62224183dfee57c04d75024423282e4d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_d, 352, const_tuple_str_plain_self_str_plain_p_str_plain_est_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b5f6f9e63cfba62bc5cfe21f6e0ae353 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_expm_multiply, 48, const_tuple_b98a72a1ae4bd9e21c0974dc29a5aea4_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_42d53edfe9bc6acc34f35ef1c7a3a3d7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_onenorm, 344, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e28a9a87875d93f370e1ce735077acc7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_scale, 338, const_tuple_str_plain_self_str_plain_scale_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply$$$genexpr_1_genexpr_maker( void );


static PyObject *scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max$$$genexpr_1_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_10_set_scale(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_11_onenorm(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_12_d(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_13_alpha(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_14__compute_cost_div_m(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_16__fragment_3_1( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_17__condition_3_13(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_18__expm_multiply_interval( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_19__expm_multiply_interval_core_0(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_1__exact_inf_norm(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_20__expm_multiply_interval_core_1(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_21__expm_multiply_interval_core_2(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_2__exact_1_norm(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_3__trace(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_4__ident_like(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_6__expm_multiply_simple( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_7__expm_multiply_simple_core( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_8__onenormest_matrix_power( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_9___init__( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_1__exact_inf_norm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_de85936ba718bbc8b05dcc810d40b174;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_de85936ba718bbc8b05dcc810d40b174 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_de85936ba718bbc8b05dcc810d40b174, codeobj_de85936ba718bbc8b05dcc810d40b174, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *) );
    frame_de85936ba718bbc8b05dcc810d40b174 = cache_frame_de85936ba718bbc8b05dcc810d40b174;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_de85936ba718bbc8b05dcc810d40b174 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_de85936ba718bbc8b05dcc810d40b174 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 17;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sparse );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_de85936ba718bbc8b05dcc810d40b174->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isspmatrix, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 17;
            type_description_1 = "o";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_kw_name_1;
            tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_1 != NULL );
            tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_3 != NULL );
            CHECK_OBJECT( par_A );
            tmp_args_element_name_3 = par_A;
            frame_de85936ba718bbc8b05dcc810d40b174->m_frame.f_lineno = 18;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sum );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = PyDict_Copy( const_dict_c4b01644824ba6bad132707fcdaa03f1 );
            frame_de85936ba718bbc8b05dcc810d40b174->m_frame.f_lineno = 18;
            tmp_source_name_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_flat );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_de85936ba718bbc8b05dcc810d40b174->m_frame.f_lineno = 18;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 20;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_2;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_linalg );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_norm );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_A );
            tmp_args_element_name_4 = par_A;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 20;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_3;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_inf );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 20;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_de85936ba718bbc8b05dcc810d40b174->m_frame.f_lineno = 20;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de85936ba718bbc8b05dcc810d40b174 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_de85936ba718bbc8b05dcc810d40b174 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de85936ba718bbc8b05dcc810d40b174 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_de85936ba718bbc8b05dcc810d40b174, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_de85936ba718bbc8b05dcc810d40b174->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_de85936ba718bbc8b05dcc810d40b174, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_de85936ba718bbc8b05dcc810d40b174,
        type_description_1,
        par_A
    );


    // Release cached frame.
    if ( frame_de85936ba718bbc8b05dcc810d40b174 == cache_frame_de85936ba718bbc8b05dcc810d40b174 )
    {
        Py_DECREF( frame_de85936ba718bbc8b05dcc810d40b174 );
    }
    cache_frame_de85936ba718bbc8b05dcc810d40b174 = NULL;

    assertFrameObject( frame_de85936ba718bbc8b05dcc810d40b174 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_1__exact_inf_norm );
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
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_1__exact_inf_norm );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_2__exact_1_norm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_bedcacaac234ad22bfdbd4f8ebe5a807;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bedcacaac234ad22bfdbd4f8ebe5a807 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bedcacaac234ad22bfdbd4f8ebe5a807, codeobj_bedcacaac234ad22bfdbd4f8ebe5a807, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *) );
    frame_bedcacaac234ad22bfdbd4f8ebe5a807 = cache_frame_bedcacaac234ad22bfdbd4f8ebe5a807;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bedcacaac234ad22bfdbd4f8ebe5a807 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bedcacaac234ad22bfdbd4f8ebe5a807 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sparse );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_bedcacaac234ad22bfdbd4f8ebe5a807->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isspmatrix, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 25;
            type_description_1 = "o";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_kw_name_1;
            tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_1 != NULL );
            tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_3 != NULL );
            CHECK_OBJECT( par_A );
            tmp_args_element_name_3 = par_A;
            frame_bedcacaac234ad22bfdbd4f8ebe5a807->m_frame.f_lineno = 26;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sum );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
            frame_bedcacaac234ad22bfdbd4f8ebe5a807->m_frame.f_lineno = 26;
            tmp_source_name_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_flat );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_bedcacaac234ad22bfdbd4f8ebe5a807->m_frame.f_lineno = 26;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 28;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_linalg );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_A );
            tmp_args_element_name_4 = par_A;
            tmp_args_element_name_5 = const_int_pos_1;
            frame_bedcacaac234ad22bfdbd4f8ebe5a807->m_frame.f_lineno = 28;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_norm, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bedcacaac234ad22bfdbd4f8ebe5a807 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bedcacaac234ad22bfdbd4f8ebe5a807 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bedcacaac234ad22bfdbd4f8ebe5a807 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bedcacaac234ad22bfdbd4f8ebe5a807, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bedcacaac234ad22bfdbd4f8ebe5a807->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bedcacaac234ad22bfdbd4f8ebe5a807, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bedcacaac234ad22bfdbd4f8ebe5a807,
        type_description_1,
        par_A
    );


    // Release cached frame.
    if ( frame_bedcacaac234ad22bfdbd4f8ebe5a807 == cache_frame_bedcacaac234ad22bfdbd4f8ebe5a807 )
    {
        Py_DECREF( frame_bedcacaac234ad22bfdbd4f8ebe5a807 );
    }
    cache_frame_bedcacaac234ad22bfdbd4f8ebe5a807 = NULL;

    assertFrameObject( frame_bedcacaac234ad22bfdbd4f8ebe5a807 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_2__exact_1_norm );
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
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_2__exact_1_norm );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_3__trace( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8dcd2060990937feb10dfe41e013283e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8dcd2060990937feb10dfe41e013283e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8dcd2060990937feb10dfe41e013283e, codeobj_8dcd2060990937feb10dfe41e013283e, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *) );
    frame_8dcd2060990937feb10dfe41e013283e = cache_frame_8dcd2060990937feb10dfe41e013283e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8dcd2060990937feb10dfe41e013283e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8dcd2060990937feb10dfe41e013283e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sparse );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_8dcd2060990937feb10dfe41e013283e->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isspmatrix, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 33;
            type_description_1 = "o";
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT( par_A );
            tmp_called_instance_3 = par_A;
            frame_8dcd2060990937feb10dfe41e013283e->m_frame.f_lineno = 34;
            tmp_called_instance_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_diagonal );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_8dcd2060990937feb10dfe41e013283e->m_frame.f_lineno = 34;
            tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_sum );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 36;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_2;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_2 = par_A;
            frame_8dcd2060990937feb10dfe41e013283e->m_frame.f_lineno = 36;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_trace, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8dcd2060990937feb10dfe41e013283e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8dcd2060990937feb10dfe41e013283e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8dcd2060990937feb10dfe41e013283e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8dcd2060990937feb10dfe41e013283e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8dcd2060990937feb10dfe41e013283e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8dcd2060990937feb10dfe41e013283e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8dcd2060990937feb10dfe41e013283e,
        type_description_1,
        par_A
    );


    // Release cached frame.
    if ( frame_8dcd2060990937feb10dfe41e013283e == cache_frame_8dcd2060990937feb10dfe41e013283e )
    {
        Py_DECREF( frame_8dcd2060990937feb10dfe41e013283e );
    }
    cache_frame_8dcd2060990937feb10dfe41e013283e = NULL;

    assertFrameObject( frame_8dcd2060990937feb10dfe41e013283e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_3__trace );
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
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_3__trace );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_4__ident_like( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8d08e1f9603f0d8700ce1a4b91fe483a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8d08e1f9603f0d8700ce1a4b91fe483a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8d08e1f9603f0d8700ce1a4b91fe483a, codeobj_8d08e1f9603f0d8700ce1a4b91fe483a, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *) );
    frame_8d08e1f9603f0d8700ce1a4b91fe483a = cache_frame_8d08e1f9603f0d8700ce1a4b91fe483a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8d08e1f9603f0d8700ce1a4b91fe483a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8d08e1f9603f0d8700ce1a4b91fe483a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sparse );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_8d08e1f9603f0d8700ce1a4b91fe483a->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isspmatrix, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 41;
            type_description_1 = "o";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_7;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_source_name_8;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_scipy );

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

                exception_lineno = 42;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sparse );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_construct );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_eye );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_A );
            tmp_source_name_5 = par_A;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 42;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_0;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 42;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_A );
            tmp_source_name_6 = par_A;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 42;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_2 = const_int_pos_1;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
            Py_DECREF( tmp_subscribed_name_2 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 42;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_dtype;
            CHECK_OBJECT( par_A );
            tmp_source_name_7 = par_A;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dtype );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 43;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_format;
            CHECK_OBJECT( par_A );
            tmp_source_name_8 = par_A;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_format );
            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 43;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_8d08e1f9603f0d8700ce1a4b91fe483a->m_frame.f_lineno = 42;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_source_name_10;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_source_name_11;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_source_name_12;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 45;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_eye );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_A );
            tmp_source_name_10 = par_A;
            tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
            if ( tmp_subscribed_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 45;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_3 = const_int_0;
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            Py_DECREF( tmp_subscribed_name_3 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 45;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_args_name_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_A );
            tmp_source_name_11 = par_A;
            tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_shape );
            if ( tmp_subscribed_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_name_2 );

                exception_lineno = 45;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_4 = const_int_pos_1;
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
            Py_DECREF( tmp_subscribed_name_4 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_name_2 );

                exception_lineno = 45;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_dict_key_3 = const_str_plain_dtype;
            CHECK_OBJECT( par_A );
            tmp_source_name_12 = par_A;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_dtype );
            if ( tmp_dict_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_name_2 );

                exception_lineno = 45;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
            Py_DECREF( tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_8d08e1f9603f0d8700ce1a4b91fe483a->m_frame.f_lineno = 45;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8d08e1f9603f0d8700ce1a4b91fe483a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8d08e1f9603f0d8700ce1a4b91fe483a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8d08e1f9603f0d8700ce1a4b91fe483a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8d08e1f9603f0d8700ce1a4b91fe483a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8d08e1f9603f0d8700ce1a4b91fe483a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8d08e1f9603f0d8700ce1a4b91fe483a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8d08e1f9603f0d8700ce1a4b91fe483a,
        type_description_1,
        par_A
    );


    // Release cached frame.
    if ( frame_8d08e1f9603f0d8700ce1a4b91fe483a == cache_frame_8d08e1f9603f0d8700ce1a4b91fe483a )
    {
        Py_DECREF( frame_8d08e1f9603f0d8700ce1a4b91fe483a );
    }
    cache_frame_8d08e1f9603f0d8700ce1a4b91fe483a = NULL;

    assertFrameObject( frame_8d08e1f9603f0d8700ce1a4b91fe483a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_4__ident_like );
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
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_4__ident_like );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_B = python_pars[ 1 ];
    PyObject *par_start = python_pars[ 2 ];
    PyObject *par_stop = python_pars[ 3 ];
    PyObject *par_num = python_pars[ 4 ];
    PyObject *par_endpoint = python_pars[ 5 ];
    PyObject *var_X = NULL;
    PyObject *var_status = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b5f6f9e63cfba62bc5cfe21f6e0ae353;
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
    static struct Nuitka_FrameObject *cache_frame_b5f6f9e63cfba62bc5cfe21f6e0ae353 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b5f6f9e63cfba62bc5cfe21f6e0ae353, codeobj_b5f6f9e63cfba62bc5cfe21f6e0ae353, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b5f6f9e63cfba62bc5cfe21f6e0ae353 = cache_frame_b5f6f9e63cfba62bc5cfe21f6e0ae353;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b5f6f9e63cfba62bc5cfe21f6e0ae353 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b5f6f9e63cfba62bc5cfe21f6e0ae353 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_all );
        assert( tmp_called_name_1 != NULL );
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_start );
            tmp_tuple_element_1 = par_start;
            tmp_iter_arg_1 = PyTuple_New( 4 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_stop );
            tmp_tuple_element_1 = par_stop;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( par_num );
            tmp_tuple_element_1 = par_num;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_iter_arg_1, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( par_endpoint );
            tmp_tuple_element_1 = par_endpoint;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_iter_arg_1, 3, tmp_tuple_element_1 );
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            assert( !(tmp_assign_source_1 == NULL) );
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        tmp_args_element_name_1 = scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply );
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
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply );
        return NULL;
        outline_result_1:;
        frame_b5f6f9e63cfba62bc5cfe21f6e0ae353->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 130;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__expm_multiply_simple );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__expm_multiply_simple );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_expm_multiply_simple" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 131;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_1;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_2 = par_A;
            CHECK_OBJECT( par_B );
            tmp_args_element_name_3 = par_B;
            frame_b5f6f9e63cfba62bc5cfe21f6e0ae353->m_frame.f_lineno = 131;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_X == NULL );
            var_X = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__expm_multiply_interval );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__expm_multiply_interval );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_expm_multiply_interval" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 133;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }

            tmp_called_name_3 = tmp_mvar_value_2;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_4 = par_A;
            CHECK_OBJECT( par_B );
            tmp_args_element_name_5 = par_B;
            CHECK_OBJECT( par_start );
            tmp_args_element_name_6 = par_start;
            CHECK_OBJECT( par_stop );
            tmp_args_element_name_7 = par_stop;
            CHECK_OBJECT( par_num );
            tmp_args_element_name_8 = par_num;
            CHECK_OBJECT( par_endpoint );
            tmp_args_element_name_9 = par_endpoint;
            frame_b5f6f9e63cfba62bc5cfe21f6e0ae353->m_frame.f_lineno = 133;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_3, call_args );
            }

            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 133;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 133;
                type_description_1 = "oooooooo";
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
            tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


                type_description_1 = "oooooooo";
                exception_lineno = 133;
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
            tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


                type_description_1 = "oooooooo";
                exception_lineno = 133;
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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
                        exception_lineno = 133;
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
                exception_lineno = 133;
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
            assert( var_X == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_X = tmp_assign_source_6;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
            assert( var_status == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_status = tmp_assign_source_7;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5f6f9e63cfba62bc5cfe21f6e0ae353 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5f6f9e63cfba62bc5cfe21f6e0ae353 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b5f6f9e63cfba62bc5cfe21f6e0ae353, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b5f6f9e63cfba62bc5cfe21f6e0ae353->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b5f6f9e63cfba62bc5cfe21f6e0ae353, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b5f6f9e63cfba62bc5cfe21f6e0ae353,
        type_description_1,
        par_A,
        par_B,
        par_start,
        par_stop,
        par_num,
        par_endpoint,
        var_X,
        var_status
    );


    // Release cached frame.
    if ( frame_b5f6f9e63cfba62bc5cfe21f6e0ae353 == cache_frame_b5f6f9e63cfba62bc5cfe21f6e0ae353 )
    {
        Py_DECREF( frame_b5f6f9e63cfba62bc5cfe21f6e0ae353 );
    }
    cache_frame_b5f6f9e63cfba62bc5cfe21f6e0ae353 = NULL;

    assertFrameObject( frame_b5f6f9e63cfba62bc5cfe21f6e0ae353 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_X );
    tmp_return_value = var_X;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_endpoint );
    Py_DECREF( par_endpoint );
    par_endpoint = NULL;

    CHECK_OBJECT( (PyObject *)var_X );
    Py_DECREF( var_X );
    var_X = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_endpoint );
    Py_DECREF( par_endpoint );
    par_endpoint = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply );
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



struct scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply$$$genexpr_1_genexpr_locals {
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

static PyObject *scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply$$$genexpr_1_genexpr_locals *generator_heap = (struct scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

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
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_1b99fe4b7a38180f10b094af64b1bae0, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 130;
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
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_arg );
        tmp_compexpr_left_1 = generator_heap->var_arg;
        tmp_compexpr_right_1 = Py_None;
        tmp_expression_name_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? Py_True : Py_False;
        Py_INCREF( tmp_expression_name_1 );
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 130;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 130;
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

static PyObject *scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply$$$genexpr_1_genexpr_context,
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_f98c003394e7f215deb85662acd8e067,
#endif
        codeobj_1b99fe4b7a38180f10b094af64b1bae0,
        1,
        sizeof(struct scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_6__expm_multiply_simple( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_B = python_pars[ 1 ];
    PyObject *par_t = python_pars[ 2 ];
    PyObject *par_balance = python_pars[ 3 ];
    PyObject *var_ident = NULL;
    PyObject *var_n = NULL;
    PyObject *var_n0 = NULL;
    PyObject *var_mu = NULL;
    PyObject *var_A_1_norm = NULL;
    PyObject *var_m_star = NULL;
    PyObject *var_s = NULL;
    PyObject *var_norm_info = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_cbd77539f782d02d5fb98dd8f33c5c29;
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
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cbd77539f782d02d5fb98dd8f33c5c29 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cbd77539f782d02d5fb98dd8f33c5c29, codeobj_cbd77539f782d02d5fb98dd8f33c5c29, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cbd77539f782d02d5fb98dd8f33c5c29 = cache_frame_cbd77539f782d02d5fb98dd8f33c5c29;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cbd77539f782d02d5fb98dd8f33c5c29 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cbd77539f782d02d5fb98dd8f33c5c29 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_balance );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_balance );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "oooooooNNooooNo";
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
            tmp_raise_type_1 = PyExc_NotImplementedError;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 163;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
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


            exception_lineno = 164;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "oooooooNNooooNo";
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


            exception_lineno = 164;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "oooooooNNooooNo";
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

            exception_lineno = 164;
            type_description_1 = "oooooooNNooooNo";
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

            exception_lineno = 164;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "oooooooNNooooNo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_4df09d989e4dd8fe06da54447f217faa;
            frame_cbd77539f782d02d5fb98dd8f33c5c29->m_frame.f_lineno = 165;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 165;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( par_A );
        tmp_source_name_4 = par_A;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_pos_1;
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_B );
        tmp_source_name_5 = par_B;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 166;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_int_0;
        tmp_compexpr_right_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 166;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oooooooNNooooNo";
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_f04e1dbe8ecc68ede267181d27546f41;
            frame_cbd77539f782d02d5fb98dd8f33c5c29->m_frame.f_lineno = 167;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 167;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__ident_like );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ident_like );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ident_like" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 168;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_cbd77539f782d02d5fb98dd8f33c5c29->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        assert( var_ident == NULL );
        var_ident = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( par_A );
        tmp_source_name_6 = par_A;
        tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = const_int_0;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_B );
        tmp_source_name_7 = par_B;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
        if ( tmp_len_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_2 );
        Py_DECREF( tmp_len_arg_2 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
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
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_int_pos_1;
            assert( var_n0 == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_n0 = tmp_assign_source_3;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_len_arg_3;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( par_B );
            tmp_source_name_8 = par_B;
            tmp_len_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
            if ( tmp_len_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 172;
                type_description_1 = "oooooooNNooooNo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_5 = BUILTIN_LEN( tmp_len_arg_3 );
            Py_DECREF( tmp_len_arg_3 );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 172;
                type_description_1 = "oooooooNNooooNo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_5 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            assert( !(tmp_res == -1) );
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
                PyObject *tmp_assign_source_4;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_source_name_9;
                PyObject *tmp_subscript_name_6;
                CHECK_OBJECT( par_B );
                tmp_source_name_9 = par_B;
                tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
                if ( tmp_subscribed_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 173;
                    type_description_1 = "oooooooNNooooNo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_6 = const_int_pos_1;
                tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 1 );
                Py_DECREF( tmp_subscribed_name_6 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 173;
                    type_description_1 = "oooooooNNooooNo";
                    goto frame_exception_exit_1;
                }
                assert( var_n0 == NULL );
                var_n0 = tmp_assign_source_4;
            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_59572bb5d0506822b3e5db1476b233ef;
                frame_cbd77539f782d02d5fb98dd8f33c5c29->m_frame.f_lineno = 175;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_4 == NULL) );
                exception_type = tmp_raise_type_4;
                exception_lineno = 175;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooNNooooNo";
                goto frame_exception_exit_1;
            }
            branch_end_5:;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_float_arg_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__trace );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__trace );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_trace" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 178;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        frame_cbd77539f782d02d5fb98dd8f33c5c29->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_float_arg_1 = var_n;
        tmp_right_name_1 = TO_FLOAT( tmp_float_arg_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 178;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        assert( var_mu == NULL );
        var_mu = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_A );
        tmp_left_name_2 = par_A;
        CHECK_OBJECT( var_mu );
        tmp_left_name_3 = var_mu;
        CHECK_OBJECT( var_ident );
        tmp_right_name_3 = var_ident;
        tmp_right_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__exact_1_norm );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__exact_1_norm );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_exact_1_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 180;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_3 = par_A;
        frame_cbd77539f782d02d5fb98dd8f33c5c29->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        assert( var_A_1_norm == NULL );
        var_A_1_norm = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_t );
        tmp_left_name_4 = par_t;
        CHECK_OBJECT( var_A_1_norm );
        tmp_right_name_4 = var_A_1_norm;
        tmp_compexpr_left_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oooooooNNooooNo";
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = const_tuple_int_0_int_pos_1_tuple;
            tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
            assert( !(tmp_assign_source_8 == NULL) );
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
        }
        // Tried code:
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


                type_description_1 = "oooooooNNooooNo";
                exception_lineno = 182;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
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


                type_description_1 = "oooooooNNooooNo";
                exception_lineno = 182;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
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
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
            assert( var_m_star == NULL );
            Py_INCREF( tmp_assign_source_11 );
            var_m_star = tmp_assign_source_11;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
            assert( var_s == NULL );
            Py_INCREF( tmp_assign_source_12 );
            var_s = tmp_assign_source_12;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_LazyOperatorNormInfo );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazyOperatorNormInfo );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LazyOperatorNormInfo" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 185;
                type_description_1 = "oooooooNNooooNo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            CHECK_OBJECT( par_t );
            tmp_left_name_5 = par_t;
            CHECK_OBJECT( par_A );
            tmp_right_name_5 = par_A;
            tmp_tuple_element_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "oooooooNNooooNo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_A_1_norm;
            CHECK_OBJECT( par_t );
            tmp_left_name_6 = par_t;
            CHECK_OBJECT( var_A_1_norm );
            tmp_right_name_6 = var_A_1_norm;
            tmp_dict_value_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 185;
                type_description_1 = "oooooooNNooooNo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_ell;
            tmp_dict_value_2 = const_int_pos_2;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_cbd77539f782d02d5fb98dd8f33c5c29->m_frame.f_lineno = 185;
            tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "oooooooNNooooNo";
                goto frame_exception_exit_1;
            }
            assert( var_norm_info == NULL );
            var_norm_info = tmp_assign_source_13;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__fragment_3_1 );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fragment_3_1 );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fragment_3_1" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 186;
                type_description_1 = "oooooooNNooooNo";
                goto try_except_handler_4;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            CHECK_OBJECT( var_norm_info );
            tmp_tuple_element_2 = var_norm_info;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            if ( var_n0 == NULL )
            {
                Py_DECREF( tmp_args_name_2 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n0" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 186;
                type_description_1 = "oooooooNNooooNo";
                goto try_except_handler_4;
            }

            tmp_tuple_element_2 = var_n0;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_float_1_1102230246251565eminus_16;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_832874aa199d68fe5be4260e3b883a50 );
            frame_cbd77539f782d02d5fb98dd8f33c5c29->m_frame.f_lineno = 186;
            tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;
                type_description_1 = "oooooooNNooooNo";
                goto try_except_handler_4;
            }
            tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;
                type_description_1 = "oooooooNNooooNo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


                type_description_1 = "oooooooNNooooNo";
                exception_lineno = 186;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


                type_description_1 = "oooooooNNooooNo";
                exception_lineno = 186;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_iterator_name_1 = tmp_tuple_unpack_2__source_iter;
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

                        type_description_1 = "oooooooNNooooNo";
                        exception_lineno = 186;
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

                type_description_1 = "oooooooNNooooNo";
                exception_lineno = 186;
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
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_17 = tmp_tuple_unpack_2__element_1;
            assert( var_m_star == NULL );
            Py_INCREF( tmp_assign_source_17 );
            var_m_star = tmp_assign_source_17;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_18 = tmp_tuple_unpack_2__element_2;
            assert( var_s == NULL );
            Py_INCREF( tmp_assign_source_18 );
            var_s = tmp_assign_source_18;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        branch_end_6:;
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__expm_multiply_simple_core );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__expm_multiply_simple_core );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_expm_multiply_simple_core" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 187;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_4 = par_A;
        CHECK_OBJECT( par_B );
        tmp_args_element_name_5 = par_B;
        CHECK_OBJECT( par_t );
        tmp_args_element_name_6 = par_t;
        CHECK_OBJECT( var_mu );
        tmp_args_element_name_7 = var_mu;
        CHECK_OBJECT( var_m_star );
        tmp_args_element_name_8 = var_m_star;
        CHECK_OBJECT( var_s );
        tmp_args_element_name_9 = var_s;
        tmp_args_element_name_10 = const_float_1_1102230246251565eminus_16;
        CHECK_OBJECT( par_balance );
        tmp_args_element_name_11 = par_balance;
        frame_cbd77539f782d02d5fb98dd8f33c5c29->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_6, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "oooooooNNooooNo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbd77539f782d02d5fb98dd8f33c5c29 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbd77539f782d02d5fb98dd8f33c5c29 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbd77539f782d02d5fb98dd8f33c5c29 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cbd77539f782d02d5fb98dd8f33c5c29, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cbd77539f782d02d5fb98dd8f33c5c29->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cbd77539f782d02d5fb98dd8f33c5c29, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cbd77539f782d02d5fb98dd8f33c5c29,
        type_description_1,
        par_A,
        par_B,
        par_t,
        par_balance,
        var_ident,
        var_n,
        var_n0,
        NULL,
        NULL,
        var_mu,
        var_A_1_norm,
        var_m_star,
        var_s,
        NULL,
        var_norm_info
    );


    // Release cached frame.
    if ( frame_cbd77539f782d02d5fb98dd8f33c5c29 == cache_frame_cbd77539f782d02d5fb98dd8f33c5c29 )
    {
        Py_DECREF( frame_cbd77539f782d02d5fb98dd8f33c5c29 );
    }
    cache_frame_cbd77539f782d02d5fb98dd8f33c5c29 = NULL;

    assertFrameObject( frame_cbd77539f782d02d5fb98dd8f33c5c29 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_6__expm_multiply_simple );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_balance );
    Py_DECREF( par_balance );
    par_balance = NULL;

    CHECK_OBJECT( (PyObject *)var_ident );
    Py_DECREF( var_ident );
    var_ident = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_n0 );
    var_n0 = NULL;

    CHECK_OBJECT( (PyObject *)var_mu );
    Py_DECREF( var_mu );
    var_mu = NULL;

    CHECK_OBJECT( (PyObject *)var_A_1_norm );
    Py_DECREF( var_A_1_norm );
    var_A_1_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_m_star );
    Py_DECREF( var_m_star );
    var_m_star = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_norm_info );
    var_norm_info = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_balance );
    Py_DECREF( par_balance );
    par_balance = NULL;

    Py_XDECREF( var_ident );
    var_ident = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_n0 );
    var_n0 = NULL;

    Py_XDECREF( var_mu );
    var_mu = NULL;

    Py_XDECREF( var_A_1_norm );
    var_A_1_norm = NULL;

    Py_XDECREF( var_m_star );
    var_m_star = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_norm_info );
    var_norm_info = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_6__expm_multiply_simple );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_7__expm_multiply_simple_core( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_B = python_pars[ 1 ];
    PyObject *par_t = python_pars[ 2 ];
    PyObject *par_mu = python_pars[ 3 ];
    PyObject *par_m_star = python_pars[ 4 ];
    PyObject *par_s = python_pars[ 5 ];
    PyObject *par_tol = python_pars[ 6 ];
    PyObject *par_balance = python_pars[ 7 ];
    PyObject *var_F = NULL;
    PyObject *var_eta = NULL;
    PyObject *var_i = NULL;
    PyObject *var_c1 = NULL;
    PyObject *var_j = NULL;
    PyObject *var_coeff = NULL;
    PyObject *var_c2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8e28ddfb76360c27c997370a3c46d286;
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
    static struct Nuitka_FrameObject *cache_frame_8e28ddfb76360c27c997370a3c46d286 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8e28ddfb76360c27c997370a3c46d286, codeobj_8e28ddfb76360c27c997370a3c46d286, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8e28ddfb76360c27c997370a3c46d286 = cache_frame_8e28ddfb76360c27c997370a3c46d286;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8e28ddfb76360c27c997370a3c46d286 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8e28ddfb76360c27c997370a3c46d286 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_balance );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_balance );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "ooooooooNooooooo";
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
            tmp_raise_type_1 = PyExc_NotImplementedError;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 195;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooNooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_left_1 = par_tol;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_assign_source_1 = const_float_1_1102230246251565eminus_16;
            {
                PyObject *old = par_tol;
                assert( old != NULL );
                par_tol = tmp_assign_source_1;
                Py_INCREF( par_tol );
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( par_B );
        tmp_assign_source_2 = par_B;
        assert( var_F == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_F = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_float_arg_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 200;
            type_description_1 = "ooooooooNooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exp );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooooooooNooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_t );
        tmp_left_name_2 = par_t;
        CHECK_OBJECT( par_mu );
        tmp_right_name_1 = par_mu;
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 200;
            type_description_1 = "ooooooooNooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_s );
        tmp_float_arg_1 = par_s;
        tmp_right_name_2 = TO_FLOAT( tmp_float_arg_1 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 200;
            type_description_1 = "ooooooooNooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 200;
            type_description_1 = "ooooooooNooooooo";
            goto frame_exception_exit_1;
        }
        frame_8e28ddfb76360c27c997370a3c46d286->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooooooooNooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_eta == NULL );
        var_eta = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( par_s );
        tmp_xrange_low_1 = par_s;
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooooooNooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooooooNooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
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
                type_description_1 = "ooooooooNooooooo";
                exception_lineno = 201;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_exact_inf_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 202;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_B );
        tmp_args_element_name_2 = par_B;
        frame_8e28ddfb76360c27c997370a3c46d286->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_c1;
            var_c1 = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_2;
        CHECK_OBJECT( par_m_star );
        tmp_xrange_low_2 = par_m_star;
        tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_2 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
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
                type_description_1 = "ooooooooNooooooo";
                exception_lineno = 203;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_10 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_10;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_float_arg_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_t );
        tmp_left_name_3 = par_t;
        CHECK_OBJECT( par_s );
        tmp_left_name_4 = par_s;
        CHECK_OBJECT( var_j );
        tmp_left_name_5 = var_j;
        tmp_right_name_5 = const_int_pos_1;
        tmp_right_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_3;
        }
        tmp_float_arg_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_float_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_3 = TO_FLOAT( tmp_float_arg_2 );
        Py_DECREF( tmp_float_arg_2 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_coeff;
            var_coeff = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( var_coeff );
        tmp_left_name_6 = var_coeff;
        CHECK_OBJECT( par_A );
        tmp_called_instance_1 = par_A;
        CHECK_OBJECT( par_B );
        tmp_args_element_name_3 = par_B;
        frame_8e28ddfb76360c27c997370a3c46d286->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_right_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = par_B;
            assert( old != NULL );
            par_B = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_exact_inf_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 206;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_B );
        tmp_args_element_name_4 = par_B;
        frame_8e28ddfb76360c27c997370a3c46d286->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_c2;
            var_c2 = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_F );
        tmp_left_name_7 = var_F;
        CHECK_OBJECT( par_B );
        tmp_right_name_7 = par_B;
        tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_F;
            assert( old != NULL );
            var_F = tmp_assign_source_14;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( var_c1 );
        tmp_left_name_8 = var_c1;
        CHECK_OBJECT( var_c2 );
        tmp_right_name_8 = var_c2;
        tmp_compexpr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_tol );
        tmp_left_name_9 = par_tol;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_exact_inf_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 208;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( var_F );
        tmp_args_element_name_5 = var_F;
        frame_8e28ddfb76360c27c997370a3c46d286->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_right_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 208;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 208;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_3;
        }
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_3;
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
        goto loop_end_2;
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( var_c2 );
        tmp_assign_source_15 = var_c2;
        {
            PyObject *old = var_c1;
            assert( old != NULL );
            var_c1 = tmp_assign_source_15;
            Py_INCREF( var_c1 );
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description_1 = "ooooooooNooooooo";
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

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( var_eta );
        tmp_left_name_10 = var_eta;
        if ( var_F == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "F" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 211;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_2;
        }

        tmp_right_name_10 = var_F;
        tmp_assign_source_16 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooooooooNooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_F;
            var_F = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( var_F );
        tmp_assign_source_17 = var_F;
        {
            PyObject *old = par_B;
            par_B = tmp_assign_source_17;
            Py_INCREF( par_B );
            Py_XDECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "ooooooooNooooooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e28ddfb76360c27c997370a3c46d286 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e28ddfb76360c27c997370a3c46d286 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8e28ddfb76360c27c997370a3c46d286, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8e28ddfb76360c27c997370a3c46d286->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8e28ddfb76360c27c997370a3c46d286, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8e28ddfb76360c27c997370a3c46d286,
        type_description_1,
        par_A,
        par_B,
        par_t,
        par_mu,
        par_m_star,
        par_s,
        par_tol,
        par_balance,
        NULL,
        var_F,
        var_eta,
        var_i,
        var_c1,
        var_j,
        var_coeff,
        var_c2
    );


    // Release cached frame.
    if ( frame_8e28ddfb76360c27c997370a3c46d286 == cache_frame_8e28ddfb76360c27c997370a3c46d286 )
    {
        Py_DECREF( frame_8e28ddfb76360c27c997370a3c46d286 );
    }
    cache_frame_8e28ddfb76360c27c997370a3c46d286 = NULL;

    assertFrameObject( frame_8e28ddfb76360c27c997370a3c46d286 );

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

    CHECK_OBJECT( var_F );
    tmp_return_value = var_F;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_7__expm_multiply_simple_core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_mu );
    Py_DECREF( par_mu );
    par_mu = NULL;

    CHECK_OBJECT( (PyObject *)par_m_star );
    Py_DECREF( par_m_star );
    par_m_star = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_balance );
    Py_DECREF( par_balance );
    par_balance = NULL;

    CHECK_OBJECT( (PyObject *)var_F );
    Py_DECREF( var_F );
    var_F = NULL;

    CHECK_OBJECT( (PyObject *)var_eta );
    Py_DECREF( var_eta );
    var_eta = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_c1 );
    var_c1 = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_coeff );
    var_coeff = NULL;

    Py_XDECREF( var_c2 );
    var_c2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    Py_XDECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_mu );
    Py_DECREF( par_mu );
    par_mu = NULL;

    CHECK_OBJECT( (PyObject *)par_m_star );
    Py_DECREF( par_m_star );
    par_m_star = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_balance );
    Py_DECREF( par_balance );
    par_balance = NULL;

    Py_XDECREF( var_F );
    var_F = NULL;

    Py_XDECREF( var_eta );
    var_eta = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_c1 );
    var_c1 = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_coeff );
    var_coeff = NULL;

    Py_XDECREF( var_c2 );
    var_c2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_7__expm_multiply_simple_core );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_8__onenormest_matrix_power( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    PyObject *par_t = python_pars[ 2 ];
    PyObject *par_itmax = python_pars[ 3 ];
    PyObject *par_compute_v = python_pars[ 4 ];
    PyObject *par_compute_w = python_pars[ 5 ];
    struct Nuitka_FrameObject *frame_1f7f8c85d88fdd455952b184c5b13978;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1f7f8c85d88fdd455952b184c5b13978 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1f7f8c85d88fdd455952b184c5b13978, codeobj_1f7f8c85d88fdd455952b184c5b13978, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1f7f8c85d88fdd455952b184c5b13978 = cache_frame_1f7f8c85d88fdd455952b184c5b13978;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f7f8c85d88fdd455952b184c5b13978 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f7f8c85d88fdd455952b184c5b13978 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sparse );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_linalg );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_onenormest );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_aslinearoperator );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aslinearoperator );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "aslinearoperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        frame_1f7f8c85d88fdd455952b184c5b13978->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_p );
        tmp_right_name_1 = par_p;
        tmp_args_element_name_1 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1f7f8c85d88fdd455952b184c5b13978->m_frame.f_lineno = 303;
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


            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f7f8c85d88fdd455952b184c5b13978 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f7f8c85d88fdd455952b184c5b13978 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f7f8c85d88fdd455952b184c5b13978 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f7f8c85d88fdd455952b184c5b13978, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f7f8c85d88fdd455952b184c5b13978->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f7f8c85d88fdd455952b184c5b13978, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f7f8c85d88fdd455952b184c5b13978,
        type_description_1,
        par_A,
        par_p,
        par_t,
        par_itmax,
        par_compute_v,
        par_compute_w
    );


    // Release cached frame.
    if ( frame_1f7f8c85d88fdd455952b184c5b13978 == cache_frame_1f7f8c85d88fdd455952b184c5b13978 )
    {
        Py_DECREF( frame_1f7f8c85d88fdd455952b184c5b13978 );
    }
    cache_frame_1f7f8c85d88fdd455952b184c5b13978 = NULL;

    assertFrameObject( frame_1f7f8c85d88fdd455952b184c5b13978 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_8__onenormest_matrix_power );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_itmax );
    Py_DECREF( par_itmax );
    par_itmax = NULL;

    CHECK_OBJECT( (PyObject *)par_compute_v );
    Py_DECREF( par_compute_v );
    par_compute_v = NULL;

    CHECK_OBJECT( (PyObject *)par_compute_w );
    Py_DECREF( par_compute_w );
    par_compute_w = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_itmax );
    Py_DECREF( par_itmax );
    par_itmax = NULL;

    CHECK_OBJECT( (PyObject *)par_compute_v );
    Py_DECREF( par_compute_v );
    par_compute_v = NULL;

    CHECK_OBJECT( (PyObject *)par_compute_w );
    Py_DECREF( par_compute_w );
    par_compute_w = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_8__onenormest_matrix_power );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_9___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_A = python_pars[ 1 ];
    PyObject *par_A_1_norm = python_pars[ 2 ];
    PyObject *par_ell = python_pars[ 3 ];
    PyObject *par_scale = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_3f5d51b422b32d338e7a9e243a65edd6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3f5d51b422b32d338e7a9e243a65edd6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3f5d51b422b32d338e7a9e243a65edd6, codeobj_3f5d51b422b32d338e7a9e243a65edd6, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3f5d51b422b32d338e7a9e243a65edd6 = cache_frame_3f5d51b422b32d338e7a9e243a65edd6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3f5d51b422b32d338e7a9e243a65edd6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3f5d51b422b32d338e7a9e243a65edd6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_A );
        tmp_assattr_name_1 = par_A;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__A, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 332;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_A_1_norm );
        tmp_assattr_name_2 = par_A_1_norm;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__A_1_norm, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_ell );
        tmp_assattr_name_3 = par_ell;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__ell, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = PyDict_New();
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__d, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 335;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_scale );
        tmp_assattr_name_5 = par_scale;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__scale, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f5d51b422b32d338e7a9e243a65edd6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f5d51b422b32d338e7a9e243a65edd6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3f5d51b422b32d338e7a9e243a65edd6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3f5d51b422b32d338e7a9e243a65edd6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3f5d51b422b32d338e7a9e243a65edd6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3f5d51b422b32d338e7a9e243a65edd6,
        type_description_1,
        par_self,
        par_A,
        par_A_1_norm,
        par_ell,
        par_scale
    );


    // Release cached frame.
    if ( frame_3f5d51b422b32d338e7a9e243a65edd6 == cache_frame_3f5d51b422b32d338e7a9e243a65edd6 )
    {
        Py_DECREF( frame_3f5d51b422b32d338e7a9e243a65edd6 );
    }
    cache_frame_3f5d51b422b32d338e7a9e243a65edd6 = NULL;

    assertFrameObject( frame_3f5d51b422b32d338e7a9e243a65edd6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_9___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_A_1_norm );
    Py_DECREF( par_A_1_norm );
    par_A_1_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_ell );
    Py_DECREF( par_ell );
    par_ell = NULL;

    CHECK_OBJECT( (PyObject *)par_scale );
    Py_DECREF( par_scale );
    par_scale = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_A_1_norm );
    Py_DECREF( par_A_1_norm );
    par_A_1_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_ell );
    Py_DECREF( par_ell );
    par_ell = NULL;

    CHECK_OBJECT( (PyObject *)par_scale );
    Py_DECREF( par_scale );
    par_scale = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_9___init__ );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_10_set_scale( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_scale = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e28a9a87875d93f370e1ce735077acc7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e28a9a87875d93f370e1ce735077acc7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e28a9a87875d93f370e1ce735077acc7, codeobj_e28a9a87875d93f370e1ce735077acc7, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *) );
    frame_e28a9a87875d93f370e1ce735077acc7 = cache_frame_e28a9a87875d93f370e1ce735077acc7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e28a9a87875d93f370e1ce735077acc7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e28a9a87875d93f370e1ce735077acc7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_scale );
        tmp_assattr_name_1 = par_scale;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__scale, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e28a9a87875d93f370e1ce735077acc7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e28a9a87875d93f370e1ce735077acc7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e28a9a87875d93f370e1ce735077acc7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e28a9a87875d93f370e1ce735077acc7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e28a9a87875d93f370e1ce735077acc7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e28a9a87875d93f370e1ce735077acc7,
        type_description_1,
        par_self,
        par_scale
    );


    // Release cached frame.
    if ( frame_e28a9a87875d93f370e1ce735077acc7 == cache_frame_e28a9a87875d93f370e1ce735077acc7 )
    {
        Py_DECREF( frame_e28a9a87875d93f370e1ce735077acc7 );
    }
    cache_frame_e28a9a87875d93f370e1ce735077acc7 = NULL;

    assertFrameObject( frame_e28a9a87875d93f370e1ce735077acc7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_10_set_scale );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_scale );
    Py_DECREF( par_scale );
    par_scale = NULL;

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

    CHECK_OBJECT( (PyObject *)par_scale );
    Py_DECREF( par_scale );
    par_scale = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_10_set_scale );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_11_onenorm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_42d53edfe9bc6acc34f35ef1c7a3a3d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_42d53edfe9bc6acc34f35ef1c7a3a3d7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_42d53edfe9bc6acc34f35ef1c7a3a3d7, codeobj_42d53edfe9bc6acc34f35ef1c7a3a3d7, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *) );
    frame_42d53edfe9bc6acc34f35ef1c7a3a3d7 = cache_frame_42d53edfe9bc6acc34f35ef1c7a3a3d7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_42d53edfe9bc6acc34f35ef1c7a3a3d7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_42d53edfe9bc6acc34f35ef1c7a3a3d7 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__A_1_norm );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 348;
            type_description_1 = "o";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_assattr_target_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__exact_1_norm );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__exact_1_norm );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_exact_1_norm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 349;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__A );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_42d53edfe9bc6acc34f35ef1c7a3a3d7->m_frame.f_lineno = 349;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__A_1_norm, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__scale );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__A_1_norm );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 350;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_42d53edfe9bc6acc34f35ef1c7a3a3d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_42d53edfe9bc6acc34f35ef1c7a3a3d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_42d53edfe9bc6acc34f35ef1c7a3a3d7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_42d53edfe9bc6acc34f35ef1c7a3a3d7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_42d53edfe9bc6acc34f35ef1c7a3a3d7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_42d53edfe9bc6acc34f35ef1c7a3a3d7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_42d53edfe9bc6acc34f35ef1c7a3a3d7,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_42d53edfe9bc6acc34f35ef1c7a3a3d7 == cache_frame_42d53edfe9bc6acc34f35ef1c7a3a3d7 )
    {
        Py_DECREF( frame_42d53edfe9bc6acc34f35ef1c7a3a3d7 );
    }
    cache_frame_42d53edfe9bc6acc34f35ef1c7a3a3d7 = NULL;

    assertFrameObject( frame_42d53edfe9bc6acc34f35ef1c7a3a3d7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_11_onenorm );
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
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_11_onenorm );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_12_d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    PyObject *var_est = NULL;
    struct Nuitka_FrameObject *frame_62224183dfee57c04d75024423282e4d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_62224183dfee57c04d75024423282e4d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_62224183dfee57c04d75024423282e4d, codeobj_62224183dfee57c04d75024423282e4d, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_62224183dfee57c04d75024423282e4d = cache_frame_62224183dfee57c04d75024423282e4d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_62224183dfee57c04d75024423282e4d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_62224183dfee57c04d75024423282e4d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_p );
        tmp_compexpr_left_1 = par_p;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__d );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__onenormest_matrix_power );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__onenormest_matrix_power );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_onenormest_matrix_power" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 357;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__A );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 357;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_p );
            tmp_args_element_name_2 = par_p;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__ell );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 357;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_62224183dfee57c04d75024423282e4d->m_frame.f_lineno = 357;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 357;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_est == NULL );
            var_est = tmp_assign_source_1;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( var_est );
            tmp_left_name_1 = var_est;
            tmp_left_name_2 = const_float_1_0;
            CHECK_OBJECT( par_p );
            tmp_right_name_2 = par_p;
            tmp_right_name_1 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 358;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subvalue_1 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 358;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__d );
            if ( tmp_ass_subscribed_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 358;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_p );
            tmp_ass_subscript_1 = par_p;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscribed_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 358;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__scale );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__d );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 359;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_p );
        tmp_subscript_name_1 = par_p;
        tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 359;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62224183dfee57c04d75024423282e4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_62224183dfee57c04d75024423282e4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62224183dfee57c04d75024423282e4d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62224183dfee57c04d75024423282e4d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62224183dfee57c04d75024423282e4d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62224183dfee57c04d75024423282e4d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_62224183dfee57c04d75024423282e4d,
        type_description_1,
        par_self,
        par_p,
        var_est
    );


    // Release cached frame.
    if ( frame_62224183dfee57c04d75024423282e4d == cache_frame_62224183dfee57c04d75024423282e4d )
    {
        Py_DECREF( frame_62224183dfee57c04d75024423282e4d );
    }
    cache_frame_62224183dfee57c04d75024423282e4d = NULL;

    assertFrameObject( frame_62224183dfee57c04d75024423282e4d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_12_d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    Py_XDECREF( var_est );
    var_est = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    Py_XDECREF( var_est );
    var_est = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_12_d );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_13_alpha( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_83d154203bf6a7ddc9dda998ac144f88;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_83d154203bf6a7ddc9dda998ac144f88 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_83d154203bf6a7ddc9dda998ac144f88, codeobj_83d154203bf6a7ddc9dda998ac144f88, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *) );
    frame_83d154203bf6a7ddc9dda998ac144f88 = cache_frame_83d154203bf6a7ddc9dda998ac144f88;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_83d154203bf6a7ddc9dda998ac144f88 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_83d154203bf6a7ddc9dda998ac144f88 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_2 = par_p;
        frame_83d154203bf6a7ddc9dda998ac144f88->m_frame.f_lineno = 365;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_d, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_d );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 365;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_p );
        tmp_left_name_1 = par_p;
        tmp_right_name_1 = const_int_pos_1;
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 365;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_83d154203bf6a7ddc9dda998ac144f88->m_frame.f_lineno = 365;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 365;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_83d154203bf6a7ddc9dda998ac144f88->m_frame.f_lineno = 365;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83d154203bf6a7ddc9dda998ac144f88 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_83d154203bf6a7ddc9dda998ac144f88 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83d154203bf6a7ddc9dda998ac144f88 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_83d154203bf6a7ddc9dda998ac144f88, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_83d154203bf6a7ddc9dda998ac144f88->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_83d154203bf6a7ddc9dda998ac144f88, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_83d154203bf6a7ddc9dda998ac144f88,
        type_description_1,
        par_self,
        par_p
    );


    // Release cached frame.
    if ( frame_83d154203bf6a7ddc9dda998ac144f88 == cache_frame_83d154203bf6a7ddc9dda998ac144f88 )
    {
        Py_DECREF( frame_83d154203bf6a7ddc9dda998ac144f88 );
    }
    cache_frame_83d154203bf6a7ddc9dda998ac144f88 = NULL;

    assertFrameObject( frame_83d154203bf6a7ddc9dda998ac144f88 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_13_alpha );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_13_alpha );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_14__compute_cost_div_m( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    PyObject *par_norm_info = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_d6034223fdba4670dca805d13a128820;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d6034223fdba4670dca805d13a128820 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d6034223fdba4670dca805d13a128820, codeobj_d6034223fdba4670dca805d13a128820, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d6034223fdba4670dca805d13a128820 = cache_frame_d6034223fdba4670dca805d13a128820;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d6034223fdba4670dca805d13a128820 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d6034223fdba4670dca805d13a128820 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 389;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ceil );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_norm_info );
        tmp_called_instance_1 = par_norm_info;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_2 = par_p;
        frame_d6034223fdba4670dca805d13a128820->m_frame.f_lineno = 389;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_alpha, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 389;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__theta );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__theta );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_theta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 389;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_m );
        tmp_subscript_name_1 = par_m;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 389;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 389;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_d6034223fdba4670dca805d13a128820->m_frame.f_lineno = 389;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d6034223fdba4670dca805d13a128820 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d6034223fdba4670dca805d13a128820 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d6034223fdba4670dca805d13a128820 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d6034223fdba4670dca805d13a128820, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d6034223fdba4670dca805d13a128820->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d6034223fdba4670dca805d13a128820, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d6034223fdba4670dca805d13a128820,
        type_description_1,
        par_m,
        par_p,
        par_norm_info
    );


    // Release cached frame.
    if ( frame_d6034223fdba4670dca805d13a128820 == cache_frame_d6034223fdba4670dca805d13a128820 )
    {
        Py_DECREF( frame_d6034223fdba4670dca805d13a128820 );
    }
    cache_frame_d6034223fdba4670dca805d13a128820 = NULL;

    assertFrameObject( frame_d6034223fdba4670dca805d13a128820 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_14__compute_cost_div_m );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_norm_info );
    Py_DECREF( par_norm_info );
    par_norm_info = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_norm_info );
    Py_DECREF( par_norm_info );
    par_norm_info = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_14__compute_cost_div_m );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_m_max = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_sqrt_m_max = NULL;
    PyObject *var_p_low = NULL;
    PyObject *var_p_high = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801, codeobj_67a8b6ce6fe6a3ebf3368c5d4cdbf801, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801 = cache_frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 404;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_m_max ) );
        tmp_args_element_name_1 = PyCell_GET( par_m_max );
        frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801->m_frame.f_lineno = 404;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sqrt, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        assert( var_sqrt_m_max == NULL );
        var_sqrt_m_max = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 405;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_sqrt_m_max );
        tmp_args_element_name_2 = var_sqrt_m_max;
        frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801->m_frame.f_lineno = 405;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_int_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_floor, call_args );
        }

        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        assert( var_p_low == NULL );
        var_p_low = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 406;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ceil );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_sqrt_m_max );
        tmp_left_name_1 = var_sqrt_m_max;
        tmp_right_name_1 = const_int_pos_1;
        tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 406;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_int_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_int_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyNumber_Int( tmp_int_arg_2 );
        Py_DECREF( tmp_int_arg_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        assert( var_p_high == NULL );
        var_p_high = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_2 != NULL );
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_xrange_high_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( var_p_low );
            tmp_xrange_low_1 = var_p_low;
            CHECK_OBJECT( var_p_high );
            tmp_left_name_2 = var_p_high;
            tmp_right_name_2 = const_int_pos_1;
            tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_xrange_high_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_1 = "cooo";
                goto frame_exception_exit_1;
            }
            tmp_iter_arg_1 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
            Py_DECREF( tmp_xrange_high_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_1 = "cooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_1 = "cooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_4;
        }
        // Tried code:
        tmp_args_element_name_4 = scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_4)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_4)->m_closure[1] = par_m_max;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_args_element_name_4)->m_closure[1] );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max );
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
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max );
        return NULL;
        outline_result_1:;
        frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801->m_frame.f_lineno = 407;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801,
        type_description_1,
        par_m_max,
        var_sqrt_m_max,
        var_p_low,
        var_p_high
    );


    // Release cached frame.
    if ( frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801 == cache_frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801 )
    {
        Py_DECREF( frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801 );
    }
    cache_frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801 = NULL;

    assertFrameObject( frame_67a8b6ce6fe6a3ebf3368c5d4cdbf801 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_m_max );
    Py_DECREF( par_m_max );
    par_m_max = NULL;

    CHECK_OBJECT( (PyObject *)var_sqrt_m_max );
    Py_DECREF( var_sqrt_m_max );
    var_sqrt_m_max = NULL;

    CHECK_OBJECT( (PyObject *)var_p_low );
    Py_DECREF( var_p_low );
    var_p_low = NULL;

    CHECK_OBJECT( (PyObject *)var_p_high );
    Py_DECREF( var_p_high );
    var_p_high = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m_max );
    Py_DECREF( par_m_max );
    par_m_max = NULL;

    Py_XDECREF( var_sqrt_m_max );
    var_sqrt_m_max = NULL;

    Py_XDECREF( var_p_low );
    var_p_low = NULL;

    Py_XDECREF( var_p_high );
    var_p_high = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max );
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



struct scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max$$$genexpr_1_genexpr_locals {
    PyObject *var_p;
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

static PyObject *scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max$$$genexpr_1_genexpr_locals *generator_heap = (struct scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_p = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_fce11b5bb02a8323f80940179fd94d9c, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 407;
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
            PyObject *old = generator_heap->var_p;
            generator_heap->var_p = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_p );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( generator_heap->var_p );
        tmp_left_name_1 = generator_heap->var_p;
        CHECK_OBJECT( generator_heap->var_p );
        tmp_left_name_2 = generator_heap->var_p;
        tmp_right_name_2 = const_int_pos_1;
        tmp_right_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 407;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_compexpr_left_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 407;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "m_max" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 407;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_left_name_3 = PyCell_GET( generator->m_closure[1] );
        tmp_right_name_3 = const_int_pos_1;
        tmp_compexpr_right_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            generator_heap->exception_lineno = 407;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 407;
            generator_heap->type_description_1 = "Noc";
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
            CHECK_OBJECT( generator_heap->var_p );
            tmp_expression_name_1 = generator_heap->var_p;
            Py_INCREF( tmp_expression_name_1 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), &tmp_left_name_2, sizeof(PyObject *), &tmp_right_name_2, sizeof(PyObject *), &tmp_left_name_3, sizeof(PyObject *), &tmp_right_name_3, sizeof(PyObject *), NULL );
            generator->m_yield_return_index = 1;
            return tmp_expression_name_1;
            yield_return_1:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), &tmp_left_name_2, sizeof(PyObject *), &tmp_right_name_2, sizeof(PyObject *), &tmp_left_name_3, sizeof(PyObject *), &tmp_right_name_3, sizeof(PyObject *), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 407;
                generator_heap->type_description_1 = "Noc";
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


        generator_heap->exception_lineno = 407;
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
            generator_heap->var_p,
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

    Py_XDECREF( generator_heap->var_p );
    generator_heap->var_p = NULL;

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

    Py_XDECREF( generator_heap->var_p );
    generator_heap->var_p = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max$$$genexpr_1_genexpr_context,
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_cbd2583fac9e04f237e98f5add8add2f,
#endif
        codeobj_fce11b5bb02a8323f80940179fd94d9c,
        2,
        sizeof(struct scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_16__fragment_3_1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_norm_info = python_pars[ 0 ];
    PyObject *par_n0 = python_pars[ 1 ];
    PyObject *par_tol = python_pars[ 2 ];
    PyObject *par_m_max = python_pars[ 3 ];
    PyObject *par_ell = python_pars[ 4 ];
    PyObject *var_best_m = NULL;
    PyObject *var_best_s = NULL;
    PyObject *var_m = NULL;
    PyObject *var_theta = NULL;
    PyObject *var_s = NULL;
    PyObject *var_p = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_417aedc129e01bb529999ddfc2dc3e1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_417aedc129e01bb529999ddfc2dc3e1f = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_417aedc129e01bb529999ddfc2dc3e1f, codeobj_417aedc129e01bb529999ddfc2dc3e1f, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_417aedc129e01bb529999ddfc2dc3e1f = cache_frame_417aedc129e01bb529999ddfc2dc3e1f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_417aedc129e01bb529999ddfc2dc3e1f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_417aedc129e01bb529999ddfc2dc3e1f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_ell );
        tmp_compexpr_left_1 = par_ell;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;
            type_description_1 = "ooooooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_d3bd22db7129a99be49ea4796b4b6d4c;
            frame_417aedc129e01bb529999ddfc2dc3e1f->m_frame.f_lineno = 446;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 446;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert( var_best_m == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_best_m = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert( var_best_s == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_best_s = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__condition_3_13 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__condition_3_13 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_condition_3_13" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 449;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_norm_info );
        tmp_called_instance_1 = par_norm_info;
        frame_417aedc129e01bb529999ddfc2dc3e1f->m_frame.f_lineno = 449;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_onenorm );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n0 );
        tmp_args_element_name_2 = par_n0;
        CHECK_OBJECT( par_m_max );
        tmp_args_element_name_3 = par_m_max;
        CHECK_OBJECT( par_ell );
        tmp_args_element_name_4 = par_ell;
        frame_417aedc129e01bb529999ddfc2dc3e1f->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 449;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__theta );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__theta );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_theta" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 450;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            frame_417aedc129e01bb529999ddfc2dc3e1f->m_frame.f_lineno = 450;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_items );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 450;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 450;
                type_description_1 = "ooooooooooo";
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
                    type_description_1 = "ooooooooooo";
                    exception_lineno = 450;
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


                exception_lineno = 450;
                type_description_1 = "ooooooooooo";
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


                type_description_1 = "ooooooooooo";
                exception_lineno = 450;
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


                type_description_1 = "ooooooooooo";
                exception_lineno = 450;
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

                        type_description_1 = "ooooooooooo";
                        exception_lineno = 450;
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

                type_description_1 = "ooooooooooo";
                exception_lineno = 450;
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
                PyObject *old = var_m;
                var_m = tmp_assign_source_8;
                Py_INCREF( var_m );
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
                PyObject *old = var_theta;
                var_theta = tmp_assign_source_9;
                Py_INCREF( var_theta );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 451;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_1 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ceil );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 451;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_norm_info );
            tmp_called_instance_3 = par_norm_info;
            frame_417aedc129e01bb529999ddfc2dc3e1f->m_frame.f_lineno = 451;
            tmp_left_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_onenorm );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 451;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_theta );
            tmp_right_name_1 = var_theta;
            tmp_args_element_name_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 451;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            frame_417aedc129e01bb529999ddfc2dc3e1f->m_frame.f_lineno = 451;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 451;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_10 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 451;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_s;
                var_s = tmp_assign_source_10;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            if ( var_best_m == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_m" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 452;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }

            tmp_compexpr_left_2 = var_best_m;
            tmp_compexpr_right_2 = Py_None;
            tmp_or_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_m );
            tmp_left_name_2 = var_m;
            CHECK_OBJECT( var_s );
            tmp_right_name_2 = var_s;
            tmp_compexpr_left_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 452;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            if ( var_best_m == NULL )
            {
                Py_DECREF( tmp_compexpr_left_3 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_m" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 452;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }

            tmp_left_name_3 = var_best_m;
            if ( var_best_s == NULL )
            {
                Py_DECREF( tmp_compexpr_left_3 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_s" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 452;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }

            tmp_right_name_3 = var_best_s;
            tmp_compexpr_right_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_3 );

                exception_lineno = 452;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 452;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
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
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT( var_m );
                tmp_assign_source_11 = var_m;
                {
                    PyObject *old = var_best_m;
                    var_best_m = tmp_assign_source_11;
                    Py_INCREF( var_best_m );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( var_s );
                tmp_assign_source_12 = var_s;
                {
                    PyObject *old = var_best_s;
                    var_best_s = tmp_assign_source_12;
                    Py_INCREF( var_best_s );
                    Py_XDECREF( old );
                }

            }
            branch_no_3:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "ooooooooooo";
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

        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_xrange_high_1;
            PyObject *tmp_left_name_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_right_name_4;
            tmp_xrange_low_1 = const_int_pos_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__compute_p_max );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_p_max );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compute_p_max" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 457;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_4;
            CHECK_OBJECT( par_m_max );
            tmp_args_element_name_6 = par_m_max;
            frame_417aedc129e01bb529999ddfc2dc3e1f->m_frame.f_lineno = 457;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 457;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = const_int_pos_1;
            tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_xrange_high_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 457;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_iter_arg_3 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
            Py_DECREF( tmp_xrange_high_1 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 457;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 457;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_2__for_iterator == NULL );
            tmp_for_loop_2__for_iterator = tmp_assign_source_13;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooo";
                    exception_lineno = 457;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_15 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_p;
                var_p = tmp_assign_source_15;
                Py_INCREF( var_p );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_xrange_low_2;
            PyObject *tmp_left_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_5;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_6;
            PyObject *tmp_right_name_7;
            PyObject *tmp_xrange_high_2;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            CHECK_OBJECT( var_p );
            tmp_left_name_6 = var_p;
            CHECK_OBJECT( var_p );
            tmp_left_name_7 = var_p;
            tmp_right_name_6 = const_int_pos_1;
            tmp_right_name_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_7, tmp_right_name_6 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_5;
            }
            tmp_left_name_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_5;
            }
            tmp_right_name_7 = const_int_pos_1;
            tmp_xrange_low_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_5, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_5 );
            if ( tmp_xrange_low_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( par_m_max );
            tmp_left_name_8 = par_m_max;
            tmp_right_name_8 = const_int_pos_1;
            tmp_xrange_high_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
            if ( tmp_xrange_high_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_xrange_low_2 );

                exception_lineno = 458;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_5;
            }
            tmp_iter_arg_4 = BUILTIN_XRANGE2( tmp_xrange_low_2, tmp_xrange_high_2 );
            Py_DECREF( tmp_xrange_low_2 );
            Py_DECREF( tmp_xrange_high_2 );
            if ( tmp_iter_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_4 );
            Py_DECREF( tmp_iter_arg_4 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_for_loop_3__for_iterator;
                tmp_for_loop_3__for_iterator = tmp_assign_source_16;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_3:;
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

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooo";
                    exception_lineno = 458;
                    goto try_except_handler_6;
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
                PyObject *old = var_m;
                var_m = tmp_assign_source_18;
                Py_INCREF( var_m );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_mvar_value_5;
            CHECK_OBJECT( var_m );
            tmp_compexpr_left_4 = var_m;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__theta );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__theta );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_theta" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 459;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_6;
            }

            tmp_compexpr_right_4 = tmp_mvar_value_5;
            tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 459;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_6;
            }
            tmp_condition_result_4 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_19;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__compute_cost_div_m );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_cost_div_m );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compute_cost_div_m" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 460;
                    type_description_1 = "ooooooooooo";
                    goto try_except_handler_6;
                }

                tmp_called_name_4 = tmp_mvar_value_6;
                CHECK_OBJECT( var_m );
                tmp_args_element_name_7 = var_m;
                CHECK_OBJECT( var_p );
                tmp_args_element_name_8 = var_p;
                CHECK_OBJECT( par_norm_info );
                tmp_args_element_name_9 = par_norm_info;
                frame_417aedc129e01bb529999ddfc2dc3e1f->m_frame.f_lineno = 460;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
                }

                if ( tmp_assign_source_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 460;
                    type_description_1 = "ooooooooooo";
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = var_s;
                    var_s = tmp_assign_source_19;
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_5;
                int tmp_or_left_truth_2;
                nuitka_bool tmp_or_left_value_2;
                nuitka_bool tmp_or_right_value_2;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                PyObject *tmp_left_name_9;
                PyObject *tmp_right_name_9;
                PyObject *tmp_left_name_10;
                PyObject *tmp_right_name_10;
                if ( var_best_m == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_m" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 461;
                    type_description_1 = "ooooooooooo";
                    goto try_except_handler_6;
                }

                tmp_compexpr_left_5 = var_best_m;
                tmp_compexpr_right_5 = Py_None;
                tmp_or_left_value_2 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                CHECK_OBJECT( var_m );
                tmp_left_name_9 = var_m;
                CHECK_OBJECT( var_s );
                tmp_right_name_9 = var_s;
                tmp_compexpr_left_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
                if ( tmp_compexpr_left_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 461;
                    type_description_1 = "ooooooooooo";
                    goto try_except_handler_6;
                }
                if ( var_best_m == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_6 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_m" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 461;
                    type_description_1 = "ooooooooooo";
                    goto try_except_handler_6;
                }

                tmp_left_name_10 = var_best_m;
                if ( var_best_s == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_6 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_s" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 461;
                    type_description_1 = "ooooooooooo";
                    goto try_except_handler_6;
                }

                tmp_right_name_10 = var_best_s;
                tmp_compexpr_right_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
                if ( tmp_compexpr_right_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_6 );

                    exception_lineno = 461;
                    type_description_1 = "ooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                Py_DECREF( tmp_compexpr_left_6 );
                Py_DECREF( tmp_compexpr_right_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 461;
                    type_description_1 = "ooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_5 = tmp_or_right_value_2;
                goto or_end_2;
                or_left_2:;
                tmp_condition_result_5 = tmp_or_left_value_2;
                or_end_2:;
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
                    PyObject *tmp_assign_source_20;
                    CHECK_OBJECT( var_m );
                    tmp_assign_source_20 = var_m;
                    {
                        PyObject *old = var_best_m;
                        var_best_m = tmp_assign_source_20;
                        Py_INCREF( var_best_m );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_21;
                    CHECK_OBJECT( var_s );
                    tmp_assign_source_21 = var_s;
                    {
                        PyObject *old = var_best_s;
                        var_best_s = tmp_assign_source_21;
                        Py_INCREF( var_best_s );
                        Py_XDECREF( old );
                    }

                }
                branch_no_5:;
            }
            branch_no_4:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 458;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_6;
        }
        goto loop_start_3;
        loop_end_3:;
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

        Py_XDECREF( tmp_for_loop_3__iter_value );
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
        Py_DECREF( tmp_for_loop_3__for_iterator );
        tmp_for_loop_3__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        try_end_4:;
        Py_XDECREF( tmp_for_loop_3__iter_value );
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
        Py_DECREF( tmp_for_loop_3__for_iterator );
        tmp_for_loop_3__for_iterator = NULL;

        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
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

        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_1;
        // End of try:
        try_end_5:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_5 != NULL );
            if ( var_best_s == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_s" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 464;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_10 = var_best_s;
            tmp_args_element_name_11 = const_int_pos_1;
            frame_417aedc129e01bb529999ddfc2dc3e1f->m_frame.f_lineno = 464;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 464;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_best_s;
                var_best_s = tmp_assign_source_22;
                Py_XDECREF( old );
            }

        }
        branch_end_2:;
    }
    {
        PyObject *tmp_tuple_element_1;
        if ( var_best_m == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_m" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 465;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_best_m;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( var_best_s == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_s" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 465;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_best_s;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_417aedc129e01bb529999ddfc2dc3e1f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_417aedc129e01bb529999ddfc2dc3e1f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_417aedc129e01bb529999ddfc2dc3e1f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_417aedc129e01bb529999ddfc2dc3e1f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_417aedc129e01bb529999ddfc2dc3e1f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_417aedc129e01bb529999ddfc2dc3e1f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_417aedc129e01bb529999ddfc2dc3e1f,
        type_description_1,
        par_norm_info,
        par_n0,
        par_tol,
        par_m_max,
        par_ell,
        var_best_m,
        var_best_s,
        var_m,
        var_theta,
        var_s,
        var_p
    );


    // Release cached frame.
    if ( frame_417aedc129e01bb529999ddfc2dc3e1f == cache_frame_417aedc129e01bb529999ddfc2dc3e1f )
    {
        Py_DECREF( frame_417aedc129e01bb529999ddfc2dc3e1f );
    }
    cache_frame_417aedc129e01bb529999ddfc2dc3e1f = NULL;

    assertFrameObject( frame_417aedc129e01bb529999ddfc2dc3e1f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_16__fragment_3_1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_norm_info );
    Py_DECREF( par_norm_info );
    par_norm_info = NULL;

    CHECK_OBJECT( (PyObject *)par_n0 );
    Py_DECREF( par_n0 );
    par_n0 = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_m_max );
    Py_DECREF( par_m_max );
    par_m_max = NULL;

    CHECK_OBJECT( (PyObject *)par_ell );
    Py_DECREF( par_ell );
    par_ell = NULL;

    Py_XDECREF( var_best_m );
    var_best_m = NULL;

    Py_XDECREF( var_best_s );
    var_best_s = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_theta );
    var_theta = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

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

    CHECK_OBJECT( (PyObject *)par_norm_info );
    Py_DECREF( par_norm_info );
    par_norm_info = NULL;

    CHECK_OBJECT( (PyObject *)par_n0 );
    Py_DECREF( par_n0 );
    par_n0 = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_m_max );
    Py_DECREF( par_m_max );
    par_m_max = NULL;

    CHECK_OBJECT( (PyObject *)par_ell );
    Py_DECREF( par_ell );
    par_ell = NULL;

    Py_XDECREF( var_best_m );
    var_best_m = NULL;

    Py_XDECREF( var_best_s );
    var_best_s = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_theta );
    var_theta = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_16__fragment_3_1 );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_17__condition_3_13( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A_1_norm = python_pars[ 0 ];
    PyObject *par_n0 = python_pars[ 1 ];
    PyObject *par_m_max = python_pars[ 2 ];
    PyObject *par_ell = python_pars[ 3 ];
    PyObject *var_p_max = NULL;
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    struct Nuitka_FrameObject *frame_2098c05df940ba301ada022ba44e6c28;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2098c05df940ba301ada022ba44e6c28 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2098c05df940ba301ada022ba44e6c28, codeobj_2098c05df940ba301ada022ba44e6c28, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2098c05df940ba301ada022ba44e6c28 = cache_frame_2098c05df940ba301ada022ba44e6c28;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2098c05df940ba301ada022ba44e6c28 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2098c05df940ba301ada022ba44e6c28 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__compute_p_max );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_p_max );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compute_p_max" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 496;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_m_max );
        tmp_args_element_name_1 = par_m_max;
        frame_2098c05df940ba301ada022ba44e6c28->m_frame.f_lineno = 496;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 496;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p_max == NULL );
        var_p_max = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        tmp_left_name_3 = const_int_pos_2;
        CHECK_OBJECT( par_ell );
        tmp_right_name_1 = par_ell;
        tmp_left_name_2 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_3, tmp_right_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_p_max );
        tmp_right_name_2 = var_p_max;
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_p_max );
        tmp_left_name_4 = var_p_max;
        tmp_right_name_4 = const_int_pos_3;
        tmp_right_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 497;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_a == NULL );
        var_a = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_5;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__theta );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__theta );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_theta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 500;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_m_max );
        tmp_subscript_name_1 = par_m_max;
        tmp_left_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 500;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n0 );
        tmp_left_name_6 = par_n0;
        CHECK_OBJECT( par_m_max );
        tmp_right_name_6 = par_m_max;
        tmp_float_arg_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_float_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 500;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = TO_FLOAT( tmp_float_arg_1 );
        Py_DECREF( tmp_float_arg_1 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 500;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 500;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_b == NULL );
        var_b = tmp_assign_source_3;
    }
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( par_A_1_norm );
        tmp_compexpr_left_1 = par_A_1_norm;
        CHECK_OBJECT( var_a );
        tmp_left_name_7 = var_a;
        CHECK_OBJECT( var_b );
        tmp_right_name_7 = var_b;
        tmp_compexpr_right_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 501;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 501;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2098c05df940ba301ada022ba44e6c28 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2098c05df940ba301ada022ba44e6c28 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2098c05df940ba301ada022ba44e6c28 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2098c05df940ba301ada022ba44e6c28, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2098c05df940ba301ada022ba44e6c28->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2098c05df940ba301ada022ba44e6c28, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2098c05df940ba301ada022ba44e6c28,
        type_description_1,
        par_A_1_norm,
        par_n0,
        par_m_max,
        par_ell,
        var_p_max,
        var_a,
        var_b
    );


    // Release cached frame.
    if ( frame_2098c05df940ba301ada022ba44e6c28 == cache_frame_2098c05df940ba301ada022ba44e6c28 )
    {
        Py_DECREF( frame_2098c05df940ba301ada022ba44e6c28 );
    }
    cache_frame_2098c05df940ba301ada022ba44e6c28 = NULL;

    assertFrameObject( frame_2098c05df940ba301ada022ba44e6c28 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_17__condition_3_13 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A_1_norm );
    Py_DECREF( par_A_1_norm );
    par_A_1_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_n0 );
    Py_DECREF( par_n0 );
    par_n0 = NULL;

    CHECK_OBJECT( (PyObject *)par_m_max );
    Py_DECREF( par_m_max );
    par_m_max = NULL;

    CHECK_OBJECT( (PyObject *)par_ell );
    Py_DECREF( par_ell );
    par_ell = NULL;

    CHECK_OBJECT( (PyObject *)var_p_max );
    Py_DECREF( var_p_max );
    var_p_max = NULL;

    CHECK_OBJECT( (PyObject *)var_a );
    Py_DECREF( var_a );
    var_a = NULL;

    CHECK_OBJECT( (PyObject *)var_b );
    Py_DECREF( var_b );
    var_b = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A_1_norm );
    Py_DECREF( par_A_1_norm );
    par_A_1_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_n0 );
    Py_DECREF( par_n0 );
    par_n0 = NULL;

    CHECK_OBJECT( (PyObject *)par_m_max );
    Py_DECREF( par_m_max );
    par_m_max = NULL;

    CHECK_OBJECT( (PyObject *)par_ell );
    Py_DECREF( par_ell );
    par_ell = NULL;

    Py_XDECREF( var_p_max );
    var_p_max = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_17__condition_3_13 );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_18__expm_multiply_interval( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_B = python_pars[ 1 ];
    PyObject *par_start = python_pars[ 2 ];
    PyObject *par_stop = python_pars[ 3 ];
    PyObject *par_num = python_pars[ 4 ];
    PyObject *par_endpoint = python_pars[ 5 ];
    PyObject *par_balance = python_pars[ 6 ];
    PyObject *par_status_only = python_pars[ 7 ];
    PyObject *var_ident = NULL;
    PyObject *var_n = NULL;
    PyObject *var_n0 = NULL;
    PyObject *var_mu = NULL;
    PyObject *var_linspace_kwargs = NULL;
    PyObject *var_samples = NULL;
    PyObject *var_step = NULL;
    PyObject *var_nsamples = NULL;
    PyObject *var_q = NULL;
    PyObject *var_h = NULL;
    PyObject *var_t_0 = NULL;
    PyObject *var_t_q = NULL;
    PyObject *var_X_shape = NULL;
    PyObject *var_X = NULL;
    PyObject *var_t = NULL;
    PyObject *var_A_1_norm = NULL;
    PyObject *var_norm_info = NULL;
    PyObject *var_m_star = NULL;
    PyObject *var_s = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a2a151311d33ecae001931a9c71c6467;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a2a151311d33ecae001931a9c71c6467 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a2a151311d33ecae001931a9c71c6467, codeobj_a2a151311d33ecae001931a9c71c6467, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a2a151311d33ecae001931a9c71c6467 = cache_frame_a2a151311d33ecae001931a9c71c6467;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a2a151311d33ecae001931a9c71c6467 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a2a151311d33ecae001931a9c71c6467 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_balance );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_balance );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 546;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
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
            tmp_raise_type_1 = PyExc_NotImplementedError;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 547;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
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


            exception_lineno = 548;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 548;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
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


            exception_lineno = 548;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 548;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
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

            exception_lineno = 548;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
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

            exception_lineno = 548;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 548;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_4df09d989e4dd8fe06da54447f217faa;
            frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 549;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 549;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( par_A );
        tmp_source_name_4 = par_A;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 550;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_pos_1;
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 550;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_B );
        tmp_source_name_5 = par_B;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 550;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_int_0;
        tmp_compexpr_right_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 550;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 550;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_f04e1dbe8ecc68ede267181d27546f41;
            frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 551;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 551;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__ident_like );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ident_like );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ident_like" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 552;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 552;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 552;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        assert( var_ident == NULL );
        var_ident = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( par_A );
        tmp_source_name_6 = par_A;
        tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 553;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = const_int_0;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 553;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_B );
        tmp_source_name_7 = par_B;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
        if ( tmp_len_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 554;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_2 );
        Py_DECREF( tmp_len_arg_2 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 554;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
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
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_int_pos_1;
            assert( var_n0 == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_n0 = tmp_assign_source_3;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_len_arg_3;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( par_B );
            tmp_source_name_8 = par_B;
            tmp_len_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
            if ( tmp_len_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 556;
                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_5 = BUILTIN_LEN( tmp_len_arg_3 );
            Py_DECREF( tmp_len_arg_3 );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 556;
                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_5 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            assert( !(tmp_res == -1) );
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
                PyObject *tmp_assign_source_4;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_source_name_9;
                PyObject *tmp_subscript_name_6;
                CHECK_OBJECT( par_B );
                tmp_source_name_9 = par_B;
                tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
                if ( tmp_subscribed_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 557;
                    type_description_1 = "oooooooooooNNoooooooooooooNooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_6 = const_int_pos_1;
                tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 1 );
                Py_DECREF( tmp_subscribed_name_6 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 557;
                    type_description_1 = "oooooooooooNNoooooooooooooNooo";
                    goto frame_exception_exit_1;
                }
                assert( var_n0 == NULL );
                var_n0 = tmp_assign_source_4;
            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_59572bb5d0506822b3e5db1476b233ef;
                frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 559;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_4 == NULL) );
                exception_type = tmp_raise_type_4;
                exception_lineno = 559;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                goto frame_exception_exit_1;
            }
            branch_end_5:;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_float_arg_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__trace );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__trace );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_trace" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 562;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 562;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 562;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_float_arg_1 = var_n;
        tmp_right_name_1 = TO_FLOAT( tmp_float_arg_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 562;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 562;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        assert( var_mu == NULL );
        var_mu = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = PyDict_Copy( const_dict_8e69410c061eba6e508a80360a25be09 );
        assert( var_linspace_kwargs == NULL );
        var_linspace_kwargs = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_num );
        tmp_compexpr_left_6 = par_num;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        CHECK_OBJECT( par_num );
        tmp_dictset_value = par_num;
        CHECK_OBJECT( var_linspace_kwargs );
        tmp_dictset_dict = var_linspace_kwargs;
        tmp_dictset_key = const_str_plain_num;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( par_endpoint );
        tmp_compexpr_left_7 = par_endpoint;
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_7 = ( tmp_compexpr_left_7 != tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        CHECK_OBJECT( par_endpoint );
        tmp_dictset_value = par_endpoint;
        CHECK_OBJECT( var_linspace_kwargs );
        tmp_dictset_dict = var_linspace_kwargs;
        tmp_dictset_key = const_str_plain_endpoint;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_7:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 570;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto try_except_handler_2;
        }

        tmp_source_name_10 = tmp_mvar_value_3;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_linspace );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 570;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_start );
        tmp_tuple_element_1 = par_start;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_stop );
        tmp_tuple_element_1 = par_stop;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_linspace_kwargs );
        tmp_dircall_arg3_1 = var_linspace_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_iter_arg_1 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 570;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 570;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
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


            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            exception_lineno = 570;
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


            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            exception_lineno = 570;
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

                    type_description_1 = "oooooooooooNNoooooooooooooNooo";
                    exception_lineno = 570;
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

            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            exception_lineno = 570;
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
        assert( var_samples == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_samples = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        assert( var_step == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_step = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT( var_samples );
        tmp_len_arg_4 = var_samples;
        tmp_assign_source_12 = BUILTIN_LEN( tmp_len_arg_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 573;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        assert( var_nsamples == NULL );
        var_nsamples = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT( var_nsamples );
        tmp_compexpr_left_8 = var_nsamples;
        tmp_compexpr_right_8 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_raise_type_5;
            PyObject *tmp_make_exception_arg_4;
            tmp_make_exception_arg_4 = const_str_digest_2e820d070a7913bf1d33037e152322e0;
            frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 575;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_4 };
                tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_5 == NULL) );
            exception_type = tmp_raise_type_5;
            exception_lineno = 575;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        branch_no_8:;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_nsamples );
        tmp_left_name_2 = var_nsamples;
        tmp_right_name_2 = const_int_pos_1;
        tmp_assign_source_13 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_2, tmp_right_name_2 );
        assert( !(tmp_assign_source_13 == NULL) );
        assert( var_q == NULL );
        var_q = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( var_step );
        tmp_assign_source_14 = var_step;
        assert( var_h == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_h = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT( var_samples );
        tmp_subscribed_name_7 = var_samples;
        tmp_subscript_name_7 = const_int_0;
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 578;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        assert( var_t_0 == NULL );
        var_t_0 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT( var_samples );
        tmp_subscribed_name_8 = var_samples;
        CHECK_OBJECT( var_q );
        tmp_subscript_name_8 = var_q;
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 579;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        assert( var_t_q == NULL );
        var_t_q = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( var_nsamples );
        tmp_tuple_element_2 = var_nsamples;
        tmp_left_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_left_name_3, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_B );
        tmp_source_name_11 = par_B;
        tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_shape );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 584;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 584;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        assert( var_X_shape == NULL );
        var_X_shape = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_14;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_15;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 585;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_empty );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 585;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_X_shape );
        tmp_tuple_element_3 = var_X_shape;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
        tmp_dict_key_1 = const_str_plain_dtype;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 585;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_result_type );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 585;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_source_name_14 = par_A;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_dtype );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 585;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_B );
        tmp_source_name_15 = par_B;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_dtype );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 585;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = (PyObject *)&PyFloat_Type;
        frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 585;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 585;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 585;
        tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 585;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        assert( var_X == NULL );
        var_X = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_t_q );
        tmp_left_name_4 = var_t_q;
        CHECK_OBJECT( var_t_0 );
        tmp_right_name_4 = var_t_0;
        tmp_assign_source_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 586;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        assert( var_t == NULL );
        var_t = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( par_A );
        tmp_left_name_5 = par_A;
        CHECK_OBJECT( var_mu );
        tmp_left_name_6 = var_mu;
        CHECK_OBJECT( var_ident );
        tmp_right_name_6 = var_ident;
        tmp_right_name_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 587;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 587;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_20;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__exact_1_norm );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__exact_1_norm );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_exact_1_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 588;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_6;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_6 = par_A;
        frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 588;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 588;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        assert( var_A_1_norm == NULL );
        var_A_1_norm = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_LazyOperatorNormInfo );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazyOperatorNormInfo );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LazyOperatorNormInfo" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 590;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_7;
        CHECK_OBJECT( var_t );
        tmp_left_name_7 = var_t;
        CHECK_OBJECT( par_A );
        tmp_right_name_7 = par_A;
        tmp_tuple_element_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 590;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
        tmp_dict_key_2 = const_str_plain_A_1_norm;
        CHECK_OBJECT( var_t );
        tmp_left_name_8 = var_t;
        CHECK_OBJECT( var_A_1_norm );
        tmp_right_name_8 = var_A_1_norm;
        tmp_dict_value_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 590;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_ell;
        tmp_dict_value_3 = const_int_pos_2;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 590;
        tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 590;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        assert( var_norm_info == NULL );
        var_norm_info = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT( var_t );
        tmp_left_name_9 = var_t;
        CHECK_OBJECT( var_A_1_norm );
        tmp_right_name_9 = var_A_1_norm;
        tmp_compexpr_left_9 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_compexpr_left_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 591;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        Py_DECREF( tmp_compexpr_left_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 591;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
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
            PyObject *tmp_assign_source_23;
            PyObject *tmp_iter_arg_2;
            tmp_iter_arg_2 = const_tuple_int_0_int_pos_1_tuple;
            tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_2 );
            assert( !(tmp_assign_source_23 == NULL) );
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_23;
        }
        // Tried code:
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


                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                exception_lineno = 592;
                goto try_except_handler_5;
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


                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                exception_lineno = 592;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_25;
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
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_26 = tmp_tuple_unpack_2__element_1;
            assert( var_m_star == NULL );
            Py_INCREF( tmp_assign_source_26 );
            var_m_star = tmp_assign_source_26;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_27 = tmp_tuple_unpack_2__element_2;
            assert( var_s == NULL );
            Py_INCREF( tmp_assign_source_27 );
            var_s = tmp_assign_source_27;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        goto branch_end_9;
        branch_no_9:;
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_3;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__fragment_3_1 );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fragment_3_1 );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fragment_3_1" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 594;
                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                goto try_except_handler_6;
            }

            tmp_called_name_7 = tmp_mvar_value_8;
            CHECK_OBJECT( var_norm_info );
            tmp_tuple_element_5 = var_norm_info;
            tmp_args_name_3 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
            if ( var_n0 == NULL )
            {
                Py_DECREF( tmp_args_name_3 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n0" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 594;
                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                goto try_except_handler_6;
            }

            tmp_tuple_element_5 = var_n0;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
            tmp_tuple_element_5 = const_float_1_1102230246251565eminus_16;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 2, tmp_tuple_element_5 );
            tmp_kw_name_3 = PyDict_Copy( const_dict_832874aa199d68fe5be4260e3b883a50 );
            frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 594;
            tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 594;
                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 594;
                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_28;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
            if ( tmp_assign_source_29 == NULL )
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


                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                exception_lineno = 594;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_30 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
            if ( tmp_assign_source_30 == NULL )
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


                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                exception_lineno = 594;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_30;
        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_iterator_name_2 = tmp_tuple_unpack_3__source_iter;
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

                        type_description_1 = "oooooooooooNNoooooooooooooNooo";
                        exception_lineno = 594;
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

                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                exception_lineno = 594;
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
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_31 = tmp_tuple_unpack_3__element_1;
            assert( var_m_star == NULL );
            Py_INCREF( tmp_assign_source_31 );
            var_m_star = tmp_assign_source_31;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_32;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_32 = tmp_tuple_unpack_3__element_2;
            assert( var_s == NULL );
            Py_INCREF( tmp_assign_source_32 );
            var_s = tmp_assign_source_32;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        branch_end_9:;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__expm_multiply_simple_core );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__expm_multiply_simple_core );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_expm_multiply_simple_core" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 597;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_9;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_7 = par_A;
        CHECK_OBJECT( par_B );
        tmp_args_element_name_8 = par_B;
        CHECK_OBJECT( var_t_0 );
        tmp_args_element_name_9 = var_t_0;
        CHECK_OBJECT( var_mu );
        tmp_args_element_name_10 = var_mu;
        CHECK_OBJECT( var_m_star );
        tmp_args_element_name_11 = var_m_star;
        CHECK_OBJECT( var_s );
        tmp_args_element_name_12 = var_s;
        frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 597;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_8, call_args );
        }

        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 597;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_X );
        tmp_ass_subscribed_1 = var_X;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 597;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT( var_q );
        tmp_compexpr_left_10 = var_q;
        CHECK_OBJECT( var_s );
        tmp_compexpr_right_10 = var_s;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 600;
            type_description_1 = "oooooooooooNNoooooooooooooNooo";
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
            nuitka_bool tmp_condition_result_11;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_status_only );
            tmp_truth_name_2 = CHECK_IF_TRUE( par_status_only );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 601;
                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_11 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_11;
            }
            else
            {
                goto branch_no_11;
            }
            branch_yes_11:;
            tmp_return_value = const_int_0;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            goto branch_end_11;
            branch_no_11:;
            {
                PyObject *tmp_called_name_9;
                PyObject *tmp_mvar_value_10;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_args_element_name_14;
                PyObject *tmp_args_element_name_15;
                PyObject *tmp_args_element_name_16;
                PyObject *tmp_args_element_name_17;
                PyObject *tmp_args_element_name_18;
                PyObject *tmp_args_element_name_19;
                PyObject *tmp_args_element_name_20;
                PyObject *tmp_args_element_name_21;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__expm_multiply_interval_core_0 );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__expm_multiply_interval_core_0 );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_expm_multiply_interval_core_0" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 604;
                    type_description_1 = "oooooooooooNNoooooooooooooNooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_9 = tmp_mvar_value_10;
                CHECK_OBJECT( par_A );
                tmp_args_element_name_13 = par_A;
                CHECK_OBJECT( var_X );
                tmp_args_element_name_14 = var_X;
                CHECK_OBJECT( var_h );
                tmp_args_element_name_15 = var_h;
                CHECK_OBJECT( var_mu );
                tmp_args_element_name_16 = var_mu;
                CHECK_OBJECT( var_q );
                tmp_args_element_name_17 = var_q;
                CHECK_OBJECT( var_norm_info );
                tmp_args_element_name_18 = var_norm_info;
                tmp_args_element_name_19 = const_float_1_1102230246251565eminus_16;
                tmp_args_element_name_20 = const_int_pos_2;
                if ( var_n0 == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n0" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 605;
                    type_description_1 = "oooooooooooNNoooooooooooooNooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_21 = var_n0;
                frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 604;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS9( tmp_called_name_9, call_args );
                }

                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 604;
                    type_description_1 = "oooooooooooNNoooooooooooooNooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_11:;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            CHECK_OBJECT( var_q );
            tmp_left_name_10 = var_q;
            CHECK_OBJECT( var_s );
            tmp_right_name_10 = var_s;
            tmp_operand_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_10, tmp_right_name_10 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 606;
                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 606;
                type_description_1 = "oooooooooooNNoooooooooooooNooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_12 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                nuitka_bool tmp_condition_result_13;
                int tmp_truth_name_3;
                CHECK_OBJECT( par_status_only );
                tmp_truth_name_3 = CHECK_IF_TRUE( par_status_only );
                if ( tmp_truth_name_3 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 607;
                    type_description_1 = "oooooooooooNNoooooooooooooNooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_13 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_13;
                }
                else
                {
                    goto branch_no_13;
                }
                branch_yes_13:;
                tmp_return_value = const_int_pos_1;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                goto branch_end_13;
                branch_no_13:;
                {
                    PyObject *tmp_called_name_10;
                    PyObject *tmp_mvar_value_11;
                    PyObject *tmp_args_element_name_22;
                    PyObject *tmp_args_element_name_23;
                    PyObject *tmp_args_element_name_24;
                    PyObject *tmp_args_element_name_25;
                    PyObject *tmp_args_element_name_26;
                    PyObject *tmp_args_element_name_27;
                    PyObject *tmp_args_element_name_28;
                    PyObject *tmp_args_element_name_29;
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__expm_multiply_interval_core_1 );

                    if (unlikely( tmp_mvar_value_11 == NULL ))
                    {
                        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__expm_multiply_interval_core_1 );
                    }

                    if ( tmp_mvar_value_11 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_expm_multiply_interval_core_1" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 610;
                        type_description_1 = "oooooooooooNNoooooooooooooNooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_10 = tmp_mvar_value_11;
                    CHECK_OBJECT( par_A );
                    tmp_args_element_name_22 = par_A;
                    CHECK_OBJECT( var_X );
                    tmp_args_element_name_23 = var_X;
                    CHECK_OBJECT( var_h );
                    tmp_args_element_name_24 = var_h;
                    CHECK_OBJECT( var_mu );
                    tmp_args_element_name_25 = var_mu;
                    CHECK_OBJECT( var_m_star );
                    tmp_args_element_name_26 = var_m_star;
                    CHECK_OBJECT( var_s );
                    tmp_args_element_name_27 = var_s;
                    CHECK_OBJECT( var_q );
                    tmp_args_element_name_28 = var_q;
                    tmp_args_element_name_29 = const_float_1_1102230246251565eminus_16;
                    frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 610;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29 };
                        tmp_return_value = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_10, call_args );
                    }

                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 610;
                        type_description_1 = "oooooooooooNNoooooooooooooNooo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                branch_end_13:;
            }
            goto branch_end_12;
            branch_no_12:;
            {
                nuitka_bool tmp_condition_result_14;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_11;
                PyObject *tmp_op_mod_res_1;
                int tmp_truth_name_4;
                CHECK_OBJECT( var_q );
                tmp_left_name_11 = var_q;
                CHECK_OBJECT( var_s );
                tmp_right_name_11 = var_s;
                tmp_op_mod_res_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_11, tmp_right_name_11 );
                if ( tmp_op_mod_res_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 612;
                    type_description_1 = "oooooooooooNNoooooooooooooNooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_4 = CHECK_IF_TRUE( tmp_op_mod_res_1 );
                if ( tmp_truth_name_4 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_op_mod_res_1 );

                    exception_lineno = 612;
                    type_description_1 = "oooooooooooNNoooooooooooooNooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_14 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_op_mod_res_1 );
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
                    nuitka_bool tmp_condition_result_15;
                    int tmp_truth_name_5;
                    CHECK_OBJECT( par_status_only );
                    tmp_truth_name_5 = CHECK_IF_TRUE( par_status_only );
                    if ( tmp_truth_name_5 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 613;
                        type_description_1 = "oooooooooooNNoooooooooooooNooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_15 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_15;
                    }
                    else
                    {
                        goto branch_no_15;
                    }
                    branch_yes_15:;
                    tmp_return_value = const_int_pos_2;
                    Py_INCREF( tmp_return_value );
                    goto frame_return_exit_1;
                    goto branch_end_15;
                    branch_no_15:;
                    {
                        PyObject *tmp_called_name_11;
                        PyObject *tmp_mvar_value_12;
                        PyObject *tmp_args_element_name_30;
                        PyObject *tmp_args_element_name_31;
                        PyObject *tmp_args_element_name_32;
                        PyObject *tmp_args_element_name_33;
                        PyObject *tmp_args_element_name_34;
                        PyObject *tmp_args_element_name_35;
                        PyObject *tmp_args_element_name_36;
                        PyObject *tmp_args_element_name_37;
                        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__expm_multiply_interval_core_2 );

                        if (unlikely( tmp_mvar_value_12 == NULL ))
                        {
                            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__expm_multiply_interval_core_2 );
                        }

                        if ( tmp_mvar_value_12 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_expm_multiply_interval_core_2" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 616;
                            type_description_1 = "oooooooooooNNoooooooooooooNooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_11 = tmp_mvar_value_12;
                        CHECK_OBJECT( par_A );
                        tmp_args_element_name_30 = par_A;
                        CHECK_OBJECT( var_X );
                        tmp_args_element_name_31 = var_X;
                        CHECK_OBJECT( var_h );
                        tmp_args_element_name_32 = var_h;
                        CHECK_OBJECT( var_mu );
                        tmp_args_element_name_33 = var_mu;
                        CHECK_OBJECT( var_m_star );
                        tmp_args_element_name_34 = var_m_star;
                        CHECK_OBJECT( var_s );
                        tmp_args_element_name_35 = var_s;
                        CHECK_OBJECT( var_q );
                        tmp_args_element_name_36 = var_q;
                        tmp_args_element_name_37 = const_float_1_1102230246251565eminus_16;
                        frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 616;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36, tmp_args_element_name_37 };
                            tmp_return_value = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_11, call_args );
                        }

                        if ( tmp_return_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 616;
                            type_description_1 = "oooooooooooNNoooooooooooooNooo";
                            goto frame_exception_exit_1;
                        }
                        goto frame_return_exit_1;
                    }
                    branch_end_15:;
                }
                goto branch_end_14;
                branch_no_14:;
                {
                    PyObject *tmp_raise_type_6;
                    PyObject *tmp_make_exception_arg_5;
                    tmp_make_exception_arg_5 = const_str_digest_9947053d0c63bc81f08a8b20d9d4c742;
                    frame_a2a151311d33ecae001931a9c71c6467->m_frame.f_lineno = 619;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_5 };
                        tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_Exception, call_args );
                    }

                    assert( !(tmp_raise_type_6 == NULL) );
                    exception_type = tmp_raise_type_6;
                    exception_lineno = 619;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooNNoooooooooooooNooo";
                    goto frame_exception_exit_1;
                }
                branch_end_14:;
            }
            branch_end_12:;
        }
        branch_end_10:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2a151311d33ecae001931a9c71c6467 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2a151311d33ecae001931a9c71c6467 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2a151311d33ecae001931a9c71c6467 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a2a151311d33ecae001931a9c71c6467, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a2a151311d33ecae001931a9c71c6467->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a2a151311d33ecae001931a9c71c6467, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a2a151311d33ecae001931a9c71c6467,
        type_description_1,
        par_A,
        par_B,
        par_start,
        par_stop,
        par_num,
        par_endpoint,
        par_balance,
        par_status_only,
        var_ident,
        var_n,
        var_n0,
        NULL,
        NULL,
        var_mu,
        var_linspace_kwargs,
        var_samples,
        var_step,
        var_nsamples,
        var_q,
        var_h,
        var_t_0,
        var_t_q,
        var_X_shape,
        var_X,
        var_t,
        var_A_1_norm,
        NULL,
        var_norm_info,
        var_m_star,
        var_s
    );


    // Release cached frame.
    if ( frame_a2a151311d33ecae001931a9c71c6467 == cache_frame_a2a151311d33ecae001931a9c71c6467 )
    {
        Py_DECREF( frame_a2a151311d33ecae001931a9c71c6467 );
    }
    cache_frame_a2a151311d33ecae001931a9c71c6467 = NULL;

    assertFrameObject( frame_a2a151311d33ecae001931a9c71c6467 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_18__expm_multiply_interval );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_endpoint );
    Py_DECREF( par_endpoint );
    par_endpoint = NULL;

    CHECK_OBJECT( (PyObject *)par_balance );
    Py_DECREF( par_balance );
    par_balance = NULL;

    CHECK_OBJECT( (PyObject *)par_status_only );
    Py_DECREF( par_status_only );
    par_status_only = NULL;

    CHECK_OBJECT( (PyObject *)var_ident );
    Py_DECREF( var_ident );
    var_ident = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_n0 );
    var_n0 = NULL;

    CHECK_OBJECT( (PyObject *)var_mu );
    Py_DECREF( var_mu );
    var_mu = NULL;

    CHECK_OBJECT( (PyObject *)var_linspace_kwargs );
    Py_DECREF( var_linspace_kwargs );
    var_linspace_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_samples );
    Py_DECREF( var_samples );
    var_samples = NULL;

    CHECK_OBJECT( (PyObject *)var_step );
    Py_DECREF( var_step );
    var_step = NULL;

    CHECK_OBJECT( (PyObject *)var_nsamples );
    Py_DECREF( var_nsamples );
    var_nsamples = NULL;

    CHECK_OBJECT( (PyObject *)var_q );
    Py_DECREF( var_q );
    var_q = NULL;

    CHECK_OBJECT( (PyObject *)var_h );
    Py_DECREF( var_h );
    var_h = NULL;

    CHECK_OBJECT( (PyObject *)var_t_0 );
    Py_DECREF( var_t_0 );
    var_t_0 = NULL;

    CHECK_OBJECT( (PyObject *)var_t_q );
    Py_DECREF( var_t_q );
    var_t_q = NULL;

    CHECK_OBJECT( (PyObject *)var_X_shape );
    Py_DECREF( var_X_shape );
    var_X_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_X );
    Py_DECREF( var_X );
    var_X = NULL;

    CHECK_OBJECT( (PyObject *)var_t );
    Py_DECREF( var_t );
    var_t = NULL;

    CHECK_OBJECT( (PyObject *)var_A_1_norm );
    Py_DECREF( var_A_1_norm );
    var_A_1_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_norm_info );
    Py_DECREF( var_norm_info );
    var_norm_info = NULL;

    CHECK_OBJECT( (PyObject *)var_m_star );
    Py_DECREF( var_m_star );
    var_m_star = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_endpoint );
    Py_DECREF( par_endpoint );
    par_endpoint = NULL;

    CHECK_OBJECT( (PyObject *)par_balance );
    Py_DECREF( par_balance );
    par_balance = NULL;

    CHECK_OBJECT( (PyObject *)par_status_only );
    Py_DECREF( par_status_only );
    par_status_only = NULL;

    Py_XDECREF( var_ident );
    var_ident = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_n0 );
    var_n0 = NULL;

    Py_XDECREF( var_mu );
    var_mu = NULL;

    Py_XDECREF( var_linspace_kwargs );
    var_linspace_kwargs = NULL;

    Py_XDECREF( var_samples );
    var_samples = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_nsamples );
    var_nsamples = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_t_0 );
    var_t_0 = NULL;

    Py_XDECREF( var_t_q );
    var_t_q = NULL;

    Py_XDECREF( var_X_shape );
    var_X_shape = NULL;

    Py_XDECREF( var_X );
    var_X = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_A_1_norm );
    var_A_1_norm = NULL;

    Py_XDECREF( var_norm_info );
    var_norm_info = NULL;

    Py_XDECREF( var_m_star );
    var_m_star = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_18__expm_multiply_interval );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_19__expm_multiply_interval_core_0( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_X = python_pars[ 1 ];
    PyObject *par_h = python_pars[ 2 ];
    PyObject *par_mu = python_pars[ 3 ];
    PyObject *par_q = python_pars[ 4 ];
    PyObject *par_norm_info = python_pars[ 5 ];
    PyObject *par_tol = python_pars[ 6 ];
    PyObject *par_ell = python_pars[ 7 ];
    PyObject *par_n0 = python_pars[ 8 ];
    PyObject *var_m_star = NULL;
    PyObject *var_s = NULL;
    PyObject *var_k = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1525777ecfd5b0663eef475b4da2badf;
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
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_1525777ecfd5b0663eef475b4da2badf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1525777ecfd5b0663eef475b4da2badf, codeobj_1525777ecfd5b0663eef475b4da2badf, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1525777ecfd5b0663eef475b4da2badf = cache_frame_1525777ecfd5b0663eef475b4da2badf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1525777ecfd5b0663eef475b4da2badf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1525777ecfd5b0663eef475b4da2badf ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_norm_info );
        tmp_called_instance_1 = par_norm_info;
        frame_1525777ecfd5b0663eef475b4da2badf->m_frame.f_lineno = 629;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_onenorm );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 629;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 629;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = const_tuple_int_0_int_pos_1_tuple;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            assert( !(tmp_assign_source_1 == NULL) );
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
        }
        // Tried code:
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


                type_description_1 = "oooooooooooo";
                exception_lineno = 630;
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


                type_description_1 = "oooooooooooo";
                exception_lineno = 630;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
            assert( var_m_star == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_m_star = tmp_assign_source_4;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
            assert( var_s == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_s = tmp_assign_source_5;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_norm_info );
            tmp_source_name_1 = par_norm_info;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_scale );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 632;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = const_float_1_0;
            CHECK_OBJECT( par_q );
            tmp_right_name_1 = par_q;
            tmp_args_element_name_1 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 632;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_1525777ecfd5b0663eef475b4da2badf->m_frame.f_lineno = 632;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 632;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__fragment_3_1 );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fragment_3_1 );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fragment_3_1" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 633;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_2 = tmp_mvar_value_1;
            CHECK_OBJECT( par_norm_info );
            tmp_tuple_element_1 = par_norm_info;
            tmp_args_name_1 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_n0 );
            tmp_tuple_element_1 = par_n0;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( par_tol );
            tmp_tuple_element_1 = par_tol;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_ell;
            CHECK_OBJECT( par_ell );
            tmp_dict_value_1 = par_ell;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_1525777ecfd5b0663eef475b4da2badf->m_frame.f_lineno = 633;
            tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 633;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 633;
                type_description_1 = "oooooooooooo";
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


                type_description_1 = "oooooooooooo";
                exception_lineno = 633;
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


                type_description_1 = "oooooooooooo";
                exception_lineno = 633;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_iterator_name_1 = tmp_tuple_unpack_2__source_iter;
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
                        exception_lineno = 633;
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

                type_description_1 = "oooooooooooo";
                exception_lineno = 633;
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
            assert( var_m_star == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_m_star = tmp_assign_source_9;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
            assert( var_s == NULL );
            Py_INCREF( tmp_assign_source_10 );
            var_s = tmp_assign_source_10;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( par_norm_info );
            tmp_called_instance_2 = par_norm_info;
            frame_1525777ecfd5b0663eef475b4da2badf->m_frame.f_lineno = 634;
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_set_scale, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 634;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( par_q );
        tmp_xrange_low_1 = par_q;
        tmp_iter_arg_3 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 636;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 636;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooo";
                exception_lineno = 636;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_13 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_13;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__expm_multiply_simple_core );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__expm_multiply_simple_core );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_expm_multiply_simple_core" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 637;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        CHECK_OBJECT( par_X );
        tmp_subscribed_name_1 = par_X;
        CHECK_OBJECT( var_k );
        tmp_subscript_name_1 = var_k;
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( par_h );
        tmp_args_element_name_4 = par_h;
        CHECK_OBJECT( par_mu );
        tmp_args_element_name_5 = par_mu;
        CHECK_OBJECT( var_m_star );
        tmp_args_element_name_6 = var_m_star;
        CHECK_OBJECT( var_s );
        tmp_args_element_name_7 = var_s;
        frame_1525777ecfd5b0663eef475b4da2badf->m_frame.f_lineno = 637;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( par_X );
        tmp_ass_subscribed_1 = par_X;
        CHECK_OBJECT( var_k );
        tmp_left_name_2 = var_k;
        tmp_right_name_2 = const_int_pos_1;
        tmp_ass_subscript_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 637;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 636;
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
    RESTORE_FRAME_EXCEPTION( frame_1525777ecfd5b0663eef475b4da2badf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1525777ecfd5b0663eef475b4da2badf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1525777ecfd5b0663eef475b4da2badf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1525777ecfd5b0663eef475b4da2badf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1525777ecfd5b0663eef475b4da2badf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1525777ecfd5b0663eef475b4da2badf,
        type_description_1,
        par_A,
        par_X,
        par_h,
        par_mu,
        par_q,
        par_norm_info,
        par_tol,
        par_ell,
        par_n0,
        var_m_star,
        var_s,
        var_k
    );


    // Release cached frame.
    if ( frame_1525777ecfd5b0663eef475b4da2badf == cache_frame_1525777ecfd5b0663eef475b4da2badf )
    {
        Py_DECREF( frame_1525777ecfd5b0663eef475b4da2badf );
    }
    cache_frame_1525777ecfd5b0663eef475b4da2badf = NULL;

    assertFrameObject( frame_1525777ecfd5b0663eef475b4da2badf );

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

    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( par_X );
        tmp_tuple_element_2 = par_X;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_0;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_19__expm_multiply_interval_core_0 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    CHECK_OBJECT( (PyObject *)par_h );
    Py_DECREF( par_h );
    par_h = NULL;

    CHECK_OBJECT( (PyObject *)par_mu );
    Py_DECREF( par_mu );
    par_mu = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_norm_info );
    Py_DECREF( par_norm_info );
    par_norm_info = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_ell );
    Py_DECREF( par_ell );
    par_ell = NULL;

    CHECK_OBJECT( (PyObject *)par_n0 );
    Py_DECREF( par_n0 );
    par_n0 = NULL;

    CHECK_OBJECT( (PyObject *)var_m_star );
    Py_DECREF( var_m_star );
    var_m_star = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    CHECK_OBJECT( (PyObject *)par_h );
    Py_DECREF( par_h );
    par_h = NULL;

    CHECK_OBJECT( (PyObject *)par_mu );
    Py_DECREF( par_mu );
    par_mu = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_norm_info );
    Py_DECREF( par_norm_info );
    par_norm_info = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_ell );
    Py_DECREF( par_ell );
    par_ell = NULL;

    CHECK_OBJECT( (PyObject *)par_n0 );
    Py_DECREF( par_n0 );
    par_n0 = NULL;

    Py_XDECREF( var_m_star );
    var_m_star = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_19__expm_multiply_interval_core_0 );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_20__expm_multiply_interval_core_1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_X = python_pars[ 1 ];
    PyObject *par_h = python_pars[ 2 ];
    PyObject *par_mu = python_pars[ 3 ];
    PyObject *par_m_star = python_pars[ 4 ];
    PyObject *par_s = python_pars[ 5 ];
    PyObject *par_q = python_pars[ 6 ];
    PyObject *par_tol = python_pars[ 7 ];
    PyObject *var_d = NULL;
    PyObject *var_input_shape = NULL;
    PyObject *var_K_shape = NULL;
    PyObject *var_K = NULL;
    PyObject *var_i = NULL;
    PyObject *var_Z = NULL;
    PyObject *var_high_p = NULL;
    PyObject *var_k = NULL;
    PyObject *var_F = NULL;
    PyObject *var_c1 = NULL;
    PyObject *var_p = NULL;
    PyObject *var_coeff = NULL;
    PyObject *var_inf_norm_K_p_1 = NULL;
    PyObject *var_c2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_0ad49419948a3653d0e0cecded70f763;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_0ad49419948a3653d0e0cecded70f763 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0ad49419948a3653d0e0cecded70f763, codeobj_0ad49419948a3653d0e0cecded70f763, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0ad49419948a3653d0e0cecded70f763 = cache_frame_0ad49419948a3653d0e0cecded70f763;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0ad49419948a3653d0e0cecded70f763 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0ad49419948a3653d0e0cecded70f763 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_q );
        tmp_left_name_1 = par_q;
        CHECK_OBJECT( par_s );
        tmp_right_name_1 = par_s;
        tmp_assign_source_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 645;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_d == NULL );
        var_d = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_X );
        tmp_source_name_1 = par_X;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 646;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 646;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_input_shape == NULL );
        var_input_shape = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_m_star );
        tmp_left_name_3 = par_m_star;
        tmp_right_name_2 = const_int_pos_1;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 647;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_left_name_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_input_shape );
        tmp_right_name_3 = var_input_shape;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 647;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_K_shape == NULL );
        var_K_shape = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 648;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_empty );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 648;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_K_shape );
        tmp_tuple_element_2 = var_K_shape;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( par_X );
        tmp_source_name_3 = par_X;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 648;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_0ad49419948a3653d0e0cecded70f763->m_frame.f_lineno = 648;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 648;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_K == NULL );
        var_K = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( par_s );
        tmp_xrange_low_1 = par_s;
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 649;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 649;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooo";
                exception_lineno = 649;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_7;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_X );
        tmp_subscribed_name_2 = par_X;
        CHECK_OBJECT( var_i );
        tmp_left_name_4 = var_i;
        CHECK_OBJECT( var_d );
        tmp_right_name_4 = var_d;
        tmp_subscript_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_subscript_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 650;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 650;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_Z;
            var_Z = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( var_Z );
        tmp_ass_subvalue_1 = var_Z;
        CHECK_OBJECT( var_K );
        tmp_ass_subscribed_1 = var_K;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 651;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_int_0;
        {
            PyObject *old = var_high_p;
            var_high_p = tmp_assign_source_9;
            Py_INCREF( var_high_p );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        tmp_xrange_low_2 = const_int_pos_1;
        CHECK_OBJECT( var_d );
        tmp_left_name_5 = var_d;
        tmp_right_name_5 = const_int_pos_1;
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_xrange_high_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 653;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE2( tmp_xrange_low_2, tmp_xrange_high_1 );
        Py_DECREF( tmp_xrange_high_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 653;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 653;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
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
                type_description_1 = "oooooooooooooooooooooo";
                exception_lineno = 653;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_12 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_12;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_K );
        tmp_subscribed_name_3 = var_K;
        tmp_subscript_name_3 = const_int_0;
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 654;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_F;
            var_F = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_exact_inf_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 655;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_F );
        tmp_args_element_name_1 = var_F;
        frame_0ad49419948a3653d0e0cecded70f763->m_frame.f_lineno = 655;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 655;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_c1;
            var_c1 = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_xrange_low_3;
        PyObject *tmp_xrange_high_2;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        tmp_xrange_low_3 = const_int_pos_1;
        CHECK_OBJECT( par_m_star );
        tmp_left_name_6 = par_m_star;
        tmp_right_name_6 = const_int_pos_1;
        tmp_xrange_high_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_xrange_high_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 656;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_iter_arg_3 = BUILTIN_XRANGE2( tmp_xrange_low_3, tmp_xrange_high_2 );
        Py_DECREF( tmp_xrange_high_2 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 656;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 656;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_for_loop_3__for_iterator );
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_3 );
        if ( tmp_assign_source_16 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooo";
                exception_lineno = 656;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_for_loop_3__iter_value );
        tmp_assign_source_17 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_17;
            Py_INCREF( var_p );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_p );
        tmp_compexpr_left_1 = var_p;
        CHECK_OBJECT( var_high_p );
        tmp_compexpr_right_1 = var_high_p;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 657;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
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
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_left_name_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_7;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_8;
            PyObject *tmp_right_name_9;
            PyObject *tmp_float_arg_1;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            CHECK_OBJECT( par_h );
            tmp_left_name_8 = par_h;
            CHECK_OBJECT( par_A );
            tmp_source_name_4 = par_A;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dot );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 658;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_K );
            tmp_subscribed_name_4 = var_K;
            CHECK_OBJECT( var_p );
            tmp_left_name_9 = var_p;
            tmp_right_name_8 = const_int_pos_1;
            tmp_subscript_name_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_9, tmp_right_name_8 );
            if ( tmp_subscript_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 658;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 658;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            frame_0ad49419948a3653d0e0cecded70f763->m_frame.f_lineno = 658;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_right_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 658;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_left_name_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 658;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_p );
            tmp_float_arg_1 = var_p;
            tmp_right_name_9 = TO_FLOAT( tmp_float_arg_1 );
            if ( tmp_right_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 658;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_7 );
            Py_DECREF( tmp_right_name_9 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 658;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_K );
            tmp_ass_subscribed_2 = var_K;
            CHECK_OBJECT( var_p );
            tmp_ass_subscript_2 = var_p;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 658;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_4;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_float_arg_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_pow );
        assert( tmp_called_name_4 != NULL );
        CHECK_OBJECT( var_k );
        tmp_args_element_name_3 = var_k;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_4 = var_p;
        frame_0ad49419948a3653d0e0cecded70f763->m_frame.f_lineno = 659;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_float_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_float_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 659;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_18 = TO_FLOAT( tmp_float_arg_2 );
        Py_DECREF( tmp_float_arg_2 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 659;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_coeff;
            var_coeff = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( var_F );
        tmp_left_name_10 = var_F;
        CHECK_OBJECT( var_coeff );
        tmp_left_name_11 = var_coeff;
        CHECK_OBJECT( var_K );
        tmp_subscribed_name_5 = var_K;
        CHECK_OBJECT( var_p );
        tmp_subscript_name_5 = var_p;
        tmp_right_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 660;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 660;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 660;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_F;
            assert( old != NULL );
            var_F = tmp_assign_source_19;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_exact_inf_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 661;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_5 = tmp_mvar_value_3;
        CHECK_OBJECT( var_K );
        tmp_subscribed_name_6 = var_K;
        CHECK_OBJECT( var_p );
        tmp_subscript_name_6 = var_p;
        tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 661;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_0ad49419948a3653d0e0cecded70f763->m_frame.f_lineno = 661;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 661;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_inf_norm_K_p_1;
            var_inf_norm_K_p_1 = tmp_assign_source_20;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT( var_coeff );
        tmp_left_name_12 = var_coeff;
        CHECK_OBJECT( var_inf_norm_K_p_1 );
        tmp_right_name_12 = var_inf_norm_K_p_1;
        tmp_assign_source_21 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 662;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_c2;
            var_c2 = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( var_c1 );
        tmp_left_name_13 = var_c1;
        CHECK_OBJECT( var_c2 );
        tmp_right_name_13 = var_c2;
        tmp_compexpr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 663;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_tol );
        tmp_left_name_14 = par_tol;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_exact_inf_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 663;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_6 = tmp_mvar_value_4;
        CHECK_OBJECT( var_F );
        tmp_args_element_name_6 = var_F;
        frame_0ad49419948a3653d0e0cecded70f763->m_frame.f_lineno = 663;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_right_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 663;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_compexpr_right_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 663;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 663;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
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
        goto loop_end_3;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( var_c2 );
        tmp_assign_source_22 = var_c2;
        {
            PyObject *old = var_c1;
            assert( old != NULL );
            var_c1 = tmp_assign_source_22;
            Py_INCREF( var_c1 );
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 656;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
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

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_15;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_15;
        PyObject *tmp_right_name_16;
        PyObject *tmp_right_name_17;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 666;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_exp );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 666;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_k );
        tmp_left_name_17 = var_k;
        CHECK_OBJECT( par_h );
        tmp_right_name_15 = par_h;
        tmp_left_name_16 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_15 );
        if ( tmp_left_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 666;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_mu );
        tmp_right_name_16 = par_mu;
        tmp_args_element_name_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
        Py_DECREF( tmp_left_name_16 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 666;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_0ad49419948a3653d0e0cecded70f763->m_frame.f_lineno = 666;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_left_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 666;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if ( var_F == NULL )
        {
            Py_DECREF( tmp_left_name_15 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "F" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 666;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_right_name_17 = var_F;
        tmp_ass_subvalue_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_17 );
        Py_DECREF( tmp_left_name_15 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 666;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_X );
        tmp_ass_subscribed_3 = par_X;
        CHECK_OBJECT( var_k );
        tmp_left_name_18 = var_k;
        CHECK_OBJECT( var_i );
        tmp_left_name_19 = var_i;
        CHECK_OBJECT( var_d );
        tmp_right_name_19 = var_d;
        tmp_right_name_18 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
        if ( tmp_right_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_3 );

            exception_lineno = 666;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_ass_subscript_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
        Py_DECREF( tmp_right_name_18 );
        if ( tmp_ass_subscript_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_3 );

            exception_lineno = 666;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscript_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 666;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 653;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 649;
        type_description_1 = "oooooooooooooooooooooo";
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
    RESTORE_FRAME_EXCEPTION( frame_0ad49419948a3653d0e0cecded70f763 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ad49419948a3653d0e0cecded70f763 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0ad49419948a3653d0e0cecded70f763, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0ad49419948a3653d0e0cecded70f763->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0ad49419948a3653d0e0cecded70f763, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0ad49419948a3653d0e0cecded70f763,
        type_description_1,
        par_A,
        par_X,
        par_h,
        par_mu,
        par_m_star,
        par_s,
        par_q,
        par_tol,
        var_d,
        var_input_shape,
        var_K_shape,
        var_K,
        var_i,
        var_Z,
        var_high_p,
        var_k,
        var_F,
        var_c1,
        var_p,
        var_coeff,
        var_inf_norm_K_p_1,
        var_c2
    );


    // Release cached frame.
    if ( frame_0ad49419948a3653d0e0cecded70f763 == cache_frame_0ad49419948a3653d0e0cecded70f763 )
    {
        Py_DECREF( frame_0ad49419948a3653d0e0cecded70f763 );
    }
    cache_frame_0ad49419948a3653d0e0cecded70f763 = NULL;

    assertFrameObject( frame_0ad49419948a3653d0e0cecded70f763 );

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

    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( par_X );
        tmp_tuple_element_3 = par_X;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_20__expm_multiply_interval_core_1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    CHECK_OBJECT( (PyObject *)par_h );
    Py_DECREF( par_h );
    par_h = NULL;

    CHECK_OBJECT( (PyObject *)par_mu );
    Py_DECREF( par_mu );
    par_mu = NULL;

    CHECK_OBJECT( (PyObject *)par_m_star );
    Py_DECREF( par_m_star );
    par_m_star = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)var_input_shape );
    Py_DECREF( var_input_shape );
    var_input_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_K_shape );
    Py_DECREF( var_K_shape );
    var_K_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_K );
    Py_DECREF( var_K );
    var_K = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_high_p );
    var_high_p = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_F );
    var_F = NULL;

    Py_XDECREF( var_c1 );
    var_c1 = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_coeff );
    var_coeff = NULL;

    Py_XDECREF( var_inf_norm_K_p_1 );
    var_inf_norm_K_p_1 = NULL;

    Py_XDECREF( var_c2 );
    var_c2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    CHECK_OBJECT( (PyObject *)par_h );
    Py_DECREF( par_h );
    par_h = NULL;

    CHECK_OBJECT( (PyObject *)par_mu );
    Py_DECREF( par_mu );
    par_mu = NULL;

    CHECK_OBJECT( (PyObject *)par_m_star );
    Py_DECREF( par_m_star );
    par_m_star = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_input_shape );
    var_input_shape = NULL;

    Py_XDECREF( var_K_shape );
    var_K_shape = NULL;

    Py_XDECREF( var_K );
    var_K = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_high_p );
    var_high_p = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_F );
    var_F = NULL;

    Py_XDECREF( var_c1 );
    var_c1 = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_coeff );
    var_coeff = NULL;

    Py_XDECREF( var_inf_norm_K_p_1 );
    var_inf_norm_K_p_1 = NULL;

    Py_XDECREF( var_c2 );
    var_c2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_20__expm_multiply_interval_core_1 );
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


static PyObject *impl_scipy$sparse$linalg$_expm_multiply$$$function_21__expm_multiply_interval_core_2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_X = python_pars[ 1 ];
    PyObject *par_h = python_pars[ 2 ];
    PyObject *par_mu = python_pars[ 3 ];
    PyObject *par_m_star = python_pars[ 4 ];
    PyObject *par_s = python_pars[ 5 ];
    PyObject *par_q = python_pars[ 6 ];
    PyObject *par_tol = python_pars[ 7 ];
    PyObject *var_d = NULL;
    PyObject *var_j = NULL;
    PyObject *var_r = NULL;
    PyObject *var_input_shape = NULL;
    PyObject *var_K_shape = NULL;
    PyObject *var_K = NULL;
    PyObject *var_i = NULL;
    PyObject *var_Z = NULL;
    PyObject *var_high_p = NULL;
    PyObject *var_effective_d = NULL;
    PyObject *var_k = NULL;
    PyObject *var_F = NULL;
    PyObject *var_c1 = NULL;
    PyObject *var_p = NULL;
    PyObject *var_coeff = NULL;
    PyObject *var_inf_norm_K_p_1 = NULL;
    PyObject *var_c2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_7d97195ceeeb542d5abbe574ecaeb420;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_7d97195ceeeb542d5abbe574ecaeb420 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7d97195ceeeb542d5abbe574ecaeb420, codeobj_7d97195ceeeb542d5abbe574ecaeb420, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7d97195ceeeb542d5abbe574ecaeb420 = cache_frame_7d97195ceeeb542d5abbe574ecaeb420;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7d97195ceeeb542d5abbe574ecaeb420 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7d97195ceeeb542d5abbe574ecaeb420 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_q );
        tmp_left_name_1 = par_q;
        CHECK_OBJECT( par_s );
        tmp_right_name_1 = par_s;
        tmp_assign_source_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 674;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_d == NULL );
        var_d = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_q );
        tmp_left_name_2 = par_q;
        CHECK_OBJECT( var_d );
        tmp_right_name_2 = var_d;
        tmp_assign_source_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 675;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_j == NULL );
        var_j = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_q );
        tmp_left_name_3 = par_q;
        CHECK_OBJECT( var_d );
        tmp_left_name_4 = var_d;
        CHECK_OBJECT( var_j );
        tmp_right_name_4 = var_j;
        tmp_right_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 676;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 676;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_X );
        tmp_source_name_1 = par_X;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 677;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 677;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_input_shape == NULL );
        var_input_shape = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( par_m_star );
        tmp_left_name_6 = par_m_star;
        tmp_right_name_5 = const_int_pos_1;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 678;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_left_name_5, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_input_shape );
        tmp_right_name_6 = var_input_shape;
        tmp_assign_source_5 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_5, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 678;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_K_shape == NULL );
        var_K_shape = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 679;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_empty );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 679;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_K_shape );
        tmp_tuple_element_2 = var_K_shape;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( par_X );
        tmp_source_name_3 = par_X;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 679;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_7d97195ceeeb542d5abbe574ecaeb420->m_frame.f_lineno = 679;
        tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 679;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_K == NULL );
        var_K = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_j );
        tmp_left_name_7 = var_j;
        tmp_right_name_7 = const_int_pos_1;
        tmp_xrange_low_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_xrange_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 680;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 680;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 680;
            type_description_1 = "ooooooooooooooooooooooooo";
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
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 680;
                goto try_except_handler_2;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_9;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( par_X );
        tmp_subscribed_name_2 = par_X;
        CHECK_OBJECT( var_i );
        tmp_left_name_8 = var_i;
        CHECK_OBJECT( var_d );
        tmp_right_name_8 = var_d;
        tmp_subscript_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_subscript_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 681;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 681;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_Z;
            var_Z = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( var_Z );
        tmp_ass_subvalue_1 = var_Z;
        CHECK_OBJECT( var_K );
        tmp_ass_subscribed_1 = var_K;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 682;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_int_0;
        {
            PyObject *old = var_high_p;
            var_high_p = tmp_assign_source_11;
            Py_INCREF( var_high_p );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_1 = var_i;
        CHECK_OBJECT( var_j );
        tmp_compexpr_right_1 = var_j;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 684;
            type_description_1 = "ooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( var_d );
            tmp_assign_source_12 = var_d;
            {
                PyObject *old = var_effective_d;
                var_effective_d = tmp_assign_source_12;
                Py_INCREF( var_effective_d );
                Py_XDECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( var_r );
            tmp_assign_source_13 = var_r;
            {
                PyObject *old = var_effective_d;
                var_effective_d = tmp_assign_source_13;
                Py_INCREF( var_effective_d );
                Py_XDECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        tmp_xrange_low_2 = const_int_pos_1;
        CHECK_OBJECT( var_effective_d );
        tmp_left_name_9 = var_effective_d;
        tmp_right_name_9 = const_int_pos_1;
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_xrange_high_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 688;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE2( tmp_xrange_low_2, tmp_xrange_high_1 );
        Py_DECREF( tmp_xrange_high_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 688;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 688;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
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
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 688;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_16 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_16;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_K );
        tmp_subscribed_name_3 = var_K;
        tmp_subscript_name_3 = const_int_0;
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 689;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_F;
            var_F = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_exact_inf_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 690;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_F );
        tmp_args_element_name_1 = var_F;
        frame_7d97195ceeeb542d5abbe574ecaeb420->m_frame.f_lineno = 690;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 690;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_c1;
            var_c1 = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_xrange_low_3;
        PyObject *tmp_xrange_high_2;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        tmp_xrange_low_3 = const_int_pos_1;
        CHECK_OBJECT( par_m_star );
        tmp_left_name_10 = par_m_star;
        tmp_right_name_10 = const_int_pos_1;
        tmp_xrange_high_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_xrange_high_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_iter_arg_3 = BUILTIN_XRANGE2( tmp_xrange_low_3, tmp_xrange_high_2 );
        Py_DECREF( tmp_xrange_high_2 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_for_loop_3__for_iterator );
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
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
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 691;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_20;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_for_loop_3__iter_value );
        tmp_assign_source_21 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_21;
            Py_INCREF( var_p );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        CHECK_OBJECT( var_p );
        tmp_compexpr_left_2 = var_p;
        if ( var_high_p == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "high_p" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 692;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_left_name_11 = var_high_p;
        tmp_right_name_11 = const_int_pos_1;
        tmp_compexpr_right_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 692;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 692;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
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
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_left_name_12;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_12;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_left_name_14;
            PyObject *tmp_right_name_13;
            PyObject *tmp_right_name_14;
            PyObject *tmp_float_arg_1;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            CHECK_OBJECT( par_h );
            tmp_left_name_13 = par_h;
            CHECK_OBJECT( par_A );
            tmp_source_name_4 = par_A;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dot );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 693;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_K );
            tmp_subscribed_name_4 = var_K;
            CHECK_OBJECT( var_p );
            tmp_left_name_14 = var_p;
            tmp_right_name_13 = const_int_pos_1;
            tmp_subscript_name_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_14, tmp_right_name_13 );
            if ( tmp_subscript_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 693;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 693;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            frame_7d97195ceeeb542d5abbe574ecaeb420->m_frame.f_lineno = 693;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_right_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_right_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 693;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_left_name_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_12 );
            Py_DECREF( tmp_right_name_12 );
            if ( tmp_left_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 693;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_p );
            tmp_float_arg_1 = var_p;
            tmp_right_name_14 = TO_FLOAT( tmp_float_arg_1 );
            if ( tmp_right_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_12 );

                exception_lineno = 693;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_14 );
            Py_DECREF( tmp_left_name_12 );
            Py_DECREF( tmp_right_name_14 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 693;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_K );
            tmp_ass_subscribed_2 = var_K;
            CHECK_OBJECT( var_p );
            tmp_ass_subscript_2 = var_p;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 693;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
        }
        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT( var_p );
            tmp_assign_source_22 = var_p;
            {
                PyObject *old = var_high_p;
                var_high_p = tmp_assign_source_22;
                Py_INCREF( var_high_p );
                Py_XDECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_float_arg_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_pow );
        assert( tmp_called_name_4 != NULL );
        CHECK_OBJECT( var_k );
        tmp_args_element_name_3 = var_k;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_4 = var_p;
        frame_7d97195ceeeb542d5abbe574ecaeb420->m_frame.f_lineno = 695;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_float_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_float_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 695;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_23 = TO_FLOAT( tmp_float_arg_2 );
        Py_DECREF( tmp_float_arg_2 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 695;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_coeff;
            var_coeff = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( var_F );
        tmp_left_name_15 = var_F;
        CHECK_OBJECT( var_coeff );
        tmp_left_name_16 = var_coeff;
        CHECK_OBJECT( var_K );
        tmp_subscribed_name_5 = var_K;
        CHECK_OBJECT( var_p );
        tmp_subscript_name_5 = var_p;
        tmp_right_name_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_right_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 696;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_15 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
        Py_DECREF( tmp_right_name_16 );
        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 696;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 696;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_F;
            assert( old != NULL );
            var_F = tmp_assign_source_24;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_exact_inf_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 697;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_5 = tmp_mvar_value_3;
        CHECK_OBJECT( var_K );
        tmp_subscribed_name_6 = var_K;
        CHECK_OBJECT( var_p );
        tmp_subscript_name_6 = var_p;
        tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 697;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_7d97195ceeeb542d5abbe574ecaeb420->m_frame.f_lineno = 697;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 697;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_inf_norm_K_p_1;
            var_inf_norm_K_p_1 = tmp_assign_source_25;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        CHECK_OBJECT( var_coeff );
        tmp_left_name_17 = var_coeff;
        CHECK_OBJECT( var_inf_norm_K_p_1 );
        tmp_right_name_17 = var_inf_norm_K_p_1;
        tmp_assign_source_26 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_17 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 698;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_c2;
            var_c2 = tmp_assign_source_26;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( var_c1 );
        tmp_left_name_18 = var_c1;
        CHECK_OBJECT( var_c2 );
        tmp_right_name_18 = var_c2;
        tmp_compexpr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 699;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_tol );
        tmp_left_name_19 = par_tol;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__exact_inf_norm );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_exact_inf_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 699;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_6 = tmp_mvar_value_4;
        CHECK_OBJECT( var_F );
        tmp_args_element_name_6 = var_F;
        frame_7d97195ceeeb542d5abbe574ecaeb420->m_frame.f_lineno = 699;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_right_name_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_right_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 699;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_compexpr_right_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
        Py_DECREF( tmp_right_name_19 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 699;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 699;
            type_description_1 = "ooooooooooooooooooooooooo";
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
        goto loop_end_3;
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( var_c2 );
        tmp_assign_source_27 = var_c2;
        {
            PyObject *old = var_c1;
            assert( old != NULL );
            var_c1 = tmp_assign_source_27;
            Py_INCREF( var_c1 );
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 691;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
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

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_20;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_20;
        PyObject *tmp_right_name_21;
        PyObject *tmp_right_name_22;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_23;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_24;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_exp );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_k );
        tmp_left_name_22 = var_k;
        CHECK_OBJECT( par_h );
        tmp_right_name_20 = par_h;
        tmp_left_name_21 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_20 );
        if ( tmp_left_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_mu );
        tmp_right_name_21 = par_mu;
        tmp_args_element_name_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_21 );
        Py_DECREF( tmp_left_name_21 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_7d97195ceeeb542d5abbe574ecaeb420->m_frame.f_lineno = 702;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_left_name_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_left_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if ( var_F == NULL )
        {
            Py_DECREF( tmp_left_name_20 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "F" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_right_name_22 = var_F;
        tmp_ass_subvalue_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_22 );
        Py_DECREF( tmp_left_name_20 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_X );
        tmp_ass_subscribed_3 = par_X;
        CHECK_OBJECT( var_k );
        tmp_left_name_23 = var_k;
        CHECK_OBJECT( var_i );
        tmp_left_name_24 = var_i;
        CHECK_OBJECT( var_d );
        tmp_right_name_24 = var_d;
        tmp_right_name_23 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_24 );
        if ( tmp_right_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_3 );

            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_ass_subscript_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_23 );
        Py_DECREF( tmp_right_name_23 );
        if ( tmp_ass_subscript_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_3 );

            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscript_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 688;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        type_description_1 = "ooooooooooooooooooooooooo";
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
    RESTORE_FRAME_EXCEPTION( frame_7d97195ceeeb542d5abbe574ecaeb420 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d97195ceeeb542d5abbe574ecaeb420 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7d97195ceeeb542d5abbe574ecaeb420, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7d97195ceeeb542d5abbe574ecaeb420->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7d97195ceeeb542d5abbe574ecaeb420, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7d97195ceeeb542d5abbe574ecaeb420,
        type_description_1,
        par_A,
        par_X,
        par_h,
        par_mu,
        par_m_star,
        par_s,
        par_q,
        par_tol,
        var_d,
        var_j,
        var_r,
        var_input_shape,
        var_K_shape,
        var_K,
        var_i,
        var_Z,
        var_high_p,
        var_effective_d,
        var_k,
        var_F,
        var_c1,
        var_p,
        var_coeff,
        var_inf_norm_K_p_1,
        var_c2
    );


    // Release cached frame.
    if ( frame_7d97195ceeeb542d5abbe574ecaeb420 == cache_frame_7d97195ceeeb542d5abbe574ecaeb420 )
    {
        Py_DECREF( frame_7d97195ceeeb542d5abbe574ecaeb420 );
    }
    cache_frame_7d97195ceeeb542d5abbe574ecaeb420 = NULL;

    assertFrameObject( frame_7d97195ceeeb542d5abbe574ecaeb420 );

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

    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( par_X );
        tmp_tuple_element_3 = par_X;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = const_int_pos_2;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_21__expm_multiply_interval_core_2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    CHECK_OBJECT( (PyObject *)par_h );
    Py_DECREF( par_h );
    par_h = NULL;

    CHECK_OBJECT( (PyObject *)par_mu );
    Py_DECREF( par_mu );
    par_mu = NULL;

    CHECK_OBJECT( (PyObject *)par_m_star );
    Py_DECREF( par_m_star );
    par_m_star = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)var_j );
    Py_DECREF( var_j );
    var_j = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)var_input_shape );
    Py_DECREF( var_input_shape );
    var_input_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_K_shape );
    Py_DECREF( var_K_shape );
    var_K_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_K );
    Py_DECREF( var_K );
    var_K = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_high_p );
    var_high_p = NULL;

    Py_XDECREF( var_effective_d );
    var_effective_d = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_F );
    var_F = NULL;

    Py_XDECREF( var_c1 );
    var_c1 = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_coeff );
    var_coeff = NULL;

    Py_XDECREF( var_inf_norm_K_p_1 );
    var_inf_norm_K_p_1 = NULL;

    Py_XDECREF( var_c2 );
    var_c2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    CHECK_OBJECT( (PyObject *)par_h );
    Py_DECREF( par_h );
    par_h = NULL;

    CHECK_OBJECT( (PyObject *)par_mu );
    Py_DECREF( par_mu );
    par_mu = NULL;

    CHECK_OBJECT( (PyObject *)par_m_star );
    Py_DECREF( par_m_star );
    par_m_star = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_input_shape );
    var_input_shape = NULL;

    Py_XDECREF( var_K_shape );
    var_K_shape = NULL;

    Py_XDECREF( var_K );
    var_K = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_high_p );
    var_high_p = NULL;

    Py_XDECREF( var_effective_d );
    var_effective_d = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_F );
    var_F = NULL;

    Py_XDECREF( var_c1 );
    var_c1 = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_coeff );
    var_coeff = NULL;

    Py_XDECREF( var_inf_norm_K_p_1 );
    var_inf_norm_K_p_1 = NULL;

    Py_XDECREF( var_c2 );
    var_c2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply$$$function_21__expm_multiply_interval_core_2 );
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



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_10_set_scale(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_10_set_scale,
        const_str_plain_set_scale,
#if PYTHON_VERSION >= 300
        const_str_digest_5c538fb1c3ee21482901566ad2cd977b,
#endif
        codeobj_e28a9a87875d93f370e1ce735077acc7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_ae9d6c2faf4cc34bb629d373cfaaf306,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_11_onenorm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_11_onenorm,
        const_str_plain_onenorm,
#if PYTHON_VERSION >= 300
        const_str_digest_11215ef702acd5caa94f9e689d5779c8,
#endif
        codeobj_42d53edfe9bc6acc34f35ef1c7a3a3d7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_aeb89c132661541d51dd61ca7675fdf1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_12_d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_12_d,
        const_str_plain_d,
#if PYTHON_VERSION >= 300
        const_str_digest_ad8947ea140363db57ed4e251e1fb17e,
#endif
        codeobj_62224183dfee57c04d75024423282e4d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_c4407ed67fb012ed560e528c89537b6f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_13_alpha(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_13_alpha,
        const_str_plain_alpha,
#if PYTHON_VERSION >= 300
        const_str_digest_bc78c37b277c80c6202ed2274944e5b2,
#endif
        codeobj_83d154203bf6a7ddc9dda998ac144f88,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_7390b2a28bab04b0bcb10e8ce24d01b1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_14__compute_cost_div_m(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_14__compute_cost_div_m,
        const_str_plain__compute_cost_div_m,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d6034223fdba4670dca805d13a128820,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_867467e8a00d613d0d2f77250a7a3441,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max,
        const_str_plain__compute_p_max,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_67a8b6ce6fe6a3ebf3368c5d4cdbf801,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_e6008250daf431f4d9e4bb7643ac274a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_16__fragment_3_1( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_16__fragment_3_1,
        const_str_plain__fragment_3_1,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_417aedc129e01bb529999ddfc2dc3e1f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_296a8b4edd604f1f6da07eb51b7d7570,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_17__condition_3_13(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_17__condition_3_13,
        const_str_plain__condition_3_13,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2098c05df940ba301ada022ba44e6c28,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_c206d2583525ed1da2e1577e97afd0ca,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_18__expm_multiply_interval( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_18__expm_multiply_interval,
        const_str_plain__expm_multiply_interval,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a2a151311d33ecae001931a9c71c6467,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_49e95ee1591820577ed79e88659cc0ef,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_19__expm_multiply_interval_core_0(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_19__expm_multiply_interval_core_0,
        const_str_plain__expm_multiply_interval_core_0,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1525777ecfd5b0663eef475b4da2badf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_54242a366d22d150c940d0dc789b3749,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_1__exact_inf_norm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_1__exact_inf_norm,
        const_str_plain__exact_inf_norm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_de85936ba718bbc8b05dcc810d40b174,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_20__expm_multiply_interval_core_1(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_20__expm_multiply_interval_core_1,
        const_str_plain__expm_multiply_interval_core_1,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0ad49419948a3653d0e0cecded70f763,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_11cc5d3858c16eab560627cb1c21a305,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_21__expm_multiply_interval_core_2(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_21__expm_multiply_interval_core_2,
        const_str_plain__expm_multiply_interval_core_2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7d97195ceeeb542d5abbe574ecaeb420,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_9da5641b7d0bb959104990ff7e2139ea,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_2__exact_1_norm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_2__exact_1_norm,
        const_str_plain__exact_1_norm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bedcacaac234ad22bfdbd4f8ebe5a807,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_3__trace(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_3__trace,
        const_str_plain__trace,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8dcd2060990937feb10dfe41e013283e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_4__ident_like(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_4__ident_like,
        const_str_plain__ident_like,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8d08e1f9603f0d8700ce1a4b91fe483a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply,
        const_str_plain_expm_multiply,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b5f6f9e63cfba62bc5cfe21f6e0ae353,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_e1d168b40d7be24880c86863889c54ab,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_6__expm_multiply_simple( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_6__expm_multiply_simple,
        const_str_plain__expm_multiply_simple,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cbd77539f782d02d5fb98dd8f33c5c29,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_2c0b367f0cc83279a09d314036bd3077,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_7__expm_multiply_simple_core( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_7__expm_multiply_simple_core,
        const_str_plain__expm_multiply_simple_core,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8e28ddfb76360c27c997370a3c46d286,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_da47621552c73b2153a0955280144810,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_8__onenormest_matrix_power( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_8__onenormest_matrix_power,
        const_str_plain__onenormest_matrix_power,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1f7f8c85d88fdd455952b184c5b13978,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_2190b2eeffafd9b593f58a902c7523c2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_9___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_expm_multiply$$$function_9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_0031667e595cff07ba224b79ac1df5b2,
#endif
        codeobj_3f5d51b422b32d338e7a9e243a65edd6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_expm_multiply,
        const_str_digest_d019029f251c8ee017167984f901595b,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$linalg$_expm_multiply =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.linalg._expm_multiply",
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

MOD_INIT_DECL( scipy$sparse$linalg$_expm_multiply )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$linalg$_expm_multiply );
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
    puts("scipy.sparse.linalg._expm_multiply: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.linalg._expm_multiply: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.linalg._expm_multiply: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$sparse$linalg$_expm_multiply" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$linalg$_expm_multiply = Py_InitModule4(
        "scipy.sparse.linalg._expm_multiply",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$sparse$linalg$_expm_multiply = PyModule_Create( &mdef_scipy$sparse$linalg$_expm_multiply );
#endif

    moduledict_scipy$sparse$linalg$_expm_multiply = MODULE_DICT( module_scipy$sparse$linalg$_expm_multiply );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$sparse$linalg$_expm_multiply,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$sparse$linalg$_expm_multiply,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$_expm_multiply,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$_expm_multiply,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$sparse$linalg$_expm_multiply );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_86829bda044c8b64db7d5e87aec45ce8, module_scipy$sparse$linalg$_expm_multiply );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_a28c616e0d0ea24a23f786035404638e;
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
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_scipy$sparse$linalg$_expm_multiply_305 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_cdbd19e279980b9b896e7eedca78558c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_cdbd19e279980b9b896e7eedca78558c_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_775cb6a1fcfc673e427ba6dd258cf26d;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_a28c616e0d0ea24a23f786035404638e = MAKE_MODULE_FRAME( codeobj_a28c616e0d0ea24a23f786035404638e, module_scipy$sparse$linalg$_expm_multiply );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a28c616e0d0ea24a23f786035404638e );
    assert( Py_REFCNT( frame_a28c616e0d0ea24a23f786035404638e ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_a28c616e0d0ea24a23f786035404638e->m_frame.f_lineno = 4;
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$linalg$_expm_multiply;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_a28c616e0d0ea24a23f786035404638e->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$sparse$linalg$_expm_multiply;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_a28c616e0d0ea24a23f786035404638e->m_frame.f_lineno = 8;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_scipy, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_8783708b6421c71a0892a844e756fb02;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$sparse$linalg$_expm_multiply;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_a28c616e0d0ea24a23f786035404638e->m_frame.f_lineno = 9;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_scipy, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_8783708b6421c71a0892a844e756fb02;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$sparse$linalg$_expm_multiply;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_aslinearoperator_tuple;
        tmp_level_name_4 = const_int_0;
        frame_a28c616e0d0ea24a23f786035404638e->m_frame.f_lineno = 10;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_aslinearoperator );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_aslinearoperator, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = LIST_COPY( const_list_str_plain_expm_multiply_list );
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_1__exact_inf_norm(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__exact_inf_norm, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_2__exact_1_norm(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__exact_1_norm, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_3__trace(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__trace, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_4__ident_like(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__ident_like, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_17 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_5_expm_multiply( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_expm_multiply, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_float_1_0_false_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_18 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_6__expm_multiply_simple( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__expm_multiply_simple, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_false_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_19 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_7__expm_multiply_simple_core( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__expm_multiply_simple_core, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = PyDict_Copy( const_dict_f15f701e78ae50b1584fd652a45e9c0d );
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__theta, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_int_pos_2_int_pos_5_false_false_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_21 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_8__onenormest_matrix_power( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__onenormest_matrix_power, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
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


            exception_lineno = 305;

            goto try_except_handler_2;
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


            exception_lineno = 305;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_empty;
        tmp_assign_source_23 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_23;
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


            exception_lineno = 305;

            goto try_except_handler_2;
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


            exception_lineno = 305;

            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_24;
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


                exception_lineno = 305;

                goto try_except_handler_2;
            }
            tmp_args_name_1 = const_tuple_str_plain_LazyOperatorNormInfo_tuple_empty_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_a28c616e0d0ea24a23f786035404638e->m_frame.f_lineno = 305;
            tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_24;
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


                exception_lineno = 305;

                goto try_except_handler_2;
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


                    exception_lineno = 305;

                    goto try_except_handler_2;
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

                    exception_lineno = 305;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 305;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 305;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_25;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$sparse$linalg$_expm_multiply_305 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_86829bda044c8b64db7d5e87aec45ce8;
        tmp_res = PyObject_SetItem( locals_scipy$sparse$linalg$_expm_multiply_305, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_131dd0e90a3fdb693b42942b688cd92d;
        tmp_res = PyObject_SetItem( locals_scipy$sparse$linalg$_expm_multiply_305, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_LazyOperatorNormInfo;
        tmp_res = PyObject_SetItem( locals_scipy$sparse$linalg$_expm_multiply_305, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_cdbd19e279980b9b896e7eedca78558c_2, codeobj_cdbd19e279980b9b896e7eedca78558c, module_scipy$sparse$linalg$_expm_multiply, sizeof(void *) );
        frame_cdbd19e279980b9b896e7eedca78558c_2 = cache_frame_cdbd19e279980b9b896e7eedca78558c_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_cdbd19e279980b9b896e7eedca78558c_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_cdbd19e279980b9b896e7eedca78558c_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_none_int_pos_2_int_pos_1_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_9___init__( tmp_defaults_5 );



            tmp_res = PyObject_SetItem( locals_scipy$sparse$linalg$_expm_multiply_305, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_10_set_scale(  );



        tmp_res = PyObject_SetItem( locals_scipy$sparse$linalg$_expm_multiply_305, const_str_plain_set_scale, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_11_onenorm(  );



        tmp_res = PyObject_SetItem( locals_scipy$sparse$linalg$_expm_multiply_305, const_str_plain_onenorm, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_12_d(  );



        tmp_res = PyObject_SetItem( locals_scipy$sparse$linalg$_expm_multiply_305, const_str_plain_d, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 352;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_13_alpha(  );



        tmp_res = PyObject_SetItem( locals_scipy$sparse$linalg$_expm_multiply_305, const_str_plain_alpha, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_cdbd19e279980b9b896e7eedca78558c_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_cdbd19e279980b9b896e7eedca78558c_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_cdbd19e279980b9b896e7eedca78558c_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_cdbd19e279980b9b896e7eedca78558c_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_cdbd19e279980b9b896e7eedca78558c_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_cdbd19e279980b9b896e7eedca78558c_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_cdbd19e279980b9b896e7eedca78558c_2 == cache_frame_cdbd19e279980b9b896e7eedca78558c_2 )
        {
            Py_DECREF( frame_cdbd19e279980b9b896e7eedca78558c_2 );
        }
        cache_frame_cdbd19e279980b9b896e7eedca78558c_2 = NULL;

        assertFrameObject( frame_cdbd19e279980b9b896e7eedca78558c_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_LazyOperatorNormInfo;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_empty;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_scipy$sparse$linalg$_expm_multiply_305;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_a28c616e0d0ea24a23f786035404638e->m_frame.f_lineno = 305;
            tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_26 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_26 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_scipy$sparse$linalg$_expm_multiply_305 );
        locals_scipy$sparse$linalg$_expm_multiply_305 = NULL;
        goto try_return_handler_3;
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

        Py_DECREF( locals_scipy$sparse$linalg$_expm_multiply_305 );
        locals_scipy$sparse$linalg$_expm_multiply_305 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_expm_multiply );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 305;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain_LazyOperatorNormInfo, tmp_assign_source_26 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a28c616e0d0ea24a23f786035404638e );
#endif
    popFrameStack();

    assertFrameObject( frame_a28c616e0d0ea24a23f786035404638e );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a28c616e0d0ea24a23f786035404638e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a28c616e0d0ea24a23f786035404638e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a28c616e0d0ea24a23f786035404638e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a28c616e0d0ea24a23f786035404638e, exception_lineno );
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

    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_14__compute_cost_div_m(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__compute_cost_div_m, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_15__compute_p_max(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__compute_p_max, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = const_tuple_int_pos_55_int_pos_2_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_assign_source_30 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_16__fragment_3_1( tmp_defaults_6 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__fragment_3_1, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_17__condition_3_13(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__condition_3_13, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = const_tuple_none_none_none_none_false_false_tuple;
        Py_INCREF( tmp_defaults_7 );
        tmp_assign_source_32 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_18__expm_multiply_interval( tmp_defaults_7 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__expm_multiply_interval, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_19__expm_multiply_interval_core_0(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__expm_multiply_interval_core_0, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_20__expm_multiply_interval_core_1(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__expm_multiply_interval_core_1, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_scipy$sparse$linalg$_expm_multiply$$$function_21__expm_multiply_interval_core_2(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain__expm_multiply_interval_core_2, tmp_assign_source_35 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_expm_multiply, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$linalg$_expm_multiply );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
