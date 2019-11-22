/* Generated code for Python module 'scipy.sparse.linalg._onenormest'
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

/* The "_module_scipy$sparse$linalg$_onenormest" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$linalg$_onenormest;
PyDictObject *moduledict_scipy$sparse$linalg$_onenormest;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple;
extern PyObject *const_str_plain_ones;
static PyObject *const_str_plain_column_needs_resampling;
static PyObject *const_str_digest_986d7c1fc620d00e7a792ba39ad6a6f7;
static PyObject *const_str_plain_col_abs_sums;
extern PyObject *const_str_plain_i;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain_aslinearoperator_tuple;
extern PyObject *const_str_plain_h;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_any;
static PyObject *const_tuple_ca1602cc3ccfc8cdb66709c9ddb81fdf_tuple;
extern PyObject *const_str_plain_in1d;
static PyObject *const_str_plain_A_explicit;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_compute_v;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_13bf88a00f8eb59ba37263162170c668;
static PyObject *const_str_digest_f50609ec92302b25d21a5bcd20338821;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_H;
extern PyObject *const_int_pos_5;
static PyObject *const_str_digest_bfb109b499e23fdd311c2d673401b215;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_aslinearoperator;
static PyObject *const_str_digest_0fce5408ac70a946549c50ec6a18f2b9;
static PyObject *const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple;
static PyObject *const_tuple_str_plain_v_str_plain_w_str_plain_n_tuple;
static PyObject *const_str_digest_44407780d9863d6a771df43bf5c84adc;
static PyObject *const_str_digest_ba8c84d594bdedd9dabc52231458735f;
static PyObject *const_tuple_str_plain_X_str_plain_Y_str_plain_v_tuple;
extern PyObject *const_str_plain_Y;
extern PyObject *const_str_plain_wrapper;
extern PyObject *const_str_plain_g_prev;
static PyObject *const_str_digest_38f217509b4ce31f68c8ffc75d379ca8;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_tuple_int_pos_2_int_pos_5_false_false_tuple;
static PyObject *const_str_digest_e25d03af2834fb7be80f1fbc39a5b6e2;
static PyObject *const_str_digest_02d047057e83ad995c4c99be1c46702c;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_str_plain_nresamples;
static PyObject *const_str_plain_every_col_of_X_is_parallel_to_a_col_of_Y;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_AT_linear_operator;
extern PyObject *const_str_plain_j;
static PyObject *const_str_digest_4aaa9cda7eff8796f35f2e38fa9070ad;
static PyObject *const_str_digest_bdba1ac4878458e4b0bc7be8760c0452;
extern PyObject *const_tuple_int_0_int_pos_2_tuple;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_Z;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_y0;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_est;
extern PyObject *const_str_plain_g;
static PyObject *const_tuple_7fb57d86fd81a643974ead929a712079_tuple;
extern PyObject *const_str_plain_block_size;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_random;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_argsort;
static PyObject *const_str_digest_e36b7e56b9ed1853fb82c22db6ab37b3;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_nmults;
static PyObject *const_str_plain_h_prev;
static PyObject *const_str_digest_c7dd2cdc2252b65c0135df69020d610b;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_digest_fd9973afe1ca1019181823c8a691adaf;
static PyObject *const_tuple_str_plain_i_str_plain_X_tuple;
static PyObject *const_str_plain_elementary_vector;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_matmat;
extern PyObject *const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202;
static PyObject *const_tuple_18b7a13d0964dd99fece1562feaf2e1d_tuple;
static PyObject *const_str_plain__sum_abs_axis0;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_compute_w;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_abs;
static PyObject *const_tuple_str_plain_n_str_plain_i_str_plain_v_tuple;
extern PyObject *const_str_plain_concatenate;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_argmax;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_digest_8783708b6421c71a0892a844e756fb02;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_argmax_j;
extern PyObject *const_str_plain_onenormest;
static PyObject *const_tuple_str_plain_func_str_plain_block_size_str_plain_wrapper_tuple;
static PyObject *const_str_digest_086cc4519ae8ea265357d77ad62d21ec;
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1048576;
extern PyObject *const_tuple_str_plain_X_tuple;
static PyObject *const_str_plain_best_j;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_slice_none_none_none_slice_int_pos_1_none_none_tuple;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_ind;
static PyObject *const_tuple_b752967c7ccb3f7a8b96bc2c1516350e_tuple;
extern PyObject *const_str_plain_identity;
static PyObject *const_str_digest_5db29281e632ffeb822848e732cc66de;
static PyObject *const_tuple_str_plain_X_str_plain_Y_tuple;
static PyObject *const_str_digest_3fdec3fbd7ed6ee970fc9062768f8eee;
static PyObject *const_list_str_plain_onenormest_list;
static PyObject *const_str_plain_resample_column;
extern PyObject *const_str_plain_randint;
extern PyObject *const_str_plain_intp;
extern PyObject *const_slice_none_none_int_neg_1;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_56859fdb06f937c38495559fabab45a3;
extern PyObject *const_str_plain_allclose;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_tuple_a757542c8ac7eb56787e309dbadf72eb_tuple;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
static PyObject *const_str_plain_less_than_or_close;
extern PyObject *const_str_plain_dot;
static PyObject *const_str_digest_8bc6b5c33d965871e992d390c729e43a;
extern PyObject *const_str_plain_S;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_digest_ca03cc0c85a7e6747cc2801dbcaf2d91;
static PyObject *const_str_plain__blocked_elementwise;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain__max_abs_axis1;
extern PyObject *const_str_plain_y;
static PyObject *const_str_plain_A_linear_operator;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_X;
static PyObject *const_str_plain__onenormest_core;
extern PyObject *const_dict_c4b01644824ba6bad132707fcdaa03f1;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain__algorithm_2_2;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_itmax;
static PyObject *const_str_plain_AT;
extern PyObject *const_str_plain_T;
static PyObject *const_tuple_2f0d9e46459388ea707a1b95077d3069_tuple;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_sort;
static PyObject *const_str_plain_sign_round_up;
static PyObject *const_str_plain_vectors_are_parallel;
extern PyObject *const_tuple_str_plain_a_str_plain_b_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 2, const_str_plain_itmax ); Py_INCREF( const_str_plain_itmax );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 3, const_str_plain_compute_v ); Py_INCREF( const_str_plain_compute_v );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 4, const_str_plain_compute_w ); Py_INCREF( const_str_plain_compute_w );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 5, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_plain_A_explicit = UNSTREAM_STRING_ASCII( &constant_bin[ 5406863 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 6, const_str_plain_A_explicit ); Py_INCREF( const_str_plain_A_explicit );
    const_str_plain_col_abs_sums = UNSTREAM_STRING_ASCII( &constant_bin[ 5406873 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 7, const_str_plain_col_abs_sums ); Py_INCREF( const_str_plain_col_abs_sums );
    const_str_plain_argmax_j = UNSTREAM_STRING_ASCII( &constant_bin[ 5406885 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 8, const_str_plain_argmax_j ); Py_INCREF( const_str_plain_argmax_j );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 9, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 10, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 11, const_str_plain_est ); Py_INCREF( const_str_plain_est );
    const_str_plain_nmults = UNSTREAM_STRING_ASCII( &constant_bin[ 5406893 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 12, const_str_plain_nmults ); Py_INCREF( const_str_plain_nmults );
    const_str_plain_nresamples = UNSTREAM_STRING_ASCII( &constant_bin[ 5406899 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 13, const_str_plain_nresamples ); Py_INCREF( const_str_plain_nresamples );
    PyTuple_SET_ITEM( const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 14, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain_column_needs_resampling = UNSTREAM_STRING_ASCII( &constant_bin[ 5406909 ], 23, 1 );
    const_str_digest_986d7c1fc620d00e7a792ba39ad6a6f7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5406932 ], 1264, 0 );
    const_tuple_ca1602cc3ccfc8cdb66709c9ddb81fdf_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ca1602cc3ccfc8cdb66709c9ddb81fdf_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_ca1602cc3ccfc8cdb66709c9ddb81fdf_tuple, 1, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_ca1602cc3ccfc8cdb66709c9ddb81fdf_tuple, 2, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_ca1602cc3ccfc8cdb66709c9ddb81fdf_tuple, 3, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    const_str_digest_13bf88a00f8eb59ba37263162170c668 = UNSTREAM_STRING_ASCII( &constant_bin[ 5408196 ], 31, 0 );
    const_str_digest_f50609ec92302b25d21a5bcd20338821 = UNSTREAM_STRING_ASCII( &constant_bin[ 742606 ], 16, 0 );
    const_str_digest_bfb109b499e23fdd311c2d673401b215 = UNSTREAM_STRING_ASCII( &constant_bin[ 5408227 ], 40, 0 );
    const_str_digest_0fce5408ac70a946549c50ec6a18f2b9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5408267 ], 1315, 0 );
    const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    const_str_plain_AT = UNSTREAM_STRING_ASCII( &constant_bin[ 18294 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 1, const_str_plain_AT ); Py_INCREF( const_str_plain_AT );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 2, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_plain_A_linear_operator = UNSTREAM_STRING_ASCII( &constant_bin[ 5409582 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 3, const_str_plain_A_linear_operator ); Py_INCREF( const_str_plain_A_linear_operator );
    const_str_plain_AT_linear_operator = UNSTREAM_STRING_ASCII( &constant_bin[ 5409599 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 4, const_str_plain_AT_linear_operator ); Py_INCREF( const_str_plain_AT_linear_operator );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 5, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 6, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 7, const_str_plain_g_prev ); Py_INCREF( const_str_plain_g_prev );
    const_str_plain_h_prev = UNSTREAM_STRING_ASCII( &constant_bin[ 5409617 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 8, const_str_plain_h_prev ); Py_INCREF( const_str_plain_h_prev );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 9, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 10, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 11, const_str_plain_Y ); Py_INCREF( const_str_plain_Y );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 12, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    const_str_plain_best_j = UNSTREAM_STRING_ASCII( &constant_bin[ 5409623 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 13, const_str_plain_best_j ); Py_INCREF( const_str_plain_best_j );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 14, const_str_plain_S ); Py_INCREF( const_str_plain_S );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 15, const_str_plain_Z ); Py_INCREF( const_str_plain_Z );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 16, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    PyTuple_SET_ITEM( const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 17, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    const_tuple_str_plain_v_str_plain_w_str_plain_n_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_w_str_plain_n_tuple, 0, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_w_str_plain_n_tuple, 1, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_w_str_plain_n_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_digest_44407780d9863d6a771df43bf5c84adc = UNSTREAM_STRING_ASCII( &constant_bin[ 5409629 ], 31, 0 );
    const_str_digest_ba8c84d594bdedd9dabc52231458735f = UNSTREAM_STRING_ASCII( &constant_bin[ 5409660 ], 49, 0 );
    const_tuple_str_plain_X_str_plain_Y_str_plain_v_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_X_str_plain_Y_str_plain_v_tuple, 0, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    PyTuple_SET_ITEM( const_tuple_str_plain_X_str_plain_Y_str_plain_v_tuple, 1, const_str_plain_Y ); Py_INCREF( const_str_plain_Y );
    PyTuple_SET_ITEM( const_tuple_str_plain_X_str_plain_Y_str_plain_v_tuple, 2, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_digest_38f217509b4ce31f68c8ffc75d379ca8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5409709 ], 145, 0 );
    const_str_digest_e25d03af2834fb7be80f1fbc39a5b6e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5409854 ], 59, 0 );
    const_str_digest_02d047057e83ad995c4c99be1c46702c = UNSTREAM_STRING_ASCII( &constant_bin[ 5409913 ], 34, 0 );
    const_str_plain_every_col_of_X_is_parallel_to_a_col_of_Y = UNSTREAM_STRING_ASCII( &constant_bin[ 5409854 ], 40, 1 );
    const_str_digest_4aaa9cda7eff8796f35f2e38fa9070ad = UNSTREAM_STRING_ASCII( &constant_bin[ 5409947 ], 2472, 0 );
    const_str_digest_bdba1ac4878458e4b0bc7be8760c0452 = UNSTREAM_STRING_ASCII( &constant_bin[ 5412419 ], 27, 0 );
    const_tuple_7fb57d86fd81a643974ead929a712079_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5412446 ], 186 );
    const_str_digest_e36b7e56b9ed1853fb82c22db6ab37b3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5412632 ], 42, 0 );
    const_str_digest_c7dd2cdc2252b65c0135df69020d610b = UNSTREAM_STRING_ASCII( &constant_bin[ 5412674 ], 17, 0 );
    const_str_digest_fd9973afe1ca1019181823c8a691adaf = UNSTREAM_STRING_ASCII( &constant_bin[ 5412691 ], 50, 0 );
    const_tuple_str_plain_i_str_plain_X_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_X_tuple, 0, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_X_tuple, 1, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    const_str_plain_elementary_vector = UNSTREAM_STRING_ASCII( &constant_bin[ 5412741 ], 17, 1 );
    const_tuple_18b7a13d0964dd99fece1562feaf2e1d_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_18b7a13d0964dd99fece1562feaf2e1d_tuple, 0, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    PyTuple_SET_ITEM( const_tuple_18b7a13d0964dd99fece1562feaf2e1d_tuple, 1, const_str_plain_block_size ); Py_INCREF( const_str_plain_block_size );
    PyTuple_SET_ITEM( const_tuple_18b7a13d0964dd99fece1562feaf2e1d_tuple, 2, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_18b7a13d0964dd99fece1562feaf2e1d_tuple, 3, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_18b7a13d0964dd99fece1562feaf2e1d_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_str_plain__sum_abs_axis0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5412758 ], 14, 1 );
    const_tuple_str_plain_n_str_plain_i_str_plain_v_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_i_str_plain_v_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_i_str_plain_v_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_i_str_plain_v_tuple, 2, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_tuple_str_plain_func_str_plain_block_size_str_plain_wrapper_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_block_size_str_plain_wrapper_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_block_size_str_plain_wrapper_tuple, 1, const_str_plain_block_size ); Py_INCREF( const_str_plain_block_size );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_block_size_str_plain_wrapper_tuple, 2, const_str_plain_wrapper ); Py_INCREF( const_str_plain_wrapper );
    const_str_digest_086cc4519ae8ea265357d77ad62d21ec = UNSTREAM_STRING_ASCII( &constant_bin[ 5412772 ], 313, 0 );
    const_tuple_b752967c7ccb3f7a8b96bc2c1516350e_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b752967c7ccb3f7a8b96bc2c1516350e_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_b752967c7ccb3f7a8b96bc2c1516350e_tuple, 1, const_str_plain_y0 ); Py_INCREF( const_str_plain_y0 );
    PyTuple_SET_ITEM( const_tuple_b752967c7ccb3f7a8b96bc2c1516350e_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_b752967c7ccb3f7a8b96bc2c1516350e_tuple, 3, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_b752967c7ccb3f7a8b96bc2c1516350e_tuple, 4, const_str_plain_block_size ); Py_INCREF( const_str_plain_block_size );
    PyTuple_SET_ITEM( const_tuple_b752967c7ccb3f7a8b96bc2c1516350e_tuple, 5, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    const_str_digest_5db29281e632ffeb822848e732cc66de = UNSTREAM_STRING_ASCII( &constant_bin[ 5413085 ], 36, 0 );
    const_tuple_str_plain_X_str_plain_Y_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_X_str_plain_Y_tuple, 0, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    PyTuple_SET_ITEM( const_tuple_str_plain_X_str_plain_Y_tuple, 1, const_str_plain_Y ); Py_INCREF( const_str_plain_Y );
    const_str_digest_3fdec3fbd7ed6ee970fc9062768f8eee = UNSTREAM_STRING_ASCII( &constant_bin[ 5413121 ], 31, 0 );
    const_list_str_plain_onenormest_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_onenormest_list, 0, const_str_plain_onenormest ); Py_INCREF( const_str_plain_onenormest );
    const_str_plain_resample_column = UNSTREAM_STRING_ASCII( &constant_bin[ 5413152 ], 15, 1 );
    const_str_digest_56859fdb06f937c38495559fabab45a3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5413167 ], 37, 0 );
    const_tuple_a757542c8ac7eb56787e309dbadf72eb_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_a757542c8ac7eb56787e309dbadf72eb_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_a757542c8ac7eb56787e309dbadf72eb_tuple, 1, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_a757542c8ac7eb56787e309dbadf72eb_tuple, 2, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_plain_less_than_or_close = UNSTREAM_STRING_ASCII( &constant_bin[ 5413204 ], 18, 1 );
    const_str_digest_8bc6b5c33d965871e992d390c729e43a = UNSTREAM_STRING_ASCII( &constant_bin[ 5413222 ], 27, 0 );
    const_str_digest_ca03cc0c85a7e6747cc2801dbcaf2d91 = UNSTREAM_STRING_ASCII( &constant_bin[ 5413249 ], 39, 0 );
    const_str_plain__blocked_elementwise = UNSTREAM_STRING_ASCII( &constant_bin[ 5413167 ], 20, 1 );
    const_str_plain__max_abs_axis1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5413288 ], 14, 1 );
    const_str_plain__onenormest_core = UNSTREAM_STRING_ASCII( &constant_bin[ 5413302 ], 16, 1 );
    const_str_plain__algorithm_2_2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5413318 ], 14, 1 );
    const_tuple_2f0d9e46459388ea707a1b95077d3069_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_2f0d9e46459388ea707a1b95077d3069_tuple, 0, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_2f0d9e46459388ea707a1b95077d3069_tuple, 1, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    PyTuple_SET_ITEM( const_tuple_2f0d9e46459388ea707a1b95077d3069_tuple, 2, const_str_plain_Y ); Py_INCREF( const_str_plain_Y );
    PyTuple_SET_ITEM( const_tuple_2f0d9e46459388ea707a1b95077d3069_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_2f0d9e46459388ea707a1b95077d3069_tuple, 4, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_2f0d9e46459388ea707a1b95077d3069_tuple, 5, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_plain_sign_round_up = UNSTREAM_STRING_ASCII( &constant_bin[ 5413332 ], 13, 1 );
    const_str_plain_vectors_are_parallel = UNSTREAM_STRING_ASCII( &constant_bin[ 5413345 ], 20, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$sparse$linalg$_onenormest( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_17ed5ea23575b343a9ca0e5614274e00;
static PyCodeObject *codeobj_3b18b7ffaadcf4f0c067154d3b2dea11;
static PyCodeObject *codeobj_e10780fe4726b92a175ba1d5ba8c6bc5;
static PyCodeObject *codeobj_40281e4eecc5a84e857f69047dbbe92d;
static PyCodeObject *codeobj_668c957a630d2d690f256c9ad71c3598;
static PyCodeObject *codeobj_ba4d9e4967c0203f65c0f9653a2552d7;
static PyCodeObject *codeobj_24866a1398305119109fb858b422e00d;
static PyCodeObject *codeobj_798c67101f7c72d67bb10feec0f82aa2;
static PyCodeObject *codeobj_a050b3b2021982aabaeaba4cb0ea4db8;
static PyCodeObject *codeobj_a924bf2d6e91fd909b4656c41dc7c1ba;
static PyCodeObject *codeobj_867ca7edbbb701f2c69e5a9270058827;
static PyCodeObject *codeobj_9c88a887d71a6cf55049f46c370d7d71;
static PyCodeObject *codeobj_a6e2363297358cdbcbaee6ac3b3f456b;
static PyCodeObject *codeobj_be970f17ac5f578348a430352155ca6c;
static PyCodeObject *codeobj_088a356556ff6776345895205cb994a0;
static PyCodeObject *codeobj_1e4c9af7c790f58f7a23963787acc0f8;
static PyCodeObject *codeobj_262457daf3a3942434fd8e996d31e1f9;
static PyCodeObject *codeobj_0826ddfc22198c83dc231214c60aa9c6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_02d047057e83ad995c4c99be1c46702c );
    codeobj_17ed5ea23575b343a9ca0e5614274e00 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 195, const_tuple_a757542c8ac7eb56787e309dbadf72eb_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3b18b7ffaadcf4f0c067154d3b2dea11 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 206, const_tuple_ca1602cc3ccfc8cdb66709c9ddb81fdf_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e10780fe4726b92a175ba1d5ba8c6bc5 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 209, const_tuple_a757542c8ac7eb56787e309dbadf72eb_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_40281e4eecc5a84e857f69047dbbe92d = MAKE_CODEOBJ( module_filename_obj, const_str_digest_bfb109b499e23fdd311c2d673401b215, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_668c957a630d2d690f256c9ad71c3598 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__algorithm_2_2, 222, const_tuple_32dfc5c29f1433c46fae0a8a40b446af_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ba4d9e4967c0203f65c0f9653a2552d7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__blocked_elementwise, 122, const_tuple_str_plain_func_str_plain_block_size_str_plain_wrapper_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_24866a1398305119109fb858b422e00d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__max_abs_axis1, 160, const_tuple_str_plain_X_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_798c67101f7c72d67bb10feec0f82aa2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__onenormest_core, 325, const_tuple_7fb57d86fd81a643974ead929a712079_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a050b3b2021982aabaeaba4cb0ea4db8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sum_abs_axis0, 165, const_tuple_18b7a13d0964dd99fece1562feaf2e1d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a924bf2d6e91fd909b4656c41dc7c1ba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_column_needs_resampling, 200, const_tuple_2f0d9e46459388ea707a1b95077d3069_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_867ca7edbbb701f2c69e5a9270058827 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_elementary_vector, 177, const_tuple_str_plain_n_str_plain_i_str_plain_v_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9c88a887d71a6cf55049f46c370d7d71 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_every_col_of_X_is_parallel_to_a_col_of_Y, 193, const_tuple_str_plain_X_str_plain_Y_str_plain_v_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a6e2363297358cdbcbaee6ac3b3f456b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_less_than_or_close, 218, const_tuple_str_plain_a_str_plain_b_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_be970f17ac5f578348a430352155ca6c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_onenormest, 13, const_tuple_a044c51bbcb3a0b4a3119d550a64147e_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_088a356556ff6776345895205cb994a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resample_column, 214, const_tuple_str_plain_i_str_plain_X_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1e4c9af7c790f58f7a23963787acc0f8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sign_round_up, 143, const_tuple_str_plain_X_str_plain_Y_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_262457daf3a3942434fd8e996d31e1f9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_vectors_are_parallel, 183, const_tuple_str_plain_v_str_plain_w_str_plain_n_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0826ddfc22198c83dc231214c60aa9c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrapper, 129, const_tuple_b752967c7ccb3f7a8b96bc2c1516350e_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
static PyObject *scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y$$$genexpr_1_genexpr_maker( void );


static PyObject *scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_1_genexpr_maker( void );


static PyObject *scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_2_genexpr_maker( void );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_10_resample_column(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_11_less_than_or_close(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_12__algorithm_2_2(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_13__onenormest_core(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_1_onenormest( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_2__blocked_elementwise(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_2__blocked_elementwise$$$function_1_wrapper(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_3_sign_round_up(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_4__max_abs_axis1(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_5__sum_abs_axis0(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_6_elementary_vector(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_7_vectors_are_parallel(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$sparse$linalg$_onenormest$$$function_1_onenormest( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_t = python_pars[ 1 ];
    PyObject *par_itmax = python_pars[ 2 ];
    PyObject *par_compute_v = python_pars[ 3 ];
    PyObject *par_compute_w = python_pars[ 4 ];
    PyObject *var_n = NULL;
    PyObject *var_A_explicit = NULL;
    PyObject *var_col_abs_sums = NULL;
    PyObject *var_argmax_j = NULL;
    PyObject *var_v = NULL;
    PyObject *var_w = NULL;
    PyObject *var_est = NULL;
    PyObject *var_nmults = NULL;
    PyObject *var_nresamples = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_be970f17ac5f578348a430352155ca6c;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_be970f17ac5f578348a430352155ca6c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be970f17ac5f578348a430352155ca6c, codeobj_be970f17ac5f578348a430352155ca6c, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_be970f17ac5f578348a430352155ca6c = cache_frame_be970f17ac5f578348a430352155ca6c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be970f17ac5f578348a430352155ca6c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be970f17ac5f578348a430352155ca6c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_aslinearoperator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aslinearoperator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "aslinearoperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_be970f17ac5f578348a430352155ca6c->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooo";
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


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooo";
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

            exception_lineno = 87;
            type_description_1 = "ooooooooooooooo";
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

            exception_lineno = 87;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_ba8c84d594bdedd9dabc52231458735f;
            frame_be970f17ac5f578348a430352155ca6c->m_frame.f_lineno = 88;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 88;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( par_A );
        tmp_source_name_3 = par_A;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_pos_1;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_t );
        tmp_compexpr_left_2 = par_t;
        CHECK_OBJECT( var_n );
        tmp_compexpr_right_2 = var_n;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "ooooooooooooooo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 95;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_asarray );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_aslinearoperator );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aslinearoperator );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "aslinearoperator" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 95;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_3;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_3 = par_A;
            frame_be970f17ac5f578348a430352155ca6c->m_frame.f_lineno = 95;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_source_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 95;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_matmat );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 95;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 95;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_4;
            CHECK_OBJECT( var_n );
            tmp_args_element_name_5 = var_n;
            frame_be970f17ac5f578348a430352155ca6c->m_frame.f_lineno = 95;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_identity, call_args );
            }

            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 95;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_be970f17ac5f578348a430352155ca6c->m_frame.f_lineno = 95;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 95;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_be970f17ac5f578348a430352155ca6c->m_frame.f_lineno = 95;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_A_explicit == NULL );
            var_A_explicit = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( var_A_explicit );
            tmp_source_name_6 = var_A_explicit;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_n );
            tmp_tuple_element_1 = var_n;
            tmp_compexpr_right_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_compexpr_right_3, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_1 = var_n;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_compexpr_right_3, 1, tmp_tuple_element_1 );
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "ooooooooooooooo";
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
                PyObject *tmp_make_exception_arg_3;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_unicode_arg_1;
                PyObject *tmp_source_name_7;
                tmp_make_exception_arg_2 = const_str_digest_f50609ec92302b25d21a5bcd20338821;
                tmp_left_name_1 = const_str_digest_c7dd2cdc2252b65c0135df69020d610b;
                CHECK_OBJECT( var_A_explicit );
                tmp_source_name_7 = var_A_explicit;
                tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
                if ( tmp_unicode_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 98;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_1 = PyObject_Unicode( tmp_unicode_arg_1 );
                Py_DECREF( tmp_unicode_arg_1 );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 98;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_make_exception_arg_3 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_make_exception_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 98;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_be970f17ac5f578348a430352155ca6c->m_frame.f_lineno = 97;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2, tmp_make_exception_arg_3 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS2( PyExc_Exception, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_3 );
                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 97;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_8;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_kw_name_1;
            tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_6 != NULL );
            CHECK_OBJECT( var_A_explicit );
            tmp_args_element_name_6 = var_A_explicit;
            frame_be970f17ac5f578348a430352155ca6c->m_frame.f_lineno = 99;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_source_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            if ( tmp_source_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_sum );
            Py_DECREF( tmp_source_name_8 );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
            frame_be970f17ac5f578348a430352155ca6c->m_frame.f_lineno = 99;
            tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_col_abs_sums == NULL );
            var_col_abs_sums = tmp_assign_source_4;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_9;
            PyObject *tmp_tuple_element_2;
            CHECK_OBJECT( var_col_abs_sums );
            tmp_source_name_9 = var_col_abs_sums;
            tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_n );
            tmp_tuple_element_2 = var_n;
            tmp_compexpr_right_4 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_compexpr_right_4, 0, tmp_tuple_element_2 );
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_1 = "ooooooooooooooo";
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
                PyObject *tmp_make_exception_arg_4;
                PyObject *tmp_make_exception_arg_5;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_unicode_arg_2;
                PyObject *tmp_source_name_10;
                tmp_make_exception_arg_4 = const_str_digest_f50609ec92302b25d21a5bcd20338821;
                tmp_left_name_2 = const_str_digest_c7dd2cdc2252b65c0135df69020d610b;
                CHECK_OBJECT( var_col_abs_sums );
                tmp_source_name_10 = var_col_abs_sums;
                tmp_unicode_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
                if ( tmp_unicode_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 102;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_2 = PyObject_Unicode( tmp_unicode_arg_2 );
                Py_DECREF( tmp_unicode_arg_2 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 102;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_make_exception_arg_5 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_make_exception_arg_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 102;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_be970f17ac5f578348a430352155ca6c->m_frame.f_lineno = 101;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_4, tmp_make_exception_arg_5 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS2( PyExc_Exception, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_5 );
                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 101;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 103;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_5;
            CHECK_OBJECT( var_col_abs_sums );
            tmp_args_element_name_7 = var_col_abs_sums;
            frame_be970f17ac5f578348a430352155ca6c->m_frame.f_lineno = 103;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_argmax, call_args );
            }

            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_argmax_j == NULL );
            var_argmax_j = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_elementary_vector );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_elementary_vector );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "elementary_vector" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 104;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_6;
            CHECK_OBJECT( var_n );
            tmp_args_element_name_8 = var_n;
            CHECK_OBJECT( var_argmax_j );
            tmp_args_element_name_9 = var_argmax_j;
            frame_be970f17ac5f578348a430352155ca6c->m_frame.f_lineno = 104;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_v == NULL );
            var_v = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_tuple_element_3;
            CHECK_OBJECT( var_A_explicit );
            tmp_subscribed_name_4 = var_A_explicit;
            tmp_tuple_element_3 = const_slice_none_none_none;
            tmp_subscript_name_4 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_subscript_name_4, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_argmax_j );
            tmp_tuple_element_3 = var_argmax_j;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_subscript_name_4, 1, tmp_tuple_element_3 );
            tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_w == NULL );
            var_w = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( var_col_abs_sums );
            tmp_subscribed_name_5 = var_col_abs_sums;
            CHECK_OBJECT( var_argmax_j );
            tmp_subscript_name_5 = var_argmax_j;
            tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_est == NULL );
            var_est = tmp_assign_source_8;
        }
        goto branch_end_2;
        branch_no_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_source_name_11;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain__onenormest_core );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__onenormest_core );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_onenormest_core" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 108;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_8 = tmp_mvar_value_7;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_10 = par_A;
            CHECK_OBJECT( par_A );
            tmp_source_name_11 = par_A;
            tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_H );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_t );
            tmp_args_element_name_12 = par_t;
            CHECK_OBJECT( par_itmax );
            tmp_args_element_name_13 = par_itmax;
            frame_be970f17ac5f578348a430352155ca6c->m_frame.f_lineno = 108;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_1, 0, 5 );
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


                type_description_1 = "ooooooooooooooo";
                exception_lineno = 108;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 1, 5 );
            if ( tmp_assign_source_11 == NULL )
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
                exception_lineno = 108;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_3, 2, 5 );
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


                type_description_1 = "ooooooooooooooo";
                exception_lineno = 108;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_3 == NULL );
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_4, 3, 5 );
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


                type_description_1 = "ooooooooooooooo";
                exception_lineno = 108;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_4 == NULL );
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_5, 4, 5 );
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


                type_description_1 = "ooooooooooooooo";
                exception_lineno = 108;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_5 == NULL );
            tmp_tuple_unpack_1__element_5 = tmp_assign_source_14;
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
                        exception_lineno = 108;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooooo";
                exception_lineno = 108;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_5 );
        tmp_tuple_unpack_1__element_5 = NULL;

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
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_15 = tmp_tuple_unpack_1__element_1;
            assert( var_est == NULL );
            Py_INCREF( tmp_assign_source_15 );
            var_est = tmp_assign_source_15;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_16 = tmp_tuple_unpack_1__element_2;
            assert( var_v == NULL );
            Py_INCREF( tmp_assign_source_16 );
            var_v = tmp_assign_source_16;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
            tmp_assign_source_17 = tmp_tuple_unpack_1__element_3;
            assert( var_w == NULL );
            Py_INCREF( tmp_assign_source_17 );
            var_w = tmp_assign_source_17;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
            tmp_assign_source_18 = tmp_tuple_unpack_1__element_4;
            assert( var_nmults == NULL );
            Py_INCREF( tmp_assign_source_18 );
            var_nmults = tmp_assign_source_18;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_4 );
        tmp_tuple_unpack_1__element_4 = NULL;

        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
            tmp_assign_source_19 = tmp_tuple_unpack_1__element_5;
            assert( var_nresamples == NULL );
            Py_INCREF( tmp_assign_source_19 );
            var_nresamples = tmp_assign_source_19;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_5 );
        tmp_tuple_unpack_1__element_5 = NULL;

        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_compute_v );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_compute_v );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_compute_w );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_compute_w );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_tuple_element_4;
            CHECK_OBJECT( var_est );
            tmp_tuple_element_4 = var_est;
            tmp_assign_source_20 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_assign_source_20, 0, tmp_tuple_element_4 );
            assert( var_result == NULL );
            var_result = tmp_assign_source_20;
        }
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_truth_name_3;
            CHECK_OBJECT( par_compute_v );
            tmp_truth_name_3 = CHECK_IF_TRUE( par_compute_v );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 113;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_21;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_5;
                CHECK_OBJECT( var_result );
                tmp_left_name_3 = var_result;
                CHECK_OBJECT( var_v );
                tmp_tuple_element_5 = var_v;
                tmp_right_name_3 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_5 );
                tmp_result = BINARY_OPERATION_ADD_TUPLE_TUPLE_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_21 = tmp_left_name_3;
                var_result = tmp_assign_source_21;

            }
            branch_no_6:;
        }
        {
            nuitka_bool tmp_condition_result_7;
            int tmp_truth_name_4;
            CHECK_OBJECT( par_compute_w );
            tmp_truth_name_4 = CHECK_IF_TRUE( par_compute_w );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 115;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_7 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_22;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_6;
                CHECK_OBJECT( var_result );
                tmp_left_name_4 = var_result;
                CHECK_OBJECT( var_w );
                tmp_tuple_element_6 = var_w;
                tmp_right_name_4 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_6 );
                tmp_result = BINARY_OPERATION_ADD_OBJECT_TUPLE_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 116;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_22 = tmp_left_name_4;
                var_result = tmp_assign_source_22;

            }
            branch_no_7:;
        }
        if ( var_result == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = var_result;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_5;
        branch_no_5:;
        CHECK_OBJECT( var_est );
        tmp_return_value = var_est;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be970f17ac5f578348a430352155ca6c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_be970f17ac5f578348a430352155ca6c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be970f17ac5f578348a430352155ca6c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be970f17ac5f578348a430352155ca6c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be970f17ac5f578348a430352155ca6c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be970f17ac5f578348a430352155ca6c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be970f17ac5f578348a430352155ca6c,
        type_description_1,
        par_A,
        par_t,
        par_itmax,
        par_compute_v,
        par_compute_w,
        var_n,
        var_A_explicit,
        var_col_abs_sums,
        var_argmax_j,
        var_v,
        var_w,
        var_est,
        var_nmults,
        var_nresamples,
        var_result
    );


    // Release cached frame.
    if ( frame_be970f17ac5f578348a430352155ca6c == cache_frame_be970f17ac5f578348a430352155ca6c )
    {
        Py_DECREF( frame_be970f17ac5f578348a430352155ca6c );
    }
    cache_frame_be970f17ac5f578348a430352155ca6c = NULL;

    assertFrameObject( frame_be970f17ac5f578348a430352155ca6c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_1_onenormest );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

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

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_A_explicit );
    var_A_explicit = NULL;

    Py_XDECREF( var_col_abs_sums );
    var_col_abs_sums = NULL;

    Py_XDECREF( var_argmax_j );
    var_argmax_j = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

    CHECK_OBJECT( (PyObject *)var_est );
    Py_DECREF( var_est );
    var_est = NULL;

    Py_XDECREF( var_nmults );
    var_nmults = NULL;

    Py_XDECREF( var_nresamples );
    var_nresamples = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_A_explicit );
    var_A_explicit = NULL;

    Py_XDECREF( var_col_abs_sums );
    var_col_abs_sums = NULL;

    Py_XDECREF( var_argmax_j );
    var_argmax_j = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_est );
    var_est = NULL;

    Py_XDECREF( var_nmults );
    var_nmults = NULL;

    Py_XDECREF( var_nresamples );
    var_nresamples = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_1_onenormest );
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


static PyObject *impl_scipy$sparse$linalg$_onenormest$$$function_2__blocked_elementwise( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *var_block_size = PyCell_EMPTY();
    PyObject *var_wrapper = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_pos_1048576;
        assert( PyCell_GET( var_block_size ) == NULL );
        Py_INCREF( tmp_assign_source_1 );
        PyCell_SET( var_block_size, tmp_assign_source_1 );

    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_2__blocked_elementwise$$$function_1_wrapper(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] = var_block_size;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] = par_func;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] );


        assert( var_wrapper == NULL );
        var_wrapper = tmp_assign_source_2;
    }
    // Tried code:
    CHECK_OBJECT( var_wrapper );
    tmp_return_value = var_wrapper;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_2__blocked_elementwise );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)var_block_size );
    Py_DECREF( var_block_size );
    var_block_size = NULL;

    CHECK_OBJECT( (PyObject *)var_wrapper );
    Py_DECREF( var_wrapper );
    var_wrapper = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_2__blocked_elementwise );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$sparse$linalg$_onenormest$$$function_2__blocked_elementwise$$$function_1_wrapper( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_y0 = NULL;
    PyObject *var_y = NULL;
    PyObject *var_j = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_0826ddfc22198c83dc231214c60aa9c6;
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
    static struct Nuitka_FrameObject *cache_frame_0826ddfc22198c83dc231214c60aa9c6 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0826ddfc22198c83dc231214c60aa9c6, codeobj_0826ddfc22198c83dc231214c60aa9c6, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0826ddfc22198c83dc231214c60aa9c6 = cache_frame_0826ddfc22198c83dc231214c60aa9c6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0826ddfc22198c83dc231214c60aa9c6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0826ddfc22198c83dc231214c60aa9c6 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_x );
        tmp_source_name_1 = par_x;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "block_size" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = PyCell_GET( self->m_closure[0] );
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oooocc";
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
            PyObject *tmp_args_element_name_1;
            if ( PyCell_GET( self->m_closure[1] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 131;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = PyCell_GET( self->m_closure[1] );
            CHECK_OBJECT( par_x );
            tmp_args_element_name_1 = par_x;
            frame_0826ddfc22198c83dc231214c60aa9c6->m_frame.f_lineno = 131;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            if ( PyCell_GET( self->m_closure[1] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 133;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = PyCell_GET( self->m_closure[1] );
            CHECK_OBJECT( par_x );
            tmp_subscribed_name_2 = par_x;
            tmp_start_name_1 = Py_None;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "block_size" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 133;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }

            tmp_stop_name_1 = PyCell_GET( self->m_closure[0] );
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            assert( !(tmp_subscript_name_2 == NULL) );
            tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 133;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            frame_0826ddfc22198c83dc231214c60aa9c6->m_frame.f_lineno = 133;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 133;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            assert( var_y0 == NULL );
            var_y0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_right_name_1;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_5;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 134;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_zeros );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_x );
            tmp_source_name_3 = par_x;
            tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
            if ( tmp_subscribed_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 134;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_3 = const_int_0;
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            Py_DECREF( tmp_subscribed_name_3 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 134;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_left_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_y0 );
            tmp_source_name_4 = var_y0;
            tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
            if ( tmp_subscribed_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 134;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_4 = const_slice_int_pos_1_none_none;
            tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscribed_name_4 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 134;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 134;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_dtype;
            CHECK_OBJECT( var_y0 );
            tmp_source_name_5 = var_y0;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 134;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_0826ddfc22198c83dc231214c60aa9c6->m_frame.f_lineno = 134;
            tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            assert( var_y == NULL );
            var_y = tmp_assign_source_2;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            CHECK_OBJECT( var_y0 );
            tmp_ass_subvalue_1 = var_y0;
            CHECK_OBJECT( var_y );
            tmp_ass_subscribed_1 = var_y;
            tmp_start_name_2 = Py_None;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "block_size" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 135;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }

            tmp_stop_name_2 = PyCell_GET( self->m_closure[0] );
            tmp_step_name_2 = Py_None;
            tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            assert( !(tmp_ass_subscript_1 == NULL) );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
        }
        CHECK_OBJECT( var_y0 );
        Py_DECREF( var_y0 );
        var_y0 = NULL;

        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_xrange_high_1;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_xrange_step_1;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "block_size" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 137;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }

            tmp_xrange_low_1 = PyCell_GET( self->m_closure[0] );
            CHECK_OBJECT( par_x );
            tmp_source_name_6 = par_x;
            tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_subscribed_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_5 = const_int_0;
            tmp_xrange_high_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
            Py_DECREF( tmp_subscribed_name_5 );
            if ( tmp_xrange_high_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {
                Py_DECREF( tmp_xrange_high_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "block_size" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 137;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }

            tmp_xrange_step_1 = PyCell_GET( self->m_closure[0] );
            tmp_iter_arg_1 = BUILTIN_XRANGE3( tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1 );
            Py_DECREF( tmp_xrange_high_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "oooocc";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "oooocc";
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
                    type_description_1 = "oooocc";
                    exception_lineno = 137;
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
                PyObject *old = var_j;
                var_j = tmp_assign_source_5;
                Py_INCREF( var_j );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_start_name_3;
            PyObject *tmp_stop_name_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_step_name_3;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_start_name_4;
            PyObject *tmp_stop_name_4;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_step_name_4;
            if ( PyCell_GET( self->m_closure[1] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 138;
                type_description_1 = "oooocc";
                goto try_except_handler_2;
            }

            tmp_called_name_4 = PyCell_GET( self->m_closure[1] );
            CHECK_OBJECT( par_x );
            tmp_subscribed_name_6 = par_x;
            CHECK_OBJECT( var_j );
            tmp_start_name_3 = var_j;
            CHECK_OBJECT( var_j );
            tmp_left_name_2 = var_j;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "block_size" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 138;
                type_description_1 = "oooocc";
                goto try_except_handler_2;
            }

            tmp_right_name_2 = PyCell_GET( self->m_closure[0] );
            tmp_stop_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_stop_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "oooocc";
                goto try_except_handler_2;
            }
            tmp_step_name_3 = Py_None;
            tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
            Py_DECREF( tmp_stop_name_3 );
            assert( !(tmp_subscript_name_6 == NULL) );
            tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            Py_DECREF( tmp_subscript_name_6 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "oooocc";
                goto try_except_handler_2;
            }
            frame_0826ddfc22198c83dc231214c60aa9c6->m_frame.f_lineno = 138;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "oooocc";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_y );
            tmp_ass_subscribed_2 = var_y;
            CHECK_OBJECT( var_j );
            tmp_start_name_4 = var_j;
            CHECK_OBJECT( var_j );
            tmp_left_name_3 = var_j;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "block_size" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 138;
                type_description_1 = "oooocc";
                goto try_except_handler_2;
            }

            tmp_right_name_3 = PyCell_GET( self->m_closure[0] );
            tmp_stop_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_stop_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 138;
                type_description_1 = "oooocc";
                goto try_except_handler_2;
            }
            tmp_step_name_4 = Py_None;
            tmp_ass_subscript_2 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
            Py_DECREF( tmp_stop_name_4 );
            assert( !(tmp_ass_subscript_2 == NULL) );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "oooocc";
                goto try_except_handler_2;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooocc";
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

        CHECK_OBJECT( var_y );
        tmp_return_value = var_y;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0826ddfc22198c83dc231214c60aa9c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0826ddfc22198c83dc231214c60aa9c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0826ddfc22198c83dc231214c60aa9c6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0826ddfc22198c83dc231214c60aa9c6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0826ddfc22198c83dc231214c60aa9c6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0826ddfc22198c83dc231214c60aa9c6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0826ddfc22198c83dc231214c60aa9c6,
        type_description_1,
        par_x,
        var_y0,
        var_y,
        var_j,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_0826ddfc22198c83dc231214c60aa9c6 == cache_frame_0826ddfc22198c83dc231214c60aa9c6 )
    {
        Py_DECREF( frame_0826ddfc22198c83dc231214c60aa9c6 );
    }
    cache_frame_0826ddfc22198c83dc231214c60aa9c6 = NULL;

    assertFrameObject( frame_0826ddfc22198c83dc231214c60aa9c6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_2__blocked_elementwise$$$function_1_wrapper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_y0 );
    var_y0 = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_y0 );
    var_y0 = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_2__blocked_elementwise$$$function_1_wrapper );
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


static PyObject *impl_scipy$sparse$linalg$_onenormest$$$function_3_sign_round_up( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_X = python_pars[ 0 ];
    PyObject *var_Y = NULL;
    struct Nuitka_FrameObject *frame_1e4c9af7c790f58f7a23963787acc0f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1e4c9af7c790f58f7a23963787acc0f8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1e4c9af7c790f58f7a23963787acc0f8, codeobj_1e4c9af7c790f58f7a23963787acc0f8, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *) );
    frame_1e4c9af7c790f58f7a23963787acc0f8 = cache_frame_1e4c9af7c790f58f7a23963787acc0f8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1e4c9af7c790f58f7a23963787acc0f8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1e4c9af7c790f58f7a23963787acc0f8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_X );
        tmp_called_instance_1 = par_X;
        frame_1e4c9af7c790f58f7a23963787acc0f8->m_frame.f_lineno = 154;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_Y == NULL );
        var_Y = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_ass_subvalue_1 = const_int_pos_1;
        CHECK_OBJECT( var_Y );
        tmp_ass_subscribed_1 = var_Y;
        CHECK_OBJECT( var_Y );
        tmp_compexpr_left_1 = var_Y;
        tmp_compexpr_right_1 = const_int_0;
        tmp_ass_subscript_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_Y );
        tmp_left_name_1 = var_Y;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_Y );
        tmp_args_element_name_1 = var_Y;
        frame_1e4c9af7c790f58f7a23963787acc0f8->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_abs, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_left_name_1;
        var_Y = tmp_assign_source_2;

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e4c9af7c790f58f7a23963787acc0f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e4c9af7c790f58f7a23963787acc0f8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1e4c9af7c790f58f7a23963787acc0f8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1e4c9af7c790f58f7a23963787acc0f8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1e4c9af7c790f58f7a23963787acc0f8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1e4c9af7c790f58f7a23963787acc0f8,
        type_description_1,
        par_X,
        var_Y
    );


    // Release cached frame.
    if ( frame_1e4c9af7c790f58f7a23963787acc0f8 == cache_frame_1e4c9af7c790f58f7a23963787acc0f8 )
    {
        Py_DECREF( frame_1e4c9af7c790f58f7a23963787acc0f8 );
    }
    cache_frame_1e4c9af7c790f58f7a23963787acc0f8 = NULL;

    assertFrameObject( frame_1e4c9af7c790f58f7a23963787acc0f8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_Y );
    tmp_return_value = var_Y;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_3_sign_round_up );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    CHECK_OBJECT( (PyObject *)var_Y );
    Py_DECREF( var_Y );
    var_Y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    Py_XDECREF( var_Y );
    var_Y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_3_sign_round_up );
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


static PyObject *impl_scipy$sparse$linalg$_onenormest$$$function_4__max_abs_axis1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_X = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_24866a1398305119109fb858b422e00d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_24866a1398305119109fb858b422e00d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_24866a1398305119109fb858b422e00d, codeobj_24866a1398305119109fb858b422e00d, module_scipy$sparse$linalg$_onenormest, sizeof(void *) );
    frame_24866a1398305119109fb858b422e00d = cache_frame_24866a1398305119109fb858b422e00d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_24866a1398305119109fb858b422e00d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_24866a1398305119109fb858b422e00d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_max );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_X );
        tmp_args_element_name_1 = par_X;
        frame_24866a1398305119109fb858b422e00d->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abs, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c4b01644824ba6bad132707fcdaa03f1 );
        frame_24866a1398305119109fb858b422e00d->m_frame.f_lineno = 162;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_24866a1398305119109fb858b422e00d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_24866a1398305119109fb858b422e00d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_24866a1398305119109fb858b422e00d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_24866a1398305119109fb858b422e00d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_24866a1398305119109fb858b422e00d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_24866a1398305119109fb858b422e00d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_24866a1398305119109fb858b422e00d,
        type_description_1,
        par_X
    );


    // Release cached frame.
    if ( frame_24866a1398305119109fb858b422e00d == cache_frame_24866a1398305119109fb858b422e00d )
    {
        Py_DECREF( frame_24866a1398305119109fb858b422e00d );
    }
    cache_frame_24866a1398305119109fb858b422e00d = NULL;

    assertFrameObject( frame_24866a1398305119109fb858b422e00d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_4__max_abs_axis1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

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

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_4__max_abs_axis1 );
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


static PyObject *impl_scipy$sparse$linalg$_onenormest$$$function_5__sum_abs_axis0( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_X = python_pars[ 0 ];
    PyObject *var_r = NULL;
    PyObject *var_j = NULL;
    PyObject *var_y = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_a050b3b2021982aabaeaba4cb0ea4db8;
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
    static struct Nuitka_FrameObject *cache_frame_a050b3b2021982aabaeaba4cb0ea4db8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert( var_r == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_r = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a050b3b2021982aabaeaba4cb0ea4db8, codeobj_a050b3b2021982aabaeaba4cb0ea4db8, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a050b3b2021982aabaeaba4cb0ea4db8 = cache_frame_a050b3b2021982aabaeaba4cb0ea4db8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a050b3b2021982aabaeaba4cb0ea4db8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a050b3b2021982aabaeaba4cb0ea4db8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_xrange_step_1;
        tmp_xrange_low_1 = const_int_0;
        CHECK_OBJECT( par_X );
        tmp_source_name_1 = par_X;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oNooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_xrange_high_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_xrange_high_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oNooo";
            goto frame_exception_exit_1;
        }
        tmp_xrange_step_1 = const_int_pos_1048576;
        tmp_iter_arg_1 = BUILTIN_XRANGE3( tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1 );
        Py_DECREF( tmp_xrange_high_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oNooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oNooo";
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
                type_description_1 = "oNooo";
                exception_lineno = 168;
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
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 169;
            type_description_1 = "oNooo";
            goto try_except_handler_2;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sum );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oNooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 169;
            type_description_1 = "oNooo";
            goto try_except_handler_2;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_abs );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 169;
            type_description_1 = "oNooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_X );
        tmp_subscribed_name_2 = par_X;
        CHECK_OBJECT( var_j );
        tmp_start_name_1 = var_j;
        CHECK_OBJECT( var_j );
        tmp_left_name_1 = var_j;
        tmp_right_name_1 = const_int_pos_1048576;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 169;
            type_description_1 = "oNooo";
            goto try_except_handler_2;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 169;
            type_description_1 = "oNooo";
            goto try_except_handler_2;
        }
        frame_a050b3b2021982aabaeaba4cb0ea4db8->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 169;
            type_description_1 = "oNooo";
            goto try_except_handler_2;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
        frame_a050b3b2021982aabaeaba4cb0ea4db8->m_frame.f_lineno = 169;
        tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oNooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_r );
        tmp_compexpr_left_1 = var_r;
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
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( var_y );
            tmp_assign_source_6 = var_y;
            {
                PyObject *old = var_r;
                assert( old != NULL );
                var_r = tmp_assign_source_6;
                Py_INCREF( var_r );
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( var_r );
            tmp_left_name_2 = var_r;
            CHECK_OBJECT( var_y );
            tmp_right_name_2 = var_y;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "oNooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_7 = tmp_left_name_2;
            var_r = tmp_assign_source_7;

        }
        branch_end_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oNooo";
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
    RESTORE_FRAME_EXCEPTION( frame_a050b3b2021982aabaeaba4cb0ea4db8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a050b3b2021982aabaeaba4cb0ea4db8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a050b3b2021982aabaeaba4cb0ea4db8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a050b3b2021982aabaeaba4cb0ea4db8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a050b3b2021982aabaeaba4cb0ea4db8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a050b3b2021982aabaeaba4cb0ea4db8,
        type_description_1,
        par_X,
        NULL,
        var_r,
        var_j,
        var_y
    );


    // Release cached frame.
    if ( frame_a050b3b2021982aabaeaba4cb0ea4db8 == cache_frame_a050b3b2021982aabaeaba4cb0ea4db8 )
    {
        Py_DECREF( frame_a050b3b2021982aabaeaba4cb0ea4db8 );
    }
    cache_frame_a050b3b2021982aabaeaba4cb0ea4db8 = NULL;

    assertFrameObject( frame_a050b3b2021982aabaeaba4cb0ea4db8 );

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
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_5__sum_abs_axis0 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_5__sum_abs_axis0 );
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


static PyObject *impl_scipy$sparse$linalg$_onenormest$$$function_6_elementary_vector( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_i = python_pars[ 1 ];
    PyObject *var_v = NULL;
    struct Nuitka_FrameObject *frame_867ca7edbbb701f2c69e5a9270058827;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_867ca7edbbb701f2c69e5a9270058827 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_867ca7edbbb701f2c69e5a9270058827, codeobj_867ca7edbbb701f2c69e5a9270058827, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_867ca7edbbb701f2c69e5a9270058827 = cache_frame_867ca7edbbb701f2c69e5a9270058827;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_867ca7edbbb701f2c69e5a9270058827 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_867ca7edbbb701f2c69e5a9270058827 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 178;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_tuple_element_1 = par_n;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
        frame_867ca7edbbb701f2c69e5a9270058827->m_frame.f_lineno = 178;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = const_int_pos_1;
        CHECK_OBJECT( var_v );
        tmp_ass_subscribed_1 = var_v;
        CHECK_OBJECT( par_i );
        tmp_ass_subscript_1 = par_i;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_867ca7edbbb701f2c69e5a9270058827 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_867ca7edbbb701f2c69e5a9270058827 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_867ca7edbbb701f2c69e5a9270058827, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_867ca7edbbb701f2c69e5a9270058827->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_867ca7edbbb701f2c69e5a9270058827, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_867ca7edbbb701f2c69e5a9270058827,
        type_description_1,
        par_n,
        par_i,
        var_v
    );


    // Release cached frame.
    if ( frame_867ca7edbbb701f2c69e5a9270058827 == cache_frame_867ca7edbbb701f2c69e5a9270058827 )
    {
        Py_DECREF( frame_867ca7edbbb701f2c69e5a9270058827 );
    }
    cache_frame_867ca7edbbb701f2c69e5a9270058827 = NULL;

    assertFrameObject( frame_867ca7edbbb701f2c69e5a9270058827 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_v );
    tmp_return_value = var_v;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_6_elementary_vector );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_6_elementary_vector );
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


static PyObject *impl_scipy$sparse$linalg$_onenormest$$$function_7_vectors_are_parallel( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
    PyObject *par_w = python_pars[ 1 ];
    PyObject *var_n = NULL;
    struct Nuitka_FrameObject *frame_262457daf3a3942434fd8e996d31e1f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_262457daf3a3942434fd8e996d31e1f9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_262457daf3a3942434fd8e996d31e1f9, codeobj_262457daf3a3942434fd8e996d31e1f9, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_262457daf3a3942434fd8e996d31e1f9 = cache_frame_262457daf3a3942434fd8e996d31e1f9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_262457daf3a3942434fd8e996d31e1f9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_262457daf3a3942434fd8e996d31e1f9 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_v );
        tmp_source_name_1 = par_v;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
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
        CHECK_OBJECT( par_v );
        tmp_source_name_2 = par_v;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_w );
        tmp_source_name_3 = par_w;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 187;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooo";
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
            tmp_make_exception_arg_1 = const_str_digest_fd9973afe1ca1019181823c8a691adaf;
            frame_262457daf3a3942434fd8e996d31e1f9->m_frame.f_lineno = 188;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 188;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_v );
        tmp_source_name_4 = par_v;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_1;
    }
    {
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 190;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_v );
        tmp_args_element_name_1 = par_v;
        CHECK_OBJECT( par_w );
        tmp_args_element_name_2 = par_w;
        frame_262457daf3a3942434fd8e996d31e1f9->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_compexpr_left_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_compexpr_right_3 = var_n;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_262457daf3a3942434fd8e996d31e1f9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_262457daf3a3942434fd8e996d31e1f9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_262457daf3a3942434fd8e996d31e1f9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_262457daf3a3942434fd8e996d31e1f9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_262457daf3a3942434fd8e996d31e1f9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_262457daf3a3942434fd8e996d31e1f9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_262457daf3a3942434fd8e996d31e1f9,
        type_description_1,
        par_v,
        par_w,
        var_n
    );


    // Release cached frame.
    if ( frame_262457daf3a3942434fd8e996d31e1f9 == cache_frame_262457daf3a3942434fd8e996d31e1f9 )
    {
        Py_DECREF( frame_262457daf3a3942434fd8e996d31e1f9 );
    }
    cache_frame_262457daf3a3942434fd8e996d31e1f9 = NULL;

    assertFrameObject( frame_262457daf3a3942434fd8e996d31e1f9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_7_vectors_are_parallel );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)par_w );
    Py_DECREF( par_w );
    par_w = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)par_w );
    Py_DECREF( par_w );
    par_w = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_7_vectors_are_parallel );
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


static PyObject *impl_scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_X = python_pars[ 0 ];
    PyObject *par_Y = python_pars[ 1 ];
    struct Nuitka_CellObject *var_v = PyCell_EMPTY();
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_9c88a887d71a6cf55049f46c370d7d71;
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
    static struct Nuitka_FrameObject *cache_frame_9c88a887d71a6cf55049f46c370d7d71 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9c88a887d71a6cf55049f46c370d7d71, codeobj_9c88a887d71a6cf55049f46c370d7d71, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9c88a887d71a6cf55049f46c370d7d71 = cache_frame_9c88a887d71a6cf55049f46c370d7d71;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9c88a887d71a6cf55049f46c370d7d71 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9c88a887d71a6cf55049f46c370d7d71 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_X );
        tmp_source_name_1 = par_X;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_T );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "ooc";
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
                type_description_1 = "ooc";
                exception_lineno = 194;
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
            PyObject *old = PyCell_GET( var_v );
            PyCell_SET( var_v, tmp_assign_source_3 );
            Py_INCREF( tmp_assign_source_3 );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_any );
        assert( tmp_called_name_1 != NULL );
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_Y );
            tmp_source_name_2 = par_Y;
            tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ooc";
                goto try_except_handler_2;
            }
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ooc";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_genexpr_1__$0;
                tmp_genexpr_1__$0 = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        tmp_args_element_name_1 = scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[1] = var_v;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[1] );


        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y );
        return NULL;
        outline_result_1:;
        frame_9c88a887d71a6cf55049f46c370d7d71->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "ooc";
            goto try_except_handler_2;
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_2;
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "ooc";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c88a887d71a6cf55049f46c370d7d71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c88a887d71a6cf55049f46c370d7d71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c88a887d71a6cf55049f46c370d7d71 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9c88a887d71a6cf55049f46c370d7d71, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9c88a887d71a6cf55049f46c370d7d71->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9c88a887d71a6cf55049f46c370d7d71, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9c88a887d71a6cf55049f46c370d7d71,
        type_description_1,
        par_X,
        par_Y,
        var_v
    );


    // Release cached frame.
    if ( frame_9c88a887d71a6cf55049f46c370d7d71 == cache_frame_9c88a887d71a6cf55049f46c370d7d71 )
    {
        Py_DECREF( frame_9c88a887d71a6cf55049f46c370d7d71 );
    }
    cache_frame_9c88a887d71a6cf55049f46c370d7d71 = NULL;

    assertFrameObject( frame_9c88a887d71a6cf55049f46c370d7d71 );

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

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    CHECK_OBJECT( (PyObject *)par_Y );
    Py_DECREF( par_Y );
    par_Y = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
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

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    CHECK_OBJECT( (PyObject *)par_Y );
    Py_DECREF( par_Y );
    par_Y = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y );
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



struct scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y$$$genexpr_1_genexpr_locals {
    PyObject *var_w;
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

static PyObject *scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y$$$genexpr_1_genexpr_locals *generator_heap = (struct scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_w = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_17ed5ea23575b343a9ca0e5614274e00, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 195;
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
            PyObject *old = generator_heap->var_w;
            generator_heap->var_w = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_w );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_vectors_are_parallel );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_vectors_are_parallel );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "vectors_are_parallel" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "v" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[1] );
        CHECK_OBJECT( generator_heap->var_w );
        tmp_args_element_name_2 = generator_heap->var_w;
        generator->m_frame->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 195;
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
            generator_heap->var_w,
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

    Py_XDECREF( generator_heap->var_w );
    generator_heap->var_w = NULL;

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

    Py_XDECREF( generator_heap->var_w );
    generator_heap->var_w = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y$$$genexpr_1_genexpr_context,
        module_scipy$sparse$linalg$_onenormest,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_e25d03af2834fb7be80f1fbc39a5b6e2,
#endif
        codeobj_17ed5ea23575b343a9ca0e5614274e00,
        2,
        sizeof(struct scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    struct Nuitka_CellObject *par_X = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_Y = python_pars[ 2 ];
    PyObject *var_n = NULL;
    PyObject *var_t = NULL;
    struct Nuitka_CellObject *var_v = PyCell_EMPTY();
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a924bf2d6e91fd909b4656c41dc7c1ba;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a924bf2d6e91fd909b4656c41dc7c1ba = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a924bf2d6e91fd909b4656c41dc7c1ba, codeobj_a924bf2d6e91fd909b4656c41dc7c1ba, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a924bf2d6e91fd909b4656c41dc7c1ba = cache_frame_a924bf2d6e91fd909b4656c41dc7c1ba;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a924bf2d6e91fd909b4656c41dc7c1ba );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a924bf2d6e91fd909b4656c41dc7c1ba ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( PyCell_GET( par_X ) );
        tmp_source_name_1 = PyCell_GET( par_X );
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ocoooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ocoooc";
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


            type_description_1 = "ocoooc";
            exception_lineno = 204;
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


            type_description_1 = "ocoooc";
            exception_lineno = 204;
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

                    type_description_1 = "ocoooc";
                    exception_lineno = 204;
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

            type_description_1 = "ocoooc";
            exception_lineno = 204;
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
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_n = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_t == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_t = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( PyCell_GET( par_X ) );
        tmp_subscribed_name_1 = PyCell_GET( par_X );
        tmp_tuple_element_1 = const_slice_none_none_none;
        tmp_subscript_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_i );
        tmp_tuple_element_1 = par_i;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ocoooc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_v ) == NULL );
        PyCell_SET( var_v, tmp_assign_source_6 );

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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_xrange_low_1;
            CHECK_OBJECT( par_i );
            tmp_xrange_low_1 = par_i;
            tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "ocoooc";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "ocoooc";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_7;
        }
        // Tried code:
        tmp_args_element_name_1 = scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[0] = par_X;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[0] );
        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[1] = PyCell_NEW0( tmp_genexpr_1__$0 );
        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[2] = var_v;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[2] );


        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling );
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
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling );
        return NULL;
        outline_result_1:;
        frame_a924bf2d6e91fd909b4656c41dc7c1ba->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ocoooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 206;
            type_description_1 = "ocoooc";
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
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_Y );
        tmp_compexpr_left_1 = par_Y;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            int tmp_truth_name_2;
            tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_any );
            assert( tmp_called_name_2 != NULL );
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_iter_arg_3;
                PyObject *tmp_source_name_2;
                CHECK_OBJECT( par_Y );
                tmp_source_name_2 = par_Y;
                tmp_iter_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
                if ( tmp_iter_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 209;
                    type_description_1 = "ocoooc";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_3 );
                Py_DECREF( tmp_iter_arg_3 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 209;
                    type_description_1 = "ocoooc";
                    goto frame_exception_exit_1;
                }
                assert( tmp_genexpr_2__$0 == NULL );
                tmp_genexpr_2__$0 = tmp_assign_source_8;
            }
            // Tried code:
            tmp_args_element_name_2 = scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_2_genexpr_maker();

            ((struct Nuitka_GeneratorObject *)tmp_args_element_name_2)->m_closure[0] = PyCell_NEW0( tmp_genexpr_2__$0 );
            ((struct Nuitka_GeneratorObject *)tmp_args_element_name_2)->m_closure[1] = var_v;
            Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_args_element_name_2)->m_closure[1] );


            goto try_return_handler_5;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling );
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
            NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling );
            return NULL;
            outline_result_2:;
            frame_a924bf2d6e91fd909b4656c41dc7c1ba->m_frame.f_lineno = 209;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "ocoooc";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 209;
                type_description_1 = "ocoooc";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            tmp_return_value = Py_True;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_3:;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a924bf2d6e91fd909b4656c41dc7c1ba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a924bf2d6e91fd909b4656c41dc7c1ba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a924bf2d6e91fd909b4656c41dc7c1ba );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a924bf2d6e91fd909b4656c41dc7c1ba, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a924bf2d6e91fd909b4656c41dc7c1ba->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a924bf2d6e91fd909b4656c41dc7c1ba, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a924bf2d6e91fd909b4656c41dc7c1ba,
        type_description_1,
        par_i,
        par_X,
        par_Y,
        var_n,
        var_t,
        var_v
    );


    // Release cached frame.
    if ( frame_a924bf2d6e91fd909b4656c41dc7c1ba == cache_frame_a924bf2d6e91fd909b4656c41dc7c1ba )
    {
        Py_DECREF( frame_a924bf2d6e91fd909b4656c41dc7c1ba );
    }
    cache_frame_a924bf2d6e91fd909b4656c41dc7c1ba = NULL;

    assertFrameObject( frame_a924bf2d6e91fd909b4656c41dc7c1ba );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    CHECK_OBJECT( (PyObject *)par_Y );
    Py_DECREF( par_Y );
    par_Y = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_t );
    Py_DECREF( var_t );
    var_t = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    CHECK_OBJECT( (PyObject *)par_Y );
    Py_DECREF( par_Y );
    par_Y = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling );
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



struct scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_1_genexpr_locals {
    PyObject *var_j;
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

static PyObject *scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_1_genexpr_locals *generator_heap = (struct scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_j = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_3b18b7ffaadcf4f0c067154d3b2dea11, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 206;
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
            PyObject *old = generator_heap->var_j;
            generator_heap->var_j = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_j );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_vectors_are_parallel );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_vectors_are_parallel );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "vectors_are_parallel" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 206;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( generator->m_closure[2] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "v" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 206;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[2] );
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "X" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 206;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_subscribed_name_1 = PyCell_GET( generator->m_closure[0] );
        tmp_tuple_element_1 = const_slice_none_none_none;
        tmp_subscript_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( generator_heap->var_j );
        tmp_tuple_element_1 = generator_heap->var_j;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_1 );
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 206;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 206;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), &tmp_subscribed_name_1, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), &tmp_subscribed_name_1, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 206;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 206;
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
            generator_heap->var_j,
            generator->m_closure[2],
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

    Py_XDECREF( generator_heap->var_j );
    generator_heap->var_j = NULL;

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

    Py_XDECREF( generator_heap->var_j );
    generator_heap->var_j = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_1_genexpr_context,
        module_scipy$sparse$linalg$_onenormest,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_e36b7e56b9ed1853fb82c22db6ab37b3,
#endif
        codeobj_3b18b7ffaadcf4f0c067154d3b2dea11,
        3,
        sizeof(struct scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_1_genexpr_locals)
    );
}



struct scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_2_genexpr_locals {
    PyObject *var_w;
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

static PyObject *scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_2_genexpr_locals *generator_heap = (struct scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_w = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_e10780fe4726b92a175ba1d5ba8c6bc5, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 209;
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
            PyObject *old = generator_heap->var_w;
            generator_heap->var_w = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_w );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_vectors_are_parallel );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_vectors_are_parallel );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "vectors_are_parallel" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 209;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "v" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 209;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[1] );
        CHECK_OBJECT( generator_heap->var_w );
        tmp_args_element_name_2 = generator_heap->var_w;
        generator->m_frame->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 209;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 209;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 209;
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
            generator_heap->var_w,
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

    Py_XDECREF( generator_heap->var_w );
    generator_heap->var_w = NULL;

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

    Py_XDECREF( generator_heap->var_w );
    generator_heap->var_w = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_2_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_2_genexpr_context,
        module_scipy$sparse$linalg$_onenormest,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_e36b7e56b9ed1853fb82c22db6ab37b3,
#endif
        codeobj_e10780fe4726b92a175ba1d5ba8c6bc5,
        2,
        sizeof(struct scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling$$$genexpr_2_genexpr_locals)
    );
}


static PyObject *impl_scipy$sparse$linalg$_onenormest$$$function_10_resample_column( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    PyObject *par_X = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_088a356556ff6776345895205cb994a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_088a356556ff6776345895205cb994a0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_088a356556ff6776345895205cb994a0, codeobj_088a356556ff6776345895205cb994a0, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *) );
    frame_088a356556ff6776345895205cb994a0 = cache_frame_088a356556ff6776345895205cb994a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_088a356556ff6776345895205cb994a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_088a356556ff6776345895205cb994a0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_random );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_randint );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = const_tuple_int_0_int_pos_2_tuple;
        tmp_dict_key_1 = const_str_plain_size;
        CHECK_OBJECT( par_X );
        tmp_source_name_3 = par_X;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_088a356556ff6776345895205cb994a0->m_frame.f_lineno = 215;
        tmp_left_name_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_2;
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_1;
        tmp_ass_subvalue_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_X );
        tmp_ass_subscribed_1 = par_X;
        tmp_tuple_element_1 = const_slice_none_none_none;
        tmp_ass_subscript_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_i );
        tmp_tuple_element_1 = par_i;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_1 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_088a356556ff6776345895205cb994a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_088a356556ff6776345895205cb994a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_088a356556ff6776345895205cb994a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_088a356556ff6776345895205cb994a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_088a356556ff6776345895205cb994a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_088a356556ff6776345895205cb994a0,
        type_description_1,
        par_i,
        par_X
    );


    // Release cached frame.
    if ( frame_088a356556ff6776345895205cb994a0 == cache_frame_088a356556ff6776345895205cb994a0 )
    {
        Py_DECREF( frame_088a356556ff6776345895205cb994a0 );
    }
    cache_frame_088a356556ff6776345895205cb994a0 = NULL;

    assertFrameObject( frame_088a356556ff6776345895205cb994a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_10_resample_column );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

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

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    CHECK_OBJECT( (PyObject *)par_X );
    Py_DECREF( par_X );
    par_X = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_10_resample_column );
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


static PyObject *impl_scipy$sparse$linalg$_onenormest$$$function_11_less_than_or_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a6e2363297358cdbcbaee6ac3b3f456b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a6e2363297358cdbcbaee6ac3b3f456b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a6e2363297358cdbcbaee6ac3b3f456b, codeobj_a6e2363297358cdbcbaee6ac3b3f456b, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *) );
    frame_a6e2363297358cdbcbaee6ac3b3f456b = cache_frame_a6e2363297358cdbcbaee6ac3b3f456b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a6e2363297358cdbcbaee6ac3b3f456b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a6e2363297358cdbcbaee6ac3b3f456b ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_2 = par_b;
        frame_a6e2363297358cdbcbaee6ac3b3f456b->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_allclose, call_args );
        }

        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 219;
            type_description_1 = "oo";
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
        CHECK_OBJECT( par_a );
        tmp_compexpr_left_1 = par_a;
        CHECK_OBJECT( par_b );
        tmp_compexpr_right_1 = par_b;
        tmp_or_right_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_or_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6e2363297358cdbcbaee6ac3b3f456b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6e2363297358cdbcbaee6ac3b3f456b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6e2363297358cdbcbaee6ac3b3f456b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a6e2363297358cdbcbaee6ac3b3f456b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a6e2363297358cdbcbaee6ac3b3f456b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a6e2363297358cdbcbaee6ac3b3f456b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a6e2363297358cdbcbaee6ac3b3f456b,
        type_description_1,
        par_a,
        par_b
    );


    // Release cached frame.
    if ( frame_a6e2363297358cdbcbaee6ac3b3f456b == cache_frame_a6e2363297358cdbcbaee6ac3b3f456b )
    {
        Py_DECREF( frame_a6e2363297358cdbcbaee6ac3b3f456b );
    }
    cache_frame_a6e2363297358cdbcbaee6ac3b3f456b = NULL;

    assertFrameObject( frame_a6e2363297358cdbcbaee6ac3b3f456b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_11_less_than_or_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

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

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_11_less_than_or_close );
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


static PyObject *impl_scipy$sparse$linalg$_onenormest$$$function_12__algorithm_2_2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_AT = python_pars[ 1 ];
    PyObject *par_t = python_pars[ 2 ];
    PyObject *var_A_linear_operator = NULL;
    PyObject *var_AT_linear_operator = NULL;
    PyObject *var_n = NULL;
    PyObject *var_X = NULL;
    PyObject *var_g_prev = NULL;
    PyObject *var_h_prev = NULL;
    PyObject *var_k = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_Y = NULL;
    PyObject *var_g = NULL;
    PyObject *var_best_j = NULL;
    PyObject *var_S = NULL;
    PyObject *var_Z = NULL;
    PyObject *var_h = NULL;
    PyObject *var_j = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_668c957a630d2d690f256c9ad71c3598;
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
    static struct Nuitka_FrameObject *cache_frame_668c957a630d2d690f256c9ad71c3598 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_668c957a630d2d690f256c9ad71c3598, codeobj_668c957a630d2d690f256c9ad71c3598, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_668c957a630d2d690f256c9ad71c3598 = cache_frame_668c957a630d2d690f256c9ad71c3598;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_668c957a630d2d690f256c9ad71c3598 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_668c957a630d2d690f256c9ad71c3598 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_aslinearoperator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aslinearoperator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "aslinearoperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A_linear_operator == NULL );
        var_A_linear_operator = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_aslinearoperator );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aslinearoperator );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "aslinearoperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_AT );
        tmp_args_element_name_2 = par_AT;
        frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 262;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_AT_linear_operator == NULL );
        var_AT_linear_operator = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_A_linear_operator );
        tmp_source_name_1 = var_A_linear_operator;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_tuple_element_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_n );
        tmp_tuple_element_1 = var_n;
        tmp_args_element_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_t );
        tmp_tuple_element_1 = par_t;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_1 );
        frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ones, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_X == NULL );
        var_X = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_t );
        tmp_compexpr_left_1 = par_t;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooo";
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 268;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_4;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_random );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 268;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_randint );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 268;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = const_tuple_int_0_int_pos_2_tuple;
            tmp_dict_key_1 = const_str_plain_size;
            CHECK_OBJECT( var_n );
            tmp_tuple_element_2 = var_n;
            tmp_dict_value_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_t );
            tmp_left_name_3 = par_t;
            tmp_right_name_1 = const_int_pos_1;
            tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_1 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_dict_value_1 );

                exception_lineno = 268;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_dict_value_1, 1, tmp_tuple_element_2 );
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 268;
            tmp_left_name_2 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 268;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_2;
            tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 268;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_3 = const_int_pos_1;
            tmp_ass_subvalue_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 268;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_X );
            tmp_ass_subscribed_1 = var_X;
            tmp_ass_subscript_1 = const_tuple_slice_none_none_none_slice_int_pos_1_none_none_tuple;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 268;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_float_arg_1;
        CHECK_OBJECT( var_X );
        tmp_left_name_4 = var_X;
        CHECK_OBJECT( var_n );
        tmp_float_arg_1 = var_n;
        tmp_right_name_4 = TO_FLOAT( tmp_float_arg_1 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_left_name_4;
        var_X = tmp_assign_source_5;

    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        assert( var_g_prev == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_g_prev = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        assert( var_h_prev == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_h_prev = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_pos_1;
        assert( var_k == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_k = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( par_t );
        tmp_xrange_low_1 = par_t;
        tmp_assign_source_9 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ind == NULL );
        var_ind = tmp_assign_source_9;
    }
    loop_start_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 278;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_asarray );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_A_linear_operator );
        tmp_called_instance_2 = var_A_linear_operator;
        CHECK_OBJECT( var_X );
        tmp_args_element_name_5 = var_X;
        frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_matmat, call_args );
        }

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 278;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_Y;
            var_Y = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain__sum_abs_axis0 );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sum_abs_axis0 );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_sum_abs_axis0" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 279;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_6;
        CHECK_OBJECT( var_Y );
        tmp_args_element_name_6 = var_Y;
        frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 279;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 280;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_7;
        CHECK_OBJECT( var_g );
        tmp_args_element_name_7 = var_g;
        frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 280;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_argmax, call_args );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_best_j;
            var_best_j = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_g );
        tmp_called_instance_4 = var_g;
        frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 281;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_sort );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_g );
        tmp_subscribed_name_2 = var_g;
        tmp_subscript_name_2 = const_slice_none_none_int_neg_1;
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_g;
            assert( old != NULL );
            var_g = tmp_assign_source_13;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_sign_round_up );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sign_round_up );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sign_round_up" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 283;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_8;
        CHECK_OBJECT( var_Y );
        tmp_args_element_name_8 = var_Y;
        frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 283;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_S;
            var_S = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 284;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_9;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_asarray );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_AT_linear_operator );
        tmp_called_instance_5 = var_AT_linear_operator;
        CHECK_OBJECT( var_S );
        tmp_args_element_name_10 = var_S;
        frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_args_element_name_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_matmat, call_args );
        }

        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 284;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_Z;
            var_Z = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain__max_abs_axis1 );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__max_abs_axis1 );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_max_abs_axis1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 285;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_10;
        CHECK_OBJECT( var_Z );
        tmp_args_element_name_11 = var_Z;
        frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_k );
        tmp_compexpr_left_2 = var_k;
        tmp_compexpr_right_2 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
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
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_tuple_element_4;
            int tmp_truth_name_1;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_less_than_or_close );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_less_than_or_close );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "less_than_or_close" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_9 = tmp_mvar_value_11;
            tmp_called_name_10 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_10 != NULL );
            CHECK_OBJECT( var_h );
            tmp_args_element_name_13 = var_h;
            frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 296;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_12 == NULL )
            {
                Py_DECREF( tmp_args_element_name_12 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_12;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dot );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_12 );

                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_Z );
            tmp_subscribed_name_3 = var_Z;
            tmp_tuple_element_3 = const_slice_none_none_none;
            tmp_subscript_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_best_j );
            tmp_tuple_element_3 = var_best_j;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_3 );
            tmp_args_element_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_12 );
                Py_DECREF( tmp_called_name_11 );

                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_X );
            tmp_subscribed_name_4 = var_X;
            tmp_tuple_element_4 = const_slice_none_none_none;
            tmp_subscript_name_4 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_subscript_name_4, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( var_best_j );
            tmp_tuple_element_4 = var_best_j;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_subscript_name_4, 1, tmp_tuple_element_4 );
            tmp_args_element_name_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_args_element_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_12 );
                Py_DECREF( tmp_called_name_11 );
                Py_DECREF( tmp_args_element_name_15 );

                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 296;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_args_element_name_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_element_name_15 );
            Py_DECREF( tmp_args_element_name_16 );
            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_12 );

                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 296;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_14 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_args_element_name_12 );
            Py_DECREF( tmp_args_element_name_14 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            goto loop_end_1;
            branch_no_3:;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_13;
        CHECK_OBJECT( var_h );
        tmp_args_element_name_17 = var_h;
        frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 298;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_subscribed_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_argsort, call_args );
        }

        if ( tmp_subscribed_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = const_slice_none_none_int_neg_1;
        tmp_subscribed_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscribed_name_6 );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( par_t );
        tmp_stop_name_1 = par_t;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_6 == NULL) );
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscribed_name_5 );
        Py_DECREF( tmp_subscript_name_6 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ind;
            assert( old != NULL );
            var_ind = tmp_assign_source_17;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT( var_h );
        tmp_subscribed_name_7 = var_h;
        CHECK_OBJECT( var_ind );
        tmp_subscript_name_7 = var_ind;
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_h;
            assert( old != NULL );
            var_h = tmp_assign_source_18;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_2;
        CHECK_OBJECT( par_t );
        tmp_xrange_low_2 = par_t;
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_2 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_1__for_iterator;
            tmp_for_loop_1__for_iterator = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
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

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 300;
                goto try_except_handler_2;
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
            PyObject *old = var_j;
            var_j = tmp_assign_source_21;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_tuple_element_5;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_elementary_vector );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_elementary_vector );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "elementary_vector" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 301;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_12 = tmp_mvar_value_14;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_18 = var_n;
        CHECK_OBJECT( var_ind );
        tmp_subscribed_name_8 = var_ind;
        CHECK_OBJECT( var_j );
        tmp_subscript_name_8 = var_j;
        tmp_args_element_name_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_args_element_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_args_element_name_19 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_X );
        tmp_ass_subscribed_2 = var_X;
        tmp_tuple_element_5 = const_slice_none_none_none;
        tmp_ass_subscript_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_ass_subscript_2, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_j );
        tmp_tuple_element_5 = var_j;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_ass_subscript_2, 1, tmp_tuple_element_5 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscript_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
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
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_k );
        tmp_compexpr_left_3 = var_k;
        tmp_compexpr_right_3 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
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
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_13;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_subscript_name_10;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_less_than_or_close );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_less_than_or_close );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "less_than_or_close" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 305;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_13 = tmp_mvar_value_15;
            CHECK_OBJECT( var_g_prev );
            tmp_subscribed_name_9 = var_g_prev;
            tmp_subscript_name_9 = const_int_0;
            tmp_args_element_name_20 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, 0 );
            if ( tmp_args_element_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_h_prev );
            tmp_subscribed_name_10 = var_h_prev;
            tmp_subscript_name_10 = const_int_0;
            tmp_args_element_name_21 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, 0 );
            if ( tmp_args_element_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_20 );

                exception_lineno = 305;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 305;
            {
                PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_args_element_name_20 );
            Py_DECREF( tmp_args_element_name_21 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "oooooooooooooooooo";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_bdba1ac4878458e4b0bc7be8760c0452;
                frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 306;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_Exception, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 306;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_5:;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_name_14;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_subscript_name_11;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_subscribed_name_12;
            PyObject *tmp_subscript_name_12;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_less_than_or_close );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_less_than_or_close );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "less_than_or_close" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_14 = tmp_mvar_value_16;
            CHECK_OBJECT( var_h_prev );
            tmp_subscribed_name_11 = var_h_prev;
            tmp_subscript_name_11 = const_int_0;
            tmp_args_element_name_22 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_11, tmp_subscript_name_11, 0 );
            if ( tmp_args_element_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_g );
            tmp_subscribed_name_12 = var_g;
            tmp_subscript_name_12 = const_int_0;
            tmp_args_element_name_23 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_12, tmp_subscript_name_12, 0 );
            if ( tmp_args_element_name_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_22 );

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 307;
            {
                PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23 };
                tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
            }

            Py_DECREF( tmp_args_element_name_22 );
            Py_DECREF( tmp_args_element_name_23 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooo";
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_bdba1ac4878458e4b0bc7be8760c0452;
                frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 308;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_Exception, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 308;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_6:;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_k );
        tmp_compexpr_left_4 = var_k;
        tmp_compexpr_right_4 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooo";
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
            PyObject *tmp_assign_source_22;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_xrange_low_3;
            CHECK_OBJECT( par_t );
            tmp_xrange_low_3 = par_t;
            tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_3 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = tmp_for_loop_2__for_iterator;
                tmp_for_loop_2__for_iterator = tmp_assign_source_22;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_23 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_23 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooooooooo";
                    exception_lineno = 312;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_23;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_24 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_j;
                var_j = tmp_assign_source_24;
                Py_INCREF( var_j );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_called_name_15;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_subscribed_name_13;
            PyObject *tmp_subscript_name_13;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_subscribed_name_14;
            PyObject *tmp_subscript_name_14;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_less_than_or_close );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_less_than_or_close );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "less_than_or_close" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 313;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_3;
            }

            tmp_called_name_15 = tmp_mvar_value_17;
            CHECK_OBJECT( var_g );
            tmp_subscribed_name_13 = var_g;
            CHECK_OBJECT( var_j );
            tmp_subscript_name_13 = var_j;
            tmp_args_element_name_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
            if ( tmp_args_element_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( var_g_prev );
            tmp_subscribed_name_14 = var_g_prev;
            CHECK_OBJECT( var_j );
            tmp_subscript_name_14 = var_j;
            tmp_args_element_name_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
            if ( tmp_args_element_name_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_24 );

                exception_lineno = 313;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_3;
            }
            frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 313;
            {
                PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25 };
                tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
            }

            Py_DECREF( tmp_args_element_name_24 );
            Py_DECREF( tmp_args_element_name_25 );
            if ( tmp_operand_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            Py_DECREF( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                tmp_make_exception_arg_3 = const_str_digest_8bc6b5c33d965871e992d390c729e43a;
                frame_668c957a630d2d690f256c9ad71c3598->m_frame.f_lineno = 314;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_Exception, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 314;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_3;
            }
            branch_no_8:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_3;
        loop_end_3:;
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

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        branch_no_7:;
    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( var_g );
        tmp_assign_source_25 = var_g;
        {
            PyObject *old = var_g_prev;
            assert( old != NULL );
            var_g_prev = tmp_assign_source_25;
            Py_INCREF( var_g_prev );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( var_h );
        tmp_assign_source_26 = var_h;
        {
            PyObject *old = var_h_prev;
            assert( old != NULL );
            var_h_prev = tmp_assign_source_26;
            Py_INCREF( var_h_prev );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_k );
        tmp_left_name_5 = var_k;
        tmp_right_name_5 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = tmp_left_name_5;
        var_k = tmp_assign_source_27;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_668c957a630d2d690f256c9ad71c3598 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_668c957a630d2d690f256c9ad71c3598 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_668c957a630d2d690f256c9ad71c3598, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_668c957a630d2d690f256c9ad71c3598->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_668c957a630d2d690f256c9ad71c3598, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_668c957a630d2d690f256c9ad71c3598,
        type_description_1,
        par_A,
        par_AT,
        par_t,
        var_A_linear_operator,
        var_AT_linear_operator,
        var_n,
        var_X,
        var_g_prev,
        var_h_prev,
        var_k,
        var_ind,
        var_Y,
        var_g,
        var_best_j,
        var_S,
        var_Z,
        var_h,
        var_j
    );


    // Release cached frame.
    if ( frame_668c957a630d2d690f256c9ad71c3598 == cache_frame_668c957a630d2d690f256c9ad71c3598 )
    {
        Py_DECREF( frame_668c957a630d2d690f256c9ad71c3598 );
    }
    cache_frame_668c957a630d2d690f256c9ad71c3598 = NULL;

    assertFrameObject( frame_668c957a630d2d690f256c9ad71c3598 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT( var_g );
        tmp_tuple_element_6 = var_g;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_ind );
        tmp_tuple_element_6 = var_ind;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_12__algorithm_2_2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_AT );
    Py_DECREF( par_AT );
    par_AT = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)var_A_linear_operator );
    Py_DECREF( var_A_linear_operator );
    var_A_linear_operator = NULL;

    CHECK_OBJECT( (PyObject *)var_AT_linear_operator );
    Py_DECREF( var_AT_linear_operator );
    var_AT_linear_operator = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_X );
    Py_DECREF( var_X );
    var_X = NULL;

    CHECK_OBJECT( (PyObject *)var_g_prev );
    Py_DECREF( var_g_prev );
    var_g_prev = NULL;

    CHECK_OBJECT( (PyObject *)var_h_prev );
    Py_DECREF( var_h_prev );
    var_h_prev = NULL;

    CHECK_OBJECT( (PyObject *)var_k );
    Py_DECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)var_ind );
    Py_DECREF( var_ind );
    var_ind = NULL;

    CHECK_OBJECT( (PyObject *)var_Y );
    Py_DECREF( var_Y );
    var_Y = NULL;

    CHECK_OBJECT( (PyObject *)var_g );
    Py_DECREF( var_g );
    var_g = NULL;

    CHECK_OBJECT( (PyObject *)var_best_j );
    Py_DECREF( var_best_j );
    var_best_j = NULL;

    CHECK_OBJECT( (PyObject *)var_S );
    Py_DECREF( var_S );
    var_S = NULL;

    CHECK_OBJECT( (PyObject *)var_Z );
    Py_DECREF( var_Z );
    var_Z = NULL;

    CHECK_OBJECT( (PyObject *)var_h );
    Py_DECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

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

    CHECK_OBJECT( (PyObject *)par_AT );
    Py_DECREF( par_AT );
    par_AT = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    Py_XDECREF( var_A_linear_operator );
    var_A_linear_operator = NULL;

    Py_XDECREF( var_AT_linear_operator );
    var_AT_linear_operator = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_X );
    var_X = NULL;

    Py_XDECREF( var_g_prev );
    var_g_prev = NULL;

    Py_XDECREF( var_h_prev );
    var_h_prev = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_Y );
    var_Y = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_best_j );
    var_best_j = NULL;

    Py_XDECREF( var_S );
    var_S = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_12__algorithm_2_2 );
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


static PyObject *impl_scipy$sparse$linalg$_onenormest$$$function_13__onenormest_core( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_AT = python_pars[ 1 ];
    PyObject *par_t = python_pars[ 2 ];
    PyObject *par_itmax = python_pars[ 3 ];
    PyObject *var_A_linear_operator = NULL;
    PyObject *var_AT_linear_operator = NULL;
    PyObject *var_n = NULL;
    PyObject *var_nmults = NULL;
    PyObject *var_nresamples = NULL;
    PyObject *var_X = NULL;
    PyObject *var_i = NULL;
    PyObject *var_ind_hist = NULL;
    PyObject *var_est_old = NULL;
    PyObject *var_S = NULL;
    PyObject *var_k = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_Y = NULL;
    PyObject *var_mags = NULL;
    PyObject *var_est = NULL;
    PyObject *var_best_j = NULL;
    PyObject *var_ind_best = NULL;
    PyObject *var_w = NULL;
    PyObject *var_S_old = NULL;
    PyObject *var_Z = NULL;
    PyObject *var_h = NULL;
    PyObject *var_seen = NULL;
    PyObject *var_j = NULL;
    PyObject *var_new_ind = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    struct Nuitka_FrameObject *frame_798c67101f7c72d67bb10feec0f82aa2;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_798c67101f7c72d67bb10feec0f82aa2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_798c67101f7c72d67bb10feec0f82aa2, codeobj_798c67101f7c72d67bb10feec0f82aa2, module_scipy$sparse$linalg$_onenormest, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_798c67101f7c72d67bb10feec0f82aa2 = cache_frame_798c67101f7c72d67bb10feec0f82aa2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_798c67101f7c72d67bb10feec0f82aa2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_798c67101f7c72d67bb10feec0f82aa2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_aslinearoperator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aslinearoperator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "aslinearoperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 366;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A_linear_operator == NULL );
        var_A_linear_operator = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_aslinearoperator );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aslinearoperator );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "aslinearoperator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_AT );
        tmp_args_element_name_2 = par_AT;
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_AT_linear_operator == NULL );
        var_AT_linear_operator = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_itmax );
        tmp_compexpr_left_1 = par_itmax;
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_5db29281e632ffeb822848e732cc66de;
            frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 369;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 369;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_t );
        tmp_compexpr_left_2 = par_t;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
            tmp_make_exception_arg_2 = const_str_digest_44407780d9863d6a771df43bf5c84adc;
            frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 371;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 371;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
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


            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_t );
        tmp_compexpr_left_3 = par_t;
        CHECK_OBJECT( var_n );
        tmp_compexpr_right_3 = var_n;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_ca03cc0c85a7e6747cc2801dbcaf2d91;
            frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 374;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 374;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_int_0;
        assert( var_nmults == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_nmults = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_int_0;
        assert( var_nresamples == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_nresamples = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ones );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_tuple_element_2 = var_n;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_t );
        tmp_tuple_element_2 = par_t;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 384;
        tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_X == NULL );
        var_X = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_t );
        tmp_compexpr_left_4 = par_t;
        tmp_compexpr_right_4 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_xrange_high_1;
            tmp_xrange_low_1 = const_int_pos_1;
            CHECK_OBJECT( par_t );
            tmp_xrange_high_1 = par_t;
            tmp_iter_arg_1 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 389;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 389;
                type_description_1 = "ooooooooooooooooooooooooooooo";
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
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 389;
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_resample_column );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resample_column );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "resample_column" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 392;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            CHECK_OBJECT( var_i );
            tmp_args_element_name_3 = var_i;
            CHECK_OBJECT( var_X );
            tmp_args_element_name_4 = var_X;
            frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 392;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 392;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_xrange_low_2;
            CHECK_OBJECT( par_t );
            tmp_xrange_low_2 = par_t;
            tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_2 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 393;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 393;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_2__for_iterator == NULL );
            tmp_for_loop_2__for_iterator = tmp_assign_source_10;
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
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 393;
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
                PyObject *old = var_i;
                var_i = tmp_assign_source_12;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        loop_start_3:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_column_needs_resampling );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_column_needs_resampling );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "column_needs_resampling" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 394;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_3;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            CHECK_OBJECT( var_i );
            tmp_args_element_name_5 = var_i;
            CHECK_OBJECT( var_X );
            tmp_args_element_name_6 = var_X;
            frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 394;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 394;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 394;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_3;
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
            goto loop_end_3;
            branch_no_5:;
        }
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_resample_column );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resample_column );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "resample_column" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 395;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_3;
            }

            tmp_called_name_6 = tmp_mvar_value_6;
            CHECK_OBJECT( var_i );
            tmp_args_element_name_7 = var_i;
            CHECK_OBJECT( var_X );
            tmp_args_element_name_8 = var_X;
            frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 395;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 395;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_nresamples );
            tmp_left_name_1 = var_nresamples;
            tmp_right_name_1 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 396;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_13 = tmp_left_name_1;
            var_nresamples = tmp_assign_source_13;

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_3;
        loop_end_3:;
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_float_arg_1;
        CHECK_OBJECT( var_X );
        tmp_left_name_2 = var_X;
        CHECK_OBJECT( var_n );
        tmp_float_arg_1 = var_n;
        tmp_right_name_2 = TO_FLOAT( tmp_float_arg_1 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = tmp_left_name_2;
        var_X = tmp_assign_source_14;

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 400;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_7;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = const_tuple_int_0_tuple;
        tmp_dict_key_1 = const_str_plain_dtype;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 400;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_8;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_intp );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 400;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 400;
        tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ind_hist == NULL );
        var_ind_hist = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_int_0;
        assert( var_est_old == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_est_old = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_3;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 402;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_9;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_zeros );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_tuple_element_4 = var_n;
        tmp_tuple_element_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( par_t );
        tmp_tuple_element_4 = par_t;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
        tmp_args_name_3 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
        tmp_kw_name_3 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 402;
        tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_S == NULL );
        var_S = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = const_int_pos_1;
        assert( var_k == NULL );
        Py_INCREF( tmp_assign_source_18 );
        var_k = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = Py_None;
        assert( var_ind == NULL );
        Py_INCREF( tmp_assign_source_19 );
        var_ind = tmp_assign_source_19;
    }
    loop_start_4:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_10;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_asarray );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_A_linear_operator );
        tmp_called_instance_1 = var_A_linear_operator;
        CHECK_OBJECT( var_X );
        tmp_args_element_name_10 = var_X;
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_args_element_name_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_matmat, call_args );
        }

        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_Y;
            var_Y = tmp_assign_source_20;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_nmults );
        tmp_left_name_3 = var_nmults;
        tmp_right_name_3 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = tmp_left_name_3;
        var_nmults = tmp_assign_source_21;

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain__sum_abs_axis0 );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sum_abs_axis0 );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_sum_abs_axis0" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 408;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_11;
        CHECK_OBJECT( var_Y );
        tmp_args_element_name_11 = var_Y;
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 408;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 408;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mags;
            var_mags = tmp_assign_source_22;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_12;
        CHECK_OBJECT( var_mags );
        tmp_args_element_name_12 = var_mags;
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 409;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_23 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_max, call_args );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_est;
            var_est = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_13;
        CHECK_OBJECT( var_mags );
        tmp_args_element_name_13 = var_mags;
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 410;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_assign_source_24 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_argmax, call_args );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_best_j;
            var_best_j = tmp_assign_source_24;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( var_est );
        tmp_compexpr_left_5 = var_est;
        CHECK_OBJECT( var_est_old );
        tmp_compexpr_right_5 = var_est_old;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
        CHECK_OBJECT( var_k );
        tmp_compexpr_left_6 = var_k;
        tmp_compexpr_right_6 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_6 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT( var_k );
            tmp_compexpr_left_7 = var_k;
            tmp_compexpr_right_7 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "ooooooooooooooooooooooooooooo";
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
                PyObject *tmp_assign_source_25;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                CHECK_OBJECT( var_ind );
                tmp_subscribed_name_2 = var_ind;
                CHECK_OBJECT( var_best_j );
                tmp_subscript_name_2 = var_best_j;
                tmp_assign_source_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                if ( tmp_assign_source_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 413;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_ind_best;
                    var_ind_best = tmp_assign_source_25;
                    Py_XDECREF( old );
                }

            }
            branch_no_7:;
        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_tuple_element_5;
            CHECK_OBJECT( var_Y );
            tmp_subscribed_name_3 = var_Y;
            tmp_tuple_element_5 = const_slice_none_none_none;
            tmp_subscript_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( var_best_j );
            tmp_tuple_element_5 = var_best_j;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_5 );
            tmp_assign_source_26 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_w;
                var_w = tmp_assign_source_26;
                Py_XDECREF( old );
            }

        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( var_k );
        tmp_compexpr_left_8 = var_k;
        tmp_compexpr_right_8 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
        CHECK_OBJECT( var_est );
        tmp_compexpr_left_9 = var_est;
        CHECK_OBJECT( var_est_old );
        tmp_compexpr_right_9 = var_est_old;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
        {
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT( var_est_old );
            tmp_assign_source_27 = var_est_old;
            {
                PyObject *old = var_est;
                assert( old != NULL );
                var_est = tmp_assign_source_27;
                Py_INCREF( var_est );
                Py_DECREF( old );
            }

        }
        goto loop_end_4;
        branch_no_8:;
    }
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT( var_est );
        tmp_assign_source_28 = var_est;
        {
            PyObject *old = var_est_old;
            assert( old != NULL );
            var_est_old = tmp_assign_source_28;
            Py_INCREF( var_est_old );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT( var_S );
        tmp_assign_source_29 = var_S;
        {
            PyObject *old = var_S_old;
            var_S_old = tmp_assign_source_29;
            Py_INCREF( var_S_old );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT( var_k );
        tmp_compexpr_left_10 = var_k;
        CHECK_OBJECT( par_itmax );
        tmp_compexpr_right_10 = par_itmax;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
        goto loop_end_4;
        branch_no_9:;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_sign_round_up );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sign_round_up );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sign_round_up" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_14;
        CHECK_OBJECT( var_Y );
        tmp_args_element_name_14 = var_Y;
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 423;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_S;
            assert( old != NULL );
            var_S = tmp_assign_source_30;
            Py_DECREF( old );
        }

    }
    CHECK_OBJECT( var_Y );
    Py_DECREF( var_Y );
    var_Y = NULL;

    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        int tmp_truth_name_1;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_every_col_of_X_is_parallel_to_a_col_of_Y );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_every_col_of_X_is_parallel_to_a_col_of_Y );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "every_col_of_X_is_parallel_to_a_col_of_Y" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_12 = tmp_mvar_value_15;
        CHECK_OBJECT( var_S );
        tmp_args_element_name_15 = var_S;
        CHECK_OBJECT( var_S_old );
        tmp_args_element_name_16 = var_S_old;
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 426;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        goto loop_end_4;
        branch_no_10:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT( par_t );
        tmp_compexpr_left_11 = par_t;
        tmp_compexpr_right_11 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_31;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_xrange_low_3;
            CHECK_OBJECT( par_t );
            tmp_xrange_low_3 = par_t;
            tmp_iter_arg_3 = BUILTIN_XRANGE1( tmp_xrange_low_3 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 431;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 431;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = tmp_for_loop_3__for_iterator;
                tmp_for_loop_3__for_iterator = tmp_assign_source_31;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_5:;
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

                    goto loop_end_5;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 431;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_for_loop_3__iter_value;
                tmp_for_loop_3__iter_value = tmp_assign_source_32;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT( tmp_for_loop_3__iter_value );
            tmp_assign_source_33 = tmp_for_loop_3__iter_value;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_33;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        loop_start_6:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_name_13;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_args_element_name_19;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_column_needs_resampling );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_column_needs_resampling );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "column_needs_resampling" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 432;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_13 = tmp_mvar_value_16;
            CHECK_OBJECT( var_i );
            tmp_args_element_name_17 = var_i;
            CHECK_OBJECT( var_S );
            tmp_args_element_name_18 = var_S;
            CHECK_OBJECT( var_S_old );
            tmp_args_element_name_19 = var_S_old;
            frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 432;
            {
                PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
                tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, call_args );
            }

            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 432;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 432;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
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
            goto loop_end_6;
            branch_no_12:;
        }
        {
            PyObject *tmp_called_name_14;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_args_element_name_21;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_resample_column );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resample_column );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "resample_column" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 433;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_14 = tmp_mvar_value_17;
            CHECK_OBJECT( var_i );
            tmp_args_element_name_20 = var_i;
            CHECK_OBJECT( var_S );
            tmp_args_element_name_21 = var_S;
            frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 433;
            {
                PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
            }

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 433;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            if ( var_nresamples == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nresamples" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 434;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_left_name_4 = var_nresamples;
            tmp_right_name_4 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 434;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_34 = tmp_left_name_4;
            var_nresamples = tmp_assign_source_34;

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_6;
        loop_end_6:;
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 431;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_5;
        loop_end_5:;
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

        goto frame_exception_exit_1;
        // End of try:
        try_end_3:;
        Py_XDECREF( tmp_for_loop_3__iter_value );
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
        Py_DECREF( tmp_for_loop_3__for_iterator );
        tmp_for_loop_3__for_iterator = NULL;

        branch_no_11:;
    }
    CHECK_OBJECT( var_S_old );
    Py_DECREF( var_S_old );
    var_S_old = NULL;

    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_15;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_23;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_18;
        tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_asarray );
        if ( tmp_called_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_AT_linear_operator );
        tmp_called_instance_4 = var_AT_linear_operator;
        CHECK_OBJECT( var_S );
        tmp_args_element_name_23 = var_S;
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_args_element_name_22 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_matmat, call_args );
        }

        if ( tmp_args_element_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_15 );

            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_22 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_Z;
            var_Z = tmp_assign_source_35;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_nmults );
        tmp_left_name_5 = var_nmults;
        tmp_right_name_5 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 438;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = tmp_left_name_5;
        var_nmults = tmp_assign_source_36;

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_16;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_24;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain__max_abs_axis1 );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__max_abs_axis1 );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_max_abs_axis1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 439;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_16 = tmp_mvar_value_19;
        CHECK_OBJECT( var_Z );
        tmp_args_element_name_24 = var_Z;
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 439;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_37;
            Py_XDECREF( old );
        }

    }
    CHECK_OBJECT( var_Z );
    Py_DECREF( var_Z );
    var_Z = NULL;

    {
        nuitka_bool tmp_condition_result_13;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        PyObject *tmp_called_name_17;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_k );
        tmp_compexpr_left_12 = var_k;
        tmp_compexpr_right_12 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
        tmp_called_name_17 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_17 != NULL );
        CHECK_OBJECT( var_h );
        tmp_args_element_name_25 = var_h;
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 442;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_compexpr_left_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        if ( tmp_compexpr_left_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_h );
        tmp_subscribed_name_4 = var_h;
        if ( var_ind_best == NULL )
        {
            Py_DECREF( tmp_compexpr_left_13 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ind_best" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_4 = var_ind_best;
        tmp_compexpr_right_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_compexpr_right_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_13 );

            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        Py_DECREF( tmp_compexpr_left_13 );
        Py_DECREF( tmp_compexpr_right_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_13 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_13 = tmp_and_left_value_2;
        and_end_2:;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_13;
        }
        else
        {
            goto branch_no_13;
        }
        branch_yes_13:;
        goto loop_end_4;
        branch_no_13:;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_step_name_1;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_20;
        CHECK_OBJECT( var_h );
        tmp_args_element_name_26 = var_h;
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_subscribed_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_argsort, call_args );
        }

        if ( tmp_subscribed_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = const_slice_none_none_int_neg_1;
        tmp_subscribed_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscribed_name_6 );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( par_t );
        tmp_left_name_6 = par_t;
        CHECK_OBJECT( var_ind_hist );
        tmp_len_arg_1 = var_ind_hist;
        tmp_right_name_6 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_5 );

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_5 );

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_6 == NULL) );
        tmp_called_instance_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscribed_name_5 );
        Py_DECREF( tmp_subscript_name_6 );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 449;
        tmp_assign_source_38 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ind;
            assert( old != NULL );
            var_ind = tmp_assign_source_38;
            Py_DECREF( old );
        }

    }
    CHECK_OBJECT( var_h );
    Py_DECREF( var_h );
    var_h = NULL;

    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        CHECK_OBJECT( par_t );
        tmp_compexpr_left_14 = par_t;
        tmp_compexpr_right_14 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
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
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_called_name_18;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_call_result_5;
            int tmp_truth_name_2;
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 454;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_21;
            tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_in1d );
            if ( tmp_called_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 454;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_ind );
            tmp_subscribed_name_7 = var_ind;
            tmp_start_name_2 = Py_None;
            CHECK_OBJECT( par_t );
            tmp_stop_name_2 = par_t;
            tmp_step_name_2 = Py_None;
            tmp_subscript_name_7 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            assert( !(tmp_subscript_name_7 == NULL) );
            tmp_args_element_name_27 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            Py_DECREF( tmp_subscript_name_7 );
            if ( tmp_args_element_name_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_18 );

                exception_lineno = 454;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_ind_hist );
            tmp_args_element_name_28 = var_ind_hist;
            frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 454;
            {
                PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28 };
                tmp_called_instance_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
            }

            Py_DECREF( tmp_called_name_18 );
            Py_DECREF( tmp_args_element_name_27 );
            if ( tmp_called_instance_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 454;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 454;
            tmp_call_result_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_all );
            Py_DECREF( tmp_called_instance_7 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 454;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_5 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_5 );

                exception_lineno = 454;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_15 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_5 );
            if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_15;
            }
            else
            {
                goto branch_no_15;
            }
            branch_yes_15:;
            goto loop_end_4;
            branch_no_15:;
        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_mvar_value_22;
            PyObject *tmp_args_element_name_29;
            PyObject *tmp_args_element_name_30;
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 459;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_8 = tmp_mvar_value_22;
            CHECK_OBJECT( var_ind );
            tmp_args_element_name_29 = var_ind;
            CHECK_OBJECT( var_ind_hist );
            tmp_args_element_name_30 = var_ind_hist;
            frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 459;
            {
                PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30 };
                tmp_assign_source_39 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_in1d, call_args );
            }

            if ( tmp_assign_source_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 459;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_seen;
                var_seen = tmp_assign_source_39;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_name_19;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_23;
            PyObject *tmp_args_element_name_31;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscript_name_9;
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 460;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_23;
            tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_concatenate );
            if ( tmp_called_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 460;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_ind );
            tmp_subscribed_name_8 = var_ind;
            CHECK_OBJECT( var_seen );
            tmp_operand_name_3 = var_seen;
            tmp_subscript_name_8 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_3 );
            if ( tmp_subscript_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_19 );

                exception_lineno = 460;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
            Py_DECREF( tmp_subscript_name_8 );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_19 );

                exception_lineno = 460;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_31 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_31, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_ind );
            tmp_subscribed_name_9 = var_ind;
            CHECK_OBJECT( var_seen );
            tmp_subscript_name_9 = var_seen;
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_19 );
                Py_DECREF( tmp_args_element_name_31 );

                exception_lineno = 460;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_31, 1, tmp_tuple_element_6 );
            frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 460;
            {
                PyObject *call_args[] = { tmp_args_element_name_31 };
                tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
            }

            Py_DECREF( tmp_called_name_19 );
            Py_DECREF( tmp_args_element_name_31 );
            if ( tmp_assign_source_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 460;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_ind;
                assert( old != NULL );
                var_ind = tmp_assign_source_40;
                Py_DECREF( old );
            }

        }
        branch_no_14:;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_xrange_low_4;
        CHECK_OBJECT( par_t );
        tmp_xrange_low_4 = par_t;
        tmp_iter_arg_4 = BUILTIN_XRANGE1( tmp_xrange_low_4 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_41 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_41;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_7:;
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

                goto loop_end_7;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 461;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_42;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT( tmp_for_loop_4__iter_value );
        tmp_assign_source_43 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_43;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_20;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_7;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_elementary_vector );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_elementary_vector );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "elementary_vector" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_name_20 = tmp_mvar_value_24;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_32 = var_n;
        CHECK_OBJECT( var_ind );
        tmp_subscribed_name_10 = var_ind;
        CHECK_OBJECT( var_j );
        tmp_subscript_name_10 = var_j;
        tmp_args_element_name_33 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        if ( tmp_args_element_name_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 462;
        {
            PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33 };
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_20, call_args );
        }

        Py_DECREF( tmp_args_element_name_33 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_X );
        tmp_ass_subscribed_1 = var_X;
        tmp_tuple_element_7 = const_slice_none_none_none;
        tmp_ass_subscript_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_7 );
        CHECK_OBJECT( var_j );
        tmp_tuple_element_7 = var_j;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_7 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_7;
    loop_end_7:;
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

    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_step_name_3;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_called_name_21;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_subscribed_name_13;
        PyObject *tmp_subscript_name_13;
        PyObject *tmp_start_name_4;
        PyObject *tmp_stop_name_4;
        PyObject *tmp_step_name_4;
        PyObject *tmp_args_element_name_35;
        CHECK_OBJECT( var_ind );
        tmp_subscribed_name_12 = var_ind;
        tmp_start_name_3 = Py_None;
        CHECK_OBJECT( par_t );
        tmp_stop_name_3 = par_t;
        tmp_step_name_3 = Py_None;
        tmp_subscript_name_11 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        assert( !(tmp_subscript_name_11 == NULL) );
        tmp_subscribed_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_11 );
        Py_DECREF( tmp_subscript_name_11 );
        if ( tmp_subscribed_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_25 == NULL )
        {
            Py_DECREF( tmp_subscribed_name_11 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 464;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_25;
        tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_in1d );
        if ( tmp_called_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_11 );

            exception_lineno = 464;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ind );
        tmp_subscribed_name_13 = var_ind;
        tmp_start_name_4 = Py_None;
        CHECK_OBJECT( par_t );
        tmp_stop_name_4 = par_t;
        tmp_step_name_4 = Py_None;
        tmp_subscript_name_13 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
        assert( !(tmp_subscript_name_13 == NULL) );
        tmp_args_element_name_34 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
        Py_DECREF( tmp_subscript_name_13 );
        if ( tmp_args_element_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_11 );
            Py_DECREF( tmp_called_name_21 );

            exception_lineno = 464;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ind_hist );
        tmp_args_element_name_35 = var_ind_hist;
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 464;
        {
            PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35 };
            tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_21, call_args );
        }

        Py_DECREF( tmp_called_name_21 );
        Py_DECREF( tmp_args_element_name_34 );
        if ( tmp_operand_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_11 );

            exception_lineno = 464;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_12 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_4 );
        Py_DECREF( tmp_operand_name_4 );
        if ( tmp_subscript_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_11 );

            exception_lineno = 464;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_44 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_12 );
        Py_DECREF( tmp_subscribed_name_11 );
        Py_DECREF( tmp_subscript_name_12 );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_new_ind;
            var_new_ind = tmp_assign_source_44;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_tuple_element_8;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 465;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = tmp_mvar_value_26;
        CHECK_OBJECT( var_ind_hist );
        tmp_tuple_element_8 = var_ind_hist;
        tmp_args_element_name_36 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_args_element_name_36, 0, tmp_tuple_element_8 );
        CHECK_OBJECT( var_new_ind );
        tmp_tuple_element_8 = var_new_ind;
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_args_element_name_36, 1, tmp_tuple_element_8 );
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 465;
        {
            PyObject *call_args[] = { tmp_args_element_name_36 };
            tmp_assign_source_45 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_concatenate, call_args );
        }

        Py_DECREF( tmp_args_element_name_36 );
        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 465;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ind_hist;
            assert( old != NULL );
            var_ind_hist = tmp_assign_source_45;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_k );
        tmp_left_name_7 = var_k;
        tmp_right_name_7 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 466;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_46 = tmp_left_name_7;
        var_k = tmp_assign_source_46;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_4;
    loop_end_4:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_name_22;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_elementary_vector );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_elementary_vector );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "elementary_vector" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 467;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_22 = tmp_mvar_value_27;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_37 = var_n;
        if ( var_ind_best == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ind_best" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 467;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_38 = var_ind_best;
        frame_798c67101f7c72d67bb10feec0f82aa2->m_frame.f_lineno = 467;
        {
            PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38 };
            tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_22, call_args );
        }

        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 467;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_47;
    }
    {
        PyObject *tmp_tuple_element_9;
        CHECK_OBJECT( var_est );
        tmp_tuple_element_9 = var_est;
        tmp_return_value = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_9 );
        CHECK_OBJECT( var_v );
        tmp_tuple_element_9 = var_v;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_9 );
        if ( var_w == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "w" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 468;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_9 = var_w;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_9 );
        CHECK_OBJECT( var_nmults );
        tmp_tuple_element_9 = var_nmults;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_9 );
        if ( var_nresamples == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nresamples" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 468;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_9 = var_nresamples;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_9 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_798c67101f7c72d67bb10feec0f82aa2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_798c67101f7c72d67bb10feec0f82aa2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_798c67101f7c72d67bb10feec0f82aa2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_798c67101f7c72d67bb10feec0f82aa2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_798c67101f7c72d67bb10feec0f82aa2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_798c67101f7c72d67bb10feec0f82aa2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_798c67101f7c72d67bb10feec0f82aa2,
        type_description_1,
        par_A,
        par_AT,
        par_t,
        par_itmax,
        var_A_linear_operator,
        var_AT_linear_operator,
        var_n,
        var_nmults,
        var_nresamples,
        var_X,
        var_i,
        var_ind_hist,
        var_est_old,
        var_S,
        var_k,
        var_ind,
        var_Y,
        var_mags,
        var_est,
        var_best_j,
        var_ind_best,
        var_w,
        var_S_old,
        var_Z,
        var_h,
        var_seen,
        var_j,
        var_new_ind,
        var_v
    );


    // Release cached frame.
    if ( frame_798c67101f7c72d67bb10feec0f82aa2 == cache_frame_798c67101f7c72d67bb10feec0f82aa2 )
    {
        Py_DECREF( frame_798c67101f7c72d67bb10feec0f82aa2 );
    }
    cache_frame_798c67101f7c72d67bb10feec0f82aa2 = NULL;

    assertFrameObject( frame_798c67101f7c72d67bb10feec0f82aa2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_13__onenormest_core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_AT );
    Py_DECREF( par_AT );
    par_AT = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_itmax );
    Py_DECREF( par_itmax );
    par_itmax = NULL;

    CHECK_OBJECT( (PyObject *)var_A_linear_operator );
    Py_DECREF( var_A_linear_operator );
    var_A_linear_operator = NULL;

    CHECK_OBJECT( (PyObject *)var_AT_linear_operator );
    Py_DECREF( var_AT_linear_operator );
    var_AT_linear_operator = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_nmults );
    Py_DECREF( var_nmults );
    var_nmults = NULL;

    Py_XDECREF( var_nresamples );
    var_nresamples = NULL;

    CHECK_OBJECT( (PyObject *)var_X );
    Py_DECREF( var_X );
    var_X = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_ind_hist );
    Py_DECREF( var_ind_hist );
    var_ind_hist = NULL;

    Py_XDECREF( var_est_old );
    var_est_old = NULL;

    Py_XDECREF( var_S );
    var_S = NULL;

    CHECK_OBJECT( (PyObject *)var_k );
    Py_DECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_Y );
    var_Y = NULL;

    CHECK_OBJECT( (PyObject *)var_mags );
    Py_DECREF( var_mags );
    var_mags = NULL;

    CHECK_OBJECT( (PyObject *)var_est );
    Py_DECREF( var_est );
    var_est = NULL;

    CHECK_OBJECT( (PyObject *)var_best_j );
    Py_DECREF( var_best_j );
    var_best_j = NULL;

    Py_XDECREF( var_ind_best );
    var_ind_best = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_S_old );
    var_S_old = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_seen );
    var_seen = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_new_ind );
    var_new_ind = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_AT );
    Py_DECREF( par_AT );
    par_AT = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_itmax );
    Py_DECREF( par_itmax );
    par_itmax = NULL;

    Py_XDECREF( var_A_linear_operator );
    var_A_linear_operator = NULL;

    Py_XDECREF( var_AT_linear_operator );
    var_AT_linear_operator = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_nmults );
    var_nmults = NULL;

    Py_XDECREF( var_nresamples );
    var_nresamples = NULL;

    Py_XDECREF( var_X );
    var_X = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_ind_hist );
    var_ind_hist = NULL;

    Py_XDECREF( var_est_old );
    var_est_old = NULL;

    Py_XDECREF( var_S );
    var_S = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_Y );
    var_Y = NULL;

    Py_XDECREF( var_mags );
    var_mags = NULL;

    Py_XDECREF( var_est );
    var_est = NULL;

    Py_XDECREF( var_best_j );
    var_best_j = NULL;

    Py_XDECREF( var_ind_best );
    var_ind_best = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_S_old );
    var_S_old = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_seen );
    var_seen = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_new_ind );
    var_new_ind = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$_onenormest$$$function_13__onenormest_core );
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



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_10_resample_column(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_onenormest$$$function_10_resample_column,
        const_str_plain_resample_column,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_088a356556ff6776345895205cb994a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_onenormest,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_11_less_than_or_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_onenormest$$$function_11_less_than_or_close,
        const_str_plain_less_than_or_close,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a6e2363297358cdbcbaee6ac3b3f456b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_onenormest,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_12__algorithm_2_2(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_onenormest$$$function_12__algorithm_2_2,
        const_str_plain__algorithm_2_2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_668c957a630d2d690f256c9ad71c3598,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_onenormest,
        const_str_digest_0fce5408ac70a946549c50ec6a18f2b9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_13__onenormest_core(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_onenormest$$$function_13__onenormest_core,
        const_str_plain__onenormest_core,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_798c67101f7c72d67bb10feec0f82aa2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_onenormest,
        const_str_digest_986d7c1fc620d00e7a792ba39ad6a6f7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_1_onenormest( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_onenormest$$$function_1_onenormest,
        const_str_plain_onenormest,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_be970f17ac5f578348a430352155ca6c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_onenormest,
        const_str_digest_4aaa9cda7eff8796f35f2e38fa9070ad,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_2__blocked_elementwise(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_onenormest$$$function_2__blocked_elementwise,
        const_str_plain__blocked_elementwise,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ba4d9e4967c0203f65c0f9653a2552d7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_onenormest,
        const_str_digest_38f217509b4ce31f68c8ffc75d379ca8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_2__blocked_elementwise$$$function_1_wrapper(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_onenormest$$$function_2__blocked_elementwise$$$function_1_wrapper,
        const_str_plain_wrapper,
#if PYTHON_VERSION >= 300
        const_str_digest_56859fdb06f937c38495559fabab45a3,
#endif
        codeobj_0826ddfc22198c83dc231214c60aa9c6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_onenormest,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_3_sign_round_up(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_onenormest$$$function_3_sign_round_up,
        const_str_plain_sign_round_up,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1e4c9af7c790f58f7a23963787acc0f8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_onenormest,
        const_str_digest_086cc4519ae8ea265357d77ad62d21ec,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_4__max_abs_axis1(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_onenormest$$$function_4__max_abs_axis1,
        const_str_plain__max_abs_axis1,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_24866a1398305119109fb858b422e00d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_onenormest,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_5__sum_abs_axis0(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_onenormest$$$function_5__sum_abs_axis0,
        const_str_plain__sum_abs_axis0,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a050b3b2021982aabaeaba4cb0ea4db8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_onenormest,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_6_elementary_vector(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_onenormest$$$function_6_elementary_vector,
        const_str_plain_elementary_vector,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_867ca7edbbb701f2c69e5a9270058827,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_onenormest,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_7_vectors_are_parallel(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_onenormest$$$function_7_vectors_are_parallel,
        const_str_plain_vectors_are_parallel,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_262457daf3a3942434fd8e996d31e1f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_onenormest,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y,
        const_str_plain_every_col_of_X_is_parallel_to_a_col_of_Y,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9c88a887d71a6cf55049f46c370d7d71,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_onenormest,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling,
        const_str_plain_column_needs_resampling,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a924bf2d6e91fd909b4656c41dc7c1ba,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_onenormest,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$linalg$_onenormest =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.linalg._onenormest",
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

MOD_INIT_DECL( scipy$sparse$linalg$_onenormest )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$linalg$_onenormest );
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
    puts("scipy.sparse.linalg._onenormest: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.linalg._onenormest: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.linalg._onenormest: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$sparse$linalg$_onenormest" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$linalg$_onenormest = Py_InitModule4(
        "scipy.sparse.linalg._onenormest",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$sparse$linalg$_onenormest = PyModule_Create( &mdef_scipy$sparse$linalg$_onenormest );
#endif

    moduledict_scipy$sparse$linalg$_onenormest = MODULE_DICT( module_scipy$sparse$linalg$_onenormest );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$sparse$linalg$_onenormest,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$sparse$linalg$_onenormest,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$_onenormest,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$_onenormest,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$sparse$linalg$_onenormest );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_13bf88a00f8eb59ba37263162170c668, module_scipy$sparse$linalg$_onenormest );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_40281e4eecc5a84e857f69047dbbe92d;
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
        tmp_assign_source_1 = const_str_digest_3fdec3fbd7ed6ee970fc9062768f8eee;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_40281e4eecc5a84e857f69047dbbe92d = MAKE_MODULE_FRAME( codeobj_40281e4eecc5a84e857f69047dbbe92d, module_scipy$sparse$linalg$_onenormest );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_40281e4eecc5a84e857f69047dbbe92d );
    assert( Py_REFCNT( frame_40281e4eecc5a84e857f69047dbbe92d ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_40281e4eecc5a84e857f69047dbbe92d->m_frame.f_lineno = 4;
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$linalg$_onenormest;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_40281e4eecc5a84e857f69047dbbe92d->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_8783708b6421c71a0892a844e756fb02;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$sparse$linalg$_onenormest;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_aslinearoperator_tuple;
        tmp_level_name_2 = const_int_0;
        frame_40281e4eecc5a84e857f69047dbbe92d->m_frame.f_lineno = 7;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_aslinearoperator );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_aslinearoperator, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = LIST_COPY( const_list_str_plain_onenormest_list );
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_int_pos_2_int_pos_5_false_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_11 = MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_1_onenormest( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_onenormest, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_2__blocked_elementwise(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain__blocked_elementwise, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain__blocked_elementwise );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__blocked_elementwise );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_called_name_1 = tmp_mvar_value_3;
        tmp_args_element_name_1 = MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_3_sign_round_up(  );



        frame_40281e4eecc5a84e857f69047dbbe92d->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_sign_round_up, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain__blocked_elementwise );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__blocked_elementwise );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_blocked_elementwise" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        tmp_args_element_name_2 = MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_4__max_abs_axis1(  );



        frame_40281e4eecc5a84e857f69047dbbe92d->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain__max_abs_axis1, tmp_assign_source_14 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_40281e4eecc5a84e857f69047dbbe92d );
#endif
    popFrameStack();

    assertFrameObject( frame_40281e4eecc5a84e857f69047dbbe92d );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_40281e4eecc5a84e857f69047dbbe92d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_40281e4eecc5a84e857f69047dbbe92d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_40281e4eecc5a84e857f69047dbbe92d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_40281e4eecc5a84e857f69047dbbe92d, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_5__sum_abs_axis0(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain__sum_abs_axis0, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_6_elementary_vector(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_elementary_vector, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_7_vectors_are_parallel(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_vectors_are_parallel, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_8_every_col_of_X_is_parallel_to_a_col_of_Y(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_every_col_of_X_is_parallel_to_a_col_of_Y, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_19 = MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_9_column_needs_resampling( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_column_needs_resampling, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_10_resample_column(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_resample_column, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_11_less_than_or_close(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain_less_than_or_close, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_12__algorithm_2_2(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain__algorithm_2_2, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_scipy$sparse$linalg$_onenormest$$$function_13__onenormest_core(  );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain__onenormest_core, tmp_assign_source_23 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$_onenormest, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$linalg$_onenormest );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
