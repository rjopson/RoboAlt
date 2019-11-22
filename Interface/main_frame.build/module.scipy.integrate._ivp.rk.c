/* Generated code for Python module 'scipy.integrate._ivp.rk'
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

/* The "_module_scipy$integrate$_ivp$rk" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$integrate$_ivp$rk;
PyDictObject *moduledict_scipy$integrate$_ivp$rk;

/* The declarations of module constants used, if any. */
extern PyObject *const_float_0_8;
static PyObject *const_float_minus_0_322376179245283;
extern PyObject *const_float_0_75;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_float_minus_0_1111111111111111;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_list_float_0_5_list;
static PyObject *const_list_59b1c1f55abf53d8a44d4a24bc9c5f7a_list;
extern PyObject *const_tuple_true_none_tuple;
extern PyObject *const_str_plain_array;
extern PyObject *const_tuple_33964982ceaa700d4b03ba989e456cc3_tuple;
static PyObject *const_str_digest_1f79ae2fa136610604abf5f5ee0c802e;
extern PyObject *const_str_plain___name__;
static PyObject *const_list_8e67d09ed102f65483ca2b76b3137245_list;
static PyObject *const_float_9_822892851699436;
extern PyObject *const_float_0_3333333333333333;
static PyObject *const_float_8_906422717743473;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_select_initial_step;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_float_0_001;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_y_old;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain_h;
extern PyObject *const_str_plain___file__;
static PyObject *const_float_minus_0_2735313036020583;
extern PyObject *const_str_plain__step_impl;
extern PyObject *const_str_plain_warn_extraneous;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_scale;
static PyObject *const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple;
extern PyObject *const_str_plain_empty;
static PyObject *const_float_0_2784090909090909;
extern PyObject *const_str_plain_a;
static PyObject *const_float_minus_0_0012326388888888888;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_int_neg_1;
extern PyObject *const_tuple_str_plain_self_str_plain_Q_tuple;
extern PyObject *const_str_plain_f_new;
static PyObject *const_list_float_0_075_float_0_225_list;
static PyObject *const_float_0_0042527702905061394;
extern PyObject *const_str_plain_validate_first_step;
static PyObject *const_float_0_9777777777777777;
extern PyObject *const_str_plain_atol;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_None;
static PyObject *const_float_2_8462752525252526;
extern PyObject *const_str_plain_extraneous;
extern PyObject *const_float_0_5;
static PyObject *const_str_digest_28f6420eea5180fbbd1b3558e109c482;
extern PyObject *const_str_plain_RK23;
static PyObject *const_list_931ad72149a3f886e8b611fef2d66c1b_list;
static PyObject *const_float_0_44923629829290207;
static PyObject *const_list_d49ef6b00faa4321feea76fe362d8c58_list;
extern PyObject *const_float_0_075;
static PyObject *const_str_plain_n_stages;
extern PyObject *const_dict_c30cd1cbacf46de598ee536504e727f3;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_float_0_025;
extern PyObject *const_str_plain_MIN_FACTOR;
static PyObject *const_list_int_0_float_0_75_list;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_vectorized;
static PyObject *const_str_digest_e9cc61a536db2297ece30f473222cbfb;
static PyObject *const_float_0_6510416666666666;
extern PyObject *const_str_plain_DenseOutput;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_rtol;
static PyObject *const_float_minus_0_03697916666666667;
static PyObject *const_float_0_4444444444444444;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_float_0_125;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_n;
static PyObject *const_list_int_0_int_pos_1_float_minus_0_6666666666666666_list;
extern PyObject *const_str_plain_min;
static PyObject *const_str_digest_66fb9273d05bf5e84660b0d4471e3004;
extern PyObject *const_str_plain_y0;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_direction;
extern PyObject *const_str_plain_error_norm;
static PyObject *const_float_3_5555555555555554;
static PyObject *const_list_1c23cae23b7b5f0a3210e6f85b42878a_list;
extern PyObject *const_tuple_slice_none_none_none_none_tuple;
extern PyObject *const_str_plain_min_step;
extern PyObject *const_float_1eminus_06;
static PyObject *const_float_minus_11_595793324188385;
static PyObject *const_list_float_0_2_list;
extern PyObject *const_str_plain_MAX_FACTOR;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_plain_norm;
static PyObject *const_float_0_09114583333333333;
static PyObject *const_list_int_0_int_neg_1_int_pos_1_list;
static PyObject *const_tuple_55fa12b4d422baf7b88f52c7657a627c_tuple;
extern PyObject *const_str_plain_y_new;
static PyObject *const_float_minus_0_6666666666666666;
extern PyObject *const_str_plain_P;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_t0;
extern PyObject *const_float_0_3;
extern PyObject *const_str_plain__call_impl;
extern PyObject *const_str_plain_error;
static PyObject *const_float_0_13095238095238096;
extern PyObject *const_str_plain__dense_output_impl;
static PyObject *const_str_digest_169ccda792e47d06af33c6c6955fb01a;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_OdeSolver;
extern PyObject *const_str_plain_Q;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_TOO_SMALL_STEP;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_validate_max_step;
extern PyObject *const_str_plain_t_old;
static PyObject *const_str_digest_c7e164c0ee72e8e477eb831bb91743c1;
static PyObject *const_str_digest_54f500e32af5677e360cb48ee16e0855;
extern PyObject *const_str_plain_K;
extern PyObject *const_str_plain_dy;
extern PyObject *const_int_0;
static PyObject *const_list_5b7e3b4c7f173b3907f5921a8afe0568_list;
static PyObject *const_float_0_225;
static PyObject *const_str_plain_RungeKutta;
static PyObject *const_float_2_9525986892242035;
static PyObject *const_float_minus_1_3333333333333333;
static PyObject *const_float_0_5555555555555556;
static PyObject *const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple;
extern PyObject *const_str_plain_tile;
static PyObject *const_list_18382a10080181258ec5e290219a6637_list;
extern PyObject *const_str_plain_B;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_481e914eeb6bc32e7a6ce740ac87ae11;
extern PyObject *const_float_0_2;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_RK45;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_base;
static PyObject *const_list_e092f391c38e000c2701d52f95275d33_list;
static PyObject *const_float_minus_0_2908093278463649;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_t_new;
static PyObject *const_str_plain_RkDenseOutput;
static PyObject *const_float_0_05086379716981132;
static PyObject *const_str_digest_276a02d78f179ad58eb0cf539f3daa05;
extern PyObject *const_str_plain_first_step;
static PyObject *const_float_minus_0_8888888888888888;
extern PyObject *const_str_plain_t_bound;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___class__;
static PyObject *const_float_0_06944444444444445;
static PyObject *const_float_minus_3_7333333333333334;
static PyObject *const_float_minus_0_08333333333333333;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_dot;
static PyObject *const_str_plain_step_accepted;
extern PyObject *const_str_plain_nextafter;
static PyObject *const_str_digest_1eac8ef4fc84c08b863c033b2a97f0f0;
extern PyObject *const_str_plain_NotImplemented;
static PyObject *const_float_minus_0_0419047619047619;
static PyObject *const_list_c4eba5cd51e455aab98afae2fc162cae_list;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_validate_tol;
static PyObject *const_list_float_0_5_float_0_75_list;
static PyObject *const_list_233dc2677c72253c37ae29230c63b428_list;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_cumprod;
extern PyObject *const_str_plain_h_abs;
extern PyObject *const_str_plain_max_step;
static PyObject *const_float_minus_10_757575757575758;
static PyObject *const_str_plain_rk_step;
extern PyObject *const_str_plain_maximum;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_plain_SAFETY;
extern PyObject *const_int_pos_3;
static PyObject *const_float_0_8888888888888888;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_tuple_str_plain_OdeSolver_str_plain_DenseOutput_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_support_complex;
static PyObject *const_float_0_2222222222222222;
extern PyObject *const_float_0_9;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
static PyObject *const_tuple_86e7fc67976b409949479d399c849828_tuple;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_E;
static PyObject *const_list_700842db40de32240158d8ae5ee9102e_list;
extern PyObject *const_tuple_75546ce2d60f2907037f619a65fc8879_tuple;
static PyObject *const_str_digest_d9383b18f11033efb2a0d795a465f9c9;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_common;
extern PyObject *const_float_1_3333333333333333;
static PyObject *const_list_7aa8f712231278469736d7f334075b62_list;
static PyObject *const_str_digest_ffc688296c44689d7290514f793a1037;
extern PyObject *const_str_plain_order;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_float_minus_0_322376179245283 = UNSTREAM_FLOAT( &constant_bin[ 4169849 ] );
    const_list_59b1c1f55abf53d8a44d4a24bc9c5f7a_list = PyList_New( 4 );
    const_list_5b7e3b4c7f173b3907f5921a8afe0568_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_5b7e3b4c7f173b3907f5921a8afe0568_list, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_float_minus_1_3333333333333333 = UNSTREAM_FLOAT( &constant_bin[ 4169857 ] );
    PyList_SET_ITEM( const_list_5b7e3b4c7f173b3907f5921a8afe0568_list, 1, const_float_minus_1_3333333333333333 ); Py_INCREF( const_float_minus_1_3333333333333333 );
    const_float_0_5555555555555556 = UNSTREAM_FLOAT( &constant_bin[ 4169865 ] );
    PyList_SET_ITEM( const_list_5b7e3b4c7f173b3907f5921a8afe0568_list, 2, const_float_0_5555555555555556 ); Py_INCREF( const_float_0_5555555555555556 );
    PyList_SET_ITEM( const_list_59b1c1f55abf53d8a44d4a24bc9c5f7a_list, 0, const_list_5b7e3b4c7f173b3907f5921a8afe0568_list ); Py_INCREF( const_list_5b7e3b4c7f173b3907f5921a8afe0568_list );
    const_list_int_0_int_pos_1_float_minus_0_6666666666666666_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_int_0_int_pos_1_float_minus_0_6666666666666666_list, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_int_0_int_pos_1_float_minus_0_6666666666666666_list, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_float_minus_0_6666666666666666 = UNSTREAM_FLOAT( &constant_bin[ 4169873 ] );
    PyList_SET_ITEM( const_list_int_0_int_pos_1_float_minus_0_6666666666666666_list, 2, const_float_minus_0_6666666666666666 ); Py_INCREF( const_float_minus_0_6666666666666666 );
    PyList_SET_ITEM( const_list_59b1c1f55abf53d8a44d4a24bc9c5f7a_list, 1, const_list_int_0_int_pos_1_float_minus_0_6666666666666666_list ); Py_INCREF( const_list_int_0_int_pos_1_float_minus_0_6666666666666666_list );
    const_list_7aa8f712231278469736d7f334075b62_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_7aa8f712231278469736d7f334075b62_list, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_7aa8f712231278469736d7f334075b62_list, 1, const_float_1_3333333333333333 ); Py_INCREF( const_float_1_3333333333333333 );
    const_float_minus_0_8888888888888888 = UNSTREAM_FLOAT( &constant_bin[ 4169881 ] );
    PyList_SET_ITEM( const_list_7aa8f712231278469736d7f334075b62_list, 2, const_float_minus_0_8888888888888888 ); Py_INCREF( const_float_minus_0_8888888888888888 );
    PyList_SET_ITEM( const_list_59b1c1f55abf53d8a44d4a24bc9c5f7a_list, 2, const_list_7aa8f712231278469736d7f334075b62_list ); Py_INCREF( const_list_7aa8f712231278469736d7f334075b62_list );
    const_list_int_0_int_neg_1_int_pos_1_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_int_0_int_neg_1_int_pos_1_list, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_int_0_int_neg_1_int_pos_1_list, 1, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyList_SET_ITEM( const_list_int_0_int_neg_1_int_pos_1_list, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyList_SET_ITEM( const_list_59b1c1f55abf53d8a44d4a24bc9c5f7a_list, 3, const_list_int_0_int_neg_1_int_pos_1_list ); Py_INCREF( const_list_int_0_int_neg_1_int_pos_1_list );
    const_str_digest_1f79ae2fa136610604abf5f5ee0c802e = UNSTREAM_STRING_ASCII( &constant_bin[ 4169889 ], 24, 0 );
    const_list_8e67d09ed102f65483ca2b76b3137245_list = PyList_New( 7 );
    const_float_minus_0_0012326388888888888 = UNSTREAM_FLOAT( &constant_bin[ 4169913 ] );
    PyList_SET_ITEM( const_list_8e67d09ed102f65483ca2b76b3137245_list, 0, const_float_minus_0_0012326388888888888 ); Py_INCREF( const_float_minus_0_0012326388888888888 );
    PyList_SET_ITEM( const_list_8e67d09ed102f65483ca2b76b3137245_list, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_float_0_0042527702905061394 = UNSTREAM_FLOAT( &constant_bin[ 4169921 ] );
    PyList_SET_ITEM( const_list_8e67d09ed102f65483ca2b76b3137245_list, 2, const_float_0_0042527702905061394 ); Py_INCREF( const_float_0_0042527702905061394 );
    const_float_minus_0_03697916666666667 = UNSTREAM_FLOAT( &constant_bin[ 4169929 ] );
    PyList_SET_ITEM( const_list_8e67d09ed102f65483ca2b76b3137245_list, 3, const_float_minus_0_03697916666666667 ); Py_INCREF( const_float_minus_0_03697916666666667 );
    const_float_0_05086379716981132 = UNSTREAM_FLOAT( &constant_bin[ 4169937 ] );
    PyList_SET_ITEM( const_list_8e67d09ed102f65483ca2b76b3137245_list, 4, const_float_0_05086379716981132 ); Py_INCREF( const_float_0_05086379716981132 );
    const_float_minus_0_0419047619047619 = UNSTREAM_FLOAT( &constant_bin[ 4169945 ] );
    PyList_SET_ITEM( const_list_8e67d09ed102f65483ca2b76b3137245_list, 5, const_float_minus_0_0419047619047619 ); Py_INCREF( const_float_minus_0_0419047619047619 );
    PyList_SET_ITEM( const_list_8e67d09ed102f65483ca2b76b3137245_list, 6, const_float_0_025 ); Py_INCREF( const_float_0_025 );
    const_float_9_822892851699436 = UNSTREAM_FLOAT( &constant_bin[ 4169953 ] );
    const_float_8_906422717743473 = UNSTREAM_FLOAT( &constant_bin[ 4169961 ] );
    const_float_minus_0_2735313036020583 = UNSTREAM_FLOAT( &constant_bin[ 4169969 ] );
    const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 0, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 3, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 4, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 5, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 6, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 7, const_str_plain_C ); Py_INCREF( const_str_plain_C );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 8, const_str_plain_E ); Py_INCREF( const_str_plain_E );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 9, const_str_plain_K ); Py_INCREF( const_str_plain_K );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 10, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 11, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 12, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 13, const_str_plain_dy ); Py_INCREF( const_str_plain_dy );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 14, const_str_plain_y_new ); Py_INCREF( const_str_plain_y_new );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 15, const_str_plain_f_new ); Py_INCREF( const_str_plain_f_new );
    PyTuple_SET_ITEM( const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 16, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    const_float_0_2784090909090909 = UNSTREAM_FLOAT( &constant_bin[ 4169977 ] );
    const_list_float_0_075_float_0_225_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_float_0_075_float_0_225_list, 0, const_float_0_075 ); Py_INCREF( const_float_0_075 );
    const_float_0_225 = UNSTREAM_FLOAT( &constant_bin[ 4169985 ] );
    PyList_SET_ITEM( const_list_float_0_075_float_0_225_list, 1, const_float_0_225 ); Py_INCREF( const_float_0_225 );
    const_float_0_9777777777777777 = UNSTREAM_FLOAT( &constant_bin[ 4169993 ] );
    const_float_2_8462752525252526 = UNSTREAM_FLOAT( &constant_bin[ 4170001 ] );
    const_str_digest_28f6420eea5180fbbd1b3558e109c482 = UNSTREAM_STRING_ASCII( &constant_bin[ 4170009 ], 21, 0 );
    const_list_931ad72149a3f886e8b611fef2d66c1b_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_931ad72149a3f886e8b611fef2d66c1b_list, 0, const_float_0_2 ); Py_INCREF( const_float_0_2 );
    PyList_SET_ITEM( const_list_931ad72149a3f886e8b611fef2d66c1b_list, 1, const_float_0_3 ); Py_INCREF( const_float_0_3 );
    PyList_SET_ITEM( const_list_931ad72149a3f886e8b611fef2d66c1b_list, 2, const_float_0_8 ); Py_INCREF( const_float_0_8 );
    const_float_0_8888888888888888 = UNSTREAM_FLOAT( &constant_bin[ 4170030 ] );
    PyList_SET_ITEM( const_list_931ad72149a3f886e8b611fef2d66c1b_list, 3, const_float_0_8888888888888888 ); Py_INCREF( const_float_0_8888888888888888 );
    PyList_SET_ITEM( const_list_931ad72149a3f886e8b611fef2d66c1b_list, 4, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_float_0_44923629829290207 = UNSTREAM_FLOAT( &constant_bin[ 4170038 ] );
    const_list_d49ef6b00faa4321feea76fe362d8c58_list = PyList_New( 6 );
    const_float_0_09114583333333333 = UNSTREAM_FLOAT( &constant_bin[ 4170046 ] );
    PyList_SET_ITEM( const_list_d49ef6b00faa4321feea76fe362d8c58_list, 0, const_float_0_09114583333333333 ); Py_INCREF( const_float_0_09114583333333333 );
    PyList_SET_ITEM( const_list_d49ef6b00faa4321feea76fe362d8c58_list, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_d49ef6b00faa4321feea76fe362d8c58_list, 2, const_float_0_44923629829290207 ); Py_INCREF( const_float_0_44923629829290207 );
    const_float_0_6510416666666666 = UNSTREAM_FLOAT( &constant_bin[ 4170054 ] );
    PyList_SET_ITEM( const_list_d49ef6b00faa4321feea76fe362d8c58_list, 3, const_float_0_6510416666666666 ); Py_INCREF( const_float_0_6510416666666666 );
    PyList_SET_ITEM( const_list_d49ef6b00faa4321feea76fe362d8c58_list, 4, const_float_minus_0_322376179245283 ); Py_INCREF( const_float_minus_0_322376179245283 );
    const_float_0_13095238095238096 = UNSTREAM_FLOAT( &constant_bin[ 4170062 ] );
    PyList_SET_ITEM( const_list_d49ef6b00faa4321feea76fe362d8c58_list, 5, const_float_0_13095238095238096 ); Py_INCREF( const_float_0_13095238095238096 );
    const_str_plain_n_stages = UNSTREAM_STRING_ASCII( &constant_bin[ 4170070 ], 8, 1 );
    const_list_int_0_float_0_75_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_int_0_float_0_75_list, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_int_0_float_0_75_list, 1, const_float_0_75 ); Py_INCREF( const_float_0_75 );
    const_str_digest_e9cc61a536db2297ece30f473222cbfb = UNSTREAM_STRING_ASCII( &constant_bin[ 4170078 ], 44, 0 );
    const_float_0_4444444444444444 = UNSTREAM_FLOAT( &constant_bin[ 4170122 ] );
    const_str_digest_66fb9273d05bf5e84660b0d4471e3004 = UNSTREAM_STRING_ASCII( &constant_bin[ 4170130 ], 23, 0 );
    const_float_3_5555555555555554 = UNSTREAM_FLOAT( &constant_bin[ 4170153 ] );
    const_list_1c23cae23b7b5f0a3210e6f85b42878a_list = PyList_New( 4 );
    const_float_2_9525986892242035 = UNSTREAM_FLOAT( &constant_bin[ 4170161 ] );
    PyList_SET_ITEM( const_list_1c23cae23b7b5f0a3210e6f85b42878a_list, 0, const_float_2_9525986892242035 ); Py_INCREF( const_float_2_9525986892242035 );
    const_float_minus_11_595793324188385 = UNSTREAM_FLOAT( &constant_bin[ 4170169 ] );
    PyList_SET_ITEM( const_list_1c23cae23b7b5f0a3210e6f85b42878a_list, 1, const_float_minus_11_595793324188385 ); Py_INCREF( const_float_minus_11_595793324188385 );
    PyList_SET_ITEM( const_list_1c23cae23b7b5f0a3210e6f85b42878a_list, 2, const_float_9_822892851699436 ); Py_INCREF( const_float_9_822892851699436 );
    const_float_minus_0_2908093278463649 = UNSTREAM_FLOAT( &constant_bin[ 4170177 ] );
    PyList_SET_ITEM( const_list_1c23cae23b7b5f0a3210e6f85b42878a_list, 3, const_float_minus_0_2908093278463649 ); Py_INCREF( const_float_minus_0_2908093278463649 );
    const_list_float_0_2_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_float_0_2_list, 0, const_float_0_2 ); Py_INCREF( const_float_0_2 );
    const_tuple_55fa12b4d422baf7b88f52c7657a627c_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_55fa12b4d422baf7b88f52c7657a627c_tuple, 0, const_str_plain_validate_max_step ); Py_INCREF( const_str_plain_validate_max_step );
    PyTuple_SET_ITEM( const_tuple_55fa12b4d422baf7b88f52c7657a627c_tuple, 1, const_str_plain_validate_tol ); Py_INCREF( const_str_plain_validate_tol );
    PyTuple_SET_ITEM( const_tuple_55fa12b4d422baf7b88f52c7657a627c_tuple, 2, const_str_plain_select_initial_step ); Py_INCREF( const_str_plain_select_initial_step );
    PyTuple_SET_ITEM( const_tuple_55fa12b4d422baf7b88f52c7657a627c_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_55fa12b4d422baf7b88f52c7657a627c_tuple, 4, const_str_plain_warn_extraneous ); Py_INCREF( const_str_plain_warn_extraneous );
    PyTuple_SET_ITEM( const_tuple_55fa12b4d422baf7b88f52c7657a627c_tuple, 5, const_str_plain_validate_first_step ); Py_INCREF( const_str_plain_validate_first_step );
    const_str_digest_169ccda792e47d06af33c6c6955fb01a = UNSTREAM_STRING_ASCII( &constant_bin[ 4170185 ], 26, 0 );
    const_str_digest_c7e164c0ee72e8e477eb831bb91743c1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4170211 ], 1948, 0 );
    const_str_digest_54f500e32af5677e360cb48ee16e0855 = UNSTREAM_STRING_ASCII( &constant_bin[ 4172159 ], 3272, 0 );
    const_str_plain_RungeKutta = UNSTREAM_STRING_ASCII( &constant_bin[ 4170009 ], 10, 1 );
    const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple, 1, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple, 2, const_str_plain_t0 ); Py_INCREF( const_str_plain_t0 );
    PyTuple_SET_ITEM( const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple, 3, const_str_plain_y0 ); Py_INCREF( const_str_plain_y0 );
    PyTuple_SET_ITEM( const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple, 4, const_str_plain_t_bound ); Py_INCREF( const_str_plain_t_bound );
    PyTuple_SET_ITEM( const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple, 5, const_str_plain_max_step ); Py_INCREF( const_str_plain_max_step );
    PyTuple_SET_ITEM( const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple, 6, const_str_plain_rtol ); Py_INCREF( const_str_plain_rtol );
    PyTuple_SET_ITEM( const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple, 7, const_str_plain_atol ); Py_INCREF( const_str_plain_atol );
    PyTuple_SET_ITEM( const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple, 8, const_str_plain_vectorized ); Py_INCREF( const_str_plain_vectorized );
    PyTuple_SET_ITEM( const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple, 9, const_str_plain_first_step ); Py_INCREF( const_str_plain_first_step );
    PyTuple_SET_ITEM( const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple, 10, const_str_plain_extraneous ); Py_INCREF( const_str_plain_extraneous );
    PyTuple_SET_ITEM( const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple, 11, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_list_18382a10080181258ec5e290219a6637_list = PyList_New( 3 );
    const_float_0_2222222222222222 = UNSTREAM_FLOAT( &constant_bin[ 2121368 ] );
    PyList_SET_ITEM( const_list_18382a10080181258ec5e290219a6637_list, 0, const_float_0_2222222222222222 ); Py_INCREF( const_float_0_2222222222222222 );
    PyList_SET_ITEM( const_list_18382a10080181258ec5e290219a6637_list, 1, const_float_0_3333333333333333 ); Py_INCREF( const_float_0_3333333333333333 );
    PyList_SET_ITEM( const_list_18382a10080181258ec5e290219a6637_list, 2, const_float_0_4444444444444444 ); Py_INCREF( const_float_0_4444444444444444 );
    const_str_digest_481e914eeb6bc32e7a6ce740ac87ae11 = UNSTREAM_STRING_ASCII( &constant_bin[ 4175431 ], 3489, 0 );
    const_list_e092f391c38e000c2701d52f95275d33_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_e092f391c38e000c2701d52f95275d33_list, 0, const_float_2_8462752525252526 ); Py_INCREF( const_float_2_8462752525252526 );
    const_float_minus_10_757575757575758 = UNSTREAM_FLOAT( &constant_bin[ 4178920 ] );
    PyList_SET_ITEM( const_list_e092f391c38e000c2701d52f95275d33_list, 1, const_float_minus_10_757575757575758 ); Py_INCREF( const_float_minus_10_757575757575758 );
    PyList_SET_ITEM( const_list_e092f391c38e000c2701d52f95275d33_list, 2, const_float_8_906422717743473 ); Py_INCREF( const_float_8_906422717743473 );
    PyList_SET_ITEM( const_list_e092f391c38e000c2701d52f95275d33_list, 3, const_float_0_2784090909090909 ); Py_INCREF( const_float_0_2784090909090909 );
    PyList_SET_ITEM( const_list_e092f391c38e000c2701d52f95275d33_list, 4, const_float_minus_0_2735313036020583 ); Py_INCREF( const_float_minus_0_2735313036020583 );
    const_str_plain_RkDenseOutput = UNSTREAM_STRING_ASCII( &constant_bin[ 4169889 ], 13, 1 );
    const_str_digest_276a02d78f179ad58eb0cf539f3daa05 = UNSTREAM_STRING_ASCII( &constant_bin[ 4178928 ], 32, 0 );
    const_float_0_06944444444444445 = UNSTREAM_FLOAT( &constant_bin[ 4178960 ] );
    const_float_minus_3_7333333333333334 = UNSTREAM_FLOAT( &constant_bin[ 4178968 ] );
    const_float_minus_0_08333333333333333 = UNSTREAM_FLOAT( &constant_bin[ 4178976 ] );
    const_str_plain_step_accepted = UNSTREAM_STRING_ASCII( &constant_bin[ 4132741 ], 13, 1 );
    const_str_digest_1eac8ef4fc84c08b863c033b2a97f0f0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4178984 ], 29, 0 );
    const_list_c4eba5cd51e455aab98afae2fc162cae_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_c4eba5cd51e455aab98afae2fc162cae_list, 0, const_float_0_06944444444444445 ); Py_INCREF( const_float_0_06944444444444445 );
    PyList_SET_ITEM( const_list_c4eba5cd51e455aab98afae2fc162cae_list, 1, const_float_minus_0_08333333333333333 ); Py_INCREF( const_float_minus_0_08333333333333333 );
    PyList_SET_ITEM( const_list_c4eba5cd51e455aab98afae2fc162cae_list, 2, const_float_minus_0_1111111111111111 ); Py_INCREF( const_float_minus_0_1111111111111111 );
    PyList_SET_ITEM( const_list_c4eba5cd51e455aab98afae2fc162cae_list, 3, const_float_0_125 ); Py_INCREF( const_float_0_125 );
    const_list_float_0_5_float_0_75_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_float_0_5_float_0_75_list, 0, const_float_0_5 ); Py_INCREF( const_float_0_5 );
    PyList_SET_ITEM( const_list_float_0_5_float_0_75_list, 1, const_float_0_75 ); Py_INCREF( const_float_0_75 );
    const_list_233dc2677c72253c37ae29230c63b428_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4179013 ], 252 );
    const_str_plain_rk_step = UNSTREAM_STRING_ASCII( &constant_bin[ 4179265 ], 7, 1 );
    const_str_plain_SAFETY = UNSTREAM_STRING_ASCII( &constant_bin[ 4179272 ], 6, 1 );
    const_tuple_86e7fc67976b409949479d399c849828_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 3, const_str_plain_max_step ); Py_INCREF( const_str_plain_max_step );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 4, const_str_plain_rtol ); Py_INCREF( const_str_plain_rtol );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 5, const_str_plain_atol ); Py_INCREF( const_str_plain_atol );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 6, const_str_plain_min_step ); Py_INCREF( const_str_plain_min_step );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 7, const_str_plain_h_abs ); Py_INCREF( const_str_plain_h_abs );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 8, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 9, const_str_plain_step_accepted ); Py_INCREF( const_str_plain_step_accepted );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 10, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 11, const_str_plain_t_new ); Py_INCREF( const_str_plain_t_new );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 12, const_str_plain_y_new ); Py_INCREF( const_str_plain_y_new );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 13, const_str_plain_f_new ); Py_INCREF( const_str_plain_f_new );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 14, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 15, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    PyTuple_SET_ITEM( const_tuple_86e7fc67976b409949479d399c849828_tuple, 16, const_str_plain_error_norm ); Py_INCREF( const_str_plain_error_norm );
    const_list_700842db40de32240158d8ae5ee9102e_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_700842db40de32240158d8ae5ee9102e_list, 0, const_float_0_9777777777777777 ); Py_INCREF( const_float_0_9777777777777777 );
    PyList_SET_ITEM( const_list_700842db40de32240158d8ae5ee9102e_list, 1, const_float_minus_3_7333333333333334 ); Py_INCREF( const_float_minus_3_7333333333333334 );
    PyList_SET_ITEM( const_list_700842db40de32240158d8ae5ee9102e_list, 2, const_float_3_5555555555555554 ); Py_INCREF( const_float_3_5555555555555554 );
    const_str_digest_d9383b18f11033efb2a0d795a465f9c9 = UNSTREAM_STRING_ASCII( &constant_bin[ 4179278 ], 22, 0 );
    const_str_digest_ffc688296c44689d7290514f793a1037 = UNSTREAM_STRING_ASCII( &constant_bin[ 4179300 ], 19, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$integrate$_ivp$rk( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_14e526b05a28a2e722faa717106ee557;
static PyCodeObject *codeobj_d01230a7ed6c590bea7493923d7b04ae;
static PyCodeObject *codeobj_0241c0e5e7a04bf371087affddc2d74d;
static PyCodeObject *codeobj_deb2b12a792415e828d4a59d5512b5f7;
static PyCodeObject *codeobj_b562badf2d4b71f95bd1352e657250a1;
static PyCodeObject *codeobj_e5d88219c9ce251a019d293607552a48;
static PyCodeObject *codeobj_e9d95595744f382235b93c9b4c3084d6;
static PyCodeObject *codeobj_b638f2950c65f9cf27a6e34d9ba0196d;
static PyCodeObject *codeobj_d0787b2dcc521aa9fd4b825de8534869;
static PyCodeObject *codeobj_904086fa5e73f55475b46a8b5185becf;
static PyCodeObject *codeobj_ca8662312ae35f55cf68b22d115a92af;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_169ccda792e47d06af33c6c6955fb01a );
    codeobj_14e526b05a28a2e722faa717106ee557 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_276a02d78f179ad58eb0cf539f3daa05, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d01230a7ed6c590bea7493923d7b04ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RK23, 173, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_0241c0e5e7a04bf371087affddc2d74d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RK45, 262, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_deb2b12a792415e828d4a59d5512b5f7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RkDenseOutput, 367, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_b562badf2d4b71f95bd1352e657250a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RungeKutta, 81, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_e5d88219c9ce251a019d293607552a48 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 91, const_tuple_be8708cdc9a00d4b8b703449bb22d026_tuple, 10, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS );
    codeobj_e9d95595744f382235b93c9b4c3084d6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 368, const_tuple_33964982ceaa700d4b03ba989e456cc3_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_b638f2950c65f9cf27a6e34d9ba0196d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__call_impl, 375, const_tuple_75546ce2d60f2907037f619a65fc8879_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0787b2dcc521aa9fd4b825de8534869 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dense_output_impl, 168, const_tuple_str_plain_self_str_plain_Q_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_904086fa5e73f55475b46a8b5185becf = MAKE_CODEOBJ( module_filename_obj, const_str_plain__step_impl, 109, const_tuple_86e7fc67976b409949479d399c849828_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ca8662312ae35f55cf68b22d115a92af = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rk_step, 15, const_tuple_459cf1ab1ffdb2ec9900a87b63fc1fe3_tuple, 10, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_1_rk_step(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_2___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_3__step_impl(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_4__dense_output_impl(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_5___init__(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_6__call_impl(  );


// The module function definitions.
static PyObject *impl_scipy$integrate$_ivp$rk$$$function_1_rk_step( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[ 0 ];
    PyObject *par_t = python_pars[ 1 ];
    PyObject *par_y = python_pars[ 2 ];
    PyObject *par_f = python_pars[ 3 ];
    PyObject *par_h = python_pars[ 4 ];
    PyObject *par_A = python_pars[ 5 ];
    PyObject *par_B = python_pars[ 6 ];
    PyObject *par_C = python_pars[ 7 ];
    PyObject *par_E = python_pars[ 8 ];
    PyObject *par_K = python_pars[ 9 ];
    PyObject *var_s = NULL;
    PyObject *var_a = NULL;
    PyObject *var_c = NULL;
    PyObject *var_dy = NULL;
    PyObject *var_y_new = NULL;
    PyObject *var_f_new = NULL;
    PyObject *var_error = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ca8662312ae35f55cf68b22d115a92af;
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
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_ca8662312ae35f55cf68b22d115a92af = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ca8662312ae35f55cf68b22d115a92af, codeobj_ca8662312ae35f55cf68b22d115a92af, module_scipy$integrate$_ivp$rk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ca8662312ae35f55cf68b22d115a92af = cache_frame_ca8662312ae35f55cf68b22d115a92af;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ca8662312ae35f55cf68b22d115a92af );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ca8662312ae35f55cf68b22d115a92af ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( par_f );
        tmp_ass_subvalue_1 = par_f;
        CHECK_OBJECT( par_K );
        tmp_ass_subscribed_1 = par_K;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_1 = (PyObject *)&PyEnum_Type;
        tmp_called_name_2 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        CHECK_OBJECT( par_C );
        tmp_args_element_name_3 = par_C;
        frame_ca8662312ae35f55cf68b22d115a92af->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ca8662312ae35f55cf68b22d115a92af->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooo";
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
                type_description_1 = "ooooooooooooooooo";
                exception_lineno = 68;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF( old );
        }

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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 68;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 68;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                    type_description_1 = "ooooooooooooooooo";
                    exception_lineno = 68;
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

            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 68;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_s;
            var_s = tmp_assign_source_6;
            Py_INCREF( var_s );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_iter_arg_3 = tmp_tuple_unpack_1__element_2;
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;
            Py_XDECREF( old );
        }

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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 68;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;
            Py_XDECREF( old );
        }

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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 68;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;
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

                    type_description_1 = "ooooooooooooooooo";
                    exception_lineno = 68;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 68;
            goto try_except_handler_6;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

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
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_10;
            Py_INCREF( var_a );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_11;
            Py_INCREF( var_c );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_K );
        tmp_subscribed_name_1 = par_K;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_s );
        tmp_left_name_2 = var_s;
        tmp_right_name_1 = const_int_pos_1;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_a );
        tmp_args_element_name_5 = var_a;
        frame_ca8662312ae35f55cf68b22d115a92af->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_h );
        tmp_right_name_2 = par_h;
        tmp_assign_source_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_dy;
            var_dy = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( par_fun );
        tmp_called_name_4 = par_fun;
        CHECK_OBJECT( par_t );
        tmp_left_name_3 = par_t;
        CHECK_OBJECT( var_c );
        tmp_left_name_4 = var_c;
        CHECK_OBJECT( par_h );
        tmp_right_name_4 = par_h;
        tmp_right_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_y );
        tmp_left_name_5 = par_y;
        CHECK_OBJECT( var_dy );
        tmp_right_name_5 = var_dy;
        tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_ca8662312ae35f55cf68b22d115a92af->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_K );
        tmp_ass_subscribed_2 = par_K;
        CHECK_OBJECT( var_s );
        tmp_left_name_6 = var_s;
        tmp_right_name_6 = const_int_pos_1;
        tmp_ass_subscript_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_ass_subscript_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_2 );

            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscript_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooooooooooooooo";
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( par_y );
        tmp_left_name_7 = par_y;
        CHECK_OBJECT( par_h );
        tmp_left_name_8 = par_h;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dot );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_K );
        tmp_subscribed_name_2 = par_K;
        tmp_subscript_name_2 = const_slice_none_int_neg_1_none;
        tmp_source_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_T );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_B );
        tmp_args_element_name_9 = par_B;
        frame_ca8662312ae35f55cf68b22d115a92af->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_right_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y_new == NULL );
        var_y_new = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( par_fun );
        tmp_called_name_6 = par_fun;
        CHECK_OBJECT( par_t );
        tmp_left_name_9 = par_t;
        CHECK_OBJECT( par_h );
        tmp_right_name_9 = par_h;
        tmp_args_element_name_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_y_new );
        tmp_args_element_name_11 = var_y_new;
        frame_ca8662312ae35f55cf68b22d115a92af->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f_new == NULL );
        var_f_new = tmp_assign_source_14;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( var_f_new );
        tmp_ass_subvalue_3 = var_f_new;
        CHECK_OBJECT( par_K );
        tmp_ass_subscribed_3 = par_K;
        tmp_ass_subscript_3 = const_int_neg_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, -1, tmp_ass_subvalue_3 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_10;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_right_name_10;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dot );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_K );
        tmp_source_name_6 = par_K;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_T );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_E );
        tmp_args_element_name_13 = par_E;
        frame_ca8662312ae35f55cf68b22d115a92af->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_left_name_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_h );
        tmp_right_name_10 = par_h;
        tmp_assign_source_15 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_10 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_error == NULL );
        var_error = tmp_assign_source_15;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca8662312ae35f55cf68b22d115a92af );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca8662312ae35f55cf68b22d115a92af );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ca8662312ae35f55cf68b22d115a92af, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ca8662312ae35f55cf68b22d115a92af->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ca8662312ae35f55cf68b22d115a92af, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ca8662312ae35f55cf68b22d115a92af,
        type_description_1,
        par_fun,
        par_t,
        par_y,
        par_f,
        par_h,
        par_A,
        par_B,
        par_C,
        par_E,
        par_K,
        var_s,
        var_a,
        var_c,
        var_dy,
        var_y_new,
        var_f_new,
        var_error
    );


    // Release cached frame.
    if ( frame_ca8662312ae35f55cf68b22d115a92af == cache_frame_ca8662312ae35f55cf68b22d115a92af )
    {
        Py_DECREF( frame_ca8662312ae35f55cf68b22d115a92af );
    }
    cache_frame_ca8662312ae35f55cf68b22d115a92af = NULL;

    assertFrameObject( frame_ca8662312ae35f55cf68b22d115a92af );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_y_new );
        tmp_tuple_element_1 = var_y_new;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_f_new );
        tmp_tuple_element_1 = var_f_new;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_error );
        tmp_tuple_element_1 = var_error;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk$$$function_1_rk_step );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)par_h );
    Py_DECREF( par_h );
    par_h = NULL;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_C );
    Py_DECREF( par_C );
    par_C = NULL;

    CHECK_OBJECT( (PyObject *)par_E );
    Py_DECREF( par_E );
    par_E = NULL;

    CHECK_OBJECT( (PyObject *)par_K );
    Py_DECREF( par_K );
    par_K = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_dy );
    var_dy = NULL;

    CHECK_OBJECT( (PyObject *)var_y_new );
    Py_DECREF( var_y_new );
    var_y_new = NULL;

    CHECK_OBJECT( (PyObject *)var_f_new );
    Py_DECREF( var_f_new );
    var_f_new = NULL;

    CHECK_OBJECT( (PyObject *)var_error );
    Py_DECREF( var_error );
    var_error = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)par_h );
    Py_DECREF( par_h );
    par_h = NULL;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_C );
    Py_DECREF( par_C );
    par_C = NULL;

    CHECK_OBJECT( (PyObject *)par_E );
    Py_DECREF( par_E );
    par_E = NULL;

    CHECK_OBJECT( (PyObject *)par_K );
    Py_DECREF( par_K );
    par_K = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_dy );
    var_dy = NULL;

    Py_XDECREF( var_y_new );
    var_y_new = NULL;

    Py_XDECREF( var_f_new );
    var_f_new = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk$$$function_1_rk_step );
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


