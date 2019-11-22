/* Generated code for Python module 'scipy.integrate._ivp.radau'
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

/* The "_module_scipy$integrate$_ivp$radau" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$integrate$_ivp$radau;
PyDictObject *moduledict_scipy$integrate$_ivp$radau;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_group_columns;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_33964982ceaa700d4b03ba989e456cc3_tuple;
extern PyObject *const_str_plain_array;
static PyObject *const_float_4_178718591551904;
extern PyObject *const_str_plain___name__;
extern PyObject *const_float_0_3333333333333333;
extern PyObject *const_str_plain_NEWTON_MAXITER;
extern PyObject *const_str_plain_isfinite;
static PyObject *const_tuple_996c9bbe449df320e28082e83a96a177_tuple;
static PyObject *const_float_4_333333333333333;
extern PyObject *const_str_plain_select_initial_step;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_float_0_001;
extern PyObject *const_int_pos_22;
extern PyObject *const_str_plain_y_old;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain_h;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_4dc463736b010471da5b16d4f2089724;
static PyObject *const_float_0_20412935229379994;
extern PyObject *const_str_plain__step_impl;
extern PyObject *const_str_plain_solve;
extern PyObject *const_str_plain_warn_extraneous;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
static PyObject *const_str_digest_473be3146c13381dbc4b22119f728594;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_njev;
static PyObject *const_str_plain_current_jac;
extern PyObject *const_str_plain_jac;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_division;
static PyObject *const_float_3_637834252744496;
extern PyObject *const_int_neg_1;
extern PyObject *const_tuple_str_plain_self_str_plain_Q_tuple;
extern PyObject *const_str_plain_ignore;
extern PyObject *const_str_plain_overwrite_a;
extern PyObject *const_str_plain_validate_first_step;
extern PyObject *const_str_plain_atol;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_error_norm_old;
static PyObject *const_str_plain_predict_factor;
extern PyObject *const_str_plain_None;
extern PyObject *const_float_0_25;
extern PyObject *const_str_plain_EPS;
extern PyObject *const_str_plain_num_jac;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_digest_b45be6e078995041cc113ab76fa71535;
extern PyObject *const_str_plain_callable;
extern PyObject *const_str_plain_nlu;
extern PyObject *const_float_0_5;
extern PyObject *const_int_pos_5;
static PyObject *const_str_digest_baac78f02e1c4f3ab74966c4407db626;
extern PyObject *const_tuple_0dd640bbdfe6652435c5cada2fe2fc31_tuple;
static PyObject *const_float_0_5233764454994495;
static PyObject *const_list_int_pos_1_int_pos_1_int_0_list;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_dict_298d89659f37555f5fbef3ddd7a920af;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_MIN_FACTOR;
extern PyObject *const_str_plain_vectorized;
extern PyObject *const_tuple_str_plain_group_columns_tuple;
extern PyObject *const_str_plain___debug__;
static PyObject *const_float_minus_7_666666666666667;
extern PyObject *const_str_plain_factor;
extern PyObject *const_str_plain_DenseOutput;
static PyObject *const_str_plain__compute_dense_output;
static PyObject *const_float_minus_0_32768282076106237;
extern PyObject *const_str_plain_rtol;
static PyObject *const_str_plain_solve_collocation_system;
static PyObject *const_float_minus_0_3829421127572619;
extern PyObject *const_str_plain_jac_sparsity;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_list_087aa3eea8090810e365c34b89032b78_list;
static PyObject *const_tuple_355088b1d261bb444f6fe6d0feb7b487_tuple;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_lu;
extern PyObject *const_str_plain_n;
extern PyObject *const_dict_de639e5406c83de902c3c5cbde7c2788;
extern PyObject *const_str_plain_Z;
static PyObject *const_float_0_03002919410514742;
static PyObject *const_str_plain_TI_REAL;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_J;
extern PyObject *const_str_plain_y0;
extern PyObject *const_float_minus_0_25;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_direction;
static PyObject *const_list_52f4f3d76e8c696291489f9cf5570996_list;
extern PyObject *const_str_plain_error_norm;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_float;
static PyObject *const_str_plain_LU_real;
extern PyObject *const_tuple_slice_none_none_none_none_tuple;
extern PyObject *const_str_plain_sparsity;
extern PyObject *const_str_plain_csc;
static PyObject *const_str_plain_MU_COMPLEX;
extern PyObject *const_float_1eminus_06;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_fun_vectorized;
extern PyObject *const_str_plain__validate_jac;
extern PyObject *const_str_plain_lu_factor;
extern PyObject *const_str_plain_imag;
static PyObject *const_str_plain_S6;
extern PyObject *const_str_plain_MAX_FACTOR;
extern PyObject *const_str_plain_divide;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_multiplier;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_LU;
static PyObject *const_tuple_fc22099a8556feb4d99948e4e9f6a2c6_tuple;
static PyObject *const_tuple_01aff7c05a30ee43a5c5431c4d13e791_tuple;
extern PyObject *const_str_plain_solve_lu;
extern PyObject *const_str_plain_sol;
extern PyObject *const_str_plain_P;
extern PyObject *const_int_pos_10;
extern PyObject *const_float_1_2;
static PyObject *const_list_e313ae9d97c08da8d2ec86e911850907_list;
static PyObject *const_tuple_str_plain_csc_matrix_str_plain_issparse_str_plain_eye_tuple;
extern PyObject *const_str_plain_t0;
static PyObject *const_str_digest_3b923f7764a6e1ada3561239e775b4be;
extern PyObject *const_str_plain__call_impl;
extern PyObject *const_str_plain_lu_solve;
extern PyObject *const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202;
static PyObject *const_str_digest_71e80c2f9197f4cc34aa0d9eb2ba0b92;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain__dense_output_impl;
extern PyObject *const_str_plain_overwrite_b;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_OdeSolver;
extern PyObject *const_str_plain_issparse;
static PyObject *const_str_digest_93f7723c6dc677b0f694fc2754e58e31;
extern PyObject *const_str_plain_Q;
extern PyObject *const_complex_0_0__1_0;
extern PyObject *const_str_plain_jac_wrapped;
extern PyObject *const_str_plain_Radau;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_TI;
extern PyObject *const_str_plain_TOO_SMALL_STEP;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_xrange_0_3;
extern PyObject *const_str_digest_8783708b6421c71a0892a844e756fb02;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_validate_max_step;
extern PyObject *const_str_plain_newton_tol;
extern PyObject *const_str_plain_t_old;
static PyObject *const_int_neg_13;
extern PyObject *const_tuple_str_plain_lu_factor_str_plain_lu_solve_tuple;
extern PyObject *const_str_digest_52d7d48bcb5881cf5fb85bf73f99ad81;
extern PyObject *const_tuple_56a4b3b2e65ac9adc55440ee96b7c34c_tuple;
extern PyObject *const_str_plain_I;
static PyObject *const_list_d9dbe280f293d7079d18d78e5b87b1b7_list;
static PyObject *const_str_digest_4925cffd8f8fda2ddfec8af972a6038e;
static PyObject *const_list_18afd58c57abd447fea35c4536ff5159_list;
extern PyObject *const_int_0;
static PyObject *const_float_minus_4_178718591551904;
extern PyObject *const_str_plain_splu;
static PyObject *const_str_plain_TI_COMPLEX;
extern PyObject *const_str_plain_eye;
extern PyObject *const_str_plain_tile;
extern PyObject *const_str_plain_origin;
extern PyObject *const_dict_ec6cc0116ef299a274b2baadbcdeac09;
extern PyObject *const_float_0_2;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_str_plain_splu_tuple;
static PyObject *const_str_digest_e709a11bc2bd2b625f81b909d6823d3f;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_identity;
extern PyObject *const_str_plain_base;
static PyObject *const_float_3_3333333333333335;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_cf857eee4f96333f9ec2540a24fda77b;
extern PyObject *const_str_plain_h_abs_old;
extern PyObject *const_str_plain_first_step;
static PyObject *const_float_0_32768282076106237;
extern PyObject *const_str_plain_empty_like;
extern PyObject *const_str_plain_t_bound;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___class__;
static PyObject *const_float_minus_0_1412552950209542;
extern PyObject *const_str_plain__;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
static PyObject *const_str_plain_LU_complex;
extern PyObject *const_str_plain_csc_matrix;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_jac_factor;
extern PyObject *const_dict_8837fe4bb3a549694f7f0fd86cdb8b13;
extern PyObject *const_str_plain_nextafter;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_int_pos_1;
static PyObject *const_float_0_2502131229653333;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
extern PyObject *const_str_plain_y;
static PyObject *const_str_digest_8e999a67b6c18caa81746f639c2b720e;
extern PyObject *const_str_plain_validate_tol;
extern PyObject *const_tuple_str_plain_A_str_plain_self_tuple;
static PyObject *const_float_2_449489742783178;
extern PyObject *const_str_plain_axis;
extern PyObject *const_float_0_03;
extern PyObject *const_str_plain_cumprod;
static PyObject *const_str_digest_5bb1f0efe3307cf37d3acf1b3e14ced4;
static PyObject *const_list_bad29dbdd5bb4f13258076208387b472_list;
extern PyObject *const_str_plain_h_abs;
static PyObject *const_str_digest_ec2cff023a14490f278219e273d10a74;
extern PyObject *const_str_plain_max_step;
static PyObject *const_float_minus_2_6666666666666665;
static PyObject *const_float_minus_2_571926949855605;
extern PyObject *const_str_plain_maximum;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_errstate;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_e6dda35c0902235150ffd90b78ceafed;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_float_0_09443876248897524;
static PyObject *const_float_0_47662355450055044;
extern PyObject *const_tuple_str_plain_OdeSolver_str_plain_DenseOutput_tuple;
static PyObject *const_float_0_5960392048282249;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_self;
static PyObject *const_list_80d213834c341bad2491979613439ca0_list;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_groups;
extern PyObject *const_str_plain_T;
extern PyObject *const_int_pos_7;
extern PyObject *const_float_0_9;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
static PyObject *const_float_0_5028726349457868;
static PyObject *const_tuple_89b2da8cd724fbb4459a507d7d73ce36_tuple;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_E;
static PyObject *const_str_plain_RadauDenseOutput;
static PyObject *const_list_a1564d73028eba19876a85e731f06468_list;
extern PyObject *const_str_plain_A;
extern PyObject *const_tuple_75546ce2d60f2907037f619a65fc8879_tuple;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_2aac05c711f7e0ede57ffba9a6bd54a8;
static PyObject *const_str_digest_0ffeeb45674f120c552cdfa88505e698;
static PyObject *const_str_digest_a6119b2f7af2cf7feb4cdf53296b4e0a;
extern PyObject *const_str_plain_common;
static PyObject *const_tuple_56d74e3295ac2b76fba5a4cb3f8da310_tuple;
extern PyObject *const_tuple_str_plain_LU_str_plain_b_tuple;
static PyObject *const_str_plain_MU_REAL;
extern PyObject *const_str_plain_extraneous;
extern PyObject *const_str_plain_order;
static PyObject *const_complex_2_6810828736277523__m3_050430199247411;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_float_4_178718591551904 = UNSTREAM_FLOAT( &constant_bin[ 4161966 ] );
    const_tuple_996c9bbe449df320e28082e83a96a177_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 1, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 2, const_str_plain_t0 ); Py_INCREF( const_str_plain_t0 );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 3, const_str_plain_y0 ); Py_INCREF( const_str_plain_y0 );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 4, const_str_plain_t_bound ); Py_INCREF( const_str_plain_t_bound );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 5, const_str_plain_max_step ); Py_INCREF( const_str_plain_max_step );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 6, const_str_plain_rtol ); Py_INCREF( const_str_plain_rtol );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 7, const_str_plain_atol ); Py_INCREF( const_str_plain_atol );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 8, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 9, const_str_plain_jac_sparsity ); Py_INCREF( const_str_plain_jac_sparsity );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 10, const_str_plain_vectorized ); Py_INCREF( const_str_plain_vectorized );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 11, const_str_plain_first_step ); Py_INCREF( const_str_plain_first_step );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 12, const_str_plain_extraneous ); Py_INCREF( const_str_plain_extraneous );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 13, const_str_plain_lu ); Py_INCREF( const_str_plain_lu );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 14, const_str_plain_solve_lu ); Py_INCREF( const_str_plain_solve_lu );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 15, const_str_plain_I ); Py_INCREF( const_str_plain_I );
    PyTuple_SET_ITEM( const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 16, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_float_4_333333333333333 = UNSTREAM_FLOAT( &constant_bin[ 4161974 ] );
    const_str_digest_4dc463736b010471da5b16d4f2089724 = UNSTREAM_STRING_ASCII( &constant_bin[ 4161982 ], 4898, 0 );
    const_float_0_20412935229379994 = UNSTREAM_FLOAT( &constant_bin[ 4166880 ] );
    const_str_digest_473be3146c13381dbc4b22119f728594 = UNSTREAM_STRING_ASCII( &constant_bin[ 4166888 ], 19, 0 );
    const_str_plain_current_jac = UNSTREAM_STRING_ASCII( &constant_bin[ 4132728 ], 11, 1 );
    const_float_3_637834252744496 = UNSTREAM_FLOAT( &constant_bin[ 4166907 ] );
    const_str_plain_predict_factor = UNSTREAM_STRING_ASCII( &constant_bin[ 4166915 ], 14, 1 );
    const_str_digest_baac78f02e1c4f3ab74966c4407db626 = UNSTREAM_STRING_ASCII( &constant_bin[ 4166929 ], 29, 0 );
    const_float_0_5233764454994495 = UNSTREAM_FLOAT( &constant_bin[ 4166958 ] );
    const_list_int_pos_1_int_pos_1_int_0_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_1_int_0_list, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_1_int_0_list, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_1_int_0_list, 2, const_int_0 ); Py_INCREF( const_int_0 );
    const_float_minus_7_666666666666667 = UNSTREAM_FLOAT( &constant_bin[ 4166966 ] );
    const_str_plain__compute_dense_output = UNSTREAM_STRING_ASCII( &constant_bin[ 4166974 ], 21, 1 );
    const_float_minus_0_32768282076106237 = UNSTREAM_FLOAT( &constant_bin[ 4166995 ] );
    const_str_plain_solve_collocation_system = UNSTREAM_STRING_ASCII( &constant_bin[ 4167003 ], 24, 1 );
    const_float_minus_0_3829421127572619 = UNSTREAM_FLOAT( &constant_bin[ 4167027 ] );
    const_list_087aa3eea8090810e365c34b89032b78_list = PyList_New( 3 );
    const_list_52f4f3d76e8c696291489f9cf5570996_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_52f4f3d76e8c696291489f9cf5570996_list, 0, const_float_4_178718591551904 ); Py_INCREF( const_float_4_178718591551904 );
    const_float_0_32768282076106237 = UNSTREAM_FLOAT( &constant_bin[ 4167035 ] );
    PyList_SET_ITEM( const_list_52f4f3d76e8c696291489f9cf5570996_list, 1, const_float_0_32768282076106237 ); Py_INCREF( const_float_0_32768282076106237 );
    PyList_SET_ITEM( const_list_52f4f3d76e8c696291489f9cf5570996_list, 2, const_float_0_5233764454994495 ); Py_INCREF( const_float_0_5233764454994495 );
    PyList_SET_ITEM( const_list_087aa3eea8090810e365c34b89032b78_list, 0, const_list_52f4f3d76e8c696291489f9cf5570996_list ); Py_INCREF( const_list_52f4f3d76e8c696291489f9cf5570996_list );
    const_list_80d213834c341bad2491979613439ca0_list = PyList_New( 3 );
    const_float_minus_4_178718591551904 = UNSTREAM_FLOAT( &constant_bin[ 4167043 ] );
    PyList_SET_ITEM( const_list_80d213834c341bad2491979613439ca0_list, 0, const_float_minus_4_178718591551904 ); Py_INCREF( const_float_minus_4_178718591551904 );
    PyList_SET_ITEM( const_list_80d213834c341bad2491979613439ca0_list, 1, const_float_minus_0_32768282076106237 ); Py_INCREF( const_float_minus_0_32768282076106237 );
    const_float_0_47662355450055044 = UNSTREAM_FLOAT( &constant_bin[ 4167051 ] );
    PyList_SET_ITEM( const_list_80d213834c341bad2491979613439ca0_list, 2, const_float_0_47662355450055044 ); Py_INCREF( const_float_0_47662355450055044 );
    PyList_SET_ITEM( const_list_087aa3eea8090810e365c34b89032b78_list, 1, const_list_80d213834c341bad2491979613439ca0_list ); Py_INCREF( const_list_80d213834c341bad2491979613439ca0_list );
    const_list_18afd58c57abd447fea35c4536ff5159_list = PyList_New( 3 );
    const_float_0_5028726349457868 = UNSTREAM_FLOAT( &constant_bin[ 4167059 ] );
    PyList_SET_ITEM( const_list_18afd58c57abd447fea35c4536ff5159_list, 0, const_float_0_5028726349457868 ); Py_INCREF( const_float_0_5028726349457868 );
    const_float_minus_2_571926949855605 = UNSTREAM_FLOAT( &constant_bin[ 4167067 ] );
    PyList_SET_ITEM( const_list_18afd58c57abd447fea35c4536ff5159_list, 1, const_float_minus_2_571926949855605 ); Py_INCREF( const_float_minus_2_571926949855605 );
    const_float_0_5960392048282249 = UNSTREAM_FLOAT( &constant_bin[ 4167075 ] );
    PyList_SET_ITEM( const_list_18afd58c57abd447fea35c4536ff5159_list, 2, const_float_0_5960392048282249 ); Py_INCREF( const_float_0_5960392048282249 );
    PyList_SET_ITEM( const_list_087aa3eea8090810e365c34b89032b78_list, 2, const_list_18afd58c57abd447fea35c4536ff5159_list ); Py_INCREF( const_list_18afd58c57abd447fea35c4536ff5159_list );
    const_tuple_355088b1d261bb444f6fe6d0feb7b487_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4167083 ], 276 );
    const_float_0_03002919410514742 = UNSTREAM_FLOAT( &constant_bin[ 4167359 ] );
    const_str_plain_TI_REAL = UNSTREAM_STRING_ASCII( &constant_bin[ 4167367 ], 7, 1 );
    const_str_plain_LU_real = UNSTREAM_STRING_ASCII( &constant_bin[ 4167171 ], 7, 1 );
    const_str_plain_MU_COMPLEX = UNSTREAM_STRING_ASCII( &constant_bin[ 4167374 ], 10, 1 );
    const_str_plain_S6 = UNSTREAM_STRING_ASCII( &constant_bin[ 365362 ], 2, 1 );
    const_str_plain_multiplier = UNSTREAM_STRING_ASCII( &constant_bin[ 3887411 ], 10, 1 );
    const_tuple_fc22099a8556feb4d99948e4e9f6a2c6_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_fc22099a8556feb4d99948e4e9f6a2c6_tuple, 0, const_str_plain_validate_max_step ); Py_INCREF( const_str_plain_validate_max_step );
    PyTuple_SET_ITEM( const_tuple_fc22099a8556feb4d99948e4e9f6a2c6_tuple, 1, const_str_plain_validate_tol ); Py_INCREF( const_str_plain_validate_tol );
    PyTuple_SET_ITEM( const_tuple_fc22099a8556feb4d99948e4e9f6a2c6_tuple, 2, const_str_plain_select_initial_step ); Py_INCREF( const_str_plain_select_initial_step );
    PyTuple_SET_ITEM( const_tuple_fc22099a8556feb4d99948e4e9f6a2c6_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_fc22099a8556feb4d99948e4e9f6a2c6_tuple, 4, const_str_plain_num_jac ); Py_INCREF( const_str_plain_num_jac );
    PyTuple_SET_ITEM( const_tuple_fc22099a8556feb4d99948e4e9f6a2c6_tuple, 5, const_str_plain_EPS ); Py_INCREF( const_str_plain_EPS );
    PyTuple_SET_ITEM( const_tuple_fc22099a8556feb4d99948e4e9f6a2c6_tuple, 6, const_str_plain_warn_extraneous ); Py_INCREF( const_str_plain_warn_extraneous );
    PyTuple_SET_ITEM( const_tuple_fc22099a8556feb4d99948e4e9f6a2c6_tuple, 7, const_str_plain_validate_first_step ); Py_INCREF( const_str_plain_validate_first_step );
    const_tuple_01aff7c05a30ee43a5c5431c4d13e791_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4167384 ], 187 );
    const_list_e313ae9d97c08da8d2ec86e911850907_list = PyList_New( 3 );
    const_float_0_2502131229653333 = UNSTREAM_FLOAT( &constant_bin[ 4167571 ] );
    PyList_SET_ITEM( const_list_e313ae9d97c08da8d2ec86e911850907_list, 0, const_float_0_2502131229653333 ); Py_INCREF( const_float_0_2502131229653333 );
    PyList_SET_ITEM( const_list_e313ae9d97c08da8d2ec86e911850907_list, 1, const_float_0_20412935229379994 ); Py_INCREF( const_float_0_20412935229379994 );
    PyList_SET_ITEM( const_list_e313ae9d97c08da8d2ec86e911850907_list, 2, const_float_minus_0_3829421127572619 ); Py_INCREF( const_float_minus_0_3829421127572619 );
    const_tuple_str_plain_csc_matrix_str_plain_issparse_str_plain_eye_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_csc_matrix_str_plain_issparse_str_plain_eye_tuple, 0, const_str_plain_csc_matrix ); Py_INCREF( const_str_plain_csc_matrix );
    PyTuple_SET_ITEM( const_tuple_str_plain_csc_matrix_str_plain_issparse_str_plain_eye_tuple, 1, const_str_plain_issparse ); Py_INCREF( const_str_plain_issparse );
    PyTuple_SET_ITEM( const_tuple_str_plain_csc_matrix_str_plain_issparse_str_plain_eye_tuple, 2, const_str_plain_eye ); Py_INCREF( const_str_plain_eye );
    const_str_digest_3b923f7764a6e1ada3561239e775b4be = UNSTREAM_STRING_ASCII( &constant_bin[ 4167579 ], 24, 0 );
    const_str_digest_71e80c2f9197f4cc34aa0d9eb2ba0b92 = UNSTREAM_STRING_ASCII( &constant_bin[ 4167603 ], 27, 0 );
    const_str_digest_93f7723c6dc677b0f694fc2754e58e31 = UNSTREAM_STRING_ASCII( &constant_bin[ 4167630 ], 825, 0 );
    const_str_plain_TI = UNSTREAM_STRING_ASCII( &constant_bin[ 6254 ], 2, 1 );
    const_int_neg_13 = PyLong_FromLong( -13l );
    const_list_d9dbe280f293d7079d18d78e5b87b1b7_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_d9dbe280f293d7079d18d78e5b87b1b7_list, 0, const_float_0_3333333333333333 ); Py_INCREF( const_float_0_3333333333333333 );
    const_float_minus_2_6666666666666665 = UNSTREAM_FLOAT( &constant_bin[ 4168455 ] );
    PyList_SET_ITEM( const_list_d9dbe280f293d7079d18d78e5b87b1b7_list, 1, const_float_minus_2_6666666666666665 ); Py_INCREF( const_float_minus_2_6666666666666665 );
    const_float_3_3333333333333335 = UNSTREAM_FLOAT( &constant_bin[ 4168463 ] );
    PyList_SET_ITEM( const_list_d9dbe280f293d7079d18d78e5b87b1b7_list, 2, const_float_3_3333333333333335 ); Py_INCREF( const_float_3_3333333333333335 );
    const_str_digest_4925cffd8f8fda2ddfec8af972a6038e = UNSTREAM_STRING_ASCII( &constant_bin[ 4168471 ], 14, 0 );
    const_str_plain_TI_COMPLEX = UNSTREAM_STRING_ASCII( &constant_bin[ 4168485 ], 10, 1 );
    const_str_digest_e709a11bc2bd2b625f81b909d6823d3f = UNSTREAM_STRING_ASCII( &constant_bin[ 4168495 ], 35, 0 );
    const_str_digest_cf857eee4f96333f9ec2540a24fda77b = UNSTREAM_STRING_ASCII( &constant_bin[ 4168530 ], 40, 0 );
    const_float_minus_0_1412552950209542 = UNSTREAM_FLOAT( &constant_bin[ 4168570 ] );
    const_str_plain_LU_complex = UNSTREAM_STRING_ASCII( &constant_bin[ 4167180 ], 10, 1 );
    const_str_digest_8e999a67b6c18caa81746f639c2b720e = UNSTREAM_STRING_ASCII( &constant_bin[ 4168578 ], 16, 0 );
    const_float_2_449489742783178 = UNSTREAM_FLOAT( &constant_bin[ 4168594 ] );
    const_str_digest_5bb1f0efe3307cf37d3acf1b3e14ced4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4168602 ], 27, 0 );
    const_list_bad29dbdd5bb4f13258076208387b472_list = PyList_New( 3 );
    const_float_0_09443876248897524 = UNSTREAM_FLOAT( &constant_bin[ 4168629 ] );
    PyList_SET_ITEM( const_list_bad29dbdd5bb4f13258076208387b472_list, 0, const_float_0_09443876248897524 ); Py_INCREF( const_float_0_09443876248897524 );
    PyList_SET_ITEM( const_list_bad29dbdd5bb4f13258076208387b472_list, 1, const_float_minus_0_1412552950209542 ); Py_INCREF( const_float_minus_0_1412552950209542 );
    PyList_SET_ITEM( const_list_bad29dbdd5bb4f13258076208387b472_list, 2, const_float_0_03002919410514742 ); Py_INCREF( const_float_0_03002919410514742 );
    const_str_digest_ec2cff023a14490f278219e273d10a74 = UNSTREAM_STRING_ASCII( &constant_bin[ 4168637 ], 26, 0 );
    const_str_digest_e6dda35c0902235150ffd90b78ceafed = UNSTREAM_STRING_ASCII( &constant_bin[ 4168663 ], 1105, 0 );
    const_tuple_89b2da8cd724fbb4459a507d7d73ce36_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_89b2da8cd724fbb4459a507d7d73ce36_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_89b2da8cd724fbb4459a507d7d73ce36_tuple, 1, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_89b2da8cd724fbb4459a507d7d73ce36_tuple, 2, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_89b2da8cd724fbb4459a507d7d73ce36_tuple, 3, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_89b2da8cd724fbb4459a507d7d73ce36_tuple, 4, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    const_str_plain_RadauDenseOutput = UNSTREAM_STRING_ASCII( &constant_bin[ 4167603 ], 16, 1 );
    const_list_a1564d73028eba19876a85e731f06468_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_a1564d73028eba19876a85e731f06468_list, 0, const_list_bad29dbdd5bb4f13258076208387b472_list ); Py_INCREF( const_list_bad29dbdd5bb4f13258076208387b472_list );
    PyList_SET_ITEM( const_list_a1564d73028eba19876a85e731f06468_list, 1, const_list_e313ae9d97c08da8d2ec86e911850907_list ); Py_INCREF( const_list_e313ae9d97c08da8d2ec86e911850907_list );
    PyList_SET_ITEM( const_list_a1564d73028eba19876a85e731f06468_list, 2, const_list_int_pos_1_int_pos_1_int_0_list ); Py_INCREF( const_list_int_pos_1_int_pos_1_int_0_list );
    const_str_digest_2aac05c711f7e0ede57ffba9a6bd54a8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4168503 ], 26, 0 );
    const_str_digest_0ffeeb45674f120c552cdfa88505e698 = UNSTREAM_STRING_ASCII( &constant_bin[ 4169768 ], 25, 0 );
    const_str_digest_a6119b2f7af2cf7feb4cdf53296b4e0a = UNSTREAM_STRING_ASCII( &constant_bin[ 4169793 ], 32, 0 );
    const_tuple_56d74e3295ac2b76fba5a4cb3f8da310_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_56d74e3295ac2b76fba5a4cb3f8da310_tuple, 0, const_str_plain_h_abs ); Py_INCREF( const_str_plain_h_abs );
    PyTuple_SET_ITEM( const_tuple_56d74e3295ac2b76fba5a4cb3f8da310_tuple, 1, const_str_plain_h_abs_old ); Py_INCREF( const_str_plain_h_abs_old );
    PyTuple_SET_ITEM( const_tuple_56d74e3295ac2b76fba5a4cb3f8da310_tuple, 2, const_str_plain_error_norm ); Py_INCREF( const_str_plain_error_norm );
    PyTuple_SET_ITEM( const_tuple_56d74e3295ac2b76fba5a4cb3f8da310_tuple, 3, const_str_plain_error_norm_old ); Py_INCREF( const_str_plain_error_norm_old );
    PyTuple_SET_ITEM( const_tuple_56d74e3295ac2b76fba5a4cb3f8da310_tuple, 4, const_str_plain_multiplier ); Py_INCREF( const_str_plain_multiplier );
    PyTuple_SET_ITEM( const_tuple_56d74e3295ac2b76fba5a4cb3f8da310_tuple, 5, const_str_plain_factor ); Py_INCREF( const_str_plain_factor );
    const_str_plain_MU_REAL = UNSTREAM_STRING_ASCII( &constant_bin[ 4169825 ], 7, 1 );
    const_complex_2_6810828736277523__m3_050430199247411 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4169832 ], 17 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$integrate$_ivp$radau( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_68bc553acc19d37f3a821c1e901ad76c;
static PyCodeObject *codeobj_e60040bd160fe0cf9a5a3239fc1cb8e4;
static PyCodeObject *codeobj_48943de6ab9865f92aa93bd5d8aa77bd;
static PyCodeObject *codeobj_e12354d4de89879032344ca1dddc6211;
static PyCodeObject *codeobj_5a800ed51eb887a1f7d5c780ab2fe4e7;
static PyCodeObject *codeobj_e05b278d0bd775f5de3fbcdcb0eac899;
static PyCodeObject *codeobj_15118c3dbd2160a36997502a7056ab18;
static PyCodeObject *codeobj_71a414dbb37d28d0a9f0d73b5ce3f7f1;
static PyCodeObject *codeobj_6c7bda5d341610aa1bdaafbebeade9a6;
static PyCodeObject *codeobj_fa3f8d194ac7364128b0bb22bb5584d8;
static PyCodeObject *codeobj_121cbc2318b32fc0d1adc1a63a91e834;
static PyCodeObject *codeobj_45e068bc4bb2b0e238dbb8d47447153c;
static PyCodeObject *codeobj_955bba212ddacc524ba086c4bf10e736;
static PyCodeObject *codeobj_9aa2712caa92ea2628fcc54eb1c855bc;
static PyCodeObject *codeobj_f05afead1614d34c98b34614d34a9ddd;
static PyCodeObject *codeobj_6079d9517f3b70454e6d591ac47ed9c1;
static PyCodeObject *codeobj_ebe5b12f821bfa563370536bad52f4cd;
static PyCodeObject *codeobj_b3b6ecd98e633d8948bd85809254a6a2;
static PyCodeObject *codeobj_5e8f2aaf4eda72d2fc8fad21de9520a8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_baac78f02e1c4f3ab74966c4407db626 );
    codeobj_68bc553acc19d37f3a821c1e901ad76c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e709a11bc2bd2b625f81b909d6823d3f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e60040bd160fe0cf9a5a3239fc1cb8e4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Radau, 181, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_48943de6ab9865f92aa93bd5d8aa77bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RadauDenseOutput, 540, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_e12354d4de89879032344ca1dddc6211 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 284, const_tuple_996c9bbe449df320e28082e83a96a177_tuple, 12, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS );
    codeobj_5a800ed51eb887a1f7d5c780ab2fe4e7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 541, const_tuple_33964982ceaa700d4b03ba989e456cc3_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_e05b278d0bd775f5de3fbcdcb0eac899 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__call_impl, 548, const_tuple_75546ce2d60f2907037f619a65fc8879_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_15118c3dbd2160a36997502a7056ab18 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compute_dense_output, 532, const_tuple_str_plain_self_str_plain_Q_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_71a414dbb37d28d0a9f0d73b5ce3f7f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dense_output_impl, 536, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6c7bda5d341610aa1bdaafbebeade9a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__step_impl, 390, const_tuple_355088b1d261bb444f6fe6d0feb7b487_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fa3f8d194ac7364128b0bb22bb5584d8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__validate_jac, 337, const_tuple_0dd640bbdfe6652435c5cada2fe2fc31_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_121cbc2318b32fc0d1adc1a63a91e834 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac_wrapped, 348, const_tuple_56a4b3b2e65ac9adc55440ee96b7c34c_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_45e068bc4bb2b0e238dbb8d47447153c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac_wrapped, 361, const_tuple_89b2da8cd724fbb4459a507d7d73ce36_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_955bba212ddacc524ba086c4bf10e736 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac_wrapped, 368, const_tuple_89b2da8cd724fbb4459a507d7d73ce36_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_9aa2712caa92ea2628fcc54eb1c855bc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lu, 310, const_tuple_str_plain_A_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_f05afead1614d34c98b34614d34a9ddd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lu, 319, const_tuple_str_plain_A_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_6079d9517f3b70454e6d591ac47ed9c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_predict_factor, 141, const_tuple_56d74e3295ac2b76fba5a4cb3f8da310_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ebe5b12f821bfa563370536bad52f4cd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve_collocation_system, 49, const_tuple_01aff7c05a30ee43a5c5431c4d13e791_tuple, 10, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b3b6ecd98e633d8948bd85809254a6a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve_lu, 314, const_tuple_str_plain_LU_str_plain_b_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5e8f2aaf4eda72d2fc8fad21de9520a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve_lu, 323, const_tuple_str_plain_LU_str_plain_b_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_1_solve_collocation_system(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_2_predict_factor(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_1_lu(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_2_solve_lu(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_3_lu(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_4_solve_lu(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_4__validate_jac(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_1_jac_wrapped(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_2_jac_wrapped( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_3_jac_wrapped( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_5__step_impl(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_6__compute_dense_output(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_7__dense_output_impl(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_8___init__(  );


static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_9__call_impl(  );


// The module function definitions.
static PyObject *impl_scipy$integrate$_ivp$radau$$$function_1_solve_collocation_system( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[ 0 ];
    PyObject *par_t = python_pars[ 1 ];
    PyObject *par_y = python_pars[ 2 ];
    PyObject *par_h = python_pars[ 3 ];
    PyObject *par_Z0 = python_pars[ 4 ];
    PyObject *par_scale = python_pars[ 5 ];
    PyObject *par_tol = python_pars[ 6 ];
    PyObject *par_LU_real = python_pars[ 7 ];
    PyObject *par_LU_complex = python_pars[ 8 ];
    PyObject *par_solve_lu = python_pars[ 9 ];
    PyObject *var_n = NULL;
    PyObject *var_M_real = NULL;
    PyObject *var_M_complex = NULL;
    PyObject *var_W = NULL;
    PyObject *var_Z = NULL;
    PyObject *var_F = NULL;
    PyObject *var_ch = NULL;
    PyObject *var_dW_norm_old = NULL;
    PyObject *var_dW = NULL;
    PyObject *var_converged = NULL;
    PyObject *var_k = NULL;
    PyObject *var_i = NULL;
    PyObject *var_f_real = NULL;
    PyObject *var_f_complex = NULL;
    PyObject *var_dW_real = NULL;
    PyObject *var_dW_complex = NULL;
    PyObject *var_dW_norm = NULL;
    PyObject *var_rate = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_ebe5b12f821bfa563370536bad52f4cd;
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
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ebe5b12f821bfa563370536bad52f4cd = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ebe5b12f821bfa563370536bad52f4cd, codeobj_ebe5b12f821bfa563370536bad52f4cd, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ebe5b12f821bfa563370536bad52f4cd = cache_frame_ebe5b12f821bfa563370536bad52f4cd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ebe5b12f821bfa563370536bad52f4cd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ebe5b12f821bfa563370536bad52f4cd ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_y );
        tmp_source_name_1 = par_y;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_MU_REAL );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MU_REAL );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MU_REAL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_h );
        tmp_right_name_1 = par_h;
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M_real == NULL );
        var_M_real = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_MU_COMPLEX );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MU_COMPLEX );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MU_COMPLEX" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_h );
        tmp_right_name_2 = par_h;
        tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M_complex == NULL );
        var_M_complex = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_TI );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TI );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TI" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_Z0 );
        tmp_args_element_name_1 = par_Z0;
        frame_ebe5b12f821bfa563370536bad52f4cd->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_W == NULL );
        var_W = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( par_Z0 );
        tmp_assign_source_5 = par_Z0;
        assert( var_Z == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_Z = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_tuple_element_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        tmp_tuple_element_1 = const_int_pos_3;
        tmp_args_element_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_n );
        tmp_tuple_element_1 = var_n;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
        frame_ebe5b12f821bfa563370536bad52f4cd->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_empty, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_F == NULL );
        var_F = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT( par_h );
        tmp_left_name_3 = par_h;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_C );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_C );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "C" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_3 = tmp_mvar_value_5;
        tmp_assign_source_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ch == NULL );
        var_ch = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        assert( var_dW_norm_old == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_dW_norm_old = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_6;
        CHECK_OBJECT( var_W );
        tmp_args_element_name_3 = var_W;
        frame_ebe5b12f821bfa563370536bad52f4cd->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_empty_like, call_args );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dW == NULL );
        var_dW = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_False;
        assert( var_converged == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_converged = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NEWTON_MAXITER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_xrange_low_1 = tmp_mvar_value_7;
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooooooooooo";
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
                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 101;
                goto try_except_handler_2;
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = const_xrange_0_3;
        tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
        assert( !(tmp_assign_source_14 == NULL) );
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
                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 102;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_16;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_fun );
        tmp_called_name_1 = par_fun;
        CHECK_OBJECT( par_t );
        tmp_left_name_4 = par_t;
        CHECK_OBJECT( var_ch );
        tmp_subscribed_name_2 = var_ch;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_2 = var_i;
        tmp_right_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_y );
        tmp_left_name_5 = par_y;
        CHECK_OBJECT( var_Z );
        tmp_subscribed_name_3 = var_Z;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_3 = var_i;
        tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_ebe5b12f821bfa563370536bad52f4cd->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_F );
        tmp_ass_subscribed_1 = var_F;
        CHECK_OBJECT( var_i );
        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oooooooooooooooooooooooooooo";
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_2 = tmp_mvar_value_8;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_all );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_4 = tmp_mvar_value_9;
        CHECK_OBJECT( var_F );
        tmp_args_element_name_7 = var_F;
        frame_ebe5b12f821bfa563370536bad52f4cd->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_isfinite, call_args );
        }

        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_ebe5b12f821bfa563370536bad52f4cd->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooo";
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_F );
        tmp_source_name_4 = var_F;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_T );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dot );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_TI_REAL );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TI_REAL );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TI_REAL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_8 = tmp_mvar_value_10;
        frame_ebe5b12f821bfa563370536bad52f4cd->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_left_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_M_real );
        tmp_left_name_7 = var_M_real;
        CHECK_OBJECT( var_W );
        tmp_subscribed_name_4 = var_W;
        tmp_subscript_name_4 = const_int_0;
        tmp_right_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_f_real;
            var_f_real = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_8;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT( var_F );
        tmp_source_name_6 = var_F;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_T );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dot );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_TI_COMPLEX );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TI_COMPLEX );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TI_COMPLEX" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_9 = tmp_mvar_value_11;
        frame_ebe5b12f821bfa563370536bad52f4cd->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_left_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_M_complex );
        tmp_left_name_9 = var_M_complex;
        CHECK_OBJECT( var_W );
        tmp_subscribed_name_5 = var_W;
        tmp_subscript_name_5 = const_int_pos_1;
        tmp_left_name_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 1 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_11 = const_complex_0_0__1_0;
        CHECK_OBJECT( var_W );
        tmp_subscribed_name_6 = var_W;
        tmp_subscript_name_6 = const_int_pos_2;
        tmp_right_name_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 2 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_18 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_f_complex;
            var_f_complex = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( par_solve_lu );
        tmp_called_name_5 = par_solve_lu;
        CHECK_OBJECT( par_LU_real );
        tmp_args_element_name_10 = par_LU_real;
        CHECK_OBJECT( var_f_real );
        tmp_args_element_name_11 = var_f_real;
        frame_ebe5b12f821bfa563370536bad52f4cd->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_dW_real;
            var_dW_real = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        CHECK_OBJECT( par_solve_lu );
        tmp_called_name_6 = par_solve_lu;
        CHECK_OBJECT( par_LU_complex );
        tmp_args_element_name_12 = par_LU_complex;
        CHECK_OBJECT( var_f_complex );
        tmp_args_element_name_13 = var_f_complex;
        frame_ebe5b12f821bfa563370536bad52f4cd->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_dW_complex;
            var_dW_complex = tmp_assign_source_20;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( var_dW_real );
        tmp_ass_subvalue_2 = var_dW_real;
        CHECK_OBJECT( var_dW );
        tmp_ass_subscribed_2 = var_dW;
        tmp_ass_subscript_2 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 0, tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( var_dW_complex );
        tmp_source_name_7 = var_dW_complex;
        tmp_ass_subvalue_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_real );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_dW );
        tmp_ass_subscribed_3 = var_dW;
        tmp_ass_subscript_3 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 1, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_source_name_8;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        int tmp_ass_subscript_res_3;
        CHECK_OBJECT( var_dW_complex );
        tmp_source_name_8 = var_dW_complex;
        tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_imag );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_dW );
        tmp_ass_subscribed_4 = var_dW;
        tmp_ass_subscript_4 = const_int_pos_2;
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_4, tmp_ass_subscript_4, 2, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_ass_subscript_res_3 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_7 = tmp_mvar_value_12;
        CHECK_OBJECT( var_dW );
        tmp_left_name_12 = var_dW;
        CHECK_OBJECT( par_scale );
        tmp_right_name_12 = par_scale;
        tmp_args_element_name_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_ebe5b12f821bfa563370536bad52f4cd->m_frame.f_lineno = 118;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_dW_norm;
            var_dW_norm = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_dW_norm_old );
        tmp_compexpr_left_1 = var_dW_norm_old;
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
            PyObject *tmp_assign_source_22;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_13;
            CHECK_OBJECT( var_dW_norm );
            tmp_left_name_13 = var_dW_norm;
            CHECK_OBJECT( var_dW_norm_old );
            tmp_right_name_13 = var_dW_norm_old;
            tmp_assign_source_22 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_rate;
                var_rate = tmp_assign_source_22;
                Py_XDECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = Py_None;
            {
                PyObject *old = var_rate;
                var_rate = tmp_assign_source_23;
                Py_INCREF( var_rate );
                Py_XDECREF( old );
            }

        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_left_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_14;
        PyObject *tmp_left_name_17;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_right_name_15;
        PyObject *tmp_right_name_16;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_17;
        PyObject *tmp_right_name_18;
        CHECK_OBJECT( var_rate );
        tmp_compexpr_left_2 = var_rate;
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
        CHECK_OBJECT( var_rate );
        tmp_compexpr_left_3 = var_rate;
        tmp_compexpr_right_3 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( var_rate );
        tmp_left_name_16 = var_rate;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NEWTON_MAXITER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_17 = tmp_mvar_value_13;
        CHECK_OBJECT( var_k );
        tmp_right_name_15 = var_k;
        tmp_right_name_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_15 );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_15 = POWER_OPERATION( tmp_left_name_16, tmp_right_name_14 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_18 = const_int_pos_1;
        CHECK_OBJECT( var_rate );
        tmp_right_name_17 = var_rate;
        tmp_right_name_16 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_18, tmp_right_name_17 );
        if ( tmp_right_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );

            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_16 );
        Py_DECREF( tmp_left_name_15 );
        Py_DECREF( tmp_right_name_16 );
        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_dW_norm );
        tmp_right_name_18 = var_dW_norm;
        tmp_compexpr_left_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_18 );
        Py_DECREF( tmp_left_name_14 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_4 = par_tol;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        CHECK_OBJECT( var_W );
        tmp_left_name_19 = var_W;
        CHECK_OBJECT( var_dW );
        tmp_right_name_19 = var_dW;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_19, tmp_right_name_19 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_24 = tmp_left_name_19;
        var_W = tmp_assign_source_24;

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_T );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_T );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "T" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_5 = tmp_mvar_value_14;
        CHECK_OBJECT( var_W );
        tmp_args_element_name_15 = var_W;
        frame_ebe5b12f821bfa563370536bad52f4cd->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_assign_source_25 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_Z;
            assert( old != NULL );
            var_Z = tmp_assign_source_25;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_left_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_20;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_21;
        PyObject *tmp_right_name_22;
        CHECK_OBJECT( var_dW_norm );
        tmp_compexpr_left_5 = var_dW_norm;
        tmp_compexpr_right_5 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( var_rate );
        tmp_compexpr_left_6 = var_rate;
        tmp_compexpr_right_6 = Py_None;
        tmp_and_left_value_2 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_rate );
        tmp_left_name_21 = var_rate;
        tmp_left_name_22 = const_int_pos_1;
        CHECK_OBJECT( var_rate );
        tmp_right_name_21 = var_rate;
        tmp_right_name_20 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_22, tmp_right_name_21 );
        if ( tmp_right_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_20 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_20 );
        Py_DECREF( tmp_right_name_20 );
        if ( tmp_left_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_dW_norm );
        tmp_right_name_22 = var_dW_norm;
        tmp_compexpr_left_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_22 );
        Py_DECREF( tmp_left_name_20 );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_7 = par_tol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_or_right_value_2 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_4 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_4 = tmp_or_left_value_2;
        or_end_2:;
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
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = Py_True;
            {
                PyObject *old = var_converged;
                assert( old != NULL );
                var_converged = tmp_assign_source_26;
                Py_INCREF( var_converged );
                Py_DECREF( old );
            }

        }
        goto loop_end_1;
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( var_dW_norm );
        tmp_assign_source_27 = var_dW_norm;
        {
            PyObject *old = var_dW_norm_old;
            assert( old != NULL );
            var_dW_norm_old = tmp_assign_source_27;
            Py_INCREF( var_dW_norm_old );
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "oooooooooooooooooooooooooooo";
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
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_23;
        if ( var_converged == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "converged" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_converged;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        if ( var_k == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "k" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_23 = var_k;
        tmp_right_name_23 = const_int_pos_1;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_23, tmp_right_name_23 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        if ( var_Z == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Z" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_Z;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
        if ( var_rate == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rate" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_rate;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_2 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ebe5b12f821bfa563370536bad52f4cd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ebe5b12f821bfa563370536bad52f4cd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ebe5b12f821bfa563370536bad52f4cd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ebe5b12f821bfa563370536bad52f4cd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ebe5b12f821bfa563370536bad52f4cd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ebe5b12f821bfa563370536bad52f4cd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ebe5b12f821bfa563370536bad52f4cd,
        type_description_1,
        par_fun,
        par_t,
        par_y,
        par_h,
        par_Z0,
        par_scale,
        par_tol,
        par_LU_real,
        par_LU_complex,
        par_solve_lu,
        var_n,
        var_M_real,
        var_M_complex,
        var_W,
        var_Z,
        var_F,
        var_ch,
        var_dW_norm_old,
        var_dW,
        var_converged,
        var_k,
        var_i,
        var_f_real,
        var_f_complex,
        var_dW_real,
        var_dW_complex,
        var_dW_norm,
        var_rate
    );


    // Release cached frame.
    if ( frame_ebe5b12f821bfa563370536bad52f4cd == cache_frame_ebe5b12f821bfa563370536bad52f4cd )
    {
        Py_DECREF( frame_ebe5b12f821bfa563370536bad52f4cd );
    }
    cache_frame_ebe5b12f821bfa563370536bad52f4cd = NULL;

    assertFrameObject( frame_ebe5b12f821bfa563370536bad52f4cd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_1_solve_collocation_system );
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

    CHECK_OBJECT( (PyObject *)par_h );
    Py_DECREF( par_h );
    par_h = NULL;

    CHECK_OBJECT( (PyObject *)par_Z0 );
    Py_DECREF( par_Z0 );
    par_Z0 = NULL;

    CHECK_OBJECT( (PyObject *)par_scale );
    Py_DECREF( par_scale );
    par_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_LU_real );
    Py_DECREF( par_LU_real );
    par_LU_real = NULL;

    CHECK_OBJECT( (PyObject *)par_LU_complex );
    Py_DECREF( par_LU_complex );
    par_LU_complex = NULL;

    CHECK_OBJECT( (PyObject *)par_solve_lu );
    Py_DECREF( par_solve_lu );
    par_solve_lu = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_M_real );
    Py_DECREF( var_M_real );
    var_M_real = NULL;

    CHECK_OBJECT( (PyObject *)var_M_complex );
    Py_DECREF( var_M_complex );
    var_M_complex = NULL;

    Py_XDECREF( var_W );
    var_W = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    CHECK_OBJECT( (PyObject *)var_F );
    Py_DECREF( var_F );
    var_F = NULL;

    CHECK_OBJECT( (PyObject *)var_ch );
    Py_DECREF( var_ch );
    var_ch = NULL;

    CHECK_OBJECT( (PyObject *)var_dW_norm_old );
    Py_DECREF( var_dW_norm_old );
    var_dW_norm_old = NULL;

    CHECK_OBJECT( (PyObject *)var_dW );
    Py_DECREF( var_dW );
    var_dW = NULL;

    Py_XDECREF( var_converged );
    var_converged = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_f_real );
    var_f_real = NULL;

    Py_XDECREF( var_f_complex );
    var_f_complex = NULL;

    Py_XDECREF( var_dW_real );
    var_dW_real = NULL;

    Py_XDECREF( var_dW_complex );
    var_dW_complex = NULL;

    Py_XDECREF( var_dW_norm );
    var_dW_norm = NULL;

    Py_XDECREF( var_rate );
    var_rate = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_h );
    Py_DECREF( par_h );
    par_h = NULL;

    CHECK_OBJECT( (PyObject *)par_Z0 );
    Py_DECREF( par_Z0 );
    par_Z0 = NULL;

    CHECK_OBJECT( (PyObject *)par_scale );
    Py_DECREF( par_scale );
    par_scale = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_LU_real );
    Py_DECREF( par_LU_real );
    par_LU_real = NULL;

    CHECK_OBJECT( (PyObject *)par_LU_complex );
    Py_DECREF( par_LU_complex );
    par_LU_complex = NULL;

    CHECK_OBJECT( (PyObject *)par_solve_lu );
    Py_DECREF( par_solve_lu );
    par_solve_lu = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_M_real );
    var_M_real = NULL;

    Py_XDECREF( var_M_complex );
    var_M_complex = NULL;

    Py_XDECREF( var_W );
    var_W = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_F );
    var_F = NULL;

    Py_XDECREF( var_ch );
    var_ch = NULL;

    Py_XDECREF( var_dW_norm_old );
    var_dW_norm_old = NULL;

    Py_XDECREF( var_dW );
    var_dW = NULL;

    Py_XDECREF( var_converged );
    var_converged = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_f_real );
    var_f_real = NULL;

    Py_XDECREF( var_f_complex );
    var_f_complex = NULL;

    Py_XDECREF( var_dW_real );
    var_dW_real = NULL;

    Py_XDECREF( var_dW_complex );
    var_dW_complex = NULL;

    Py_XDECREF( var_dW_norm );
    var_dW_norm = NULL;

    Py_XDECREF( var_rate );
    var_rate = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_1_solve_collocation_system );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_2_predict_factor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_h_abs = python_pars[ 0 ];
    PyObject *par_h_abs_old = python_pars[ 1 ];
    PyObject *par_error_norm = python_pars[ 2 ];
    PyObject *par_error_norm_old = python_pars[ 3 ];
    PyObject *var_multiplier = NULL;
    PyObject *var_factor = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_6079d9517f3b70454e6d591ac47ed9c1;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6079d9517f3b70454e6d591ac47ed9c1 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6079d9517f3b70454e6d591ac47ed9c1, codeobj_6079d9517f3b70454e6d591ac47ed9c1, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6079d9517f3b70454e6d591ac47ed9c1 = cache_frame_6079d9517f3b70454e6d591ac47ed9c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6079d9517f3b70454e6d591ac47ed9c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6079d9517f3b70454e6d591ac47ed9c1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_error_norm_old );
        tmp_compexpr_left_1 = par_error_norm_old;
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
        CHECK_OBJECT( par_h_abs_old );
        tmp_compexpr_left_2 = par_h_abs_old;
        tmp_compexpr_right_2 = Py_None;
        tmp_or_left_value_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_error_norm );
        tmp_compexpr_left_3 = par_error_norm;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
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
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = const_int_pos_1;
            assert( var_multiplier == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_multiplier = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_3;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( par_h_abs );
            tmp_left_name_2 = par_h_abs;
            CHECK_OBJECT( par_h_abs_old );
            tmp_right_name_1 = par_h_abs_old;
            tmp_left_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_error_norm_old );
            tmp_left_name_4 = par_error_norm_old;
            CHECK_OBJECT( par_error_norm );
            tmp_right_name_3 = par_error_norm;
            tmp_left_name_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 173;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = const_float_0_25;
            tmp_right_name_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 173;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_multiplier == NULL );
            var_multiplier = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_errstate );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_298d89659f37555f5fbef3ddd7a920af );
        frame_6079d9517f3b70454e6d591ac47ed9c1->m_frame.f_lineno = 175;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_6079d9517f3b70454e6d591ac47ed9c1->m_frame.f_lineno = 175;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_3 = tmp_with_1__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___exit__ );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_3 != NULL );
        tmp_args_element_name_1 = const_int_pos_1;
        CHECK_OBJECT( var_multiplier );
        tmp_args_element_name_2 = var_multiplier;
        frame_6079d9517f3b70454e6d591ac47ed9c1->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_error_norm );
        tmp_left_name_6 = par_error_norm;
        tmp_right_name_6 = const_float_minus_0_25;
        tmp_right_name_5 = POWER_OPERATION( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 176;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert( var_factor == NULL );
        var_factor = tmp_assign_source_7;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_6079d9517f3b70454e6d591ac47ed9c1, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_6079d9517f3b70454e6d591ac47ed9c1, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
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
            nuitka_bool tmp_assign_source_8;
            tmp_assign_source_8 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_8;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_4 = tmp_with_1__exit;
            tmp_args_element_name_3 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_4 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_5 = EXC_TRACEBACK(PyThreadState_GET());
            frame_6079d9517f3b70454e6d591ac47ed9c1->m_frame.f_lineno = 175;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "oooooo";
                goto try_except_handler_5;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "oooooo";
                goto try_except_handler_5;
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 175;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_6079d9517f3b70454e6d591ac47ed9c1->m_frame) frame_6079d9517f3b70454e6d591ac47ed9c1->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 175;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_6079d9517f3b70454e6d591ac47ed9c1->m_frame) frame_6079d9517f3b70454e6d591ac47ed9c1->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
        branch_end_2:;
    }
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_2_predict_factor );
    return NULL;
    // End of try:
    try_end_1:;
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

    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_5;
        nuitka_bool tmp_compexpr_right_5;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_5 = tmp_with_1__indicator;
        tmp_compexpr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_5 = tmp_with_1__exit;
            frame_6079d9517f3b70454e6d591ac47ed9c1->m_frame.f_lineno = 175;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 175;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_4:;
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
        nuitka_bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_6;
        nuitka_bool tmp_compexpr_right_6;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_6 = tmp_with_1__indicator;
        tmp_compexpr_right_6 = NUITKA_BOOL_TRUE;
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
            PyObject *tmp_called_name_6;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_6 = tmp_with_1__exit;
            frame_6079d9517f3b70454e6d591ac47ed9c1->m_frame.f_lineno = 175;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_5:;
    }
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
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    if ( var_factor == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "factor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_factor;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6079d9517f3b70454e6d591ac47ed9c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6079d9517f3b70454e6d591ac47ed9c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6079d9517f3b70454e6d591ac47ed9c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6079d9517f3b70454e6d591ac47ed9c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6079d9517f3b70454e6d591ac47ed9c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6079d9517f3b70454e6d591ac47ed9c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6079d9517f3b70454e6d591ac47ed9c1,
        type_description_1,
        par_h_abs,
        par_h_abs_old,
        par_error_norm,
        par_error_norm_old,
        var_multiplier,
        var_factor
    );


    // Release cached frame.
    if ( frame_6079d9517f3b70454e6d591ac47ed9c1 == cache_frame_6079d9517f3b70454e6d591ac47ed9c1 )
    {
        Py_DECREF( frame_6079d9517f3b70454e6d591ac47ed9c1 );
    }
    cache_frame_6079d9517f3b70454e6d591ac47ed9c1 = NULL;

    assertFrameObject( frame_6079d9517f3b70454e6d591ac47ed9c1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_2_predict_factor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_h_abs );
    Py_DECREF( par_h_abs );
    par_h_abs = NULL;

    CHECK_OBJECT( (PyObject *)par_h_abs_old );
    Py_DECREF( par_h_abs_old );
    par_h_abs_old = NULL;

    CHECK_OBJECT( (PyObject *)par_error_norm );
    Py_DECREF( par_error_norm );
    par_error_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_error_norm_old );
    Py_DECREF( par_error_norm_old );
    par_error_norm_old = NULL;

    CHECK_OBJECT( (PyObject *)var_multiplier );
    Py_DECREF( var_multiplier );
    var_multiplier = NULL;

    Py_XDECREF( var_factor );
    var_factor = NULL;

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

    CHECK_OBJECT( (PyObject *)par_h_abs );
    Py_DECREF( par_h_abs );
    par_h_abs = NULL;

    CHECK_OBJECT( (PyObject *)par_h_abs_old );
    Py_DECREF( par_h_abs_old );
    par_h_abs_old = NULL;

    CHECK_OBJECT( (PyObject *)par_error_norm );
    Py_DECREF( par_error_norm );
    par_error_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_error_norm_old );
    Py_DECREF( par_error_norm_old );
    par_error_norm_old = NULL;

    Py_XDECREF( var_multiplier );
    var_multiplier = NULL;

    Py_XDECREF( var_factor );
    var_factor = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_2_predict_factor );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_fun = python_pars[ 1 ];
    PyObject *par_t0 = python_pars[ 2 ];
    PyObject *par_y0 = python_pars[ 3 ];
    PyObject *par_t_bound = python_pars[ 4 ];
    PyObject *par_max_step = python_pars[ 5 ];
    PyObject *par_rtol = python_pars[ 6 ];
    PyObject *par_atol = python_pars[ 7 ];
    PyObject *par_jac = python_pars[ 8 ];
    PyObject *par_jac_sparsity = python_pars[ 9 ];
    PyObject *par_vectorized = python_pars[ 10 ];
    PyObject *par_first_step = python_pars[ 11 ];
    PyObject *par_extraneous = python_pars[ 12 ];
    PyObject *var_lu = NULL;
    PyObject *var_solve_lu = NULL;
    PyObject *var_I = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e12354d4de89879032344ca1dddc6211;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_e12354d4de89879032344ca1dddc6211 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e12354d4de89879032344ca1dddc6211, codeobj_e12354d4de89879032344ca1dddc6211, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e12354d4de89879032344ca1dddc6211 = cache_frame_e12354d4de89879032344ca1dddc6211;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e12354d4de89879032344ca1dddc6211 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e12354d4de89879032344ca1dddc6211 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_warn_extraneous );

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

            exception_lineno = 287;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_extraneous );
        tmp_args_element_name_1 = par_extraneous;
        frame_e12354d4de89879032344ca1dddc6211->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_Radau );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Radau );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Radau" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 288;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_object_name_1 = PyCell_GET( par_self );
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_fun );
        tmp_args_element_name_2 = par_fun;
        CHECK_OBJECT( par_t0 );
        tmp_args_element_name_3 = par_t0;
        CHECK_OBJECT( par_y0 );
        tmp_args_element_name_4 = par_y0;
        CHECK_OBJECT( par_t_bound );
        tmp_args_element_name_5 = par_t_bound;
        CHECK_OBJECT( par_vectorized );
        tmp_args_element_name_6 = par_vectorized;
        frame_e12354d4de89879032344ca1dddc6211->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS5( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_1 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_y_old, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_validate_max_step );

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

            exception_lineno = 290;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_max_step );
        tmp_args_element_name_7 = par_max_step;
        frame_e12354d4de89879032344ca1dddc6211->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_2 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_max_step, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_validate_tol );

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

            exception_lineno = 291;
            type_description_1 = "coooooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_rtol );
        tmp_args_element_name_8 = par_rtol;
        CHECK_OBJECT( par_atol );
        tmp_args_element_name_9 = par_atol;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_1 = PyCell_GET( par_self );
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "coooooooooooooooN";
            goto try_except_handler_2;
        }
        frame_e12354d4de89879032344ca1dddc6211->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "coooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "coooooooooooooooN";
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


            type_description_1 = "coooooooooooooooN";
            exception_lineno = 291;
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


            type_description_1 = "coooooooooooooooN";
            exception_lineno = 291;
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

                    type_description_1 = "coooooooooooooooN";
                    exception_lineno = 291;
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

            type_description_1 = "coooooooooooooooN";
            exception_lineno = 291;
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
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_3 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_rtol, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "coooooooooooooooN";
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
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_4 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_atol, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "coooooooooooooooN";
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
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_4;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_2 = PyCell_GET( par_self );
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fun );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_3 = PyCell_GET( par_self );
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_t );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 292;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_4 = PyCell_GET( par_self );
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_y );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_11 );

            exception_lineno = 292;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_e12354d4de89879032344ca1dddc6211->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_11 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assattr_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_5 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_f, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "coooooooooooooooN";
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_source_name_8;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_source_name_9;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_source_name_11;
            PyObject *tmp_assattr_target_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_select_initial_step );

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

                exception_lineno = 296;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_5 = PyCell_GET( par_self );
            tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_fun );
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 297;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_6 = PyCell_GET( par_self );
            tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_t );
            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_13 );

                exception_lineno = 297;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_7 = PyCell_GET( par_self );
            tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_y );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_13 );
                Py_DECREF( tmp_args_element_name_14 );

                exception_lineno = 297;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_8 = PyCell_GET( par_self );
            tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_f );
            if ( tmp_args_element_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_13 );
                Py_DECREF( tmp_args_element_name_14 );
                Py_DECREF( tmp_args_element_name_15 );

                exception_lineno = 297;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_9 = PyCell_GET( par_self );
            tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_direction );
            if ( tmp_args_element_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_13 );
                Py_DECREF( tmp_args_element_name_14 );
                Py_DECREF( tmp_args_element_name_15 );
                Py_DECREF( tmp_args_element_name_16 );

                exception_lineno = 297;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_18 = const_int_pos_3;
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_10 = PyCell_GET( par_self );
            tmp_args_element_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_rtol );
            if ( tmp_args_element_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_13 );
                Py_DECREF( tmp_args_element_name_14 );
                Py_DECREF( tmp_args_element_name_15 );
                Py_DECREF( tmp_args_element_name_16 );
                Py_DECREF( tmp_args_element_name_17 );

                exception_lineno = 298;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_11 = PyCell_GET( par_self );
            tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_atol );
            if ( tmp_args_element_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_13 );
                Py_DECREF( tmp_args_element_name_14 );
                Py_DECREF( tmp_args_element_name_15 );
                Py_DECREF( tmp_args_element_name_16 );
                Py_DECREF( tmp_args_element_name_17 );
                Py_DECREF( tmp_args_element_name_19 );

                exception_lineno = 298;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
            frame_e12354d4de89879032344ca1dddc6211->m_frame.f_lineno = 296;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
                tmp_assattr_name_6 = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_13 );
            Py_DECREF( tmp_args_element_name_14 );
            Py_DECREF( tmp_args_element_name_15 );
            Py_DECREF( tmp_args_element_name_16 );
            Py_DECREF( tmp_args_element_name_17 );
            Py_DECREF( tmp_args_element_name_19 );
            Py_DECREF( tmp_args_element_name_20 );
            if ( tmp_assattr_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_assattr_target_6 = PyCell_GET( par_self );
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_h_abs, tmp_assattr_name_6 );
            Py_DECREF( tmp_assattr_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_assattr_target_7;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_validate_first_step );

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

                exception_lineno = 300;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_6;
            CHECK_OBJECT( par_first_step );
            tmp_args_element_name_21 = par_first_step;
            CHECK_OBJECT( par_t0 );
            tmp_args_element_name_22 = par_t0;
            CHECK_OBJECT( par_t_bound );
            tmp_args_element_name_23 = par_t_bound;
            frame_e12354d4de89879032344ca1dddc6211->m_frame.f_lineno = 300;
            {
                PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
                tmp_assattr_name_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
            }

            if ( tmp_assattr_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 300;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_assattr_target_7 = PyCell_GET( par_self );
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_h_abs, tmp_assattr_name_7 );
            Py_DECREF( tmp_assattr_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 300;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = Py_None;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_8 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_h_abs_old, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_name_9 = Py_None;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_9 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_error_norm_old, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_right_name_2;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_assattr_target_10;
        tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_7 != NULL );
        tmp_left_name_2 = const_int_pos_10;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_EPS );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EPS );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EPS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 304;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = tmp_mvar_value_7;
        tmp_left_name_1 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rtol );
        tmp_right_name_2 = par_rtol;
        tmp_args_element_name_24 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_args_element_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_8 != NULL );
        tmp_args_element_name_26 = const_float_0_03;
        CHECK_OBJECT( par_rtol );
        tmp_left_name_3 = par_rtol;
        tmp_right_name_3 = const_float_0_5;
        tmp_args_element_name_27 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_args_element_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_24 );

            exception_lineno = 304;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_e12354d4de89879032344ca1dddc6211->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27 };
            tmp_args_element_name_25 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_args_element_name_27 );
        if ( tmp_args_element_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_24 );

            exception_lineno = 304;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_e12354d4de89879032344ca1dddc6211->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25 };
            tmp_assattr_name_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_24 );
        Py_DECREF( tmp_args_element_name_25 );
        if ( tmp_assattr_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_10 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_newton_tol, tmp_assattr_name_10 );
        Py_DECREF( tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_name_11 = Py_None;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_11 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_sol, tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_name_12 = Py_None;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_12 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_jac_factor, tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_called_instance_2 = PyCell_GET( par_self );
        CHECK_OBJECT( par_jac );
        tmp_args_element_name_28 = par_jac;
        CHECK_OBJECT( par_jac_sparsity );
        tmp_args_element_name_29 = par_jac_sparsity;
        frame_e12354d4de89879032344ca1dddc6211->m_frame.f_lineno = 308;
        {
            PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_29 };
            tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain__validate_jac, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "coooooooooooooooN";
            goto try_except_handler_4;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "coooooooooooooooN";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "coooooooooooooooN";
            exception_lineno = 308;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "coooooooooooooooN";
            exception_lineno = 308;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "coooooooooooooooN";
                    exception_lineno = 308;
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

            type_description_1 = "coooooooooooooooN";
            exception_lineno = 308;
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
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assattr_name_13 = tmp_tuple_unpack_2__element_1;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_13 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_jac, tmp_assattr_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "coooooooooooooooN";
            goto try_except_handler_4;
        }
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assattr_name_14 = tmp_tuple_unpack_2__element_2;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_14 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_J, tmp_assattr_name_14 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "coooooooooooooooN";
            goto try_except_handler_4;
        }
    }
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
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_source_name_12;
        int tmp_truth_name_1;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_issparse );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issparse );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issparse" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 309;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_8;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_12 = PyCell_GET( par_self );
        tmp_args_element_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_J );
        if ( tmp_args_element_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 309;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_e12354d4de89879032344ca1dddc6211->m_frame.f_lineno = 309;
        {
            PyObject *call_args[] = { tmp_args_element_name_30 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_args_element_name_30 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 309;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 309;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
            tmp_assign_source_7 = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_1_lu(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] = par_self;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] );


            assert( var_lu == NULL );
            var_lu = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_2_solve_lu(  );



            assert( var_solve_lu == NULL );
            var_solve_lu = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_13;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_eye );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eye );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eye" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 317;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_10 = tmp_mvar_value_9;
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_13 = PyCell_GET( par_self );
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_n );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_de639e5406c83de902c3c5cbde7c2788 );
            frame_e12354d4de89879032344ca1dddc6211->m_frame.f_lineno = 317;
            tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
            assert( var_I == NULL );
            var_I = tmp_assign_source_9;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_3_lu(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[0] = par_self;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[0] );


            assert( var_lu == NULL );
            var_lu = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_4_solve_lu(  );



            assert( var_solve_lu == NULL );
            var_solve_lu = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_31;
            PyObject *tmp_source_name_15;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 326;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_source_name_14 = tmp_mvar_value_10;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_identity );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_15 = PyCell_GET( par_self );
            tmp_args_element_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_n );
            if ( tmp_args_element_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_11 );

                exception_lineno = 326;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
            frame_e12354d4de89879032344ca1dddc6211->m_frame.f_lineno = 326;
            {
                PyObject *call_args[] = { tmp_args_element_name_31 };
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_element_name_31 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "coooooooooooooooN";
                goto frame_exception_exit_1;
            }
            assert( var_I == NULL );
            var_I = tmp_assign_source_12;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT( var_lu );
        tmp_assattr_name_15 = var_lu;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_15 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_lu, tmp_assattr_name_15 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_assattr_target_16;
        CHECK_OBJECT( var_solve_lu );
        tmp_assattr_name_16 = var_solve_lu;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_16 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_solve_lu, tmp_assattr_name_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_17;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT( var_I );
        tmp_assattr_name_17 = var_I;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_17 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_I, tmp_assattr_name_17 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_18;
        PyObject *tmp_assattr_target_18;
        tmp_assattr_name_18 = Py_True;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_18 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_current_jac, tmp_assattr_name_18 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 332;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_19;
        PyObject *tmp_assattr_target_19;
        tmp_assattr_name_19 = Py_None;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_19 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_LU_real, tmp_assattr_name_19 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_20;
        PyObject *tmp_assattr_target_20;
        tmp_assattr_name_20 = Py_None;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_20 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_LU_complex, tmp_assattr_name_20 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_21;
        PyObject *tmp_assattr_target_21;
        tmp_assattr_name_21 = Py_None;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_21 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_Z, tmp_assattr_name_21 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 335;
            type_description_1 = "coooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e12354d4de89879032344ca1dddc6211 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e12354d4de89879032344ca1dddc6211 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e12354d4de89879032344ca1dddc6211, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e12354d4de89879032344ca1dddc6211->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e12354d4de89879032344ca1dddc6211, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e12354d4de89879032344ca1dddc6211,
        type_description_1,
        par_self,
        par_fun,
        par_t0,
        par_y0,
        par_t_bound,
        par_max_step,
        par_rtol,
        par_atol,
        par_jac,
        par_jac_sparsity,
        par_vectorized,
        par_first_step,
        par_extraneous,
        var_lu,
        var_solve_lu,
        var_I,
        NULL
    );


    // Release cached frame.
    if ( frame_e12354d4de89879032344ca1dddc6211 == cache_frame_e12354d4de89879032344ca1dddc6211 )
    {
        Py_DECREF( frame_e12354d4de89879032344ca1dddc6211 );
    }
    cache_frame_e12354d4de89879032344ca1dddc6211 = NULL;

    assertFrameObject( frame_e12354d4de89879032344ca1dddc6211 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_3___init__ );
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

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_sparsity );
    Py_DECREF( par_jac_sparsity );
    par_jac_sparsity = NULL;

    CHECK_OBJECT( (PyObject *)par_vectorized );
    Py_DECREF( par_vectorized );
    par_vectorized = NULL;

    CHECK_OBJECT( (PyObject *)par_first_step );
    Py_DECREF( par_first_step );
    par_first_step = NULL;

    CHECK_OBJECT( (PyObject *)par_extraneous );
    Py_DECREF( par_extraneous );
    par_extraneous = NULL;

    CHECK_OBJECT( (PyObject *)var_lu );
    Py_DECREF( var_lu );
    var_lu = NULL;

    CHECK_OBJECT( (PyObject *)var_solve_lu );
    Py_DECREF( var_solve_lu );
    var_solve_lu = NULL;

    CHECK_OBJECT( (PyObject *)var_I );
    Py_DECREF( var_I );
    var_I = NULL;

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

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_jac_sparsity );
    Py_DECREF( par_jac_sparsity );
    par_jac_sparsity = NULL;

    CHECK_OBJECT( (PyObject *)par_vectorized );
    Py_DECREF( par_vectorized );
    par_vectorized = NULL;

    CHECK_OBJECT( (PyObject *)par_first_step );
    Py_DECREF( par_first_step );
    par_first_step = NULL;

    CHECK_OBJECT( (PyObject *)par_extraneous );
    Py_DECREF( par_extraneous );
    par_extraneous = NULL;

    Py_XDECREF( var_lu );
    var_lu = NULL;

    Py_XDECREF( var_solve_lu );
    var_solve_lu = NULL;

    Py_XDECREF( var_I );
    var_I = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_3___init__ );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_1_lu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_9aa2712caa92ea2628fcc54eb1c855bc;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9aa2712caa92ea2628fcc54eb1c855bc = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9aa2712caa92ea2628fcc54eb1c855bc, codeobj_9aa2712caa92ea2628fcc54eb1c855bc, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *) );
    frame_9aa2712caa92ea2628fcc54eb1c855bc = cache_frame_9aa2712caa92ea2628fcc54eb1c855bc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9aa2712caa92ea2628fcc54eb1c855bc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9aa2712caa92ea2628fcc54eb1c855bc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 311;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nlu );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "oc";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 311;
            type_description_1 = "oc";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = PyCell_GET( self->m_closure[0] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_nlu, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "oc";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_splu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_splu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "splu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 312;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_9aa2712caa92ea2628fcc54eb1c855bc->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9aa2712caa92ea2628fcc54eb1c855bc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9aa2712caa92ea2628fcc54eb1c855bc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9aa2712caa92ea2628fcc54eb1c855bc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9aa2712caa92ea2628fcc54eb1c855bc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9aa2712caa92ea2628fcc54eb1c855bc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9aa2712caa92ea2628fcc54eb1c855bc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9aa2712caa92ea2628fcc54eb1c855bc,
        type_description_1,
        par_A,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_9aa2712caa92ea2628fcc54eb1c855bc == cache_frame_9aa2712caa92ea2628fcc54eb1c855bc )
    {
        Py_DECREF( frame_9aa2712caa92ea2628fcc54eb1c855bc );
    }
    cache_frame_9aa2712caa92ea2628fcc54eb1c855bc = NULL;

    assertFrameObject( frame_9aa2712caa92ea2628fcc54eb1c855bc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_3___init__$$$function_1_lu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_3___init__$$$function_1_lu );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_2_solve_lu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_LU = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_b3b6ecd98e633d8948bd85809254a6a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b3b6ecd98e633d8948bd85809254a6a2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b3b6ecd98e633d8948bd85809254a6a2, codeobj_b3b6ecd98e633d8948bd85809254a6a2, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *) );
    frame_b3b6ecd98e633d8948bd85809254a6a2 = cache_frame_b3b6ecd98e633d8948bd85809254a6a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b3b6ecd98e633d8948bd85809254a6a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b3b6ecd98e633d8948bd85809254a6a2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_LU );
        tmp_called_instance_1 = par_LU;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_1 = par_b;
        frame_b3b6ecd98e633d8948bd85809254a6a2->m_frame.f_lineno = 315;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_solve, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3b6ecd98e633d8948bd85809254a6a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3b6ecd98e633d8948bd85809254a6a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3b6ecd98e633d8948bd85809254a6a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b3b6ecd98e633d8948bd85809254a6a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b3b6ecd98e633d8948bd85809254a6a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b3b6ecd98e633d8948bd85809254a6a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b3b6ecd98e633d8948bd85809254a6a2,
        type_description_1,
        par_LU,
        par_b
    );


    // Release cached frame.
    if ( frame_b3b6ecd98e633d8948bd85809254a6a2 == cache_frame_b3b6ecd98e633d8948bd85809254a6a2 )
    {
        Py_DECREF( frame_b3b6ecd98e633d8948bd85809254a6a2 );
    }
    cache_frame_b3b6ecd98e633d8948bd85809254a6a2 = NULL;

    assertFrameObject( frame_b3b6ecd98e633d8948bd85809254a6a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_3___init__$$$function_2_solve_lu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_LU );
    Py_DECREF( par_LU );
    par_LU = NULL;

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

    CHECK_OBJECT( (PyObject *)par_LU );
    Py_DECREF( par_LU );
    par_LU = NULL;

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
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_3___init__$$$function_2_solve_lu );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_3_lu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_f05afead1614d34c98b34614d34a9ddd;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f05afead1614d34c98b34614d34a9ddd = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f05afead1614d34c98b34614d34a9ddd, codeobj_f05afead1614d34c98b34614d34a9ddd, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *) );
    frame_f05afead1614d34c98b34614d34a9ddd = cache_frame_f05afead1614d34c98b34614d34a9ddd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f05afead1614d34c98b34614d34a9ddd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f05afead1614d34c98b34614d34a9ddd ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 320;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nlu );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "oc";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 320;
            type_description_1 = "oc";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = PyCell_GET( self->m_closure[0] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_nlu, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "oc";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_lu_factor );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lu_factor );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lu_factor" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 321;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_ec6cc0116ef299a274b2baadbcdeac09 );
        frame_f05afead1614d34c98b34614d34a9ddd->m_frame.f_lineno = 321;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f05afead1614d34c98b34614d34a9ddd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f05afead1614d34c98b34614d34a9ddd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f05afead1614d34c98b34614d34a9ddd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f05afead1614d34c98b34614d34a9ddd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f05afead1614d34c98b34614d34a9ddd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f05afead1614d34c98b34614d34a9ddd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f05afead1614d34c98b34614d34a9ddd,
        type_description_1,
        par_A,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_f05afead1614d34c98b34614d34a9ddd == cache_frame_f05afead1614d34c98b34614d34a9ddd )
    {
        Py_DECREF( frame_f05afead1614d34c98b34614d34a9ddd );
    }
    cache_frame_f05afead1614d34c98b34614d34a9ddd = NULL;

    assertFrameObject( frame_f05afead1614d34c98b34614d34a9ddd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_3___init__$$$function_3_lu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_3___init__$$$function_3_lu );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_4_solve_lu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_LU = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_5e8f2aaf4eda72d2fc8fad21de9520a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5e8f2aaf4eda72d2fc8fad21de9520a8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5e8f2aaf4eda72d2fc8fad21de9520a8, codeobj_5e8f2aaf4eda72d2fc8fad21de9520a8, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *) );
    frame_5e8f2aaf4eda72d2fc8fad21de9520a8 = cache_frame_5e8f2aaf4eda72d2fc8fad21de9520a8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5e8f2aaf4eda72d2fc8fad21de9520a8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5e8f2aaf4eda72d2fc8fad21de9520a8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_lu_solve );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lu_solve );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lu_solve" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 324;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_LU );
        tmp_tuple_element_1 = par_LU;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_b );
        tmp_tuple_element_1 = par_b;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_8837fe4bb3a549694f7f0fd86cdb8b13 );
        frame_5e8f2aaf4eda72d2fc8fad21de9520a8->m_frame.f_lineno = 324;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e8f2aaf4eda72d2fc8fad21de9520a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e8f2aaf4eda72d2fc8fad21de9520a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e8f2aaf4eda72d2fc8fad21de9520a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5e8f2aaf4eda72d2fc8fad21de9520a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5e8f2aaf4eda72d2fc8fad21de9520a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5e8f2aaf4eda72d2fc8fad21de9520a8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5e8f2aaf4eda72d2fc8fad21de9520a8,
        type_description_1,
        par_LU,
        par_b
    );


    // Release cached frame.
    if ( frame_5e8f2aaf4eda72d2fc8fad21de9520a8 == cache_frame_5e8f2aaf4eda72d2fc8fad21de9520a8 )
    {
        Py_DECREF( frame_5e8f2aaf4eda72d2fc8fad21de9520a8 );
    }
    cache_frame_5e8f2aaf4eda72d2fc8fad21de9520a8 = NULL;

    assertFrameObject( frame_5e8f2aaf4eda72d2fc8fad21de9520a8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_3___init__$$$function_4_solve_lu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_LU );
    Py_DECREF( par_LU );
    par_LU = NULL;

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

    CHECK_OBJECT( (PyObject *)par_LU );
    Py_DECREF( par_LU );
    par_LU = NULL;

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
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_3___init__$$$function_4_solve_lu );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_4__validate_jac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_jac = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_sparsity = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *var_t0 = NULL;
    PyObject *var_y0 = NULL;
    PyObject *var_groups = NULL;
    PyObject *var_jac_wrapped = NULL;
    PyObject *var_J = NULL;
    struct Nuitka_FrameObject *frame_fa3f8d194ac7364128b0bb22bb5584d8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fa3f8d194ac7364128b0bb22bb5584d8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fa3f8d194ac7364128b0bb22bb5584d8, codeobj_fa3f8d194ac7364128b0bb22bb5584d8, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fa3f8d194ac7364128b0bb22bb5584d8 = cache_frame_fa3f8d194ac7364128b0bb22bb5584d8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fa3f8d194ac7364128b0bb22bb5584d8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fa3f8d194ac7364128b0bb22bb5584d8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_1 = PyCell_GET( par_self );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_t );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "cccooooo";
            goto frame_exception_exit_1;
        }
        assert( var_t0 == NULL );
        var_t0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_2 = PyCell_GET( par_self );
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_y );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "cccooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y0 == NULL );
        var_y0 = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( PyCell_GET( par_jac ) );
        tmp_compexpr_left_1 = PyCell_GET( par_jac );
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( PyCell_GET( par_sparsity ) );
            tmp_compexpr_left_2 = PyCell_GET( par_sparsity );
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
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                int tmp_truth_name_1;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_issparse );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issparse );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issparse" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 343;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_1;
                CHECK_OBJECT( PyCell_GET( par_sparsity ) );
                tmp_args_element_name_1 = PyCell_GET( par_sparsity );
                frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 343;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 343;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
                if ( tmp_truth_name_1 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_1 );

                    exception_lineno = 343;
                    type_description_1 = "cccooooo";
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
                    PyObject *tmp_assign_source_3;
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_mvar_value_2;
                    PyObject *tmp_args_element_name_2;
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_csc_matrix );

                    if (unlikely( tmp_mvar_value_2 == NULL ))
                    {
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
                    }

                    if ( tmp_mvar_value_2 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 344;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_2 = tmp_mvar_value_2;
                    CHECK_OBJECT( PyCell_GET( par_sparsity ) );
                    tmp_args_element_name_2 = PyCell_GET( par_sparsity );
                    frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 344;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2 };
                        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                    }

                    if ( tmp_assign_source_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 344;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = PyCell_GET( par_sparsity );
                        PyCell_SET( par_sparsity, tmp_assign_source_3 );
                        Py_XDECREF( old );
                    }

                }
                branch_no_3:;
            }
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_group_columns );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_group_columns );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "group_columns" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 345;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_3;
                CHECK_OBJECT( PyCell_GET( par_sparsity ) );
                tmp_args_element_name_3 = PyCell_GET( par_sparsity );
                frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 345;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 345;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_groups == NULL );
                var_groups = tmp_assign_source_4;
            }
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_tuple_element_1;
                CHECK_OBJECT( PyCell_GET( par_sparsity ) );
                tmp_tuple_element_1 = PyCell_GET( par_sparsity );
                tmp_assign_source_5 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( var_groups );
                tmp_tuple_element_1 = var_groups;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_assign_source_5, 1, tmp_tuple_element_1 );
                {
                    PyObject *old = PyCell_GET( par_sparsity );
                    PyCell_SET( par_sparsity, tmp_assign_source_5 );
                    Py_XDECREF( old );
                }

            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_1_jac_wrapped(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[0] = par_self;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[1] = par_sparsity;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[1] );


            assert( var_jac_wrapped == NULL );
            var_jac_wrapped = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( var_jac_wrapped );
            tmp_called_name_4 = var_jac_wrapped;
            CHECK_OBJECT( var_t0 );
            tmp_args_element_name_4 = var_t0;
            CHECK_OBJECT( var_y0 );
            tmp_args_element_name_5 = var_y0;
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_3 = PyCell_GET( par_self );
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_f );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "cccooooo";
                goto frame_exception_exit_1;
            }
            frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 354;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "cccooooo";
                goto frame_exception_exit_1;
            }
            assert( var_J == NULL );
            var_J = tmp_assign_source_7;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_7;
            int tmp_truth_name_2;
            tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_callable );
            assert( tmp_called_name_5 != NULL );
            CHECK_OBJECT( PyCell_GET( par_jac ) );
            tmp_args_element_name_7 = PyCell_GET( par_jac );
            frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 355;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "cccooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 355;
                type_description_1 = "cccooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
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
                PyObject *tmp_assign_source_8;
                PyObject *tmp_called_name_6;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                CHECK_OBJECT( PyCell_GET( par_jac ) );
                tmp_called_name_6 = PyCell_GET( par_jac );
                CHECK_OBJECT( var_t0 );
                tmp_args_element_name_8 = var_t0;
                CHECK_OBJECT( var_y0 );
                tmp_args_element_name_9 = var_y0;
                frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 356;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
                }

                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 356;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_J == NULL );
                var_J = tmp_assign_source_8;
            }
            {
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_assattr_target_1;
                tmp_assattr_name_1 = const_int_pos_1;
                CHECK_OBJECT( PyCell_GET( par_self ) );
                tmp_assattr_target_1 = PyCell_GET( par_self );
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_njev, tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 357;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_called_name_7;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_10;
                int tmp_truth_name_3;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_issparse );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issparse );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issparse" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 358;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_7 = tmp_mvar_value_4;
                CHECK_OBJECT( var_J );
                tmp_args_element_name_10 = var_J;
                frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 358;
                {
                    PyObject *call_args[] = { tmp_args_element_name_10 };
                    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 358;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_3 );
                if ( tmp_truth_name_3 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_3 );

                    exception_lineno = 358;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_5 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_3 );
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
                    PyObject *tmp_called_name_8;
                    PyObject *tmp_mvar_value_5;
                    PyObject *tmp_args_element_name_11;
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_csc_matrix );

                    if (unlikely( tmp_mvar_value_5 == NULL ))
                    {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
                    }

                    if ( tmp_mvar_value_5 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 359;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_8 = tmp_mvar_value_5;
                    CHECK_OBJECT( var_J );
                    tmp_args_element_name_11 = var_J;
                    frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 359;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_11 };
                        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                    }

                    if ( tmp_assign_source_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 359;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_J;
                        assert( old != NULL );
                        var_J = tmp_assign_source_9;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_10;
                    PyObject *tmp_defaults_1;
                    tmp_defaults_1 = const_tuple_none_tuple;
                    Py_INCREF( tmp_defaults_1 );
                    tmp_assign_source_10 = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_2_jac_wrapped( tmp_defaults_1 );

                    ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[0] = par_jac;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[0] );
                    ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[1] = par_self;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[1] );


                    assert( var_jac_wrapped == NULL );
                    var_jac_wrapped = tmp_assign_source_10;
                }
                goto branch_end_5;
                branch_no_5:;
                {
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_source_name_4;
                    PyObject *tmp_mvar_value_6;
                    PyObject *tmp_args_name_1;
                    PyObject *tmp_tuple_element_2;
                    PyObject *tmp_kw_name_1;
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 366;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_4 = tmp_mvar_value_6;
                    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_asarray );
                    if ( tmp_called_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 366;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_J );
                    tmp_tuple_element_2 = var_J;
                    tmp_args_name_1 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_2 );
                    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
                    tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
                    frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 366;
                    tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_1, tmp_kw_name_1 );
                    Py_DECREF( tmp_called_name_9 );
                    Py_DECREF( tmp_args_name_1 );
                    Py_DECREF( tmp_kw_name_1 );
                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 366;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_J;
                        assert( old != NULL );
                        var_J = tmp_assign_source_11;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_12;
                    PyObject *tmp_defaults_2;
                    tmp_defaults_2 = const_tuple_none_tuple;
                    Py_INCREF( tmp_defaults_2 );
                    tmp_assign_source_12 = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_3_jac_wrapped( tmp_defaults_2 );

                    ((struct Nuitka_FunctionObject *)tmp_assign_source_12)->m_closure[0] = par_jac;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_12)->m_closure[0] );
                    ((struct Nuitka_FunctionObject *)tmp_assign_source_12)->m_closure[1] = par_self;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_12)->m_closure[1] );


                    assert( var_jac_wrapped == NULL );
                    var_jac_wrapped = tmp_assign_source_12;
                }
                branch_end_5:;
            }
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_source_name_5;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_source_name_6;
                PyObject *tmp_source_name_7;
                CHECK_OBJECT( var_J );
                tmp_source_name_5 = var_J;
                tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 372;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( PyCell_GET( par_self ) );
                tmp_source_name_6 = PyCell_GET( par_self );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_n );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_3 );

                    exception_lineno = 372;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_compexpr_right_3, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( PyCell_GET( par_self ) );
                tmp_source_name_7 = PyCell_GET( par_self );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_n );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_3 );
                    Py_DECREF( tmp_compexpr_right_3 );

                    exception_lineno = 372;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_compexpr_right_3, 1, tmp_tuple_element_3 );
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                Py_DECREF( tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 372;
                    type_description_1 = "cccooooo";
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
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_make_exception_arg_1;
                    PyObject *tmp_called_name_10;
                    PyObject *tmp_source_name_8;
                    PyObject *tmp_args_element_name_12;
                    PyObject *tmp_tuple_element_4;
                    PyObject *tmp_source_name_9;
                    PyObject *tmp_source_name_10;
                    PyObject *tmp_args_element_name_13;
                    PyObject *tmp_source_name_11;
                    tmp_source_name_8 = const_str_digest_b45be6e078995041cc113ab76fa71535;
                    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_format );
                    assert( !(tmp_called_name_10 == NULL) );
                    CHECK_OBJECT( PyCell_GET( par_self ) );
                    tmp_source_name_9 = PyCell_GET( par_self );
                    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_n );
                    if ( tmp_tuple_element_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );

                        exception_lineno = 375;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_12 = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_args_element_name_12, 0, tmp_tuple_element_4 );
                    CHECK_OBJECT( PyCell_GET( par_self ) );
                    tmp_source_name_10 = PyCell_GET( par_self );
                    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_n );
                    if ( tmp_tuple_element_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );
                        Py_DECREF( tmp_args_element_name_12 );

                        exception_lineno = 375;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    PyTuple_SET_ITEM( tmp_args_element_name_12, 1, tmp_tuple_element_4 );
                    CHECK_OBJECT( var_J );
                    tmp_source_name_11 = var_J;
                    tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_shape );
                    if ( tmp_args_element_name_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );
                        Py_DECREF( tmp_args_element_name_12 );

                        exception_lineno = 375;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 373;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
                        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
                    }

                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_args_element_name_12 );
                    Py_DECREF( tmp_args_element_name_13 );
                    if ( tmp_make_exception_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 373;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 373;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_1 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_1 );
                    assert( !(tmp_raise_type_1 == NULL) );
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 373;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_6:;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_called_name_11;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_14;
                int tmp_truth_name_4;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_issparse );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issparse );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "issparse" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 377;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_11 = tmp_mvar_value_7;
                CHECK_OBJECT( PyCell_GET( par_jac ) );
                tmp_args_element_name_14 = PyCell_GET( par_jac );
                frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 377;
                {
                    PyObject *call_args[] = { tmp_args_element_name_14 };
                    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
                }

                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 377;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_4 );
                if ( tmp_truth_name_4 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_4 );

                    exception_lineno = 377;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_7 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_4 );
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
                    PyObject *tmp_assign_source_13;
                    PyObject *tmp_called_name_12;
                    PyObject *tmp_mvar_value_8;
                    PyObject *tmp_args_element_name_15;
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_csc_matrix );

                    if (unlikely( tmp_mvar_value_8 == NULL ))
                    {
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
                    }

                    if ( tmp_mvar_value_8 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 378;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_12 = tmp_mvar_value_8;
                    CHECK_OBJECT( PyCell_GET( par_jac ) );
                    tmp_args_element_name_15 = PyCell_GET( par_jac );
                    frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 378;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_15 };
                        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
                    }

                    if ( tmp_assign_source_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 378;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_J == NULL );
                    var_J = tmp_assign_source_13;
                }
                goto branch_end_7;
                branch_no_7:;
                {
                    PyObject *tmp_assign_source_14;
                    PyObject *tmp_called_name_13;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_mvar_value_9;
                    PyObject *tmp_args_name_2;
                    PyObject *tmp_tuple_element_5;
                    PyObject *tmp_kw_name_2;
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 380;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_12 = tmp_mvar_value_9;
                    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_asarray );
                    if ( tmp_called_name_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 380;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( PyCell_GET( par_jac ) );
                    tmp_tuple_element_5 = PyCell_GET( par_jac );
                    tmp_args_name_2 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_5 );
                    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
                    tmp_kw_name_2 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
                    frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 380;
                    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_2, tmp_kw_name_2 );
                    Py_DECREF( tmp_called_name_13 );
                    Py_DECREF( tmp_args_name_2 );
                    Py_DECREF( tmp_kw_name_2 );
                    if ( tmp_assign_source_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 380;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_J == NULL );
                    var_J = tmp_assign_source_14;
                }
                branch_end_7:;
            }
            {
                nuitka_bool tmp_condition_result_8;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_source_name_13;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_source_name_14;
                PyObject *tmp_source_name_15;
                CHECK_OBJECT( var_J );
                tmp_source_name_13 = var_J;
                tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_shape );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 382;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( PyCell_GET( par_self ) );
                tmp_source_name_14 = PyCell_GET( par_self );
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_n );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 382;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_compexpr_right_4, 0, tmp_tuple_element_6 );
                CHECK_OBJECT( PyCell_GET( par_self ) );
                tmp_source_name_15 = PyCell_GET( par_self );
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_n );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );
                    Py_DECREF( tmp_compexpr_right_4 );

                    exception_lineno = 382;
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_compexpr_right_4, 1, tmp_tuple_element_6 );
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                Py_DECREF( tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 382;
                    type_description_1 = "cccooooo";
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
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_make_exception_arg_2;
                    PyObject *tmp_called_name_14;
                    PyObject *tmp_source_name_16;
                    PyObject *tmp_args_element_name_16;
                    PyObject *tmp_tuple_element_7;
                    PyObject *tmp_source_name_17;
                    PyObject *tmp_source_name_18;
                    PyObject *tmp_args_element_name_17;
                    PyObject *tmp_source_name_19;
                    tmp_source_name_16 = const_str_digest_b45be6e078995041cc113ab76fa71535;
                    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_format );
                    assert( !(tmp_called_name_14 == NULL) );
                    CHECK_OBJECT( PyCell_GET( par_self ) );
                    tmp_source_name_17 = PyCell_GET( par_self );
                    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_n );
                    if ( tmp_tuple_element_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_14 );

                        exception_lineno = 385;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_16 = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_args_element_name_16, 0, tmp_tuple_element_7 );
                    CHECK_OBJECT( PyCell_GET( par_self ) );
                    tmp_source_name_18 = PyCell_GET( par_self );
                    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_n );
                    if ( tmp_tuple_element_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_14 );
                        Py_DECREF( tmp_args_element_name_16 );

                        exception_lineno = 385;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    PyTuple_SET_ITEM( tmp_args_element_name_16, 1, tmp_tuple_element_7 );
                    CHECK_OBJECT( var_J );
                    tmp_source_name_19 = var_J;
                    tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_shape );
                    if ( tmp_args_element_name_17 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_14 );
                        Py_DECREF( tmp_args_element_name_16 );

                        exception_lineno = 385;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 383;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
                        tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
                    }

                    Py_DECREF( tmp_called_name_14 );
                    Py_DECREF( tmp_args_element_name_16 );
                    Py_DECREF( tmp_args_element_name_17 );
                    if ( tmp_make_exception_arg_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 383;
                        type_description_1 = "cccooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame.f_lineno = 383;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_2 };
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_2 );
                    assert( !(tmp_raise_type_2 == NULL) );
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 383;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "cccooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_8:;
            }
            {
                PyObject *tmp_assign_source_15;
                tmp_assign_source_15 = Py_None;
                assert( var_jac_wrapped == NULL );
                Py_INCREF( tmp_assign_source_15 );
                var_jac_wrapped = tmp_assign_source_15;
            }
            branch_end_4:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_tuple_element_8;
        if ( var_jac_wrapped == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "jac_wrapped" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 388;
            type_description_1 = "cccooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_8 = var_jac_wrapped;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_8 );
        if ( var_J == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 388;
            type_description_1 = "cccooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_8 = var_J;
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_8 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa3f8d194ac7364128b0bb22bb5584d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa3f8d194ac7364128b0bb22bb5584d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa3f8d194ac7364128b0bb22bb5584d8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fa3f8d194ac7364128b0bb22bb5584d8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fa3f8d194ac7364128b0bb22bb5584d8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fa3f8d194ac7364128b0bb22bb5584d8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fa3f8d194ac7364128b0bb22bb5584d8,
        type_description_1,
        par_self,
        par_jac,
        par_sparsity,
        var_t0,
        var_y0,
        var_groups,
        var_jac_wrapped,
        var_J
    );


    // Release cached frame.
    if ( frame_fa3f8d194ac7364128b0bb22bb5584d8 == cache_frame_fa3f8d194ac7364128b0bb22bb5584d8 )
    {
        Py_DECREF( frame_fa3f8d194ac7364128b0bb22bb5584d8 );
    }
    cache_frame_fa3f8d194ac7364128b0bb22bb5584d8 = NULL;

    assertFrameObject( frame_fa3f8d194ac7364128b0bb22bb5584d8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_4__validate_jac );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_sparsity );
    Py_DECREF( par_sparsity );
    par_sparsity = NULL;

    CHECK_OBJECT( (PyObject *)var_t0 );
    Py_DECREF( var_t0 );
    var_t0 = NULL;

    CHECK_OBJECT( (PyObject *)var_y0 );
    Py_DECREF( var_y0 );
    var_y0 = NULL;

    Py_XDECREF( var_groups );
    var_groups = NULL;

    Py_XDECREF( var_jac_wrapped );
    var_jac_wrapped = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

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

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_sparsity );
    Py_DECREF( par_sparsity );
    par_sparsity = NULL;

    Py_XDECREF( var_t0 );
    var_t0 = NULL;

    Py_XDECREF( var_y0 );
    var_y0 = NULL;

    Py_XDECREF( var_groups );
    var_groups = NULL;

    Py_XDECREF( var_jac_wrapped );
    var_jac_wrapped = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_4__validate_jac );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_1_jac_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_f = python_pars[ 2 ];
    PyObject *var_J = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_121cbc2318b32fc0d1adc1a63a91e834;
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
    static struct Nuitka_FrameObject *cache_frame_121cbc2318b32fc0d1adc1a63a91e834 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_121cbc2318b32fc0d1adc1a63a91e834, codeobj_121cbc2318b32fc0d1adc1a63a91e834, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_121cbc2318b32fc0d1adc1a63a91e834 = cache_frame_121cbc2318b32fc0d1adc1a63a91e834;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_121cbc2318b32fc0d1adc1a63a91e834 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_121cbc2318b32fc0d1adc1a63a91e834 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 349;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_njev );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 349;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = PyCell_GET( self->m_closure[0] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_njev, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "oooocc";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_num_jac );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_num_jac );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "num_jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 350;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 350;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }

        tmp_source_name_2 = PyCell_GET( self->m_closure[0] );
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fun_vectorized );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_t );
        tmp_args_element_name_2 = par_t;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_3 = par_y;
        CHECK_OBJECT( par_f );
        tmp_args_element_name_4 = par_f;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 351;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }

        tmp_source_name_3 = PyCell_GET( self->m_closure[0] );
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_atol );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 351;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 351;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }

        tmp_source_name_4 = PyCell_GET( self->m_closure[0] );
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_jac_factor );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 351;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "sparsity" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 352;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }

        tmp_args_element_name_7 = PyCell_GET( self->m_closure[1] );
        frame_121cbc2318b32fc0d1adc1a63a91e834->m_frame.f_lineno = 350;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
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


            type_description_1 = "oooocc";
            exception_lineno = 350;
            goto try_except_handler_5;
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


            type_description_1 = "oooocc";
            exception_lineno = 350;
            goto try_except_handler_5;
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

                    type_description_1 = "oooocc";
                    exception_lineno = 350;
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

            type_description_1 = "oooocc";
            exception_lineno = 350;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert( var_J == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_J = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assattr_name_2 = tmp_tuple_unpack_1__element_2;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 350;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }

        tmp_assattr_target_2 = PyCell_GET( self->m_closure[0] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_jac_factor, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
    }
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_121cbc2318b32fc0d1adc1a63a91e834 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_121cbc2318b32fc0d1adc1a63a91e834 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_121cbc2318b32fc0d1adc1a63a91e834, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_121cbc2318b32fc0d1adc1a63a91e834->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_121cbc2318b32fc0d1adc1a63a91e834, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_121cbc2318b32fc0d1adc1a63a91e834,
        type_description_1,
        par_t,
        par_y,
        par_f,
        var_J,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_121cbc2318b32fc0d1adc1a63a91e834 == cache_frame_121cbc2318b32fc0d1adc1a63a91e834 )
    {
        Py_DECREF( frame_121cbc2318b32fc0d1adc1a63a91e834 );
    }
    cache_frame_121cbc2318b32fc0d1adc1a63a91e834 = NULL;

    assertFrameObject( frame_121cbc2318b32fc0d1adc1a63a91e834 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    CHECK_OBJECT( var_J );
    tmp_return_value = var_J;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_1_jac_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)var_J );
    Py_DECREF( var_J );
    var_J = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_1_jac_wrapped );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_2_jac_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par__ = python_pars[ 2 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_45e068bc4bb2b0e238dbb8d47447153c;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_45e068bc4bb2b0e238dbb8d47447153c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_45e068bc4bb2b0e238dbb8d47447153c, codeobj_45e068bc4bb2b0e238dbb8d47447153c, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_45e068bc4bb2b0e238dbb8d47447153c = cache_frame_45e068bc4bb2b0e238dbb8d47447153c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_45e068bc4bb2b0e238dbb8d47447153c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_45e068bc4bb2b0e238dbb8d47447153c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 362;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_njev );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "ooocc";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 362;
            type_description_1 = "ooocc";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = PyCell_GET( self->m_closure[1] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_njev, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "ooocc";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_csc_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csc_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 363;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 363;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_t );
        tmp_args_element_name_1 = par_t;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_2 = par_y;
        frame_45e068bc4bb2b0e238dbb8d47447153c->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
        frame_45e068bc4bb2b0e238dbb8d47447153c->m_frame.f_lineno = 363;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_45e068bc4bb2b0e238dbb8d47447153c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_45e068bc4bb2b0e238dbb8d47447153c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_45e068bc4bb2b0e238dbb8d47447153c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_45e068bc4bb2b0e238dbb8d47447153c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_45e068bc4bb2b0e238dbb8d47447153c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_45e068bc4bb2b0e238dbb8d47447153c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_45e068bc4bb2b0e238dbb8d47447153c,
        type_description_1,
        par_t,
        par_y,
        par__,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_45e068bc4bb2b0e238dbb8d47447153c == cache_frame_45e068bc4bb2b0e238dbb8d47447153c )
    {
        Py_DECREF( frame_45e068bc4bb2b0e238dbb8d47447153c );
    }
    cache_frame_45e068bc4bb2b0e238dbb8d47447153c = NULL;

    assertFrameObject( frame_45e068bc4bb2b0e238dbb8d47447153c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_2_jac_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_2_jac_wrapped );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_3_jac_wrapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par__ = python_pars[ 2 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_955bba212ddacc524ba086c4bf10e736;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_955bba212ddacc524ba086c4bf10e736 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_955bba212ddacc524ba086c4bf10e736, codeobj_955bba212ddacc524ba086c4bf10e736, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_955bba212ddacc524ba086c4bf10e736 = cache_frame_955bba212ddacc524ba086c4bf10e736;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_955bba212ddacc524ba086c4bf10e736 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_955bba212ddacc524ba086c4bf10e736 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 369;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_njev );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooocc";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 369;
            type_description_1 = "ooocc";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = PyCell_GET( self->m_closure[1] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_njev, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooocc";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 370;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 370;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_t );
        tmp_args_element_name_1 = par_t;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_2 = par_y;
        frame_955bba212ddacc524ba086c4bf10e736->m_frame.f_lineno = 370;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 370;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
        frame_955bba212ddacc524ba086c4bf10e736->m_frame.f_lineno = 370;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_955bba212ddacc524ba086c4bf10e736 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_955bba212ddacc524ba086c4bf10e736 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_955bba212ddacc524ba086c4bf10e736 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_955bba212ddacc524ba086c4bf10e736, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_955bba212ddacc524ba086c4bf10e736->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_955bba212ddacc524ba086c4bf10e736, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_955bba212ddacc524ba086c4bf10e736,
        type_description_1,
        par_t,
        par_y,
        par__,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_955bba212ddacc524ba086c4bf10e736 == cache_frame_955bba212ddacc524ba086c4bf10e736 )
    {
        Py_DECREF( frame_955bba212ddacc524ba086c4bf10e736 );
    }
    cache_frame_955bba212ddacc524ba086c4bf10e736 = NULL;

    assertFrameObject( frame_955bba212ddacc524ba086c4bf10e736 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_3_jac_wrapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_3_jac_wrapped );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_5__step_impl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_t = NULL;
    PyObject *var_y = NULL;
    PyObject *var_f = NULL;
    PyObject *var_max_step = NULL;
    PyObject *var_atol = NULL;
    PyObject *var_rtol = NULL;
    PyObject *var_min_step = NULL;
    PyObject *var_h_abs = NULL;
    PyObject *var_h_abs_old = NULL;
    PyObject *var_error_norm_old = NULL;
    PyObject *var_J = NULL;
    PyObject *var_LU_real = NULL;
    PyObject *var_LU_complex = NULL;
    PyObject *var_current_jac = NULL;
    PyObject *var_jac = NULL;
    PyObject *var_rejected = NULL;
    PyObject *var_step_accepted = NULL;
    PyObject *var_h = NULL;
    PyObject *var_t_new = NULL;
    PyObject *var_Z0 = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_converged = NULL;
    PyObject *var_n_iter = NULL;
    PyObject *var_Z = NULL;
    PyObject *var_rate = NULL;
    PyObject *var_y_new = NULL;
    PyObject *var_ZE = NULL;
    PyObject *var_error = NULL;
    PyObject *var_error_norm = NULL;
    PyObject *var_safety = NULL;
    PyObject *var_factor = NULL;
    PyObject *var_recompute_jac = NULL;
    PyObject *var_f_new = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6c7bda5d341610aa1bdaafbebeade9a6;
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
    static struct Nuitka_FrameObject *cache_frame_6c7bda5d341610aa1bdaafbebeade9a6 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c7bda5d341610aa1bdaafbebeade9a6, codeobj_6c7bda5d341610aa1bdaafbebeade9a6, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6c7bda5d341610aa1bdaafbebeade9a6 = cache_frame_6c7bda5d341610aa1bdaafbebeade9a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c7bda5d341610aa1bdaafbebeade9a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c7bda5d341610aa1bdaafbebeade9a6 ) == 2 ); // Frame stack

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


            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
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


            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
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
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_f );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f == NULL );
        var_f = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_max_step );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_max_step == NULL );
        var_max_step = tmp_assign_source_4;
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


            exception_lineno = 396;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_atol == NULL );
        var_atol = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_rtol );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rtol == NULL );
        var_rtol = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_9;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_3;
        tmp_left_name_1 = const_int_pos_10;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_abs );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_nextafter );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_t );
        tmp_args_element_name_2 = var_t;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_direction );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_3;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_inf );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
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

            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 399;
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

            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
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

            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 399;
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


            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_min_step == NULL );
        var_min_step = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_h_abs );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
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


            exception_lineno = 400;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
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
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( var_max_step );
            tmp_assign_source_8 = var_max_step;
            assert( var_h_abs == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_h_abs = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = Py_None;
            assert( var_h_abs_old == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_h_abs_old = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = Py_None;
            assert( var_error_norm_old == NULL );
            Py_INCREF( tmp_assign_source_10 );
            var_error_norm_old = tmp_assign_source_10;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_12;
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_h_abs );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
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


                exception_lineno = 404;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
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
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT( var_min_step );
                tmp_assign_source_11 = var_min_step;
                assert( var_h_abs == NULL );
                Py_INCREF( tmp_assign_source_11 );
                var_h_abs = tmp_assign_source_11;
            }
            {
                PyObject *tmp_assign_source_12;
                tmp_assign_source_12 = Py_None;
                assert( var_h_abs_old == NULL );
                Py_INCREF( tmp_assign_source_12 );
                var_h_abs_old = tmp_assign_source_12;
            }
            {
                PyObject *tmp_assign_source_13;
                tmp_assign_source_13 = Py_None;
                assert( var_error_norm_old == NULL );
                Py_INCREF( tmp_assign_source_13 );
                var_error_norm_old = tmp_assign_source_13;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_source_name_13;
                CHECK_OBJECT( par_self );
                tmp_source_name_13 = par_self;
                tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_h_abs );
                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 409;
                    type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_h_abs == NULL );
                var_h_abs = tmp_assign_source_14;
            }
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_source_name_14;
                CHECK_OBJECT( par_self );
                tmp_source_name_14 = par_self;
                tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_h_abs_old );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 410;
                    type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_h_abs_old == NULL );
                var_h_abs_old = tmp_assign_source_15;
            }
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_source_name_15;
                CHECK_OBJECT( par_self );
                tmp_source_name_15 = par_self;
                tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_error_norm_old );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 411;
                    type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_error_norm_old == NULL );
                var_error_norm_old = tmp_assign_source_16;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_source_name_16;
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_J );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_J == NULL );
        var_J = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_LU_real );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_LU_real == NULL );
        var_LU_real = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_source_name_18;
        CHECK_OBJECT( par_self );
        tmp_source_name_18 = par_self;
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_LU_complex );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_LU_complex == NULL );
        var_LU_complex = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_source_name_19;
        CHECK_OBJECT( par_self );
        tmp_source_name_19 = par_self;
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_current_jac );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_current_jac == NULL );
        var_current_jac = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_source_name_20;
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_jac );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_jac == NULL );
        var_jac = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = Py_False;
        assert( var_rejected == NULL );
        Py_INCREF( tmp_assign_source_22 );
        var_rejected = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = Py_False;
        assert( var_step_accepted == NULL );
        Py_INCREF( tmp_assign_source_23 );
        var_step_accepted = tmp_assign_source_23;
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

            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_2 = var_step_accepted;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res == 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
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

            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
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


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
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
            PyObject *tmp_source_name_21;
            tmp_tuple_element_1 = Py_False;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_self );
            tmp_source_name_21 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_TOO_SMALL_STEP );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 425;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_source_name_22;
        if ( var_h_abs == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "h_abs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_4 = var_h_abs;
        CHECK_OBJECT( par_self );
        tmp_source_name_22 = par_self;
        tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_direction );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_24;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_t );
        tmp_left_name_5 = var_t;
        CHECK_OBJECT( var_h );
        tmp_right_name_5 = var_h;
        tmp_assign_source_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_t_new;
            var_t_new = tmp_assign_source_25;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_source_name_23;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_source_name_24;
        CHECK_OBJECT( par_self );
        tmp_source_name_23 = par_self;
        tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_direction );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_t_new );
        tmp_left_name_7 = var_t_new;
        CHECK_OBJECT( par_self );
        tmp_source_name_24 = par_self;
        tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_t_bound );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
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
            PyObject *tmp_source_name_25;
            CHECK_OBJECT( par_self );
            tmp_source_name_25 = par_self;
            tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_t_bound );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 431;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_t_new;
                assert( old != NULL );
                var_t_new = tmp_assign_source_26;
                Py_DECREF( old );
            }

        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( var_t_new );
        tmp_left_name_8 = var_t_new;
        CHECK_OBJECT( var_t );
        tmp_right_name_8 = var_t;
        tmp_assign_source_27 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_h;
            assert( old != NULL );
            var_h = tmp_assign_source_27;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 434;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        CHECK_OBJECT( var_h );
        tmp_args_element_name_4 = var_h;
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 434;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_28 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abs, call_args );
        }

        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_h_abs;
            var_h_abs = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_26;
        CHECK_OBJECT( par_self );
        tmp_source_name_26 = par_self;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_sol );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_5 );
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
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_27;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_28;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 437;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_27 = tmp_mvar_value_5;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_zeros );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 437;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_2 = const_int_pos_3;
            tmp_args_element_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_y );
            tmp_source_name_28 = var_y;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_5 );

                exception_lineno = 437;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_0;
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_5 );

                exception_lineno = 437;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_2 );
            frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 437;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 437;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_Z0;
                var_Z0 = tmp_assign_source_29;
                Py_XDECREF( old );
            }

        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_left_name_9;
            PyObject *tmp_source_name_29;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_30;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_9;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_10;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_right_name_11;
            CHECK_OBJECT( par_self );
            tmp_source_name_30 = par_self;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_sol );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_t );
            tmp_left_name_10 = var_t;
            CHECK_OBJECT( var_h );
            tmp_left_name_11 = var_h;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_C );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_C );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "C" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 439;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_10 = tmp_mvar_value_6;
            tmp_right_name_9 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_10 );
            if ( tmp_right_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 439;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_9 );
            Py_DECREF( tmp_right_name_9 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 439;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 439;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_source_name_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_source_name_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_T );
            Py_DECREF( tmp_source_name_29 );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_y );
            tmp_right_name_11 = var_y;
            tmp_assign_source_30 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_11 );
            Py_DECREF( tmp_left_name_9 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_Z0;
                var_Z0 = tmp_assign_source_30;
                Py_XDECREF( old );
            }

        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT( var_atol );
        tmp_left_name_12 = var_atol;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_7;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_7 = var_y;
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 441;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_left_name_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_abs, call_args );
        }

        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_rtol );
        tmp_right_name_13 = var_rtol;
        tmp_right_name_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_13 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_scale;
            var_scale = tmp_assign_source_31;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = Py_False;
        {
            PyObject *old = var_converged;
            var_converged = tmp_assign_source_32;
            Py_INCREF( var_converged );
            Py_XDECREF( old );
        }

    }
    loop_start_2:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT( var_converged );
        tmp_operand_name_4 = var_converged;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_3 = ( tmp_res == 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        goto loop_end_2;
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        if ( var_LU_real == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "LU_real" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_6 = var_LU_real;
        tmp_compexpr_right_6 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        if ( var_LU_complex == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "LU_complex" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_7 = var_LU_complex;
        tmp_compexpr_right_7 = Py_None;
        tmp_or_right_value_1 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_8 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_8 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_31;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_left_name_14;
            PyObject *tmp_left_name_15;
            PyObject *tmp_left_name_16;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_right_name_14;
            PyObject *tmp_right_name_15;
            PyObject *tmp_source_name_32;
            PyObject *tmp_right_name_16;
            CHECK_OBJECT( par_self );
            tmp_source_name_31 = par_self;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_lu );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_MU_REAL );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MU_REAL );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_called_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MU_REAL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_16 = tmp_mvar_value_8;
            CHECK_OBJECT( var_h );
            tmp_right_name_14 = var_h;
            tmp_left_name_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_14 );
            if ( tmp_left_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_32 = par_self;
            tmp_right_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_I );
            if ( tmp_right_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_left_name_15 );

                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_14 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
            Py_DECREF( tmp_left_name_15 );
            Py_DECREF( tmp_right_name_15 );
            if ( tmp_left_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_J == NULL )
            {
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_left_name_14 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_16 = var_J;
            tmp_args_element_name_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_16 );
            Py_DECREF( tmp_left_name_14 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 446;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 446;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_LU_real;
                var_LU_real = tmp_assign_source_33;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_33;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_left_name_17;
            PyObject *tmp_left_name_18;
            PyObject *tmp_left_name_19;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_right_name_17;
            PyObject *tmp_right_name_18;
            PyObject *tmp_source_name_34;
            PyObject *tmp_right_name_19;
            CHECK_OBJECT( par_self );
            tmp_source_name_33 = par_self;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_lu );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 447;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_MU_COMPLEX );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MU_COMPLEX );
            }

            if ( tmp_mvar_value_9 == NULL )
            {
                Py_DECREF( tmp_called_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MU_COMPLEX" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 447;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_19 = tmp_mvar_value_9;
            CHECK_OBJECT( var_h );
            tmp_right_name_17 = var_h;
            tmp_left_name_18 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_17 );
            if ( tmp_left_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 447;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_34 = par_self;
            tmp_right_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_I );
            if ( tmp_right_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_left_name_18 );

                exception_lineno = 447;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_17 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_right_name_18 );
            if ( tmp_left_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 447;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_J == NULL )
            {
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_left_name_17 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 447;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_19 = var_J;
            tmp_args_element_name_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_19 );
            Py_DECREF( tmp_left_name_17 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 447;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 447;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 447;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_LU_complex;
                var_LU_complex = tmp_assign_source_34;
                Py_XDECREF( old );
            }

        }
        branch_no_8:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_35;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_source_name_36;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_source_name_37;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_solve_collocation_system );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_collocation_system );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_collocation_system" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_7 = tmp_mvar_value_10;
        CHECK_OBJECT( par_self );
        tmp_source_name_35 = par_self;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_fun );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_t );
        tmp_args_element_name_11 = var_t;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_12 = var_y;
        CHECK_OBJECT( var_h );
        tmp_args_element_name_13 = var_h;
        CHECK_OBJECT( var_Z0 );
        tmp_args_element_name_14 = var_Z0;
        CHECK_OBJECT( var_scale );
        tmp_args_element_name_15 = var_scale;
        CHECK_OBJECT( par_self );
        tmp_source_name_36 = par_self;
        tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_newton_tol );
        if ( tmp_args_element_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 450;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        if ( var_LU_real == NULL )
        {
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_args_element_name_16 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "LU_real" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_17 = var_LU_real;
        if ( var_LU_complex == NULL )
        {
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_args_element_name_16 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "LU_complex" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_18 = var_LU_complex;
        CHECK_OBJECT( par_self );
        tmp_source_name_37 = par_self;
        tmp_args_element_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_solve_lu );
        if ( tmp_args_element_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_args_element_name_16 );

            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS10( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_16 );
        Py_DECREF( tmp_args_element_name_19 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_35 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_35;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_36 = UNPACK_NEXT( tmp_unpack_1, 0, 4 );
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


            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            exception_lineno = 449;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_36;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_37 = UNPACK_NEXT( tmp_unpack_2, 1, 4 );
        if ( tmp_assign_source_37 == NULL )
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


            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            exception_lineno = 449;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_37;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_38 = UNPACK_NEXT( tmp_unpack_3, 2, 4 );
        if ( tmp_assign_source_38 == NULL )
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


            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            exception_lineno = 449;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_38;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT( tmp_unpack_4, 3, 4 );
        if ( tmp_assign_source_39 == NULL )
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


            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            exception_lineno = 449;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_4;
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_39;
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

                    type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                    exception_lineno = 449;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            exception_lineno = 449;
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
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_40 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_converged;
            assert( old != NULL );
            var_converged = tmp_assign_source_40;
            Py_INCREF( var_converged );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_41 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_n_iter;
            var_n_iter = tmp_assign_source_41;
            Py_INCREF( var_n_iter );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_42 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_Z;
            var_Z = tmp_assign_source_42;
            Py_INCREF( var_Z );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_43 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = var_rate;
            var_rate = tmp_assign_source_43;
            Py_INCREF( var_rate );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_operand_name_5;
        CHECK_OBJECT( var_converged );
        tmp_operand_name_5 = var_converged;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_10;
            int tmp_truth_name_1;
            if ( var_current_jac == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "current_jac" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 454;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_truth_name_1 = CHECK_IF_TRUE( var_current_jac );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 454;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_10 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_10;
            }
            else
            {
                goto branch_no_10;
            }
            branch_yes_10:;
            goto loop_end_2;
            branch_no_10:;
        }
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_args_element_name_22;
            CHECK_OBJECT( par_self );
            tmp_called_instance_3 = par_self;
            CHECK_OBJECT( var_t );
            tmp_args_element_name_20 = var_t;
            CHECK_OBJECT( var_y );
            tmp_args_element_name_21 = var_y;
            CHECK_OBJECT( var_f );
            tmp_args_element_name_22 = var_f;
            frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 457;
            {
                PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22 };
                tmp_assign_source_44 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain_jac, call_args );
            }

            if ( tmp_assign_source_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 457;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_J;
                var_J = tmp_assign_source_44;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_45;
            tmp_assign_source_45 = Py_True;
            {
                PyObject *old = var_current_jac;
                var_current_jac = tmp_assign_source_45;
                Py_INCREF( var_current_jac );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_46;
            tmp_assign_source_46 = Py_None;
            {
                PyObject *old = var_LU_real;
                var_LU_real = tmp_assign_source_46;
                Py_INCREF( var_LU_real );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_47;
            tmp_assign_source_47 = Py_None;
            {
                PyObject *old = var_LU_complex;
                var_LU_complex = tmp_assign_source_47;
                Py_INCREF( var_LU_complex );
                Py_XDECREF( old );
            }

        }
        branch_no_9:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 444;
        type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_6;
        if ( var_converged == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "converged" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_6 = var_converged;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_48;
            PyObject *tmp_left_name_20;
            PyObject *tmp_right_name_20;
            CHECK_OBJECT( var_h_abs );
            tmp_left_name_20 = var_h_abs;
            tmp_right_name_20 = const_float_0_5;
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_20, tmp_right_name_20 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 463;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_48 = tmp_left_name_20;
            var_h_abs = tmp_assign_source_48;

        }
        {
            PyObject *tmp_assign_source_49;
            tmp_assign_source_49 = Py_None;
            {
                PyObject *old = var_LU_real;
                var_LU_real = tmp_assign_source_49;
                Py_INCREF( var_LU_real );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_50;
            tmp_assign_source_50 = Py_None;
            {
                PyObject *old = var_LU_complex;
                var_LU_complex = tmp_assign_source_50;
                Py_INCREF( var_LU_complex );
                Py_XDECREF( old );
            }

        }
        goto loop_start_1;
        branch_no_11:;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_21;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_y );
        tmp_left_name_21 = var_y;
        if ( var_Z == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Z" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 468;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_2 = var_Z;
        tmp_subscript_name_2 = const_int_neg_1;
        tmp_right_name_21 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
        if ( tmp_right_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 468;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_51 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_21 );
        Py_DECREF( tmp_right_name_21 );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 468;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_y_new;
            var_y_new = tmp_assign_source_51;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_left_name_22;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_38;
        PyObject *tmp_source_name_39;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_right_name_22;
        if ( var_Z == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Z" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_39 = var_Z;
        tmp_source_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_T );
        if ( tmp_source_name_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_dot );
        Py_DECREF( tmp_source_name_38 );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_E );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_E );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "E" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_23 = tmp_mvar_value_11;
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 469;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_left_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        if ( tmp_left_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_h );
        tmp_right_name_22 = var_h;
        tmp_assign_source_52 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_22 );
        Py_DECREF( tmp_left_name_22 );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ZE;
            var_ZE = tmp_assign_source_52;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_40;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_23;
        CHECK_OBJECT( par_self );
        tmp_source_name_40 = par_self;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_solve_lu );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_LU_real == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "LU_real" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_24 = var_LU_real;
        CHECK_OBJECT( var_f );
        tmp_left_name_23 = var_f;
        CHECK_OBJECT( var_ZE );
        tmp_right_name_23 = var_ZE;
        tmp_args_element_name_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_23 );
        if ( tmp_args_element_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 470;
        {
            PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25 };
            tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_25 );
        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_error;
            var_error = tmp_assign_source_53;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_24;
        PyObject *tmp_left_name_25;
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_41;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_right_name_25;
        CHECK_OBJECT( var_atol );
        tmp_left_name_24 = var_atol;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_41 = tmp_mvar_value_12;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_maximum );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_13;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_27 = var_y;
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 471;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_args_element_name_26 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_abs, call_args );
        }

        if ( tmp_args_element_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_26 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_14;
        CHECK_OBJECT( var_y_new );
        tmp_args_element_name_29 = var_y_new;
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 471;
        {
            PyObject *call_args[] = { tmp_args_element_name_29 };
            tmp_args_element_name_28 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_abs, call_args );
        }

        if ( tmp_args_element_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_26 );

            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 471;
        {
            PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_28 };
            tmp_left_name_25 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_26 );
        Py_DECREF( tmp_args_element_name_28 );
        if ( tmp_left_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_rtol );
        tmp_right_name_25 = var_rtol;
        tmp_right_name_24 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_25, tmp_right_name_25 );
        Py_DECREF( tmp_left_name_25 );
        if ( tmp_right_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_54 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_24 );
        Py_DECREF( tmp_right_name_24 );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_scale;
            assert( old != NULL );
            var_scale = tmp_assign_source_54;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_left_name_26;
        PyObject *tmp_right_name_26;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_15;
        CHECK_OBJECT( var_error );
        tmp_left_name_26 = var_error;
        CHECK_OBJECT( var_scale );
        tmp_right_name_26 = var_scale;
        tmp_args_element_name_30 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_26, tmp_right_name_26 );
        if ( tmp_args_element_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 472;
        {
            PyObject *call_args[] = { tmp_args_element_name_30 };
            tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_args_element_name_30 );
        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_error_norm;
            var_error_norm = tmp_assign_source_55;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_left_name_27;
        PyObject *tmp_left_name_28;
        PyObject *tmp_right_name_27;
        PyObject *tmp_left_name_29;
        PyObject *tmp_left_name_30;
        PyObject *tmp_right_name_28;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_right_name_29;
        PyObject *tmp_right_name_30;
        PyObject *tmp_left_name_31;
        PyObject *tmp_left_name_32;
        PyObject *tmp_right_name_31;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_right_name_32;
        tmp_left_name_28 = const_float_0_9;
        tmp_left_name_30 = const_int_pos_2;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NEWTON_MAXITER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_28 = tmp_mvar_value_16;
        tmp_left_name_29 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_30, tmp_right_name_28 );
        if ( tmp_left_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_29 = const_int_pos_1;
        tmp_right_name_27 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_29, tmp_right_name_29 );
        Py_DECREF( tmp_left_name_29 );
        if ( tmp_right_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_27 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_28, tmp_right_name_27 );
        Py_DECREF( tmp_right_name_27 );
        if ( tmp_left_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_32 = const_int_pos_2;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_left_name_27 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NEWTON_MAXITER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_31 = tmp_mvar_value_17;
        tmp_left_name_31 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_32, tmp_right_name_31 );
        if ( tmp_left_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_27 );

            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_n_iter == NULL )
        {
            Py_DECREF( tmp_left_name_27 );
            Py_DECREF( tmp_left_name_31 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n_iter" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_32 = var_n_iter;
        tmp_right_name_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_31, tmp_right_name_32 );
        Py_DECREF( tmp_left_name_31 );
        if ( tmp_right_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_27 );

            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_56 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_27, tmp_right_name_30 );
        Py_DECREF( tmp_left_name_27 );
        Py_DECREF( tmp_right_name_30 );
        if ( tmp_assign_source_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_safety;
            var_safety = tmp_assign_source_56;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_2;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        if ( var_rejected == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rejected" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE( var_rejected );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
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
        CHECK_OBJECT( var_error_norm );
        tmp_compexpr_left_8 = var_error_norm;
        tmp_compexpr_right_8 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_12 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_12 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_assign_source_57;
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_42;
            PyObject *tmp_args_element_name_31;
            PyObject *tmp_args_element_name_32;
            PyObject *tmp_left_name_33;
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_43;
            PyObject *tmp_args_element_name_33;
            PyObject *tmp_args_element_name_34;
            PyObject *tmp_left_name_34;
            PyObject *tmp_right_name_33;
            PyObject *tmp_right_name_34;
            CHECK_OBJECT( par_self );
            tmp_source_name_42 = par_self;
            tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_solve_lu );
            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 477;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_LU_real == NULL )
            {
                Py_DECREF( tmp_called_name_12 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "LU_real" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 477;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_31 = var_LU_real;
            CHECK_OBJECT( par_self );
            tmp_source_name_43 = par_self;
            tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_fun );
            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );

                exception_lineno = 477;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_t );
            tmp_args_element_name_33 = var_t;
            CHECK_OBJECT( var_y );
            tmp_left_name_34 = var_y;
            CHECK_OBJECT( var_error );
            tmp_right_name_33 = var_error;
            tmp_args_element_name_34 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_34, tmp_right_name_33 );
            if ( tmp_args_element_name_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );
                Py_DECREF( tmp_called_name_13 );

                exception_lineno = 477;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 477;
            {
                PyObject *call_args[] = { tmp_args_element_name_33, tmp_args_element_name_34 };
                tmp_left_name_33 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_34 );
            if ( tmp_left_name_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );

                exception_lineno = 477;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_ZE );
            tmp_right_name_34 = var_ZE;
            tmp_args_element_name_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_33, tmp_right_name_34 );
            Py_DECREF( tmp_left_name_33 );
            if ( tmp_args_element_name_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );

                exception_lineno = 477;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 477;
            {
                PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32 };
                tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_element_name_32 );
            if ( tmp_assign_source_57 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 477;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_error;
                assert( old != NULL );
                var_error = tmp_assign_source_57;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_name_14;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_args_element_name_35;
            PyObject *tmp_left_name_35;
            PyObject *tmp_right_name_35;
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_norm );

            if (unlikely( tmp_mvar_value_18 == NULL ))
            {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
            }

            if ( tmp_mvar_value_18 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 478;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_14 = tmp_mvar_value_18;
            CHECK_OBJECT( var_error );
            tmp_left_name_35 = var_error;
            CHECK_OBJECT( var_scale );
            tmp_right_name_35 = var_scale;
            tmp_args_element_name_35 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_35, tmp_right_name_35 );
            if ( tmp_args_element_name_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 478;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 478;
            {
                PyObject *call_args[] = { tmp_args_element_name_35 };
                tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
            }

            Py_DECREF( tmp_args_element_name_35 );
            if ( tmp_assign_source_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 478;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_error_norm;
                assert( old != NULL );
                var_error_norm = tmp_assign_source_58;
                Py_DECREF( old );
            }

        }
        branch_no_12:;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( var_error_norm );
        tmp_compexpr_left_9 = var_error_norm;
        tmp_compexpr_right_9 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 480;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
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
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_name_15;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_args_element_name_36;
            PyObject *tmp_args_element_name_37;
            PyObject *tmp_args_element_name_38;
            PyObject *tmp_args_element_name_39;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_predict_factor );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_predict_factor );
            }

            if ( tmp_mvar_value_19 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "predict_factor" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 481;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_15 = tmp_mvar_value_19;
            CHECK_OBJECT( var_h_abs );
            tmp_args_element_name_36 = var_h_abs;
            if ( var_h_abs_old == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "h_abs_old" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 481;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_37 = var_h_abs_old;
            CHECK_OBJECT( var_error_norm );
            tmp_args_element_name_38 = var_error_norm;
            if ( var_error_norm_old == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error_norm_old" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 482;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_39 = var_error_norm_old;
            frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 481;
            {
                PyObject *call_args[] = { tmp_args_element_name_36, tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39 };
                tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_15, call_args );
            }

            if ( tmp_assign_source_59 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 481;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_factor;
                var_factor = tmp_assign_source_59;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_left_name_36;
            PyObject *tmp_right_name_36;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_element_name_40;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_args_element_name_41;
            PyObject *tmp_left_name_37;
            PyObject *tmp_right_name_37;
            CHECK_OBJECT( var_h_abs );
            tmp_left_name_36 = var_h_abs;
            tmp_called_name_16 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_16 != NULL );
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_MIN_FACTOR );

            if (unlikely( tmp_mvar_value_20 == NULL ))
            {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MIN_FACTOR );
            }

            if ( tmp_mvar_value_20 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MIN_FACTOR" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 483;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_40 = tmp_mvar_value_20;
            CHECK_OBJECT( var_safety );
            tmp_left_name_37 = var_safety;
            CHECK_OBJECT( var_factor );
            tmp_right_name_37 = var_factor;
            tmp_args_element_name_41 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_37, tmp_right_name_37 );
            if ( tmp_args_element_name_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 483;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 483;
            {
                PyObject *call_args[] = { tmp_args_element_name_40, tmp_args_element_name_41 };
                tmp_right_name_36 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
            }

            Py_DECREF( tmp_args_element_name_41 );
            if ( tmp_right_name_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 483;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_36, tmp_right_name_36 );
            Py_DECREF( tmp_right_name_36 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 483;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_60 = tmp_left_name_36;
            var_h_abs = tmp_assign_source_60;

        }
        {
            PyObject *tmp_assign_source_61;
            tmp_assign_source_61 = Py_None;
            {
                PyObject *old = var_LU_real;
                var_LU_real = tmp_assign_source_61;
                Py_INCREF( var_LU_real );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_62;
            tmp_assign_source_62 = Py_None;
            {
                PyObject *old = var_LU_complex;
                var_LU_complex = tmp_assign_source_62;
                Py_INCREF( var_LU_complex );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_63;
            tmp_assign_source_63 = Py_True;
            {
                PyObject *old = var_rejected;
                var_rejected = tmp_assign_source_63;
                Py_INCREF( var_rejected );
                Py_XDECREF( old );
            }

        }
        goto branch_end_13;
        branch_no_13:;
        {
            PyObject *tmp_assign_source_64;
            tmp_assign_source_64 = Py_True;
            {
                PyObject *old = var_step_accepted;
                var_step_accepted = tmp_assign_source_64;
                Py_INCREF( var_step_accepted );
                Py_XDECREF( old );
            }

        }
        branch_end_13:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
        type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_65;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        CHECK_OBJECT( var_jac );
        tmp_compexpr_left_10 = var_jac;
        tmp_compexpr_right_10 = Py_None;
        tmp_and_left_value_2 = ( tmp_compexpr_left_10 != tmp_compexpr_right_10 ) ? Py_True : Py_False;
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        if ( var_n_iter == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n_iter" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 491;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_11 = var_n_iter;
        tmp_compexpr_right_11 = const_int_pos_2;
        tmp_and_left_value_3 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_and_left_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 491;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
        if ( tmp_and_left_truth_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_3 );

            exception_lineno = 491;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
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
        Py_DECREF( tmp_and_left_value_3 );
        if ( var_rate == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rate" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 491;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_12 = var_rate;
        tmp_compexpr_right_12 = const_float_0_001;
        tmp_and_right_value_3 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
        if ( tmp_and_right_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 491;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_assign_source_65 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        Py_INCREF( tmp_and_left_value_2 );
        tmp_assign_source_65 = tmp_and_left_value_2;
        and_end_2:;
        assert( var_recompute_jac == NULL );
        var_recompute_jac = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_args_element_name_45;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_predict_factor );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_predict_factor );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "predict_factor" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_17 = tmp_mvar_value_21;
        if ( var_h_abs == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "h_abs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_42 = var_h_abs;
        if ( var_h_abs_old == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "h_abs_old" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_43 = var_h_abs_old;
        if ( var_error_norm == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_44 = var_error_norm;
        if ( var_error_norm_old == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error_norm_old" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_45 = var_error_norm_old;
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 493;
        {
            PyObject *call_args[] = { tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_44, tmp_args_element_name_45 };
            tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_17, call_args );
        }

        if ( tmp_assign_source_66 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_factor;
            var_factor = tmp_assign_source_66;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_name_18;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_left_name_38;
        PyObject *tmp_right_name_38;
        tmp_called_name_18 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_18 != NULL );
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_MAX_FACTOR );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_FACTOR );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAX_FACTOR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_46 = tmp_mvar_value_22;
        if ( var_safety == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "safety" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_38 = var_safety;
        CHECK_OBJECT( var_factor );
        tmp_right_name_38 = var_factor;
        tmp_args_element_name_47 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_38, tmp_right_name_38 );
        if ( tmp_args_element_name_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 494;
        {
            PyObject *call_args[] = { tmp_args_element_name_46, tmp_args_element_name_47 };
            tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_args_element_name_47 );
        if ( tmp_assign_source_67 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_factor;
            assert( old != NULL );
            var_factor = tmp_assign_source_67;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_operand_name_7;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        CHECK_OBJECT( var_recompute_jac );
        tmp_operand_name_7 = var_recompute_jac;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_factor );
        tmp_compexpr_left_13 = var_factor;
        tmp_compexpr_right_13 = const_float_1_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_14 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_14 = tmp_and_left_value_4;
        and_end_4:;
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
            PyObject *tmp_assign_source_68;
            tmp_assign_source_68 = const_int_pos_1;
            {
                PyObject *old = var_factor;
                assert( old != NULL );
                var_factor = tmp_assign_source_68;
                Py_INCREF( var_factor );
                Py_DECREF( old );
            }

        }
        goto branch_end_14;
        branch_no_14:;
        {
            PyObject *tmp_assign_source_69;
            tmp_assign_source_69 = Py_None;
            {
                PyObject *old = var_LU_real;
                var_LU_real = tmp_assign_source_69;
                Py_INCREF( var_LU_real );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_70;
            tmp_assign_source_70 = Py_None;
            {
                PyObject *old = var_LU_complex;
                var_LU_complex = tmp_assign_source_70;
                Py_INCREF( var_LU_complex );
                Py_XDECREF( old );
            }

        }
        branch_end_14:;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_name_19;
        PyObject *tmp_source_name_44;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_args_element_name_49;
        CHECK_OBJECT( par_self );
        tmp_source_name_44 = par_self;
        tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_fun );
        if ( tmp_called_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 502;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_t_new == NULL )
        {
            Py_DECREF( tmp_called_name_19 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t_new" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 502;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_48 = var_t_new;
        if ( var_y_new == NULL )
        {
            Py_DECREF( tmp_called_name_19 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y_new" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 502;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_49 = var_y_new;
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 502;
        {
            PyObject *call_args[] = { tmp_args_element_name_48, tmp_args_element_name_49 };
            tmp_assign_source_71 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
        }

        Py_DECREF( tmp_called_name_19 );
        if ( tmp_assign_source_71 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 502;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f_new == NULL );
        var_f_new = tmp_assign_source_71;
    }
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_3;
        CHECK_OBJECT( var_recompute_jac );
        tmp_truth_name_3 = CHECK_IF_TRUE( var_recompute_jac );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_72;
            PyObject *tmp_called_name_20;
            PyObject *tmp_args_element_name_50;
            PyObject *tmp_args_element_name_51;
            PyObject *tmp_args_element_name_52;
            CHECK_OBJECT( var_jac );
            tmp_called_name_20 = var_jac;
            if ( var_t_new == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t_new" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 504;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_50 = var_t_new;
            if ( var_y_new == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y_new" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 504;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_51 = var_y_new;
            CHECK_OBJECT( var_f_new );
            tmp_args_element_name_52 = var_f_new;
            frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 504;
            {
                PyObject *call_args[] = { tmp_args_element_name_50, tmp_args_element_name_51, tmp_args_element_name_52 };
                tmp_assign_source_72 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_20, call_args );
            }

            if ( tmp_assign_source_72 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 504;
                type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_J;
                var_J = tmp_assign_source_72;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_73;
            tmp_assign_source_73 = Py_True;
            {
                PyObject *old = var_current_jac;
                var_current_jac = tmp_assign_source_73;
                Py_INCREF( var_current_jac );
                Py_XDECREF( old );
            }

        }
        goto branch_end_15;
        branch_no_15:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_compexpr_left_14;
            PyObject *tmp_compexpr_right_14;
            CHECK_OBJECT( var_jac );
            tmp_compexpr_left_14 = var_jac;
            tmp_compexpr_right_14 = Py_None;
            tmp_condition_result_16 = ( tmp_compexpr_left_14 != tmp_compexpr_right_14 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_74;
                tmp_assign_source_74 = Py_False;
                {
                    PyObject *old = var_current_jac;
                    var_current_jac = tmp_assign_source_74;
                    Py_INCREF( var_current_jac );
                    Py_XDECREF( old );
                }

            }
            branch_no_16:;
        }
        branch_end_15:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_source_name_45;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_45 = par_self;
        tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_h_abs );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 509;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_h_abs_old, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 509;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        if ( var_error_norm == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error_norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 510;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_2 = var_error_norm;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_error_norm_old, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 510;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_left_name_39;
        PyObject *tmp_right_name_39;
        PyObject *tmp_assattr_target_3;
        if ( var_h_abs == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "h_abs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 512;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_39 = var_h_abs;
        CHECK_OBJECT( var_factor );
        tmp_right_name_39 = var_factor;
        tmp_assattr_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_39, tmp_right_name_39 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 512;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_h_abs, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 512;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( var_y );
        tmp_assattr_name_4 = var_y;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_y_old, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 514;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        if ( var_t_new == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t_new" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 516;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_5 = var_t_new;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_t, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 516;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        if ( var_y_new == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y_new" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 517;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_6 = var_y_new;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_y, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 517;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( var_f_new );
        tmp_assattr_name_7 = var_f_new;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_f, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 518;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        if ( var_Z == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Z" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 520;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_8 = var_Z;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_Z, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 520;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        if ( var_LU_real == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "LU_real" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 522;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_9 = var_LU_real;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_LU_real, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 522;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        if ( var_LU_complex == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "LU_complex" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 523;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_10 = var_LU_complex;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_LU_complex, tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 523;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_assattr_target_11;
        if ( var_current_jac == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "current_jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 524;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_11 = var_current_jac;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_current_jac, tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 524;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_assattr_target_12;
        if ( var_J == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 525;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_12 = var_J;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_J, tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 525;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT( var_t );
        tmp_assattr_name_13 = var_t;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_t_old, tmp_assattr_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 527;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT( par_self );
        tmp_called_instance_6 = par_self;
        frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame.f_lineno = 528;
        tmp_assattr_name_14 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain__compute_dense_output );
        if ( tmp_assattr_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 528;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_sol, tmp_assattr_name_14 );
        Py_DECREF( tmp_assattr_name_14 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 528;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_tuple_element_3;
        if ( var_step_accepted == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "step_accepted" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = var_step_accepted;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_None;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c7bda5d341610aa1bdaafbebeade9a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c7bda5d341610aa1bdaafbebeade9a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c7bda5d341610aa1bdaafbebeade9a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c7bda5d341610aa1bdaafbebeade9a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c7bda5d341610aa1bdaafbebeade9a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c7bda5d341610aa1bdaafbebeade9a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c7bda5d341610aa1bdaafbebeade9a6,
        type_description_1,
        par_self,
        var_t,
        var_y,
        var_f,
        var_max_step,
        var_atol,
        var_rtol,
        var_min_step,
        var_h_abs,
        var_h_abs_old,
        var_error_norm_old,
        var_J,
        var_LU_real,
        var_LU_complex,
        var_current_jac,
        var_jac,
        var_rejected,
        var_step_accepted,
        NULL,
        var_h,
        var_t_new,
        var_Z0,
        var_scale,
        var_converged,
        var_n_iter,
        var_Z,
        var_rate,
        var_y_new,
        var_ZE,
        var_error,
        var_error_norm,
        var_safety,
        var_factor,
        var_recompute_jac,
        var_f_new
    );


    // Release cached frame.
    if ( frame_6c7bda5d341610aa1bdaafbebeade9a6 == cache_frame_6c7bda5d341610aa1bdaafbebeade9a6 )
    {
        Py_DECREF( frame_6c7bda5d341610aa1bdaafbebeade9a6 );
    }
    cache_frame_6c7bda5d341610aa1bdaafbebeade9a6 = NULL;

    assertFrameObject( frame_6c7bda5d341610aa1bdaafbebeade9a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_5__step_impl );
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

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

    CHECK_OBJECT( (PyObject *)var_max_step );
    Py_DECREF( var_max_step );
    var_max_step = NULL;

    CHECK_OBJECT( (PyObject *)var_atol );
    Py_DECREF( var_atol );
    var_atol = NULL;

    CHECK_OBJECT( (PyObject *)var_rtol );
    Py_DECREF( var_rtol );
    var_rtol = NULL;

    CHECK_OBJECT( (PyObject *)var_min_step );
    Py_DECREF( var_min_step );
    var_min_step = NULL;

    Py_XDECREF( var_h_abs );
    var_h_abs = NULL;

    Py_XDECREF( var_h_abs_old );
    var_h_abs_old = NULL;

    Py_XDECREF( var_error_norm_old );
    var_error_norm_old = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_LU_real );
    var_LU_real = NULL;

    Py_XDECREF( var_LU_complex );
    var_LU_complex = NULL;

    Py_XDECREF( var_current_jac );
    var_current_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_jac );
    Py_DECREF( var_jac );
    var_jac = NULL;

    Py_XDECREF( var_rejected );
    var_rejected = NULL;

    Py_XDECREF( var_step_accepted );
    var_step_accepted = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_t_new );
    var_t_new = NULL;

    Py_XDECREF( var_Z0 );
    var_Z0 = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_converged );
    var_converged = NULL;

    Py_XDECREF( var_n_iter );
    var_n_iter = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_rate );
    var_rate = NULL;

    Py_XDECREF( var_y_new );
    var_y_new = NULL;

    Py_XDECREF( var_ZE );
    var_ZE = NULL;

    Py_XDECREF( var_error );
    var_error = NULL;

    Py_XDECREF( var_error_norm );
    var_error_norm = NULL;

    Py_XDECREF( var_safety );
    var_safety = NULL;

    Py_XDECREF( var_factor );
    var_factor = NULL;

    Py_XDECREF( var_recompute_jac );
    var_recompute_jac = NULL;

    Py_XDECREF( var_f_new );
    var_f_new = NULL;

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

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_max_step );
    var_max_step = NULL;

    Py_XDECREF( var_atol );
    var_atol = NULL;

    Py_XDECREF( var_rtol );
    var_rtol = NULL;

    Py_XDECREF( var_min_step );
    var_min_step = NULL;

    Py_XDECREF( var_h_abs );
    var_h_abs = NULL;

    Py_XDECREF( var_h_abs_old );
    var_h_abs_old = NULL;

    Py_XDECREF( var_error_norm_old );
    var_error_norm_old = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_LU_real );
    var_LU_real = NULL;

    Py_XDECREF( var_LU_complex );
    var_LU_complex = NULL;

    Py_XDECREF( var_current_jac );
    var_current_jac = NULL;

    Py_XDECREF( var_jac );
    var_jac = NULL;

    Py_XDECREF( var_rejected );
    var_rejected = NULL;

    Py_XDECREF( var_step_accepted );
    var_step_accepted = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_t_new );
    var_t_new = NULL;

    Py_XDECREF( var_Z0 );
    var_Z0 = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_converged );
    var_converged = NULL;

    Py_XDECREF( var_n_iter );
    var_n_iter = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_rate );
    var_rate = NULL;

    Py_XDECREF( var_y_new );
    var_y_new = NULL;

    Py_XDECREF( var_ZE );
    var_ZE = NULL;

    Py_XDECREF( var_error );
    var_error = NULL;

    Py_XDECREF( var_error_norm );
    var_error_norm = NULL;

    Py_XDECREF( var_safety );
    var_safety = NULL;

    Py_XDECREF( var_factor );
    var_factor = NULL;

    Py_XDECREF( var_recompute_jac );
    var_recompute_jac = NULL;

    Py_XDECREF( var_f_new );
    var_f_new = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_5__step_impl );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_6__compute_dense_output( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_Q = NULL;
    struct Nuitka_FrameObject *frame_15118c3dbd2160a36997502a7056ab18;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_15118c3dbd2160a36997502a7056ab18 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_15118c3dbd2160a36997502a7056ab18, codeobj_15118c3dbd2160a36997502a7056ab18, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *) );
    frame_15118c3dbd2160a36997502a7056ab18 = cache_frame_15118c3dbd2160a36997502a7056ab18;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_15118c3dbd2160a36997502a7056ab18 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_15118c3dbd2160a36997502a7056ab18 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Z );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_P );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_P );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "P" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        frame_15118c3dbd2160a36997502a7056ab18->m_frame.f_lineno = 533;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_Q == NULL );
        var_Q = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_RadauDenseOutput );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RadauDenseOutput );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RadauDenseOutput" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 534;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_t_old );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 534;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_t );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 534;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_y_old );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 534;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_Q );
        tmp_args_element_name_6 = var_Q;
        frame_15118c3dbd2160a36997502a7056ab18->m_frame.f_lineno = 534;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 534;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_15118c3dbd2160a36997502a7056ab18 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_15118c3dbd2160a36997502a7056ab18 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_15118c3dbd2160a36997502a7056ab18 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_15118c3dbd2160a36997502a7056ab18, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_15118c3dbd2160a36997502a7056ab18->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_15118c3dbd2160a36997502a7056ab18, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_15118c3dbd2160a36997502a7056ab18,
        type_description_1,
        par_self,
        var_Q
    );


    // Release cached frame.
    if ( frame_15118c3dbd2160a36997502a7056ab18 == cache_frame_15118c3dbd2160a36997502a7056ab18 )
    {
        Py_DECREF( frame_15118c3dbd2160a36997502a7056ab18 );
    }
    cache_frame_15118c3dbd2160a36997502a7056ab18 = NULL;

    assertFrameObject( frame_15118c3dbd2160a36997502a7056ab18 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_6__compute_dense_output );
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
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_6__compute_dense_output );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_7__dense_output_impl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_71a414dbb37d28d0a9f0d73b5ce3f7f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_71a414dbb37d28d0a9f0d73b5ce3f7f1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_71a414dbb37d28d0a9f0d73b5ce3f7f1, codeobj_71a414dbb37d28d0a9f0d73b5ce3f7f1, module_scipy$integrate$_ivp$radau, sizeof(void *) );
    frame_71a414dbb37d28d0a9f0d73b5ce3f7f1 = cache_frame_71a414dbb37d28d0a9f0d73b5ce3f7f1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_71a414dbb37d28d0a9f0d73b5ce3f7f1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_71a414dbb37d28d0a9f0d73b5ce3f7f1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sol );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 537;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_71a414dbb37d28d0a9f0d73b5ce3f7f1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_71a414dbb37d28d0a9f0d73b5ce3f7f1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_71a414dbb37d28d0a9f0d73b5ce3f7f1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_71a414dbb37d28d0a9f0d73b5ce3f7f1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_71a414dbb37d28d0a9f0d73b5ce3f7f1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_71a414dbb37d28d0a9f0d73b5ce3f7f1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_71a414dbb37d28d0a9f0d73b5ce3f7f1,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_71a414dbb37d28d0a9f0d73b5ce3f7f1 == cache_frame_71a414dbb37d28d0a9f0d73b5ce3f7f1 )
    {
        Py_DECREF( frame_71a414dbb37d28d0a9f0d73b5ce3f7f1 );
    }
    cache_frame_71a414dbb37d28d0a9f0d73b5ce3f7f1 = NULL;

    assertFrameObject( frame_71a414dbb37d28d0a9f0d73b5ce3f7f1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_7__dense_output_impl );
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
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_7__dense_output_impl );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    struct Nuitka_FrameObject *frame_5a800ed51eb887a1f7d5c780ab2fe4e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5a800ed51eb887a1f7d5c780ab2fe4e7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a800ed51eb887a1f7d5c780ab2fe4e7, codeobj_5a800ed51eb887a1f7d5c780ab2fe4e7, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5a800ed51eb887a1f7d5c780ab2fe4e7 = cache_frame_5a800ed51eb887a1f7d5c780ab2fe4e7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a800ed51eb887a1f7d5c780ab2fe4e7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a800ed51eb887a1f7d5c780ab2fe4e7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_RadauDenseOutput );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RadauDenseOutput );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RadauDenseOutput" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 542;
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


            exception_lineno = 542;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_t_old );
        tmp_args_element_name_1 = par_t_old;
        CHECK_OBJECT( par_t );
        tmp_args_element_name_2 = par_t;
        frame_5a800ed51eb887a1f7d5c780ab2fe4e7->m_frame.f_lineno = 542;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 542;
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


            exception_lineno = 543;
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


            exception_lineno = 543;
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


            exception_lineno = 544;
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


            exception_lineno = 545;
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


            exception_lineno = 545;
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


            exception_lineno = 545;
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


            exception_lineno = 545;
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


            exception_lineno = 546;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a800ed51eb887a1f7d5c780ab2fe4e7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a800ed51eb887a1f7d5c780ab2fe4e7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a800ed51eb887a1f7d5c780ab2fe4e7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a800ed51eb887a1f7d5c780ab2fe4e7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a800ed51eb887a1f7d5c780ab2fe4e7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a800ed51eb887a1f7d5c780ab2fe4e7,
        type_description_1,
        par_self,
        par_t_old,
        par_t,
        par_y_old,
        par_Q,
        NULL
    );


    // Release cached frame.
    if ( frame_5a800ed51eb887a1f7d5c780ab2fe4e7 == cache_frame_5a800ed51eb887a1f7d5c780ab2fe4e7 )
    {
        Py_DECREF( frame_5a800ed51eb887a1f7d5c780ab2fe4e7 );
    }
    cache_frame_5a800ed51eb887a1f7d5c780ab2fe4e7 = NULL;

    assertFrameObject( frame_5a800ed51eb887a1f7d5c780ab2fe4e7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_8___init__ );
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
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_8___init__ );
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


static PyObject *impl_scipy$integrate$_ivp$radau$$$function_9__call_impl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    struct Nuitka_FrameObject *frame_e05b278d0bd775f5de3fbcdcb0eac899;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e05b278d0bd775f5de3fbcdcb0eac899 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e05b278d0bd775f5de3fbcdcb0eac899, codeobj_e05b278d0bd775f5de3fbcdcb0eac899, module_scipy$integrate$_ivp$radau, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e05b278d0bd775f5de3fbcdcb0eac899 = cache_frame_e05b278d0bd775f5de3fbcdcb0eac899;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e05b278d0bd775f5de3fbcdcb0eac899 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e05b278d0bd775f5de3fbcdcb0eac899 ) == 2 ); // Frame stack

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


            exception_lineno = 549;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 549;
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

            exception_lineno = 549;
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


            exception_lineno = 549;
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


            exception_lineno = 550;
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


            exception_lineno = 550;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 551;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_tile );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 551;
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

                exception_lineno = 551;
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

                exception_lineno = 551;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_e05b278d0bd775f5de3fbcdcb0eac899->m_frame.f_lineno = 551;
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


                exception_lineno = 551;
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
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 552;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( var_p );
            tmp_args_element_name_3 = var_p;
            frame_e05b278d0bd775f5de3fbcdcb0eac899->m_frame.f_lineno = 552;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_cumprod, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 552;
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
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 554;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tile );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 554;
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

                exception_lineno = 554;
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

                exception_lineno = 554;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_5 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
            tmp_tuple_element_1 = const_int_pos_1;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
            frame_e05b278d0bd775f5de3fbcdcb0eac899->m_frame.f_lineno = 554;
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


                exception_lineno = 554;
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
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 555;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_cumprod );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 555;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_p );
            tmp_tuple_element_2 = var_p;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
            frame_e05b278d0bd775f5de3fbcdcb0eac899->m_frame.f_lineno = 555;
            tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 555;
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
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_10;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 557;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_dot );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 557;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_Q );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 557;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_p );
        tmp_args_element_name_7 = var_p;
        frame_e05b278d0bd775f5de3fbcdcb0eac899->m_frame.f_lineno = 557;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 557;
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
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( var_y );
        tmp_source_name_11 = var_y;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 558;
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


            exception_lineno = 558;
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
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_12;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_y );
            tmp_left_name_5 = var_y;
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_y_old );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 559;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_tuple_slice_none_none_none_none_tuple;
            tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 559;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 559;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = tmp_left_name_5;
            var_y = tmp_assign_source_7;

        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT( var_y );
            tmp_left_name_6 = var_y;
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_y_old );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 561;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 561;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = tmp_left_name_6;
            var_y = tmp_assign_source_8;

        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e05b278d0bd775f5de3fbcdcb0eac899 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e05b278d0bd775f5de3fbcdcb0eac899 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e05b278d0bd775f5de3fbcdcb0eac899, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e05b278d0bd775f5de3fbcdcb0eac899->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e05b278d0bd775f5de3fbcdcb0eac899, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e05b278d0bd775f5de3fbcdcb0eac899,
        type_description_1,
        par_self,
        par_t,
        var_x,
        var_p,
        var_y
    );


    // Release cached frame.
    if ( frame_e05b278d0bd775f5de3fbcdcb0eac899 == cache_frame_e05b278d0bd775f5de3fbcdcb0eac899 )
    {
        Py_DECREF( frame_e05b278d0bd775f5de3fbcdcb0eac899 );
    }
    cache_frame_e05b278d0bd775f5de3fbcdcb0eac899 = NULL;

    assertFrameObject( frame_e05b278d0bd775f5de3fbcdcb0eac899 );

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
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_9__call_impl );
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
    NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau$$$function_9__call_impl );
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



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_1_solve_collocation_system(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_1_solve_collocation_system,
        const_str_plain_solve_collocation_system,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ebe5b12f821bfa563370536bad52f4cd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        const_str_digest_e6dda35c0902235150ffd90b78ceafed,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_2_predict_factor(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_2_predict_factor,
        const_str_plain_predict_factor,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6079d9517f3b70454e6d591ac47ed9c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        const_str_digest_93f7723c6dc677b0f694fc2754e58e31,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_4925cffd8f8fda2ddfec8af972a6038e,
#endif
        codeobj_e12354d4de89879032344ca1dddc6211,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_1_lu(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_1_lu,
        const_str_plain_lu,
#if PYTHON_VERSION >= 300
        const_str_digest_ec2cff023a14490f278219e273d10a74,
#endif
        codeobj_9aa2712caa92ea2628fcc54eb1c855bc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_2_solve_lu(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_2_solve_lu,
        const_str_plain_solve_lu,
#if PYTHON_VERSION >= 300
        const_str_digest_a6119b2f7af2cf7feb4cdf53296b4e0a,
#endif
        codeobj_b3b6ecd98e633d8948bd85809254a6a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_3_lu(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_3_lu,
        const_str_plain_lu,
#if PYTHON_VERSION >= 300
        const_str_digest_ec2cff023a14490f278219e273d10a74,
#endif
        codeobj_f05afead1614d34c98b34614d34a9ddd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_4_solve_lu(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_3___init__$$$function_4_solve_lu,
        const_str_plain_solve_lu,
#if PYTHON_VERSION >= 300
        const_str_digest_a6119b2f7af2cf7feb4cdf53296b4e0a,
#endif
        codeobj_5e8f2aaf4eda72d2fc8fad21de9520a8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_4__validate_jac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_4__validate_jac,
        const_str_plain__validate_jac,
#if PYTHON_VERSION >= 300
        const_str_digest_473be3146c13381dbc4b22119f728594,
#endif
        codeobj_fa3f8d194ac7364128b0bb22bb5584d8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_1_jac_wrapped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_1_jac_wrapped,
        const_str_plain_jac_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_cf857eee4f96333f9ec2540a24fda77b,
#endif
        codeobj_121cbc2318b32fc0d1adc1a63a91e834,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_2_jac_wrapped( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_2_jac_wrapped,
        const_str_plain_jac_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_cf857eee4f96333f9ec2540a24fda77b,
#endif
        codeobj_45e068bc4bb2b0e238dbb8d47447153c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_3_jac_wrapped( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_4__validate_jac$$$function_3_jac_wrapped,
        const_str_plain_jac_wrapped,
#if PYTHON_VERSION >= 300
        const_str_digest_cf857eee4f96333f9ec2540a24fda77b,
#endif
        codeobj_955bba212ddacc524ba086c4bf10e736,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_5__step_impl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_5__step_impl,
        const_str_plain__step_impl,
#if PYTHON_VERSION >= 300
        const_str_digest_8e999a67b6c18caa81746f639c2b720e,
#endif
        codeobj_6c7bda5d341610aa1bdaafbebeade9a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_6__compute_dense_output(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_6__compute_dense_output,
        const_str_plain__compute_dense_output,
#if PYTHON_VERSION >= 300
        const_str_digest_5bb1f0efe3307cf37d3acf1b3e14ced4,
#endif
        codeobj_15118c3dbd2160a36997502a7056ab18,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_7__dense_output_impl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_7__dense_output_impl,
        const_str_plain__dense_output_impl,
#if PYTHON_VERSION >= 300
        const_str_digest_3b923f7764a6e1ada3561239e775b4be,
#endif
        codeobj_71a414dbb37d28d0a9f0d73b5ce3f7f1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_8___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_0ffeeb45674f120c552cdfa88505e698,
#endif
        codeobj_5a800ed51eb887a1f7d5c780ab2fe4e7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_9__call_impl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$integrate$_ivp$radau$$$function_9__call_impl,
        const_str_plain__call_impl,
#if PYTHON_VERSION >= 300
        const_str_digest_71e80c2f9197f4cc34aa0d9eb2ba0b92,
#endif
        codeobj_e05b278d0bd775f5de3fbcdcb0eac899,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$integrate$_ivp$radau,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$integrate$_ivp$radau =
{
    PyModuleDef_HEAD_INIT,
    "scipy.integrate._ivp.radau",
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

MOD_INIT_DECL( scipy$integrate$_ivp$radau )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$integrate$_ivp$radau );
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
    puts("scipy.integrate._ivp.radau: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.integrate._ivp.radau: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.integrate._ivp.radau: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$integrate$_ivp$radau" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$integrate$_ivp$radau = Py_InitModule4(
        "scipy.integrate._ivp.radau",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$integrate$_ivp$radau = PyModule_Create( &mdef_scipy$integrate$_ivp$radau );
#endif

    moduledict_scipy$integrate$_ivp$radau = MODULE_DICT( module_scipy$integrate$_ivp$radau );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$integrate$_ivp$radau,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$integrate$_ivp$radau,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$integrate$_ivp$radau,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$integrate$_ivp$radau,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$integrate$_ivp$radau );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_2aac05c711f7e0ede57ffba9a6bd54a8, module_scipy$integrate$_ivp$radau );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    struct Nuitka_FrameObject *frame_68bc553acc19d37f3a821c1e901ad76c;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_scipy$integrate$_ivp$radau_181 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2 = NULL;
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
    PyObject *locals_scipy$integrate$_ivp$radau_540 = NULL;
    struct Nuitka_FrameObject *frame_48943de6ab9865f92aa93bd5d8aa77bd_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_48943de6ab9865f92aa93bd5d8aa77bd_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_68bc553acc19d37f3a821c1e901ad76c = MAKE_MODULE_FRAME( codeobj_68bc553acc19d37f3a821c1e901ad76c, module_scipy$integrate$_ivp$radau );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_68bc553acc19d37f3a821c1e901ad76c );
    assert( Py_REFCNT( frame_68bc553acc19d37f3a821c1e901ad76c ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$integrate$_ivp$radau;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 2;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$integrate$_ivp$radau;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_lu_factor_str_plain_lu_solve_tuple;
        tmp_level_name_2 = const_int_0;
        frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 3;
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
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_lu_factor );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_lu_factor, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_lu_solve );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_lu_solve, tmp_assign_source_11 );
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
        tmp_name_name_3 = const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$integrate$_ivp$radau;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_csc_matrix_str_plain_issparse_str_plain_eye_tuple;
        tmp_level_name_3 = const_int_0;
        frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 4;
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
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_csc_matrix );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_csc_matrix, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_7 = tmp_import_from_3__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_issparse );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_issparse, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_8 = tmp_import_from_3__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_eye );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_eye, tmp_assign_source_15 );
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_8783708b6421c71a0892a844e756fb02;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$integrate$_ivp$radau;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_splu_tuple;
        tmp_level_name_4 = const_int_0;
        frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 5;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_splu );
        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_splu, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_52d7d48bcb5881cf5fb85bf73f99ad81;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$integrate$_ivp$radau;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_group_columns_tuple;
        tmp_level_name_5 = const_int_0;
        frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 6;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_group_columns );
        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_group_columns, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_common;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$integrate$_ivp$radau;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_fc22099a8556feb4d99948e4e9f6a2c6_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 7;
        tmp_assign_source_18 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_11 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$integrate$_ivp$radau,
                const_str_plain_validate_max_step,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_validate_max_step );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_validate_max_step, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_12 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_scipy$integrate$_ivp$radau,
                const_str_plain_validate_tol,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_validate_tol );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_validate_tol, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_13 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_13 ) )
        {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_scipy$integrate$_ivp$radau,
                const_str_plain_select_initial_step,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_select_initial_step );
        }

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_select_initial_step, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_14 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_14 ) )
        {
           tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_scipy$integrate$_ivp$radau,
                const_str_plain_norm,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_norm );
        }

        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_15 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_15 ) )
        {
           tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_scipy$integrate$_ivp$radau,
                const_str_plain_num_jac,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_num_jac );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_num_jac, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_16 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_16 ) )
        {
           tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_scipy$integrate$_ivp$radau,
                const_str_plain_EPS,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_EPS );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_EPS, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_17 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_17 ) )
        {
           tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_scipy$integrate$_ivp$radau,
                const_str_plain_warn_extraneous,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_warn_extraneous );
        }

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_warn_extraneous, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_18 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_18 ) )
        {
           tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_scipy$integrate$_ivp$radau,
                const_str_plain_validate_first_step,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_validate_first_step );
        }

        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_validate_first_step, tmp_assign_source_26 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_base;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$integrate$_ivp$radau;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_OdeSolver_str_plain_DenseOutput_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 10;
        tmp_assign_source_27 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_5__module == NULL );
        tmp_import_from_5__module = tmp_assign_source_27;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_19 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_19 ) )
        {
           tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_scipy$integrate$_ivp$radau,
                const_str_plain_OdeSolver,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_OdeSolver );
        }

        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_OdeSolver, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_20 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_20 ) )
        {
           tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_scipy$integrate$_ivp$radau,
                const_str_plain_DenseOutput,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_DenseOutput );
        }

        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_DenseOutput, tmp_assign_source_29 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = const_float_2_449489742783178;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_S6, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_right_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = const_int_pos_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_S6 );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S6 );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S6" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = tmp_mvar_value_4;
        tmp_left_name_1 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_10;
        tmp_list_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = PyList_New( 3 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        tmp_left_name_4 = const_int_pos_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_S6 );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S6 );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S6" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }

        tmp_right_name_3 = tmp_mvar_value_5;
        tmp_left_name_3 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_10;
        tmp_list_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
        tmp_list_element_1 = const_int_pos_1;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 2, tmp_list_element_1 );
        frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 15;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_C, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_left_name_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_list_element_2;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_right_name_9;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_6;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = const_int_neg_13;
        tmp_left_name_7 = const_int_pos_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_S6 );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S6 );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S6" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_right_name_6 = tmp_mvar_value_7;
        tmp_right_name_5 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_7, tmp_right_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_list_element_2 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_6, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_list_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = PyList_New( 3 );
        PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_2 );
        tmp_left_name_8 = const_int_neg_13;
        tmp_left_name_9 = const_int_pos_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_S6 );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S6 );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S6" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_right_name_8 = tmp_mvar_value_8;
        tmp_right_name_7 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_9, tmp_right_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_list_element_2 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_8, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_list_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_2, 1, tmp_list_element_2 );
        tmp_list_element_2 = const_int_neg_1;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_args_element_name_2, 2, tmp_list_element_2 );
        frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_right_name_9 = const_int_pos_3;
        tmp_assign_source_32 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_5, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_E, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = const_float_3_637834252744496;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_MU_REAL, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = const_complex_2_6810828736277523__m3_050430199247411;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_MU_COMPLEX, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_call_arg_element_1;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_9;
        tmp_call_arg_element_1 = DEEP_COPY( const_list_a1564d73028eba19876a85e731f06468_list );
        frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_call_arg_element_1 };
            tmp_assign_source_35 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_array, call_args );
        }

        Py_DECREF( tmp_call_arg_element_1 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_T, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_arg_element_2;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_10;
        tmp_call_arg_element_2 = DEEP_COPY( const_list_087aa3eea8090810e365c34b89032b78_list );
        frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = { tmp_call_arg_element_2 };
            tmp_assign_source_36 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_array, call_args );
        }

        Py_DECREF( tmp_call_arg_element_2 );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_TI, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_TI );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TI );
        }

        CHECK_OBJECT( tmp_mvar_value_11 );
        tmp_subscribed_name_1 = tmp_mvar_value_11;
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_37 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_TI_REAL, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_left_name_10;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_subscript_name_3;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_TI );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TI );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TI" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_2 = tmp_mvar_value_12;
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_left_name_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_left_name_11 = const_complex_0_0__1_0;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_TI );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TI );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_left_name_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TI" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_3 = tmp_mvar_value_13;
        tmp_subscript_name_3 = const_int_pos_2;
        tmp_right_name_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 2 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_right_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_38 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_TI_COMPLEX, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_list_element_3;
        PyObject *tmp_list_element_4;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_13;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_right_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_16;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_right_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_list_element_5;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_21;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_right_name_22;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_23;
        PyObject *tmp_left_name_24;
        PyObject *tmp_left_name_25;
        PyObject *tmp_right_name_24;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_right_name_25;
        PyObject *tmp_left_name_26;
        PyObject *tmp_right_name_26;
        PyObject *tmp_left_name_27;
        PyObject *tmp_right_name_27;
        PyObject *tmp_mvar_value_20;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_14;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_array );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = const_float_4_333333333333333;
        tmp_left_name_14 = const_int_pos_7;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_S6 );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S6 );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S6" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }

        tmp_right_name_13 = tmp_mvar_value_15;
        tmp_left_name_13 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_14, tmp_right_name_13 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_right_name_14 = const_int_pos_3;
        tmp_right_name_12 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_13, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_13 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_list_element_4 = BINARY_OPERATION_ADD_FLOAT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_list_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_list_element_3 = PyList_New( 3 );
        PyList_SET_ITEM( tmp_list_element_3, 0, tmp_list_element_4 );
        tmp_left_name_15 = const_float_minus_7_666666666666667;
        tmp_left_name_17 = const_int_pos_22;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_S6 );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S6 );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_list_element_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S6" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }

        tmp_right_name_16 = tmp_mvar_value_16;
        tmp_left_name_16 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_17, tmp_right_name_16 );
        if ( tmp_left_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_list_element_3 );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_right_name_17 = const_int_pos_3;
        tmp_right_name_15 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_16, tmp_right_name_17 );
        Py_DECREF( tmp_left_name_16 );
        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_list_element_3 );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_list_element_4 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_list_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_list_element_3 );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_list_element_3, 1, tmp_list_element_4 );
        tmp_left_name_18 = const_float_3_3333333333333335;
        tmp_left_name_19 = const_int_pos_5;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_S6 );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S6 );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_list_element_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S6" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }

        tmp_right_name_19 = tmp_mvar_value_17;
        tmp_right_name_18 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_19, tmp_right_name_19 );
        if ( tmp_right_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_list_element_3 );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_list_element_4 = BINARY_OPERATION_ADD_FLOAT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
        Py_DECREF( tmp_right_name_18 );
        if ( tmp_list_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_list_element_3 );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_list_element_3, 2, tmp_list_element_4 );
        tmp_args_element_name_3 = PyList_New( 3 );
        PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_3 );
        tmp_left_name_20 = const_float_4_333333333333333;
        tmp_left_name_22 = const_int_pos_7;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_S6 );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S6 );
        }

        if ( tmp_mvar_value_18 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S6" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }

        tmp_right_name_21 = tmp_mvar_value_18;
        tmp_left_name_21 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_22, tmp_right_name_21 );
        if ( tmp_left_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_right_name_22 = const_int_pos_3;
        tmp_right_name_20 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_21, tmp_right_name_22 );
        Py_DECREF( tmp_left_name_21 );
        if ( tmp_right_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_list_element_5 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_20, tmp_right_name_20 );
        Py_DECREF( tmp_right_name_20 );
        if ( tmp_list_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_list_element_3 = PyList_New( 3 );
        PyList_SET_ITEM( tmp_list_element_3, 0, tmp_list_element_5 );
        tmp_left_name_23 = const_float_minus_7_666666666666667;
        tmp_left_name_25 = const_int_pos_22;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_S6 );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S6 );
        }

        if ( tmp_mvar_value_19 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_list_element_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S6" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }

        tmp_right_name_24 = tmp_mvar_value_19;
        tmp_left_name_24 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_25, tmp_right_name_24 );
        if ( tmp_left_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_list_element_3 );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_right_name_25 = const_int_pos_3;
        tmp_right_name_23 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_24, tmp_right_name_25 );
        Py_DECREF( tmp_left_name_24 );
        if ( tmp_right_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_list_element_3 );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_list_element_5 = BINARY_OPERATION_ADD_FLOAT_OBJECT( tmp_left_name_23, tmp_right_name_23 );
        Py_DECREF( tmp_right_name_23 );
        if ( tmp_list_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_list_element_3 );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_list_element_3, 1, tmp_list_element_5 );
        tmp_left_name_26 = const_float_3_3333333333333335;
        tmp_left_name_27 = const_int_pos_5;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_S6 );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S6 );
        }

        if ( tmp_mvar_value_20 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_list_element_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S6" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }

        tmp_right_name_27 = tmp_mvar_value_20;
        tmp_right_name_26 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_27, tmp_right_name_27 );
        if ( tmp_right_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_list_element_3 );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_list_element_5 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_26, tmp_right_name_26 );
        Py_DECREF( tmp_right_name_26 );
        if ( tmp_list_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_list_element_3 );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_list_element_3, 2, tmp_list_element_5 );
        PyList_SET_ITEM( tmp_args_element_name_3, 1, tmp_list_element_3 );
        tmp_list_element_3 = LIST_COPY( const_list_d9dbe280f293d7079d18d78e5b87b1b7_list );
        PyList_SET_ITEM( tmp_args_element_name_3, 2, tmp_list_element_3 );
        frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_P, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = const_int_pos_6;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_NEWTON_MAXITER, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = const_float_0_2;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_MIN_FACTOR, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = const_int_pos_10;
        UPDATE_STRING_DICT0( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_MAX_FACTOR, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_1_solve_collocation_system(  );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_solve_collocation_system, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_2_predict_factor(  );



        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_predict_factor, tmp_assign_source_44 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_21;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_OdeSolver );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OdeSolver );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OdeSolver" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 181;

            goto try_except_handler_6;
        }

        tmp_tuple_element_1 = tmp_mvar_value_21;
        tmp_assign_source_45 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_45, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_6;
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


            exception_lineno = 181;

            goto try_except_handler_6;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_subscribed_name_4 = tmp_class_creation_1__bases;
        tmp_subscript_name_4 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        if ( tmp_type_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_6;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_6;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_47 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_47;
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


            exception_lineno = 181;

            goto try_except_handler_6;
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


            exception_lineno = 181;

            goto try_except_handler_6;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_4 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_4, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_5 = tmp_class_creation_1__metaclass;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;

                goto try_except_handler_6;
            }
            tmp_tuple_element_2 = const_str_plain_Radau;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 181;
            tmp_assign_source_48 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_48 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;

                goto try_except_handler_6;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_48;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_6 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_6, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;

                goto try_except_handler_6;
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
                PyObject *tmp_left_name_28;
                PyObject *tmp_right_name_28;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_7;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_28 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 181;

                    goto try_except_handler_6;
                }
                tmp_right_name_28 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_28, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_7 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_7 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_7 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_28 );

                    exception_lineno = 181;

                    goto try_except_handler_6;
                }
                PyTuple_SET_ITEM( tmp_right_name_28, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_28, tmp_right_name_28 );
                Py_DECREF( tmp_right_name_28 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 181;

                    goto try_except_handler_6;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 181;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_6;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_49;
            tmp_assign_source_49 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_49;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$integrate$_ivp$radau_181 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_2aac05c711f7e0ede57ffba9a6bd54a8;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$radau_181, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_8;
        }
        tmp_dictset_value = const_str_digest_4dc463736b010471da5b16d4f2089724;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$radau_181, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_8;
        }
        tmp_dictset_value = const_str_plain_Radau;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$radau_181, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_8;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2, codeobj_e60040bd160fe0cf9a5a3239fc1cb8e4, module_scipy$integrate$_ivp$radau, sizeof(void *) );
        frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2 = cache_frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_22;
            tmp_source_name_8 = PyObject_GetItem( locals_scipy$integrate$_ivp$radau_181, const_str_plain_np );

            if ( tmp_source_name_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 284;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_8 = tmp_mvar_value_22;
                Py_INCREF( tmp_source_name_8 );
                }
            }

            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_inf );
            Py_DECREF( tmp_source_name_8 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 284;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = PyTuple_New( 7 );
            PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_float_0_001;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_float_1eminus_06;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_False;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 5, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_1, 6, tmp_tuple_element_4 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_3___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$radau_181, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 284;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_4__validate_jac(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$radau_181, const_str_plain__validate_jac, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_5__step_impl(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$radau_181, const_str_plain__step_impl, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_6__compute_dense_output(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$radau_181, const_str_plain__compute_dense_output, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 532;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_7__dense_output_impl(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$radau_181, const_str_plain__dense_output_impl, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 536;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2 == cache_frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2 )
        {
            Py_DECREF( frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2 );
        }
        cache_frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2 = NULL;

        assertFrameObject( frame_e60040bd160fe0cf9a5a3239fc1cb8e4_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_8;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = const_str_plain_Radau;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_5 );
            tmp_tuple_element_5 = locals_scipy$integrate$_ivp$radau_181;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 181;
            tmp_assign_source_51 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_51 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;

                goto try_except_handler_8;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_50 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_50 );
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF( locals_scipy$integrate$_ivp$radau_181 );
        locals_scipy$integrate$_ivp$radau_181 = NULL;
        goto try_return_handler_7;
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

        Py_DECREF( locals_scipy$integrate$_ivp$radau_181 );
        locals_scipy$integrate$_ivp$radau_181 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 181;
        goto try_except_handler_6;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_Radau, tmp_assign_source_50 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
        PyObject *tmp_assign_source_52;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_mvar_value_23;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_DenseOutput );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DenseOutput );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DenseOutput" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 540;

            goto try_except_handler_9;
        }

        tmp_tuple_element_6 = tmp_mvar_value_23;
        tmp_assign_source_52 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_assign_source_52, 0, tmp_tuple_element_6 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 540;

            goto try_except_handler_9;
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


            exception_lineno = 540;

            goto try_except_handler_9;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_5 = tmp_class_creation_2__bases;
        tmp_subscript_name_5 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        if ( tmp_type_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 540;

            goto try_except_handler_9;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 540;

            goto try_except_handler_9;
        }
        condexpr_end_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_54 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 540;

            goto try_except_handler_9;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_54;
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


            exception_lineno = 540;

            goto try_except_handler_9;
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


            exception_lineno = 540;

            goto try_except_handler_9;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_9 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_55;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_10 = tmp_class_creation_2__metaclass;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 540;

                goto try_except_handler_9;
            }
            tmp_tuple_element_7 = const_str_plain_RadauDenseOutput;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 540;
            tmp_assign_source_55 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_55 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 540;

                goto try_except_handler_9;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_55;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_11 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_11, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 540;

                goto try_except_handler_9;
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
                PyObject *tmp_left_name_29;
                PyObject *tmp_right_name_29;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_12;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_29 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_8 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 540;

                    goto try_except_handler_9;
                }
                tmp_right_name_29 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_29, 0, tmp_tuple_element_8 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_12 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_12 == NULL) );
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_29 );

                    exception_lineno = 540;

                    goto try_except_handler_9;
                }
                PyTuple_SET_ITEM( tmp_right_name_29, 1, tmp_tuple_element_8 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_29, tmp_right_name_29 );
                Py_DECREF( tmp_right_name_29 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 540;

                    goto try_except_handler_9;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 540;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_9;
            }
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_56;
            tmp_assign_source_56 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_56;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_scipy$integrate$_ivp$radau_540 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_2aac05c711f7e0ede57ffba9a6bd54a8;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$radau_540, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 540;

            goto try_except_handler_11;
        }
        tmp_dictset_value = const_str_plain_RadauDenseOutput;
        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$radau_540, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 540;

            goto try_except_handler_11;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_48943de6ab9865f92aa93bd5d8aa77bd_3, codeobj_48943de6ab9865f92aa93bd5d8aa77bd, module_scipy$integrate$_ivp$radau, sizeof(void *) );
        frame_48943de6ab9865f92aa93bd5d8aa77bd_3 = cache_frame_48943de6ab9865f92aa93bd5d8aa77bd_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_48943de6ab9865f92aa93bd5d8aa77bd_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_48943de6ab9865f92aa93bd5d8aa77bd_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_8___init__(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$radau_540, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 541;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$integrate$_ivp$radau$$$function_9__call_impl(  );



        tmp_res = PyObject_SetItem( locals_scipy$integrate$_ivp$radau_540, const_str_plain__call_impl, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 548;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_48943de6ab9865f92aa93bd5d8aa77bd_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_48943de6ab9865f92aa93bd5d8aa77bd_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_48943de6ab9865f92aa93bd5d8aa77bd_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_48943de6ab9865f92aa93bd5d8aa77bd_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_48943de6ab9865f92aa93bd5d8aa77bd_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_48943de6ab9865f92aa93bd5d8aa77bd_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_48943de6ab9865f92aa93bd5d8aa77bd_3 == cache_frame_48943de6ab9865f92aa93bd5d8aa77bd_3 )
        {
            Py_DECREF( frame_48943de6ab9865f92aa93bd5d8aa77bd_3 );
        }
        cache_frame_48943de6ab9865f92aa93bd5d8aa77bd_3 = NULL;

        assertFrameObject( frame_48943de6ab9865f92aa93bd5d8aa77bd_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_11;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_7 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = const_str_plain_RadauDenseOutput;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_9 );
            tmp_tuple_element_9 = locals_scipy$integrate$_ivp$radau_540;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_68bc553acc19d37f3a821c1e901ad76c->m_frame.f_lineno = 540;
            tmp_assign_source_58 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 540;

                goto try_except_handler_11;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_58;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_57 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_57 );
        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF( locals_scipy$integrate$_ivp$radau_540 );
        locals_scipy$integrate$_ivp$radau_540 = NULL;
        goto try_return_handler_10;
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

        Py_DECREF( locals_scipy$integrate$_ivp$radau_540 );
        locals_scipy$integrate$_ivp$radau_540 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$integrate$_ivp$radau );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 540;
        goto try_except_handler_9;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain_RadauDenseOutput, tmp_assign_source_57 );
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_68bc553acc19d37f3a821c1e901ad76c );
#endif
    popFrameStack();

    assertFrameObject( frame_68bc553acc19d37f3a821c1e901ad76c );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_68bc553acc19d37f3a821c1e901ad76c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_68bc553acc19d37f3a821c1e901ad76c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_68bc553acc19d37f3a821c1e901ad76c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_68bc553acc19d37f3a821c1e901ad76c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
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


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$_ivp$radau, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$integrate$_ivp$radau );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