static PyObject *impl_scipy$integrate$_ivp$rk$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_fun = python_pars[ 1 ];
    PyObject *par_t0 = python_pars[ 2 ];
    PyObject *par_y0 = python_pars[ 3 ];
    PyObject *par_t_bound = python_pars[ 4 ];
    PyObject *par_max_step = python_pars[ 5 ];
    PyObject *par_rtol = python_pars[ 6 ];
    PyObject *par_atol = python_pars[ 7 ];
    PyObject *par_vectorized = python_pars[ 8 ];
    PyObject *par_first_step = python_pars[ 9 ];
    PyObject *par_extraneous = python_pars[ 10 ];
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e5d88219c9ce251a019d293607552a48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_e5d88219c9ce251a019d293607552a48 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e5d88219c9ce251a019d293607552a48, codeobj_e5d88219c9ce251a019d293607552a48, module_scipy$integrate$_ivp$rk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e5d88219c9ce251a019d293607552a48 = cache_frame_e5d88219c9ce251a019d293607552a48;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e5d88219c9ce251a019d293607552a48 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e5d88219c9ce251a019d293607552a48 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_warn_extraneous );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn_extraneous );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn_extraneous" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 94;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_extraneous );
        tmp_args_element_name_1 = par_extraneous;
        frame_e5d88219c9ce251a019d293607552a48->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_RungeKutta );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RungeKutta );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RungeKutta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 95;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_fun );
        tmp_tuple_element_1 = par_fun;
        tmp_args_name_1 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_t0 );
        tmp_tuple_element_1 = par_t0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_y0 );
        tmp_tuple_element_1 = par_y0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_t_bound );
        tmp_tuple_element_1 = par_t_bound;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_1 );
        CHECK_OBJECT( par_vectorized );
        tmp_tuple_element_1 = par_vectorized;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 4, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c30cd1cbacf46de598ee536504e727f3 );
        frame_e5d88219c9ce251a019d293607552a48->m_frame.f_lineno = 95;
        tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_y_old, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_validate_max_step );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_max_step );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "validate_max_step" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_max_step );
        tmp_args_element_name_2 = par_max_step;
        frame_e5d88219c9ce251a019d293607552a48->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_max_step, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_validate_tol );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_tol );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "validate_tol" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;
            type_description_1 = "oooooooooooN";
            goto try_except_handler_2;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_rtol );
        tmp_args_element_name_3 = par_rtol;
        CHECK_OBJECT( par_atol );
        tmp_args_element_name_4 = par_atol;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooooooooooN";
            goto try_except_handler_2;
        }
        frame_e5d88219c9ce251a019d293607552a48->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooooooooooN";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooooooooooN";
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


            type_description_1 = "oooooooooooN";
            exception_lineno = 99;
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


            type_description_1 = "oooooooooooN";
            exception_lineno = 99;
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

                    type_description_1 = "oooooooooooN";
                    exception_lineno = 99;
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

            type_description_1 = "oooooooooooN";
            exception_lineno = 99;
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
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assattr_name_3 = tmp_tuple_unpack_1__element_1;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_rtol, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooooooooooN";
            goto try_except_handler_2;
        }
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assattr_name_4 = tmp_tuple_unpack_1__element_2;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_atol, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooooooooooN";
            goto try_except_handler_2;
        }
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
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_fun );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_t );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 100;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_y );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 100;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_e5d88219c9ce251a019d293607552a48->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assattr_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_f, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_first_step );
        tmp_compexpr_left_1 = par_first_step;
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
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_source_name_8;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_source_name_9;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_source_name_11;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_source_name_12;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_source_name_13;
            PyObject *tmp_assattr_target_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_select_initial_step );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select_initial_step );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select_initial_step" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 102;
                type_description_1 = "oooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_fun );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "oooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_t );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );

                exception_lineno = 103;
                type_description_1 = "oooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_y );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );
                Py_DECREF( tmp_args_element_name_9 );

                exception_lineno = 103;
                type_description_1 = "oooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_f );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );
                Py_DECREF( tmp_args_element_name_9 );
                Py_DECREF( tmp_args_element_name_10 );

                exception_lineno = 103;
                type_description_1 = "oooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_direction );
            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );
                Py_DECREF( tmp_args_element_name_9 );
                Py_DECREF( tmp_args_element_name_10 );
                Py_DECREF( tmp_args_element_name_11 );

                exception_lineno = 103;
                type_description_1 = "oooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_order );
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );
                Py_DECREF( tmp_args_element_name_9 );
                Py_DECREF( tmp_args_element_name_10 );
                Py_DECREF( tmp_args_element_name_11 );
                Py_DECREF( tmp_args_element_name_12 );

                exception_lineno = 104;
                type_description_1 = "oooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_rtol );
            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );
                Py_DECREF( tmp_args_element_name_9 );
                Py_DECREF( tmp_args_element_name_10 );
                Py_DECREF( tmp_args_element_name_11 );
                Py_DECREF( tmp_args_element_name_12 );
                Py_DECREF( tmp_args_element_name_13 );

                exception_lineno = 104;
                type_description_1 = "oooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_atol );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_8 );
                Py_DECREF( tmp_args_element_name_9 );
                Py_DECREF( tmp_args_element_name_10 );
                Py_DECREF( tmp_args_element_name_11 );
                Py_DECREF( tmp_args_element_name_12 );
                Py_DECREF( tmp_args_element_name_13 );
                Py_DECREF( tmp_args_element_name_14 );

                exception_lineno = 104;
                type_description_1 = "oooooooooooN";
                goto frame_exception_exit_1;
            }
            frame_e5d88219c9ce251a019d293607552a48->m_frame.f_lineno = 102;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
                tmp_assattr_name_6 = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            Py_DECREF( tmp_args_element_name_9 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_args_element_name_11 );
            Py_DECREF( tmp_args_element_name_12 );
            Py_DECREF( tmp_args_element_name_13 );
            Py_DECREF( tmp_args_element_name_14 );
            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_assattr_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "oooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_6 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_h_abs, tmp_assattr_name_6 );
            Py_DECREF( tmp_assattr_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "oooooooooooN";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_assattr_target_7;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_validate_first_step );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_first_step );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "validate_first_step" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 106;
                type_description_1 = "oooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_6;
            CHECK_OBJECT( par_first_step );
            tmp_args_element_name_16 = par_first_step;
            CHECK_OBJECT( par_t0 );
            tmp_args_element_name_17 = par_t0;
            CHECK_OBJECT( par_t_bound );
            tmp_args_element_name_18 = par_t_bound;
            frame_e5d88219c9ce251a019d293607552a48->m_frame.f_lineno = 106;
            {
                PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
                tmp_assattr_name_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
            }

            if ( tmp_assattr_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "oooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_7 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_h_abs, tmp_assattr_name_7 );
            Py_DECREF( tmp_assattr_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "oooooooooooN";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_15;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_16;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_17;
        PyObject *tmp_source_name_18;
        PyObject *tmp_assattr_target_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 107;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_7;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_empty );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_15 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_n_stages );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 107;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 107;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_n );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_tuple_element_2 );

            exception_lineno = 107;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( par_self );
        tmp_source_name_18 = par_self;
        tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_y );
        if ( tmp_source_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 107;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_dtype );
        Py_DECREF( tmp_source_name_17 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 107;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_e5d88219c9ce251a019d293607552a48->m_frame.f_lineno = 107;
        tmp_assattr_name_8 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assattr_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_K, tmp_assattr_name_8 );
        Py_DECREF( tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5d88219c9ce251a019d293607552a48 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5d88219c9ce251a019d293607552a48 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e5d88219c9ce251a019d293607552a48, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e5d88219c9ce251a019d293607552a48->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e5d88219c9ce251a019d293607552a48, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e5d88219c9ce251a019d293607552a48,
        type_description_1,
        par_self,
        par_fun,
        par_t0,
        par_y0,
        par_t_bound,
        par_max_step,
        par_rtol,
        par_atol,
        par_vectorized,
        par_first_step,
        par_extraneous,
        NULL
    );


    // Release cached frame.
    if ( frame_e5d88219c9ce251a019d293607552a48 == cache_frame_e5d88219c9ce251a019d293607552a48 )
    {
        Py_DECREF( frame_e5d88219c9ce251a019d293607552a48 );
    }
    cache_frame_e5d88219c9ce251a019d293607552a48 = NULL;

    assertFrameObject( frame_e5d88219c9ce251a019d293607552a48 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_t0 );
    Py_DECREF( par_t0 );
    par_t0 = NULL;

    CHECK_OBJECT( (PyObject *)par_y0 );
    Py_DECREF( par_y0 );
    par_y0 = NULL;

    CHECK_OBJECT( (PyObject *)par_t_bound );
    Py_DECREF( par_t_bound );
    par_t_bound = NULL;

    CHECK_OBJECT( (PyObject *)par_max_step );
    Py_DECREF( par_max_step );
    par_max_step = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)par_atol );
    Py_DECREF( par_atol );
    par_atol = NULL;

    CHECK_OBJECT( (PyObject *)par_vectorized );
    Py_DECREF( par_vectorized );
    par_vectorized = NULL;

    CHECK_OBJECT( (PyObject *)par_first_step );
    Py_DECREF( par_first_step );
    par_first_step = NULL;

    CHECK_OBJECT( (PyObject *)par_extraneous );
    Py_DECREF( par_extraneous );
    par_extraneous = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_t0 );
    Py_DECREF( par_t0 );
    par_t0 = NULL;

    CHECK_OBJECT( (PyObject *)par_y0 );
    Py_DECREF( par_y0 );
    par_y0 = NULL;

    CHECK_OBJECT( (PyObject *)par_t_bound );
    Py_DECREF( par_t_bound );
    par_t_bound = NULL;

    CHECK_OBJECT( (PyObject *)par_max_step );
    Py_DECREF( par_max_step );
    par_max_step = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)par_atol );
    Py_DECREF( par_atol );
    par_atol = NULL;

    CHECK_OBJECT( (PyObject *)par_vectorized );
    Py_DECREF( par_vectorized );
    par_vectorized = NULL;

    CHECK_OBJECT( (PyObject *)par_first_step );
    Py_DECREF( par_first_step );
    par_first_step = NULL;

    CHECK_OBJECT( (PyObject *)par_extraneous );
    Py_DECREF( par_extraneous );
    par_extraneous = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk$$$function_2___init__ );
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


static PyObject *impl_scipy$integrate$_ivp$rk$$$function_3__step_impl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_t = NULL;
    PyObject *var_y = NULL;
    PyObject *var_max_step = NULL;
    PyObject *var_rtol = NULL;
    PyObject *var_atol = NULL;
    PyObject *var_min_step = NULL;
    PyObject *var_h_abs = NULL;
    PyObject *var_order = NULL;
    PyObject *var_step_accepted = NULL;
    PyObject *var_h = NULL;
    PyObject *var_t_new = NULL;
    PyObject *var_y_new = NULL;
    PyObject *var_f_new = NULL;
    PyObject *var_error = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_error_norm = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_904086fa5e73f55475b46a8b5185becf;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_904086fa5e73f55475b46a8b5185becf = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_904086fa5e73f55475b46a8b5185becf, codeobj_904086fa5e73f55475b46a8b5185becf, module_scipy$integrate$_ivp$rk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_904086fa5e73f55475b46a8b5185becf = cache_frame_904086fa5e73f55475b46a8b5185becf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_904086fa5e73f55475b46a8b5185becf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_904086fa5e73f55475b46a8b5185becf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_t );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_t == NULL );
        var_t = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_y );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y == NULL );
        var_y = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_max_step );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_max_step == NULL );
        var_max_step = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_rtol );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rtol == NULL );
        var_rtol = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_atol );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_atol == NULL );
        var_atol = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_8;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_3;
        tmp_left_name_1 = const_int_pos_10;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_abs );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_nextafter );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_t );
        tmp_args_element_name_2 = var_t;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_direction );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_3;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_inf );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_904086fa5e73f55475b46a8b5185becf->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_t );
        tmp_right_name_3 = var_t;
        tmp_args_element_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_904086fa5e73f55475b46a8b5185becf->m_frame.f_lineno = 117;
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


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_min_step == NULL );
        var_min_step = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_h_abs );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_max_step );
        tmp_compexpr_right_1 = var_max_step;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooo";
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
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( var_max_step );
            tmp_assign_source_7 = var_max_step;
            assert( var_h_abs == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_h_abs = tmp_assign_source_7;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_h_abs );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_min_step );
            tmp_compexpr_right_2 = var_min_step;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "ooooooooooooooooo";
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
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT( var_min_step );
                tmp_assign_source_8 = var_min_step;
                assert( var_h_abs == NULL );
                Py_INCREF( tmp_assign_source_8 );
                var_h_abs = tmp_assign_source_8;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_source_name_12;
                CHECK_OBJECT( par_self );
                tmp_source_name_12 = par_self;
                tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_h_abs );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 124;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_h_abs == NULL );
                var_h_abs = tmp_assign_source_9;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT( par_self );
        tmp_source_name_13 = par_self;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_order );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_order == NULL );
        var_order = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_False;
        assert( var_step_accepted == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_step_accepted = tmp_assign_source_11;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_operand_name_2;
        if ( var_step_accepted == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "step_accepted" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_2 = var_step_accepted;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res == 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooo";
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
        goto loop_end_1;
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if ( var_h_abs == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "h_abs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = var_h_abs;
        CHECK_OBJECT( var_min_step );
        tmp_compexpr_right_3 = var_min_step;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooo";
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
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_14;
            tmp_tuple_element_1 = Py_False;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_self );
            tmp_source_name_14 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_TOO_SMALL_STEP );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 131;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_source_name_15;
        if ( var_h_abs == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "h_abs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_4 = var_h_abs;
        CHECK_OBJECT( par_self );
        tmp_source_name_15 = par_self;
        tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_direction );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_t );
        tmp_left_name_5 = var_t;
        CHECK_OBJECT( var_h );
        tmp_right_name_5 = var_h;
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_t_new;
            var_t_new = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_source_name_16;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_direction );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_t_new );
        tmp_left_name_7 = var_t_new;
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_t_bound );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooo";
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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_source_name_18;
            CHECK_OBJECT( par_self );
            tmp_source_name_18 = par_self;
            tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_t_bound );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_t_new;
                assert( old != NULL );
                var_t_new = tmp_assign_source_14;
                Py_DECREF( old );
            }

        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( var_t_new );
        tmp_left_name_8 = var_t_new;
        CHECK_OBJECT( var_t );
        tmp_right_name_8 = var_t;
        tmp_assign_source_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_h;
            assert( old != NULL );
            var_h = tmp_assign_source_15;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        CHECK_OBJECT( var_h );
        tmp_args_element_name_4 = var_h;
        frame_904086fa5e73f55475b46a8b5185becf->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abs, call_args );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_h_abs;
            var_h_abs = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_19;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_20;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_21;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_source_name_22;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_23;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_source_name_24;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_source_name_25;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_rk_step );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rk_step );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rk_step" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_19 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_fun );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_t );
        tmp_args_element_name_6 = var_t;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_7 = var_y;
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_f );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_h );
        tmp_args_element_name_9 = var_h;
        CHECK_OBJECT( par_self );
        tmp_source_name_21 = par_self;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_A );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_22 = par_self;
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_B );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_8 );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_23 = par_self;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_C );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_8 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_args_element_name_11 );

            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_24 = par_self;
        tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_E );
        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_8 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_args_element_name_11 );
            Py_DECREF( tmp_args_element_name_12 );

            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_25 = par_self;
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_K );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_8 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_args_element_name_11 );
            Py_DECREF( tmp_args_element_name_12 );
            Py_DECREF( tmp_args_element_name_13 );

            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_904086fa5e73f55475b46a8b5185becf->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS10( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );
        Py_DECREF( tmp_args_element_name_12 );
        Py_DECREF( tmp_args_element_name_13 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 142;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 142;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
        if ( tmp_assign_source_20 == NULL )
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 142;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_20;
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

                    type_description_1 = "ooooooooooooooooo";
                    exception_lineno = 142;
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

            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 142;
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
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_y_new;
            var_y_new = tmp_assign_source_21;
            Py_INCREF( var_y_new );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_f_new;
            var_f_new = tmp_assign_source_22;
            Py_INCREF( var_f_new );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_error;
            var_error = tmp_assign_source_23;
            Py_INCREF( var_error );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_26;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( var_atol );
        tmp_left_name_9 = var_atol;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_26 = tmp_mvar_value_6;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_maximum );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_7;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_16 = var_y;
        frame_904086fa5e73f55475b46a8b5185becf->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_args_element_name_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_abs, call_args );
        }

        if ( tmp_args_element_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_15 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_8;
        CHECK_OBJECT( var_y_new );
        tmp_args_element_name_18 = var_y_new;
        frame_904086fa5e73f55475b46a8b5185becf->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_args_element_name_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_abs, call_args );
        }

        if ( tmp_args_element_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_15 );

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_904086fa5e73f55475b46a8b5185becf->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_17 };
            tmp_left_name_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_15 );
        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_rtol );
        tmp_right_name_10 = var_rtol;
        tmp_right_name_9 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_10 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_scale;
            var_scale = tmp_assign_source_24;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_9;
        CHECK_OBJECT( var_error );
        tmp_left_name_11 = var_error;
        CHECK_OBJECT( var_scale );
        tmp_right_name_11 = var_scale;
        tmp_args_element_name_19 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_args_element_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_904086fa5e73f55475b46a8b5185becf->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_19 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_error_norm;
            var_error_norm = tmp_assign_source_25;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_error_norm );
        tmp_compexpr_left_5 = var_error_norm;
        tmp_compexpr_right_5 = const_float_0_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooo";
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
            PyObject *tmp_assign_source_26;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            PyObject *tmp_mvar_value_10;
            CHECK_OBJECT( var_h_abs );
            tmp_left_name_12 = var_h_abs;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_MAX_FACTOR );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_FACTOR );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAX_FACTOR" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 148;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_12 = tmp_mvar_value_10;
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_12, tmp_right_name_12 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_26 = tmp_left_name_12;
            var_h_abs = tmp_assign_source_26;

        }
        {
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = Py_True;
            {
                PyObject *old = var_step_accepted;
                var_step_accepted = tmp_assign_source_27;
                Py_INCREF( var_step_accepted );
                Py_XDECREF( old );
            }

        }
        goto branch_end_6;
        branch_no_6:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( var_error_norm );
            tmp_compexpr_left_6 = var_error_norm;
            tmp_compexpr_right_6 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "ooooooooooooooooo";
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
                PyObject *tmp_assign_source_28;
                PyObject *tmp_left_name_13;
                PyObject *tmp_right_name_13;
                PyObject *tmp_called_name_6;
                PyObject *tmp_args_element_name_20;
                PyObject *tmp_mvar_value_11;
                PyObject *tmp_args_element_name_21;
                PyObject *tmp_called_name_7;
                PyObject *tmp_args_element_name_22;
                PyObject *tmp_args_element_name_23;
                PyObject *tmp_left_name_14;
                PyObject *tmp_mvar_value_12;
                PyObject *tmp_right_name_14;
                PyObject *tmp_left_name_15;
                PyObject *tmp_right_name_15;
                PyObject *tmp_left_name_16;
                PyObject *tmp_right_name_16;
                PyObject *tmp_left_name_17;
                PyObject *tmp_right_name_17;
                CHECK_OBJECT( var_h_abs );
                tmp_left_name_13 = var_h_abs;
                tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_min );
                assert( tmp_called_name_6 != NULL );
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_MAX_FACTOR );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_FACTOR );
                }

                if ( tmp_mvar_value_11 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAX_FACTOR" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 151;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_20 = tmp_mvar_value_11;
                tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_max );
                assert( tmp_called_name_7 != NULL );
                tmp_args_element_name_22 = const_int_pos_1;
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_SAFETY );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SAFETY );
                }

                if ( tmp_mvar_value_12 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SAFETY" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 152;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_14 = tmp_mvar_value_12;
                CHECK_OBJECT( var_error_norm );
                tmp_left_name_15 = var_error_norm;
                tmp_left_name_16 = const_int_neg_1;
                CHECK_OBJECT( var_order );
                tmp_left_name_17 = var_order;
                tmp_right_name_17 = const_int_pos_1;
                tmp_right_name_16 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_17, tmp_right_name_17 );
                if ( tmp_right_name_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 152;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_15 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_16, tmp_right_name_16 );
                Py_DECREF( tmp_right_name_16 );
                if ( tmp_right_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 152;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_14 = POWER_OPERATION( tmp_left_name_15, tmp_right_name_15 );
                Py_DECREF( tmp_right_name_15 );
                if ( tmp_right_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 152;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_23 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
                Py_DECREF( tmp_right_name_14 );
                if ( tmp_args_element_name_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 152;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_904086fa5e73f55475b46a8b5185becf->m_frame.f_lineno = 152;
                {
                    PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23 };
                    tmp_args_element_name_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_args_element_name_23 );
                if ( tmp_args_element_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 152;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_904086fa5e73f55475b46a8b5185becf->m_frame.f_lineno = 151;
                {
                    PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
                    tmp_right_name_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
                }

                Py_DECREF( tmp_args_element_name_21 );
                if ( tmp_right_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 151;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_13, tmp_right_name_13 );
                Py_DECREF( tmp_right_name_13 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 151;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_28 = tmp_left_name_13;
                var_h_abs = tmp_assign_source_28;

            }
            {
                PyObject *tmp_assign_source_29;
                tmp_assign_source_29 = Py_True;
                {
                    PyObject *old = var_step_accepted;
                    var_step_accepted = tmp_assign_source_29;
                    Py_INCREF( var_step_accepted );
                    Py_XDECREF( old );
                }

            }
            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_assign_source_30;
                PyObject *tmp_left_name_18;
                PyObject *tmp_right_name_18;
                PyObject *tmp_called_name_8;
                PyObject *tmp_args_element_name_24;
                PyObject *tmp_mvar_value_13;
                PyObject *tmp_args_element_name_25;
                PyObject *tmp_left_name_19;
                PyObject *tmp_mvar_value_14;
                PyObject *tmp_right_name_19;
                PyObject *tmp_left_name_20;
                PyObject *tmp_right_name_20;
                PyObject *tmp_left_name_21;
                PyObject *tmp_right_name_21;
                PyObject *tmp_left_name_22;
                PyObject *tmp_right_name_22;
                CHECK_OBJECT( var_h_abs );
                tmp_left_name_18 = var_h_abs;
                tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_max );
                assert( tmp_called_name_8 != NULL );
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_MIN_FACTOR );

                if (unlikely( tmp_mvar_value_13 == NULL ))
                {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MIN_FACTOR );
                }

                if ( tmp_mvar_value_13 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MIN_FACTOR" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 155;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_24 = tmp_mvar_value_13;
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_SAFETY );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SAFETY );
                }

                if ( tmp_mvar_value_14 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SAFETY" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 156;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_19 = tmp_mvar_value_14;
                CHECK_OBJECT( var_error_norm );
                tmp_left_name_20 = var_error_norm;
                tmp_left_name_21 = const_int_neg_1;
                CHECK_OBJECT( var_order );
                tmp_left_name_22 = var_order;
                tmp_right_name_22 = const_int_pos_1;
                tmp_right_name_21 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_22, tmp_right_name_22 );
                if ( tmp_right_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_20 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_21, tmp_right_name_21 );
                Py_DECREF( tmp_right_name_21 );
                if ( tmp_right_name_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_19 = POWER_OPERATION( tmp_left_name_20, tmp_right_name_20 );
                Py_DECREF( tmp_right_name_20 );
                if ( tmp_right_name_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_25 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
                Py_DECREF( tmp_right_name_19 );
                if ( tmp_args_element_name_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_904086fa5e73f55475b46a8b5185becf->m_frame.f_lineno = 155;
                {
                    PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25 };
                    tmp_right_name_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
                }

                Py_DECREF( tmp_args_element_name_25 );
                if ( tmp_right_name_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 155;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_18, tmp_right_name_18 );
                Py_DECREF( tmp_right_name_18 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 155;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_30 = tmp_left_name_18;
                var_h_abs = tmp_assign_source_30;

            }
            branch_end_7:;
        }
        branch_end_6:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( var_y );
        tmp_assattr_name_1 = var_y;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_y_old, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        if ( var_t_new == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t_new" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_2 = var_t_new;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_t, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        if ( var_y_new == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y_new" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = var_y_new;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_y, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        if ( var_h_abs == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "h_abs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_4 = var_h_abs;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_h_abs, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        if ( var_f_new == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f_new" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_5 = var_f_new;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_f, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_904086fa5e73f55475b46a8b5185becf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_904086fa5e73f55475b46a8b5185becf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_904086fa5e73f55475b46a8b5185becf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_904086fa5e73f55475b46a8b5185becf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_904086fa5e73f55475b46a8b5185becf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_904086fa5e73f55475b46a8b5185becf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_904086fa5e73f55475b46a8b5185becf,
        type_description_1,
        par_self,
        var_t,
        var_y,
        var_max_step,
        var_rtol,
        var_atol,
        var_min_step,
        var_h_abs,
        var_order,
        var_step_accepted,
        var_h,
        var_t_new,
        var_y_new,
        var_f_new,
        var_error,
        var_scale,
        var_error_norm
    );


    // Release cached frame.
    if ( frame_904086fa5e73f55475b46a8b5185becf == cache_frame_904086fa5e73f55475b46a8b5185becf )
    {
        Py_DECREF( frame_904086fa5e73f55475b46a8b5185becf );
    }
    cache_frame_904086fa5e73f55475b46a8b5185becf = NULL;

    assertFrameObject( frame_904086fa5e73f55475b46a8b5185becf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = const_tuple_true_none_tuple;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk$$$function_3__step_impl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_t );
    Py_DECREF( var_t );
    var_t = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)var_max_step );
    Py_DECREF( var_max_step );
    var_max_step = NULL;

    CHECK_OBJECT( (PyObject *)var_rtol );
    Py_DECREF( var_rtol );
    var_rtol = NULL;

    CHECK_OBJECT( (PyObject *)var_atol );
    Py_DECREF( var_atol );
    var_atol = NULL;

    CHECK_OBJECT( (PyObject *)var_min_step );
    Py_DECREF( var_min_step );
    var_min_step = NULL;

    Py_XDECREF( var_h_abs );
    var_h_abs = NULL;

    CHECK_OBJECT( (PyObject *)var_order );
    Py_DECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_step_accepted );
    var_step_accepted = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_t_new );
    var_t_new = NULL;

    Py_XDECREF( var_y_new );
    var_y_new = NULL;

    Py_XDECREF( var_f_new );
    var_f_new = NULL;

    Py_XDECREF( var_error );
    var_error = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_error_norm );
    var_error_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_max_step );
    var_max_step = NULL;

    Py_XDECREF( var_rtol );
    var_rtol = NULL;

    Py_XDECREF( var_atol );
    var_atol = NULL;

    Py_XDECREF( var_min_step );
    var_min_step = NULL;

    Py_XDECREF( var_h_abs );
    var_h_abs = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_step_accepted );
    var_step_accepted = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_t_new );
    var_t_new = NULL;

    Py_XDECREF( var_y_new );
    var_y_new = NULL;

    Py_XDECREF( var_f_new );
    var_f_new = NULL;

    Py_XDECREF( var_error );
    var_error = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_error_norm );
    var_error_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk$$$function_3__step_impl );
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


static PyObject *impl_scipy$integrate$_ivp$rk$$$function_4__dense_output_impl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_Q = NULL;
    struct Nuitka_FrameObject *frame_d0787b2dcc521aa9fd4b825de8534869;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d0787b2dcc521aa9fd4b825de8534869 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d0787b2dcc521aa9fd4b825de8534869, codeobj_d0787b2dcc521aa9fd4b825de8534869, module_scipy$integrate$_ivp$rk, sizeof(void *)+sizeof(void *) );
    frame_d0787b2dcc521aa9fd4b825de8534869 = cache_frame_d0787b2dcc521aa9fd4b825de8534869;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d0787b2dcc521aa9fd4b825de8534869 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d0787b2dcc521aa9fd4b825de8534869 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_K );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_P );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d0787b2dcc521aa9fd4b825de8534869->m_frame.f_lineno = 169;
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


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_Q == NULL );
        var_Q = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_RkDenseOutput );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RkDenseOutput );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RkDenseOutput" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 170;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_t_old );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_t );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 170;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_y_old );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 170;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_Q );
        tmp_args_element_name_5 = var_Q;
        frame_d0787b2dcc521aa9fd4b825de8534869->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0787b2dcc521aa9fd4b825de8534869 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0787b2dcc521aa9fd4b825de8534869 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0787b2dcc521aa9fd4b825de8534869 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0787b2dcc521aa9fd4b825de8534869, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0787b2dcc521aa9fd4b825de8534869->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0787b2dcc521aa9fd4b825de8534869, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d0787b2dcc521aa9fd4b825de8534869,
        type_description_1,
        par_self,
        var_Q
    );


    // Release cached frame.
    if ( frame_d0787b2dcc521aa9fd4b825de8534869 == cache_frame_d0787b2dcc521aa9fd4b825de8534869 )
    {
        Py_DECREF( frame_d0787b2dcc521aa9fd4b825de8534869 );
    }
    cache_frame_d0787b2dcc521aa9fd4b825de8534869 = NULL;

    assertFrameObject( frame_d0787b2dcc521aa9fd4b825de8534869 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk$$$function_4__dense_output_impl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_Q );
    Py_DECREF( var_Q );
    var_Q = NULL;

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

    Py_XDECREF( var_Q );
    var_Q = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk$$$function_4__dense_output_impl );
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


static PyObject *impl_scipy$integrate$_ivp$rk$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_t_old = python_pars[ 1 ];
    PyObject *par_t = python_pars[ 2 ];
    PyObject *par_y_old = python_pars[ 3 ];
    PyObject *par_Q = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_e9d95595744f382235b93c9b4c3084d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e9d95595744f382235b93c9b4c3084d6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e9d95595744f382235b93c9b4c3084d6, codeobj_e9d95595744f382235b93c9b4c3084d6, module_scipy$integrate$_ivp$rk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e9d95595744f382235b93c9b4c3084d6 = cache_frame_e9d95595744f382235b93c9b4c3084d6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e9d95595744f382235b93c9b4c3084d6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e9d95595744f382235b93c9b4c3084d6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_RkDenseOutput );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RkDenseOutput );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RkDenseOutput" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 369;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_t_old );
        tmp_args_element_name_1 = par_t_old;
        CHECK_OBJECT( par_t );
        tmp_args_element_name_2 = par_t;
        frame_e9d95595744f382235b93c9b4c3084d6->m_frame.f_lineno = 369;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_t );
        tmp_left_name_1 = par_t;
        CHECK_OBJECT( par_t_old );
        tmp_right_name_1 = par_t_old;
        tmp_assattr_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_h, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_Q );
        tmp_assattr_name_2 = par_Q;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_Q, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_Q );
        tmp_source_name_1 = par_Q;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_1;
        tmp_assattr_name_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_order, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_y_old );
        tmp_assattr_name_4 = par_y_old;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_y_old, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9d95595744f382235b93c9b4c3084d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9d95595744f382235b93c9b4c3084d6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e9d95595744f382235b93c9b4c3084d6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e9d95595744f382235b93c9b4c3084d6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e9d95595744f382235b93c9b4c3084d6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e9d95595744f382235b93c9b4c3084d6,
        type_description_1,
        par_self,
        par_t_old,
        par_t,
        par_y_old,
        par_Q,
        NULL
    );


    // Release cached frame.
    if ( frame_e9d95595744f382235b93c9b4c3084d6 == cache_frame_e9d95595744f382235b93c9b4c3084d6 )
    {
        Py_DECREF( frame_e9d95595744f382235b93c9b4c3084d6 );
    }
    cache_frame_e9d95595744f382235b93c9b4c3084d6 = NULL;

    assertFrameObject( frame_e9d95595744f382235b93c9b4c3084d6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_t_old );
    Py_DECREF( par_t_old );
    par_t_old = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y_old );
    Py_DECREF( par_y_old );
    par_y_old = NULL;

    CHECK_OBJECT( (PyObject *)par_Q );
    Py_DECREF( par_Q );
    par_Q = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t_old );
    Py_DECREF( par_t_old );
    par_t_old = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y_old );
    Py_DECREF( par_y_old );
    par_y_old = NULL;

    CHECK_OBJECT( (PyObject *)par_Q );
    Py_DECREF( par_Q );
    par_Q = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk$$$function_5___init__ );
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


static PyObject *impl_scipy$integrate$_ivp$rk$$$function_6__call_impl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_t = python_pars[ 1 ];
    PyObject *var_x = NULL;
    PyObject *var_p = NULL;
    PyObject *var_y = NULL;
    struct Nuitka_FrameObject *frame_b638f2950c65f9cf27a6e34d9ba0196d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b638f2950c65f9cf27a6e34d9ba0196d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b638f2950c65f9cf27a6e34d9ba0196d, codeobj_b638f2950c65f9cf27a6e34d9ba0196d, module_scipy$integrate$_ivp$rk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b638f2950c65f9cf27a6e34d9ba0196d = cache_frame_b638f2950c65f9cf27a6e34d9ba0196d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b638f2950c65f9cf27a6e34d9ba0196d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b638f2950c65f9cf27a6e34d9ba0196d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_t );
        tmp_left_name_2 = par_t;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_t_old );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_h );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 376;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_t );
        tmp_source_name_3 = par_t;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_right_name_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 378;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_tile );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 378;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x );
            tmp_args_element_name_1 = var_x;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_order );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 378;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_3 = const_int_pos_1;
            tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_3 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 378;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_b638f2950c65f9cf27a6e34d9ba0196d->m_frame.f_lineno = 378;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 378;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_p == NULL );
            var_p = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 379;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( var_p );
            tmp_args_element_name_3 = var_p;
            frame_b638f2950c65f9cf27a6e34d9ba0196d->m_frame.f_lineno = 379;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_cumprod, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 379;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_p;
                assert( old != NULL );
                var_p = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_left_name_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_right_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 381;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tile );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 381;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x );
            tmp_args_element_name_4 = var_x;
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_order );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 381;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = const_int_pos_1;
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 381;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_5 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
            tmp_tuple_element_1 = const_int_pos_1;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
            frame_b638f2950c65f9cf27a6e34d9ba0196d->m_frame.f_lineno = 381;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 381;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_p == NULL );
            var_p = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 382;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_cumprod );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_p );
            tmp_tuple_element_2 = var_p;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
            frame_b638f2950c65f9cf27a6e34d9ba0196d->m_frame.f_lineno = 382;
            tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_p;
                assert( old != NULL );
                var_p = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_11;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_h );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_left_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dot );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_Q );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_p );
        tmp_args_element_name_7 = var_p;
        frame_b638f2950c65f9cf27a6e34d9ba0196d->m_frame.f_lineno = 383;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_right_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y == NULL );
        var_y = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_12;
        CHECK_OBJECT( var_y );
        tmp_source_name_12 = var_y;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_13;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_y );
            tmp_left_name_6 = var_y;
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_y_old );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 385;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_tuple_slice_none_none_none_none_tuple;
            tmp_right_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 385;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 385;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = tmp_left_name_6;
            var_y = tmp_assign_source_7;

        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_source_name_14;
            CHECK_OBJECT( var_y );
            tmp_left_name_7 = var_y;
            CHECK_OBJECT( par_self );
            tmp_source_name_14 = par_self;
            tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_y_old );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 387;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 387;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = tmp_left_name_7;
            var_y = tmp_assign_source_8;

        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b638f2950c65f9cf27a6e34d9ba0196d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b638f2950c65f9cf27a6e34d9ba0196d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b638f2950c65f9cf27a6e34d9ba0196d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b638f2950c65f9cf27a6e34d9ba0196d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b638f2950c65f9cf27a6e34d9ba0196d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b638f2950c65f9cf27a6e34d9ba0196d,
        type_description_1,
        par_self,
        par_t,
        var_x,
        var_p,
        var_y
    );


    // Release cached frame.
    if ( frame_b638f2950c65f9cf27a6e34d9ba0196d == cache_frame_b638f2950c65f9cf27a6e34d9ba0196d )
    {
        Py_DECREF( frame_b638f2950c65f9cf27a6e34d9ba0196d );
    }
    cache_frame_b638f2950c65f9cf27a6e34d9ba0196d = NULL;

    assertFrameObject( frame_b638f2950c65f9cf27a6e34d9ba0196d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_y );
    tmp_return_value = var_y;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk$$$function_6__call_impl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_p );
    Py_DECREF( var_p );
    var_p = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk$$$function_6__call_impl );
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



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_1_rk_step(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$rk$$$function_1_rk_step,
        const_str_plain_rk_step,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ca8662312ae35f55cf68b22d115a92af,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$rk,
        const_str_digest_c7e164c0ee72e8e477eb831bb91743c1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_2___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$rk$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_ffc688296c44689d7290514f793a1037,
#endif
        codeobj_e5d88219c9ce251a019d293607552a48,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$rk,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_3__step_impl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$rk$$$function_3__step_impl,
        const_str_plain__step_impl,
#if PYTHON_VERSION >= 300
        const_str_digest_28f6420eea5180fbbd1b3558e109c482,
#endif
        codeobj_904086fa5e73f55475b46a8b5185becf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$rk,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_4__dense_output_impl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$rk$$$function_4__dense_output_impl,
        const_str_plain__dense_output_impl,
#if PYTHON_VERSION >= 300
        const_str_digest_1eac8ef4fc84c08b863c033b2a97f0f0,
#endif
        codeobj_d0787b2dcc521aa9fd4b825de8534869,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$rk,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_5___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$rk$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_d9383b18f11033efb2a0d795a465f9c9,
#endif
        codeobj_e9d95595744f382235b93c9b4c3084d6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$rk,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_6__call_impl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$rk$$$function_6__call_impl,
        const_str_plain__call_impl,
#if PYTHON_VERSION >= 300
        const_str_digest_1f79ae2fa136610604abf5f5ee0c802e,
#endif
        codeobj_b638f2950c65f9cf27a6e34d9ba0196d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$rk,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$integrate$_ivp$rk =
{
    PyModuleDef_HEAD_INIT,
    "scipy.integrate._ivp.rk",
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

MOD_INIT_DECL( scipy$integrate$_ivp$rk )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$integrate$_ivp$rk );
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
    puts("scipy.integrate._ivp.rk: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.integrate._ivp.rk: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.integrate._ivp.rk: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$integrate$_ivp$rk" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$integrate$_ivp$rk = Py_InitModule4(
        "scipy.integrate._ivp.rk",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$integrate$_ivp$rk = PyModule_Create( &mdef_scipy$integrate$_ivp$rk );
#endif

    moduledict_scipy$integrate$_ivp$rk = MODULE_DICT( module_scipy$integrate$_ivp$rk );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$integrate$_ivp$rk,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$integrate$_ivp$rk,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$integrate$_ivp$rk,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$integrate$_ivp$rk,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$integrate$_ivp$rk );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_66fb9273d05bf5e84660b0d4471e3004, module_scipy$integrate$_ivp$rk );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_14e526b05a28a2e722faa717106ee557;
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
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_scipy$integrate$_ivp$rk_81 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_b562badf2d4b71f95bd1352e657250a1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_b562badf2d4b71f95bd1352e657250a1_2 = NULL;
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
    PyObject *locals_scipy$integrate$_ivp$rk_173 = NULL;
    struct Nuitka_FrameObject *frame_d01230a7ed6c590bea7493923d7b04ae_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d01230a7ed6c590bea7493923d7b04ae_3 = NULL;
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
    PyObject *locals_scipy$integrate$_ivp$rk_262 = NULL;
    struct Nuitka_FrameObject *frame_0241c0e5e7a04bf371087affddc2d74d_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0241c0e5e7a04bf371087affddc2d74d_4 = NULL;
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
    PyObject *locals_scipy$integrate$_ivp$rk_367 = NULL;
    struct Nuitka_FrameObject *frame_deb2b12a792415e828d4a59d5512b5f7_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_deb2b12a792415e828d4a59d5512b5f7_5 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_14e526b05a28a2e722faa717106ee557 = MAKE_MODULE_FRAME( codeobj_14e526b05a28a2e722faa717106ee557, module_scipy$integrate$_ivp$rk );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_14e526b05a28a2e722faa717106ee557 );
    assert( Py_REFCNT( frame_14e526b05a28a2e722faa717106ee557 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_14e526b05a28a2e722faa717106ee557->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$integrate$_ivp$rk;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_14e526b05a28a2e722faa717106ee557->m_frame.f_lineno = 2;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_base;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$integrate$_ivp$rk;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_OdeSolver_str_plain_DenseOutput_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_14e526b05a28a2e722faa717106ee557->m_frame.f_lineno = 3;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$integrate$_ivp$rk,
                const_str_plain_OdeSolver,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_OdeSolver );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_OdeSolver, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$integrate$_ivp$rk,
                const_str_plain_DenseOutput,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_DenseOutput );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_DenseOutput, tmp_assign_source_11 );
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_common;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$integrate$_ivp$rk;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_55fa12b4d422baf7b88f52c7657a627c_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_14e526b05a28a2e722faa717106ee557->m_frame.f_lineno = 4;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_6 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$integrate$_ivp$rk,
                const_str_plain_validate_max_step,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_validate_max_step );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_validate_max_step, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$integrate$_ivp$rk,
                const_str_plain_validate_tol,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_validate_tol );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_validate_tol, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$integrate$_ivp$rk,
                const_str_plain_select_initial_step,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_select_initial_step );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_select_initial_step, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$integrate$_ivp$rk,
                const_str_plain_norm,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_norm );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$integrate$_ivp$rk,
                const_str_plain_warn_extraneous,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_warn_extraneous );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_warn_extraneous, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$integrate$_ivp$rk,
                const_str_plain_validate_first_step,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_validate_first_step );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_validate_first_step, tmp_assign_source_18 );
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
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = const_float_0_9;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_SAFETY, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = const_float_0_2;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_MIN_FACTOR, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = const_int_pos_10;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_MAX_FACTOR, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_1_rk_step(  );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_rk_step, tmp_assign_source_22 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_OdeSolver );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OdeSolver );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OdeSolver" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 81;

            goto try_except_handler_4;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_23 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_23, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;

            goto try_except_handler_4;
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


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_subscribed_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_type_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_25 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_25;
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


            exception_lineno = 81;

            goto try_except_handler_4;
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


            exception_lineno = 81;

            goto try_except_handler_4;
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
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 81;

                goto try_except_handler_4;
            }
            tmp_tuple_element_2 = const_str_plain_RungeKutta;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_14e526b05a28a2e722faa717106ee557->m_frame.f_lineno = 81;
            tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 81;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_26;
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


                exception_lineno = 81;

                goto try_except_handler_4;
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
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 81;

                    goto try_except_handler_4;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 81;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 81;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 81;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_27;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$integrate$_ivp$rk_81 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_66fb9273d05bf5e84660b0d4471e3004;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_e9cc61a536db2297ece30f473222cbfb;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_RungeKutta;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_b562badf2d4b71f95bd1352e657250a1_2, codeobj_b562badf2d4b71f95bd1352e657250a1, module_scipy$integrate$_ivp$rk, sizeof(void *) );
        frame_b562badf2d4b71f95bd1352e657250a1_2 = cache_frame_b562badf2d4b71f95bd1352e657250a1_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_b562badf2d4b71f95bd1352e657250a1_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_b562badf2d4b71f95bd1352e657250a1_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_NotImplemented );

        if ( tmp_dictset_value == NULL )
        {
            if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
            tmp_dictset_value = Py_NotImplemented;
            Py_INCREF( tmp_dictset_value );
            }
        }

        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_C, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_NotImplemented );

        if ( tmp_dictset_value == NULL )
        {
            if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
            tmp_dictset_value = Py_NotImplemented;
            Py_INCREF( tmp_dictset_value );
            }
        }

        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_A, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_NotImplemented );

        if ( tmp_dictset_value == NULL )
        {
            if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
            tmp_dictset_value = Py_NotImplemented;
            Py_INCREF( tmp_dictset_value );
            }
        }

        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_B, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_NotImplemented );

        if ( tmp_dictset_value == NULL )
        {
            if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
            tmp_dictset_value = Py_NotImplemented;
            Py_INCREF( tmp_dictset_value );
            }
        }

        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_E, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_NotImplemented );

        if ( tmp_dictset_value == NULL )
        {
            if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
            tmp_dictset_value = Py_NotImplemented;
            Py_INCREF( tmp_dictset_value );
            }
        }

        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_P, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_NotImplemented );

        if ( tmp_dictset_value == NULL )
        {
            if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
            tmp_dictset_value = Py_NotImplemented;
            Py_INCREF( tmp_dictset_value );
            }
        }

        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_order, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_NotImplemented );

        if ( tmp_dictset_value == NULL )
        {
            if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
            tmp_dictset_value = Py_NotImplemented;
            Py_INCREF( tmp_dictset_value );
            }
        }

        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_n_stages, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_4;
            tmp_source_name_5 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain_np );

            if ( tmp_source_name_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 91;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_5 = tmp_mvar_value_4;
                Py_INCREF( tmp_source_name_5 );
                }
            }

            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_inf );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = PyTuple_New( 5 );
            PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_float_0_001;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_float_1eminus_06;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_False;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_4 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_2___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_3__step_impl(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain__step_impl, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_4__dense_output_impl(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_81, const_str_plain__dense_output_impl, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_b562badf2d4b71f95bd1352e657250a1_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_b562badf2d4b71f95bd1352e657250a1_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_b562badf2d4b71f95bd1352e657250a1_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_b562badf2d4b71f95bd1352e657250a1_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_b562badf2d4b71f95bd1352e657250a1_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_b562badf2d4b71f95bd1352e657250a1_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_b562badf2d4b71f95bd1352e657250a1_2 == cache_frame_b562badf2d4b71f95bd1352e657250a1_2 )
        {
            Py_DECREF( frame_b562badf2d4b71f95bd1352e657250a1_2 );
        }
        cache_frame_b562badf2d4b71f95bd1352e657250a1_2 = NULL;

        assertFrameObject( frame_b562badf2d4b71f95bd1352e657250a1_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = const_str_plain_RungeKutta;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_5 );
            tmp_tuple_element_5 = locals_scipy$integrate$_ivp$rk_81;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_14e526b05a28a2e722faa717106ee557->m_frame.f_lineno = 81;
            tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 81;

                goto try_except_handler_6;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_28 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_28 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_scipy$integrate$_ivp$rk_81 );
        locals_scipy$integrate$_ivp$rk_81 = NULL;
        goto try_return_handler_5;
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

        Py_DECREF( locals_scipy$integrate$_ivp$rk_81 );
        locals_scipy$integrate$_ivp$rk_81 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 81;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_RungeKutta, tmp_assign_source_28 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_RungeKutta );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RungeKutta );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RungeKutta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 173;

            goto try_except_handler_7;
        }

        tmp_tuple_element_6 = tmp_mvar_value_5;
        tmp_assign_source_30 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_assign_source_30, 0, tmp_tuple_element_6 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;

            goto try_except_handler_7;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_2 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;

            goto try_except_handler_7;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;

            goto try_except_handler_7;
        }
        condexpr_end_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_32 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;

            goto try_except_handler_7;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;

            goto try_except_handler_7;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_6 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_6, const_str_plain___prepare__ );
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_7 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;

                goto try_except_handler_7;
            }
            tmp_tuple_element_7 = const_str_plain_RK23;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_14e526b05a28a2e722faa717106ee557->m_frame.f_lineno = 173;
            tmp_assign_source_33 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;

                goto try_except_handler_7;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_33;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_8 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_8, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;

                goto try_except_handler_7;
            }
            tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
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
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_9;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_8 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 173;

                    goto try_except_handler_7;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_8 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_9 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_9 == NULL) );
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_9 );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 173;

                    goto try_except_handler_7;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_8 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 173;

                    goto try_except_handler_7;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 173;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_7;
            }
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_34;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_scipy$integrate$_ivp$rk_173 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_66fb9273d05bf5e84660b0d4471e3004;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_digest_54f500e32af5677e360cb48ee16e0855;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_plain_RK23;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;

            goto try_except_handler_9;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_d01230a7ed6c590bea7493923d7b04ae_3, codeobj_d01230a7ed6c590bea7493923d7b04ae, module_scipy$integrate$_ivp$rk, sizeof(void *) );
        frame_d01230a7ed6c590bea7493923d7b04ae_3 = cache_frame_d01230a7ed6c590bea7493923d7b04ae_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_d01230a7ed6c590bea7493923d7b04ae_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_d01230a7ed6c590bea7493923d7b04ae_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_int_pos_2;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain_order, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = const_int_pos_3;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain_n_stages, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_arg_element_1;
            tmp_called_instance_1 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain_np );

            if ( tmp_called_instance_1 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 251;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_called_instance_1 = tmp_mvar_value_6;
                Py_INCREF( tmp_called_instance_1 );
                }
            }

            tmp_call_arg_element_1 = LIST_COPY( const_list_float_0_5_float_0_75_list );
            frame_d01230a7ed6c590bea7493923d7b04ae_3->m_frame.f_lineno = 251;
            {
                PyObject *call_args[] = { tmp_call_arg_element_1 };
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            Py_DECREF( tmp_call_arg_element_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain_C, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_call_arg_element_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_call_arg_element_3;
            tmp_called_instance_2 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain_np );

            if ( tmp_called_instance_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 252;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_called_instance_2 = tmp_mvar_value_7;
                Py_INCREF( tmp_called_instance_2 );
                }
            }

            tmp_call_arg_element_2 = LIST_COPY( const_list_float_0_5_list );
            frame_d01230a7ed6c590bea7493923d7b04ae_3->m_frame.f_lineno = 252;
            {
                PyObject *call_args[] = { tmp_call_arg_element_2 };
                tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            Py_DECREF( tmp_call_arg_element_2 );
            if ( tmp_list_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 252;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = PyList_New( 2 );
            PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_1 );
            tmp_called_instance_3 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain_np );

            if ( tmp_called_instance_3 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_8 == NULL )
                {
                    Py_DECREF( tmp_dictset_value );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 253;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_called_instance_3 = tmp_mvar_value_8;
                Py_INCREF( tmp_called_instance_3 );
                }
            }

            tmp_call_arg_element_3 = LIST_COPY( const_list_int_0_float_0_75_list );
            frame_d01230a7ed6c590bea7493923d7b04ae_3->m_frame.f_lineno = 253;
            {
                PyObject *call_args[] = { tmp_call_arg_element_3 };
                tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_3 );
            Py_DECREF( tmp_call_arg_element_3 );
            if ( tmp_list_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dictset_value );

                exception_lineno = 253;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            PyList_SET_ITEM( tmp_dictset_value, 1, tmp_list_element_1 );
            tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain_A, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 252;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_call_arg_element_4;
            tmp_called_instance_4 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain_np );

            if ( tmp_called_instance_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 254;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_called_instance_4 = tmp_mvar_value_9;
                Py_INCREF( tmp_called_instance_4 );
                }
            }

            tmp_call_arg_element_4 = LIST_COPY( const_list_18382a10080181258ec5e290219a6637_list );
            frame_d01230a7ed6c590bea7493923d7b04ae_3->m_frame.f_lineno = 254;
            {
                PyObject *call_args[] = { tmp_call_arg_element_4 };
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_4 );
            Py_DECREF( tmp_call_arg_element_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain_B, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_call_arg_element_5;
            tmp_called_instance_5 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain_np );

            if ( tmp_called_instance_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 255;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_called_instance_5 = tmp_mvar_value_10;
                Py_INCREF( tmp_called_instance_5 );
                }
            }

            tmp_call_arg_element_5 = LIST_COPY( const_list_c4eba5cd51e455aab98afae2fc162cae_list );
            frame_d01230a7ed6c590bea7493923d7b04ae_3->m_frame.f_lineno = 255;
            {
                PyObject *call_args[] = { tmp_call_arg_element_5 };
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_5 );
            Py_DECREF( tmp_call_arg_element_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain_E, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_call_arg_element_6;
            tmp_called_instance_6 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain_np );

            if ( tmp_called_instance_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 256;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_called_instance_6 = tmp_mvar_value_11;
                Py_INCREF( tmp_called_instance_6 );
                }
            }

            tmp_call_arg_element_6 = DEEP_COPY( const_list_59b1c1f55abf53d8a44d4a24bc9c5f7a_list );
            frame_d01230a7ed6c590bea7493923d7b04ae_3->m_frame.f_lineno = 256;
            {
                PyObject *call_args[] = { tmp_call_arg_element_6 };
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_6 );
            Py_DECREF( tmp_call_arg_element_6 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_173, const_str_plain_P, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d01230a7ed6c590bea7493923d7b04ae_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d01230a7ed6c590bea7493923d7b04ae_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_d01230a7ed6c590bea7493923d7b04ae_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_d01230a7ed6c590bea7493923d7b04ae_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_d01230a7ed6c590bea7493923d7b04ae_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_d01230a7ed6c590bea7493923d7b04ae_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_d01230a7ed6c590bea7493923d7b04ae_3 == cache_frame_d01230a7ed6c590bea7493923d7b04ae_3 )
        {
            Py_DECREF( frame_d01230a7ed6c590bea7493923d7b04ae_3 );
        }
        cache_frame_d01230a7ed6c590bea7493923d7b04ae_3 = NULL;

        assertFrameObject( frame_d01230a7ed6c590bea7493923d7b04ae_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = const_str_plain_RK23;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_9 );
            tmp_tuple_element_9 = locals_scipy$integrate$_ivp$rk_173;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_14e526b05a28a2e722faa717106ee557->m_frame.f_lineno = 173;
            tmp_assign_source_36 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;

                goto try_except_handler_9;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_35 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_35 );
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF( locals_scipy$integrate$_ivp$rk_173 );
        locals_scipy$integrate$_ivp$rk_173 = NULL;
        goto try_return_handler_8;
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

        Py_DECREF( locals_scipy$integrate$_ivp$rk_173 );
        locals_scipy$integrate$_ivp$rk_173 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 173;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_RK23, tmp_assign_source_35 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_RungeKutta );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RungeKutta );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RungeKutta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 262;

            goto try_except_handler_10;
        }

        tmp_tuple_element_10 = tmp_mvar_value_12;
        tmp_assign_source_37 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_10 );
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_10;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_subscribed_name_3 = tmp_class_creation_3__bases;
        tmp_subscript_name_3 = const_int_0;
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_type_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_10;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
        Py_DECREF( tmp_type_arg_5 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_10;
        }
        condexpr_end_3:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_39 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        tmp_key_name_9 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_10;
        }
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_10;
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_10 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_10, const_str_plain___prepare__ );
        tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_11;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_11 = tmp_class_creation_3__metaclass;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;

                goto try_except_handler_10;
            }
            tmp_tuple_element_11 = const_str_plain_RK45;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_11 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_11 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_11 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_14e526b05a28a2e722faa717106ee557->m_frame.f_lineno = 262;
            tmp_assign_source_40 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;

                goto try_except_handler_10;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_40;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_12;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_12 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_12, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;

                goto try_except_handler_10;
            }
            tmp_condition_result_12 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
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
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_13;
                PyObject *tmp_type_arg_6;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_12 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 262;

                    goto try_except_handler_10;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_12 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_6 = tmp_class_creation_3__prepared;
                tmp_source_name_13 = BUILTIN_TYPE1( tmp_type_arg_6 );
                assert( !(tmp_source_name_13 == NULL) );
                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_13 );
                if ( tmp_tuple_element_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 262;

                    goto try_except_handler_10;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_12 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 262;

                    goto try_except_handler_10;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 262;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_10;
            }
            branch_no_9:;
        }
        goto branch_end_8;
        branch_no_8:;
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_41;
        }
        branch_end_8:;
    }
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_scipy$integrate$_ivp$rk_262 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_66fb9273d05bf5e84660b0d4471e3004;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_digest_481e914eeb6bc32e7a6ce740ac87ae11;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_plain_RK45;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_12;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_0241c0e5e7a04bf371087affddc2d74d_4, codeobj_0241c0e5e7a04bf371087affddc2d74d, module_scipy$integrate$_ivp$rk, sizeof(void *) );
        frame_0241c0e5e7a04bf371087affddc2d74d_4 = cache_frame_0241c0e5e7a04bf371087affddc2d74d_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_0241c0e5e7a04bf371087affddc2d74d_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_0241c0e5e7a04bf371087affddc2d74d_4 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_int_pos_4;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_order, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = const_int_pos_6;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_n_stages, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_call_arg_element_7;
            tmp_called_instance_7 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_np );

            if ( tmp_called_instance_7 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 343;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_called_instance_7 = tmp_mvar_value_13;
                Py_INCREF( tmp_called_instance_7 );
                }
            }

            tmp_call_arg_element_7 = LIST_COPY( const_list_931ad72149a3f886e8b611fef2d66c1b_list );
            frame_0241c0e5e7a04bf371087affddc2d74d_4->m_frame.f_lineno = 343;
            {
                PyObject *call_args[] = { tmp_call_arg_element_7 };
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_7 );
            Py_DECREF( tmp_call_arg_element_7 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_C, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_call_arg_element_8;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_call_arg_element_9;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_call_arg_element_10;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_call_arg_element_11;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_call_arg_element_12;
            tmp_called_instance_8 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_np );

            if ( tmp_called_instance_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 344;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_called_instance_8 = tmp_mvar_value_14;
                Py_INCREF( tmp_called_instance_8 );
                }
            }

            tmp_call_arg_element_8 = LIST_COPY( const_list_float_0_2_list );
            frame_0241c0e5e7a04bf371087affddc2d74d_4->m_frame.f_lineno = 344;
            {
                PyObject *call_args[] = { tmp_call_arg_element_8 };
                tmp_list_element_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_8 );
            Py_DECREF( tmp_call_arg_element_8 );
            if ( tmp_list_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dictset_value = PyList_New( 5 );
            PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_2 );
            tmp_called_instance_9 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_np );

            if ( tmp_called_instance_9 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_15 == NULL )
                {
                    Py_DECREF( tmp_dictset_value );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 345;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_called_instance_9 = tmp_mvar_value_15;
                Py_INCREF( tmp_called_instance_9 );
                }
            }

            tmp_call_arg_element_9 = LIST_COPY( const_list_float_0_075_float_0_225_list );
            frame_0241c0e5e7a04bf371087affddc2d74d_4->m_frame.f_lineno = 345;
            {
                PyObject *call_args[] = { tmp_call_arg_element_9 };
                tmp_list_element_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_9 );
            Py_DECREF( tmp_call_arg_element_9 );
            if ( tmp_list_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dictset_value );

                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            PyList_SET_ITEM( tmp_dictset_value, 1, tmp_list_element_2 );
            tmp_called_instance_10 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_np );

            if ( tmp_called_instance_10 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_16 == NULL ))
                {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_16 == NULL )
                {
                    Py_DECREF( tmp_dictset_value );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 346;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_called_instance_10 = tmp_mvar_value_16;
                Py_INCREF( tmp_called_instance_10 );
                }
            }

            tmp_call_arg_element_10 = LIST_COPY( const_list_700842db40de32240158d8ae5ee9102e_list );
            frame_0241c0e5e7a04bf371087affddc2d74d_4->m_frame.f_lineno = 346;
            {
                PyObject *call_args[] = { tmp_call_arg_element_10 };
                tmp_list_element_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_10 );
            Py_DECREF( tmp_call_arg_element_10 );
            if ( tmp_list_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dictset_value );

                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            PyList_SET_ITEM( tmp_dictset_value, 2, tmp_list_element_2 );
            tmp_called_instance_11 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_np );

            if ( tmp_called_instance_11 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_17 == NULL ))
                {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_17 == NULL )
                {
                    Py_DECREF( tmp_dictset_value );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 347;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_called_instance_11 = tmp_mvar_value_17;
                Py_INCREF( tmp_called_instance_11 );
                }
            }

            tmp_call_arg_element_11 = LIST_COPY( const_list_1c23cae23b7b5f0a3210e6f85b42878a_list );
            frame_0241c0e5e7a04bf371087affddc2d74d_4->m_frame.f_lineno = 347;
            {
                PyObject *call_args[] = { tmp_call_arg_element_11 };
                tmp_list_element_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_11 );
            Py_DECREF( tmp_call_arg_element_11 );
            if ( tmp_list_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dictset_value );

                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            PyList_SET_ITEM( tmp_dictset_value, 3, tmp_list_element_2 );
            tmp_called_instance_12 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_np );

            if ( tmp_called_instance_12 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_18 == NULL ))
                {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_18 == NULL )
                {
                    Py_DECREF( tmp_dictset_value );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 348;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_called_instance_12 = tmp_mvar_value_18;
                Py_INCREF( tmp_called_instance_12 );
                }
            }

            tmp_call_arg_element_12 = LIST_COPY( const_list_e092f391c38e000c2701d52f95275d33_list );
            frame_0241c0e5e7a04bf371087affddc2d74d_4->m_frame.f_lineno = 348;
            {
                PyObject *call_args[] = { tmp_call_arg_element_12 };
                tmp_list_element_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_12 );
            Py_DECREF( tmp_call_arg_element_12 );
            if ( tmp_list_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dictset_value );

                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            PyList_SET_ITEM( tmp_dictset_value, 4, tmp_list_element_2 );
            tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_A, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_13;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_call_arg_element_13;
            tmp_called_instance_13 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_np );

            if ( tmp_called_instance_13 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 349;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_called_instance_13 = tmp_mvar_value_19;
                Py_INCREF( tmp_called_instance_13 );
                }
            }

            tmp_call_arg_element_13 = LIST_COPY( const_list_d49ef6b00faa4321feea76fe362d8c58_list );
            frame_0241c0e5e7a04bf371087affddc2d74d_4->m_frame.f_lineno = 349;
            {
                PyObject *call_args[] = { tmp_call_arg_element_13 };
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_13 );
            Py_DECREF( tmp_call_arg_element_13 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_B, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_14;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_call_arg_element_14;
            tmp_called_instance_14 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_np );

            if ( tmp_called_instance_14 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 350;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_called_instance_14 = tmp_mvar_value_20;
                Py_INCREF( tmp_called_instance_14 );
                }
            }

            tmp_call_arg_element_14 = LIST_COPY( const_list_8e67d09ed102f65483ca2b76b3137245_list );
            frame_0241c0e5e7a04bf371087affddc2d74d_4->m_frame.f_lineno = 350;
            {
                PyObject *call_args[] = { tmp_call_arg_element_14 };
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_14 );
            Py_DECREF( tmp_call_arg_element_14 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_E, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_15;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_call_arg_element_15;
            tmp_called_instance_15 = PyObject_GetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_np );

            if ( tmp_called_instance_15 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 353;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_called_instance_15 = tmp_mvar_value_21;
                Py_INCREF( tmp_called_instance_15 );
                }
            }

            tmp_call_arg_element_15 = DEEP_COPY( const_list_233dc2677c72253c37ae29230c63b428_list );
            frame_0241c0e5e7a04bf371087affddc2d74d_4->m_frame.f_lineno = 353;
            {
                PyObject *call_args[] = { tmp_call_arg_element_15 };
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_15, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_called_instance_15 );
            Py_DECREF( tmp_call_arg_element_15 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 353;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_262, const_str_plain_P, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 353;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0241c0e5e7a04bf371087affddc2d74d_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0241c0e5e7a04bf371087affddc2d74d_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_0241c0e5e7a04bf371087affddc2d74d_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_0241c0e5e7a04bf371087affddc2d74d_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_0241c0e5e7a04bf371087affddc2d74d_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0241c0e5e7a04bf371087affddc2d74d_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if ( frame_0241c0e5e7a04bf371087affddc2d74d_4 == cache_frame_0241c0e5e7a04bf371087affddc2d74d_4 )
        {
            Py_DECREF( frame_0241c0e5e7a04bf371087affddc2d74d_4 );
        }
        cache_frame_0241c0e5e7a04bf371087affddc2d74d_4 = NULL;

        assertFrameObject( frame_0241c0e5e7a04bf371087affddc2d74d_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_12;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_13 = const_str_plain_RK45;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_13 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_13 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_13 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_13 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_13 );
            tmp_tuple_element_13 = locals_scipy$integrate$_ivp$rk_262;
            Py_INCREF( tmp_tuple_element_13 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_13 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_14e526b05a28a2e722faa717106ee557->m_frame.f_lineno = 262;
            tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;

                goto try_except_handler_12;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_42 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_42 );
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF( locals_scipy$integrate$_ivp$rk_262 );
        locals_scipy$integrate$_ivp$rk_262 = NULL;
        goto try_return_handler_11;
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

        Py_DECREF( locals_scipy$integrate$_ivp$rk_262 );
        locals_scipy$integrate$_ivp$rk_262 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
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

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 262;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_RK45, tmp_assign_source_42 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_mvar_value_22;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_DenseOutput );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DenseOutput );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DenseOutput" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 367;

            goto try_except_handler_13;
        }

        tmp_tuple_element_14 = tmp_mvar_value_22;
        tmp_assign_source_44 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_14 );
        PyTuple_SET_ITEM( tmp_assign_source_44, 0, tmp_tuple_element_14 );
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = PyDict_New();
        assert( tmp_class_creation_4__class_decl_dict == NULL );
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_key_name_11;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;

            goto try_except_handler_13;
        }
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = const_str_plain_metaclass;
        tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;

            goto try_except_handler_13;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_subscribed_name_4 = tmp_class_creation_4__bases;
        tmp_subscript_name_4 = const_int_0;
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        if ( tmp_type_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;

            goto try_except_handler_13;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_7 );
        Py_DECREF( tmp_type_arg_7 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;

            goto try_except_handler_13;
        }
        condexpr_end_4:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_46 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
        Py_DECREF( tmp_metaclass_name_4 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;

            goto try_except_handler_13;
        }
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_name_12;
        tmp_key_name_12 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;

            goto try_except_handler_13;
        }
        tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;

            goto try_except_handler_13;
        }
        branch_no_10:;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_source_name_14;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_source_name_14 = tmp_class_creation_4__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_14, const_str_plain___prepare__ );
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_15;
            PyObject *tmp_args_name_7;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_source_name_15 = tmp_class_creation_4__metaclass;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain___prepare__ );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 367;

                goto try_except_handler_13;
            }
            tmp_tuple_element_15 = const_str_plain_RkDenseOutput;
            tmp_args_name_7 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_15 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_15 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_15 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
            frame_14e526b05a28a2e722faa717106ee557->m_frame.f_lineno = 367;
            tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_name_7 );
            if ( tmp_assign_source_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 367;

                goto try_except_handler_13;
            }
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_47;
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_source_name_16;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_source_name_16 = tmp_class_creation_4__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_16, const_str_plain___getitem__ );
            tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 367;

                goto try_except_handler_13;
            }
            tmp_condition_result_16 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_raise_value_4;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_getattr_target_4;
                PyObject *tmp_getattr_attr_4;
                PyObject *tmp_getattr_default_4;
                PyObject *tmp_source_name_17;
                PyObject *tmp_type_arg_8;
                tmp_raise_type_4 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_4__metaclass );
                tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
                tmp_getattr_attr_4 = const_str_plain___name__;
                tmp_getattr_default_4 = const_str_angle_metaclass;
                tmp_tuple_element_16 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
                if ( tmp_tuple_element_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 367;

                    goto try_except_handler_13;
                }
                tmp_right_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_16 );
                CHECK_OBJECT( tmp_class_creation_4__prepared );
                tmp_type_arg_8 = tmp_class_creation_4__prepared;
                tmp_source_name_17 = BUILTIN_TYPE1( tmp_type_arg_8 );
                assert( !(tmp_source_name_17 == NULL) );
                tmp_tuple_element_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_17 );
                if ( tmp_tuple_element_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_4 );

                    exception_lineno = 367;

                    goto try_except_handler_13;
                }
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_16 );
                tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_raise_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 367;

                    goto try_except_handler_13;
                }
                exception_type = tmp_raise_type_4;
                Py_INCREF( tmp_raise_type_4 );
                exception_value = tmp_raise_value_4;
                exception_lineno = 367;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_13;
            }
            branch_no_12:;
        }
        goto branch_end_11;
        branch_no_11:;
        {
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = PyDict_New();
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_48;
        }
        branch_end_11:;
    }
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_scipy$integrate$_ivp$rk_367 = tmp_set_locals_4;
            Py_INCREF( tmp_set_locals_4 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_66fb9273d05bf5e84660b0d4471e3004;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_367, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_plain_RkDenseOutput;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_367, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;

            goto try_except_handler_15;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_deb2b12a792415e828d4a59d5512b5f7_5, codeobj_deb2b12a792415e828d4a59d5512b5f7, module_scipy$integrate$_ivp$rk, sizeof(void *) );
        frame_deb2b12a792415e828d4a59d5512b5f7_5 = cache_frame_deb2b12a792415e828d4a59d5512b5f7_5;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_deb2b12a792415e828d4a59d5512b5f7_5 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_deb2b12a792415e828d4a59d5512b5f7_5 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_5___init__(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_367, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$rk$$$function_6__call_impl(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$rk_367, const_str_plain__call_impl, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_deb2b12a792415e828d4a59d5512b5f7_5 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_deb2b12a792415e828d4a59d5512b5f7_5 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_deb2b12a792415e828d4a59d5512b5f7_5, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_deb2b12a792415e828d4a59d5512b5f7_5->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_deb2b12a792415e828d4a59d5512b5f7_5, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_deb2b12a792415e828d4a59d5512b5f7_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame.
        if ( frame_deb2b12a792415e828d4a59d5512b5f7_5 == cache_frame_deb2b12a792415e828d4a59d5512b5f7_5 )
        {
            Py_DECREF( frame_deb2b12a792415e828d4a59d5512b5f7_5 );
        }
        cache_frame_deb2b12a792415e828d4a59d5512b5f7_5 = NULL;

        assertFrameObject( frame_deb2b12a792415e828d4a59d5512b5f7_5 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_15;
        skip_nested_handling_4:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_called_name_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_17 = const_str_plain_RkDenseOutput;
            tmp_args_name_8 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_17 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_17 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_17 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_17 );
            PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_17 );
            tmp_tuple_element_17 = locals_scipy$integrate$_ivp$rk_367;
            Py_INCREF( tmp_tuple_element_17 );
            PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_17 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_14e526b05a28a2e722faa717106ee557->m_frame.f_lineno = 367;
            tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_args_name_8 );
            if ( tmp_assign_source_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 367;

                goto try_except_handler_15;
            }
            assert( outline_3_var___class__ == NULL );
            outline_3_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT( outline_3_var___class__ );
        tmp_assign_source_49 = outline_3_var___class__;
        Py_INCREF( tmp_assign_source_49 );
        goto try_return_handler_15;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF( locals_scipy$integrate$_ivp$rk_367 );
        locals_scipy$integrate$_ivp$rk_367 = NULL;
        goto try_return_handler_14;
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

        Py_DECREF( locals_scipy$integrate$_ivp$rk_367 );
        locals_scipy$integrate$_ivp$rk_367 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
        Py_DECREF( outline_3_var___class__ );
        outline_3_var___class__ = NULL;

        goto outline_result_4;
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

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$rk );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_4:;
        exception_lineno = 367;
        goto try_except_handler_13;
        outline_result_4:;
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain_RkDenseOutput, tmp_assign_source_49 );
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_14e526b05a28a2e722faa717106ee557 );
#endif
    popFrameStack();

    assertFrameObject( frame_14e526b05a28a2e722faa717106ee557 );

    goto frame_no_exception_5;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_14e526b05a28a2e722faa717106ee557 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_14e526b05a28a2e722faa717106ee557, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_14e526b05a28a2e722faa717106ee557->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_14e526b05a28a2e722faa717106ee557, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$rk, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$integrate$_ivp$rk );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
