/* Generated code for Python module 'scipy.optimize.slsqp'
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

/* The "_module_scipy$optimize$slsqp" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$slsqp;
PyDictObject *moduledict_scipy$optimize$slsqp;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_clip;
extern PyObject *const_str_digest_f845cd55cd158a3b1b5e810779c6101f;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_dict;
extern PyObject *const_str_plain_isfinite;
static PyObject *const_tuple_str_plain_x_str_plain_args_str_plain_fun_str_plain_epsilon_tuple;
static PyObject *const_str_digest_b0d0a401fbd6e5c4a3c6963a35d8ad97;
static PyObject *const_str_digest_ba4d02f191e5ecc47cb90bacd94d1d51;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_OptimizeResult;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_digest_e42d6da11da80253ac1c4d871c94e672;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_njev;
extern PyObject *const_str_plain_jac;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_neg_1;
static PyObject *const_tuple_5acffb46a7d3b1a74f89227fb112e9dd_tuple;
extern PyObject *const_str_plain_ignore;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_approx_jacobian;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_constraints;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain___docformat__;
extern PyObject *const_str_plain_nfev;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_eps;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_431e2e976d28fb73754dc29fc273ee9a_tuple;
extern PyObject *const_str_plain_slsqp;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_digest_6d0ba9b0aa9b155fd8dd1b7ac21754a0;
extern PyObject *const_dict_d457aeaf5237c8e9bb82fdcc508844e3;
extern PyObject *const_str_plain_transpose;
extern PyObject *const_str_digest_e58b8e238daae7f316f45d0978267798;
extern PyObject *const_str_plain_nan;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_b_tuple;
static PyObject *const_tuple_965cc3c4604a53ba82b0c3d4ec65a1a1_tuple;
extern PyObject *const_str_plain_len;
extern PyObject *const_str_digest_5a3e4bed1fcc52c8c0f06941993712a7;
extern PyObject *const_str_chr_41;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_str_digest_93081b93c2c73f7f515b059f141b265e;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_digest_e87196e4427ab2cd27cef26205837f88;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_int;
static PyObject *const_tuple_str_plain_con_str_plain_x_tuple;
static PyObject *const_str_digest_340cdc2992bb5278443e822fe0d01552;
extern PyObject *const_str_plain_exp;
extern PyObject *const_str_plain_flatten;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_cjac;
extern PyObject *const_str_plain_con;
static PyObject *const_str_digest_6451106b22fd31c8c30e15751a140349;
extern PyObject *const_float_1eminus_06;
extern PyObject *const_str_plain_x0;
extern PyObject *const_str_plain__minimize_slsqp;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_epsilon;
extern PyObject *const_str_plain_maxiter;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_9471ae7caf86046ce4f0e07bcf4e4288;
extern PyObject *const_str_plain_fun;
static PyObject *const_str_digest_420246a5437d3efdf5f350c1648264f0;
static PyObject *const_tuple_int_0_type_float_tuple;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_disp;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_str_plain_fun_str_plain_cjac_tuple;
static PyObject *const_str_digest_3a09f10bf61a22d96dab68163bdd5089;
extern PyObject *const_str_plain_ftol;
extern PyObject *const_str_plain_nit;
extern PyObject *const_str_plain__check_unknown_options;
extern PyObject *const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202;
extern PyObject *const_str_plain_b;
extern PyObject *const_tuple_str_plain_c_str_plain_x_tuple;
static PyObject *const_dict_141a0513c1f03a2424841d6964c632f5;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_concatenate;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_eq;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain__epsilon;
extern PyObject *const_str_plain_vstack;
static PyObject *const_str_digest_395bc8d7b91838a47093caf3b6fcbdaa;
extern PyObject *const_tuple_type_float_tuple;
extern PyObject *const_int_0;
static PyObject *const_str_digest_f8c1371cecf0a7bc0063672b49a6f65f;
static PyObject *const_str_plain_cjac_factory;
static PyObject *const_dict_399ee6cb3abecaf303b1b44c24e36dd1;
extern PyObject *const_tuple_slice_none_none_none_int_0_tuple;
extern PyObject *const_str_plain_finfo;
static PyObject *const_str_digest_978a5eac1cc81fb2cd0c4011475c79b9;
static PyObject *const_str_digest_152ca1147f6fb9944a86f66d1a358905;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_invalid;
static PyObject *const_tuple_str_plain_jac_tuple;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_shape;
static PyObject *const_tuple_str_digest_9e1b964a5bf465dfd570026352a019ea_tuple;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_atleast_1d;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_f0;
extern PyObject *const_str_plain_callback;
static PyObject *const_str_digest_3bd46f44d6d3623ff5d93e6f49aa8a3b;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_str_plain_args_tuple_empty_tuple;
extern PyObject *const_str_plain_optimize;
static PyObject *const_str_digest_e1e55e8c3d8cb9f93bd16a5e1b0c4fba;
extern PyObject *const_tuple_type_TypeError_type_ValueError_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_list_str_plain_eq_str_plain_ineq_list;
static PyObject *const_str_digest_5821a8267930459295f408e574b528f6;
static PyObject *const_tuple_int_0_type_int_tuple;
extern PyObject *const_str_plain_fmin_slsqp;
static PyObject *const_str_digest_d515936cc574c359ed3981ced1fc8ebf;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_wrap_function;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_dx;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_ineq;
extern PyObject *const_tuple_slice_none_none_none_int_pos_1_tuple;
extern PyObject *const_str_plain_print;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_errstate;
static PyObject *const_str_digest_cf77e9a819add34163dfbf095a8331d0;
static PyObject *const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple;
static PyObject *const_str_digest_b6e80b34945c556ab526d93fa8f9cdf1;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_digest_9e1b964a5bf465dfd570026352a019ea;
extern PyObject *const_slice_none_none_none;
static PyObject *const_tuple_str_plain_slsqp_tuple;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_ca7776cf30eea6408ef49c7a37f095fd;
extern PyObject *const_str_plain_bounds;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
static PyObject *const_list_str_plain_approx_jacobian_str_plain_fmin_slsqp_list;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_870f78b791d0cd2b7753e9d20d7dd11d_tuple;
static PyObject *const_str_digest_44367e116a0f1ac5c11887c6f6aef1ae;
static PyObject *const_tuple_ff5623d1fc9954f955d6719449fe2783_tuple;
extern PyObject *const_str_plain_iprint;
extern PyObject *const_float_0_0;
static PyObject *const_str_digest_f8ea57c112936f7a4eb28e96c0cc5907;
extern PyObject *const_str_plain_fill;
extern PyObject *const_int_pos_100;
extern PyObject *const_str_plain_success;
extern PyObject *const_str_plain_asfarray;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_x_str_plain_args_str_plain_fun_str_plain_epsilon_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_args_str_plain_fun_str_plain_epsilon_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_args_str_plain_fun_str_plain_epsilon_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_args_str_plain_fun_str_plain_epsilon_tuple, 2, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_args_str_plain_fun_str_plain_epsilon_tuple, 3, const_str_plain_epsilon ); Py_INCREF( const_str_plain_epsilon );
    const_str_digest_b0d0a401fbd6e5c4a3c6963a35d8ad97 = UNSTREAM_STRING_ASCII( &constant_bin[ 5243354 ], 37, 0 );
    const_str_digest_ba4d02f191e5ecc47cb90bacd94d1d51 = UNSTREAM_STRING_ASCII( &constant_bin[ 4978410 ], 35, 0 );
    const_tuple_5acffb46a7d3b1a74f89227fb112e9dd_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5243391 ], 457 );
    const_str_plain_approx_jacobian = UNSTREAM_STRING_ASCII( &constant_bin[ 5243848 ], 15, 1 );
    const_tuple_431e2e976d28fb73754dc29fc273ee9a_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_431e2e976d28fb73754dc29fc273ee9a_tuple, 0, const_str_plain_wrap_function ); Py_INCREF( const_str_plain_wrap_function );
    PyTuple_SET_ITEM( const_tuple_431e2e976d28fb73754dc29fc273ee9a_tuple, 1, const_str_plain_OptimizeResult ); Py_INCREF( const_str_plain_OptimizeResult );
    PyTuple_SET_ITEM( const_tuple_431e2e976d28fb73754dc29fc273ee9a_tuple, 2, const_str_plain__check_unknown_options ); Py_INCREF( const_str_plain__check_unknown_options );
    const_tuple_965cc3c4604a53ba82b0c3d4ec65a1a1_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5243863 ], 177 );
    const_str_digest_93081b93c2c73f7f515b059f141b265e = UNSTREAM_STRING_ASCII( &constant_bin[ 5244040 ], 23, 0 );
    const_str_digest_e87196e4427ab2cd27cef26205837f88 = UNSTREAM_STRING_ASCII( &constant_bin[ 5244063 ], 15, 0 );
    const_tuple_str_plain_con_str_plain_x_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_con_str_plain_x_tuple, 0, const_str_plain_con ); Py_INCREF( const_str_plain_con );
    PyTuple_SET_ITEM( const_tuple_str_plain_con_str_plain_x_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_digest_340cdc2992bb5278443e822fe0d01552 = UNSTREAM_STRING_ASCII( &constant_bin[ 5244078 ], 34, 0 );
    const_str_digest_6451106b22fd31c8c30e15751a140349 = UNSTREAM_STRING_ASCII( &constant_bin[ 5244112 ], 51, 0 );
    const_str_digest_420246a5437d3efdf5f350c1648264f0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4978456 ], 23, 0 );
    const_tuple_int_0_type_float_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_type_float_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_type_float_tuple, 1, (PyObject *)&PyFloat_Type ); Py_INCREF( (PyObject *)&PyFloat_Type );
    const_tuple_str_plain_fun_str_plain_cjac_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fun_str_plain_cjac_tuple, 0, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_str_plain_fun_str_plain_cjac_tuple, 1, const_str_plain_cjac ); Py_INCREF( const_str_plain_cjac );
    const_str_digest_3a09f10bf61a22d96dab68163bdd5089 = UNSTREAM_STRING_ASCII( &constant_bin[ 5244163 ], 39, 0 );
    const_dict_141a0513c1f03a2424841d6964c632f5 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5244202 ], 507 );
    const_str_digest_395bc8d7b91838a47093caf3b6fcbdaa = UNSTREAM_STRING_ASCII( &constant_bin[ 4978484 ], 33, 0 );
    const_str_digest_f8c1371cecf0a7bc0063672b49a6f65f = UNSTREAM_STRING_ASCII( &constant_bin[ 5244709 ], 23, 0 );
    const_str_plain_cjac_factory = UNSTREAM_STRING_ASCII( &constant_bin[ 5243379 ], 12, 1 );
    const_dict_399ee6cb3abecaf303b1b44c24e36dd1 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_399ee6cb3abecaf303b1b44c24e36dd1, const_str_plain_eq, const_tuple_empty );
    PyDict_SetItem( const_dict_399ee6cb3abecaf303b1b44c24e36dd1, const_str_plain_ineq, const_tuple_empty );
    assert( PyDict_Size( const_dict_399ee6cb3abecaf303b1b44c24e36dd1 ) == 2 );
    const_str_digest_978a5eac1cc81fb2cd0c4011475c79b9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5227015 ], 20, 0 );
    const_str_digest_152ca1147f6fb9944a86f66d1a358905 = UNSTREAM_STRING_ASCII( &constant_bin[ 5244732 ], 21, 0 );
    const_tuple_str_plain_jac_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_jac_tuple, 0, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    const_tuple_str_digest_9e1b964a5bf465dfd570026352a019ea_tuple = PyTuple_New( 1 );
    const_str_digest_9e1b964a5bf465dfd570026352a019ea = UNSTREAM_STRING_ASCII( &constant_bin[ 5244753 ], 45, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_9e1b964a5bf465dfd570026352a019ea_tuple, 0, const_str_digest_9e1b964a5bf465dfd570026352a019ea ); Py_INCREF( const_str_digest_9e1b964a5bf465dfd570026352a019ea );
    const_str_digest_3bd46f44d6d3623ff5d93e6f49aa8a3b = UNSTREAM_STRING_ASCII( &constant_bin[ 5244798 ], 4406, 0 );
    const_tuple_str_plain_args_tuple_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_tuple_empty_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_str_digest_e1e55e8c3d8cb9f93bd16a5e1b0c4fba = UNSTREAM_STRING_ASCII( &constant_bin[ 5249204 ], 34, 0 );
    const_str_digest_5821a8267930459295f408e574b528f6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5249238 ], 29, 0 );
    const_tuple_int_0_type_int_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_type_int_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_type_int_tuple, 1, (PyObject *)&PyLong_Type ); Py_INCREF( (PyObject *)&PyLong_Type );
    const_str_digest_d515936cc574c359ed3981ced1fc8ebf = UNSTREAM_STRING_ASCII( &constant_bin[ 5249267 ], 491, 0 );
    const_str_digest_cf77e9a819add34163dfbf095a8331d0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4978522 ], 33, 0 );
    const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple, 0, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    PyTuple_SET_ITEM( const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple, 1, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple, 2, const_str_plain_linalg ); Py_INCREF( const_str_plain_linalg );
    PyTuple_SET_ITEM( const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple, 3, const_str_plain_append ); Py_INCREF( const_str_plain_append );
    PyTuple_SET_ITEM( const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple, 4, const_str_plain_asfarray ); Py_INCREF( const_str_plain_asfarray );
    PyTuple_SET_ITEM( const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple, 5, const_str_plain_concatenate ); Py_INCREF( const_str_plain_concatenate );
    PyTuple_SET_ITEM( const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple, 6, const_str_plain_finfo ); Py_INCREF( const_str_plain_finfo );
    PyTuple_SET_ITEM( const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple, 7, const_str_plain_sqrt ); Py_INCREF( const_str_plain_sqrt );
    PyTuple_SET_ITEM( const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple, 8, const_str_plain_vstack ); Py_INCREF( const_str_plain_vstack );
    PyTuple_SET_ITEM( const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple, 9, const_str_plain_exp ); Py_INCREF( const_str_plain_exp );
    PyTuple_SET_ITEM( const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple, 10, const_str_plain_inf ); Py_INCREF( const_str_plain_inf );
    PyTuple_SET_ITEM( const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple, 11, const_str_plain_isfinite ); Py_INCREF( const_str_plain_isfinite );
    PyTuple_SET_ITEM( const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple, 12, const_str_plain_atleast_1d ); Py_INCREF( const_str_plain_atleast_1d );
    const_str_digest_b6e80b34945c556ab526d93fa8f9cdf1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5249758 ], 68, 0 );
    const_tuple_str_plain_slsqp_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_slsqp_tuple, 0, const_str_plain_slsqp ); Py_INCREF( const_str_plain_slsqp );
    const_str_digest_ca7776cf30eea6408ef49c7a37f095fd = UNSTREAM_STRING_ASCII( &constant_bin[ 5249826 ], 29, 0 );
    const_list_str_plain_approx_jacobian_str_plain_fmin_slsqp_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_approx_jacobian_str_plain_fmin_slsqp_list, 0, const_str_plain_approx_jacobian ); Py_INCREF( const_str_plain_approx_jacobian );
    PyList_SET_ITEM( const_list_str_plain_approx_jacobian_str_plain_fmin_slsqp_list, 1, const_str_plain_fmin_slsqp ); Py_INCREF( const_str_plain_fmin_slsqp );
    const_tuple_870f78b791d0cd2b7753e9d20d7dd11d_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_870f78b791d0cd2b7753e9d20d7dd11d_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_870f78b791d0cd2b7753e9d20d7dd11d_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_870f78b791d0cd2b7753e9d20d7dd11d_tuple, 2, const_str_plain_epsilon ); Py_INCREF( const_str_plain_epsilon );
    PyTuple_SET_ITEM( const_tuple_870f78b791d0cd2b7753e9d20d7dd11d_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_870f78b791d0cd2b7753e9d20d7dd11d_tuple, 4, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_870f78b791d0cd2b7753e9d20d7dd11d_tuple, 5, const_str_plain_f0 ); Py_INCREF( const_str_plain_f0 );
    PyTuple_SET_ITEM( const_tuple_870f78b791d0cd2b7753e9d20d7dd11d_tuple, 6, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_870f78b791d0cd2b7753e9d20d7dd11d_tuple, 7, const_str_plain_dx ); Py_INCREF( const_str_plain_dx );
    PyTuple_SET_ITEM( const_tuple_870f78b791d0cd2b7753e9d20d7dd11d_tuple, 8, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_digest_44367e116a0f1ac5c11887c6f6aef1ae = UNSTREAM_STRING_ASCII( &constant_bin[ 5249855 ], 659, 0 );
    const_tuple_ff5623d1fc9954f955d6719449fe2783_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_ff5623d1fc9954f955d6719449fe2783_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_ff5623d1fc9954f955d6719449fe2783_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_ff5623d1fc9954f955d6719449fe2783_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    const_str_digest_f8ea57c112936f7a4eb28e96c0cc5907 = UNSTREAM_STRING_ASCII( &constant_bin[ 5250514 ], 269, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$slsqp( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_bdeeba85d598f4460ab298e6bb08c83f;
static PyCodeObject *codeobj_3da7ce5522797664df77c684deba0b07;
static PyCodeObject *codeobj_ccb5979ffcf318aa55942aca3b227bd7;
static PyCodeObject *codeobj_a55b469488ec486a887fe6d7a7a7d757;
static PyCodeObject *codeobj_ec38eb56a6b4e079b49a8440eb57303f;
static PyCodeObject *codeobj_fe6002ea996736cfa1359f4d9f4784e2;
static PyCodeObject *codeobj_d8f3f1e3406cafadf8668d36603c2325;
static PyCodeObject *codeobj_b4c556062e363cec2e9419b8a3692f9d;
static PyCodeObject *codeobj_6649dcebc0b91f9d0109d6a1f8cd882e;
static PyCodeObject *codeobj_7dc9317ae3ab5a2dfbf2a8c52e33045f;
static PyCodeObject *codeobj_fd196b314c9e532c6f62f5120080450d;
static PyCodeObject *codeobj_0eb0d2054f37cbe29190f42ae3b40a6e;
static PyCodeObject *codeobj_42b4cd7cf7475d3543b1187cbc267626;
static PyCodeObject *codeobj_dfe3881c591bc83dbb4f4666383d31af;
static PyCodeObject *codeobj_a2718d71d1d4bfb809f323c8400d55e9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_f8c1371cecf0a7bc0063672b49a6f65f );
    codeobj_bdeeba85d598f4460ab298e6bb08c83f = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 195, const_tuple_ff5623d1fc9954f955d6719449fe2783_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3da7ce5522797664df77c684deba0b07 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 196, const_tuple_ff5623d1fc9954f955d6719449fe2783_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ccb5979ffcf318aa55942aca3b227bd7 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 349, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_b_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a55b469488ec486a887fe6d7a7a7d757 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 312, const_tuple_str_plain_c_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ec38eb56a6b4e079b49a8440eb57303f = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 314, const_tuple_str_plain_c_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fe6002ea996736cfa1359f4d9f4784e2 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 406, const_tuple_str_plain_con_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d8f3f1e3406cafadf8668d36603c2325 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 411, const_tuple_str_plain_con_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b4c556062e363cec2e9419b8a3692f9d = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 427, const_tuple_str_plain_con_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6649dcebc0b91f9d0109d6a1f8cd882e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 433, const_tuple_str_plain_con_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7dc9317ae3ab5a2dfbf2a8c52e33045f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_5821a8267930459295f408e574b528f6, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_fd196b314c9e532c6f62f5120080450d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__minimize_slsqp, 215, const_tuple_5acffb46a7d3b1a74f89227fb112e9dd_tuple, 12, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_0eb0d2054f37cbe29190f42ae3b40a6e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_approx_jacobian, 31, const_tuple_870f78b791d0cd2b7753e9d20d7dd11d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_42b4cd7cf7475d3543b1187cbc267626 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cjac, 276, const_tuple_str_plain_x_str_plain_args_str_plain_fun_str_plain_epsilon_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS );
    codeobj_dfe3881c591bc83dbb4f4666383d31af = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cjac_factory, 275, const_tuple_str_plain_fun_str_plain_cjac_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_a2718d71d1d4bfb809f323c8400d55e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fmin_slsqp, 69, const_tuple_965cc3c4604a53ba82b0c3d4ec65a1a1_tuple, 18, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_1_genexpr_maker( void );


static PyObject *scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_2_genexpr_maker( void );


static PyObject *scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$genexpr_1_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$optimize$slsqp$$$function_1_approx_jacobian(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$slsqp$$$function_2_fmin_slsqp( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$slsqp$$$function_3__minimize_slsqp( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$function_1_cjac_factory(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$function_1_cjac_factory$$$function_1_cjac(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$slsqp$$$function_1_approx_jacobian( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_func = python_pars[ 1 ];
    PyObject *par_epsilon = python_pars[ 2 ];
    PyObject *par_args = python_pars[ 3 ];
    PyObject *var_x0 = NULL;
    PyObject *var_f0 = NULL;
    PyObject *var_jac = NULL;
    PyObject *var_dx = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_0eb0d2054f37cbe29190f42ae3b40a6e;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0eb0d2054f37cbe29190f42ae3b40a6e = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0eb0d2054f37cbe29190f42ae3b40a6e, codeobj_0eb0d2054f37cbe29190f42ae3b40a6e, module_scipy$optimize$slsqp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0eb0d2054f37cbe29190f42ae3b40a6e = cache_frame_0eb0d2054f37cbe29190f42ae3b40a6e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0eb0d2054f37cbe29190f42ae3b40a6e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0eb0d2054f37cbe29190f42ae3b40a6e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_asfarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asfarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asfarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_0eb0d2054f37cbe29190f42ae3b40a6e->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x0 == NULL );
        var_x0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_atleast_1d );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atleast_1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_func );
        tmp_dircall_arg1_1 = par_func;
        CHECK_OBJECT( var_x0 );
        tmp_tuple_element_1 = var_x0;
        tmp_left_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_left_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_args );
        tmp_right_name_1 = par_args;
        tmp_dircall_arg2_1 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_dircall_arg2_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_args_element_name_2 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0eb0d2054f37cbe29190f42ae3b40a6e->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f0 == NULL );
        var_f0 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_len_arg_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_zeros );

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

            exception_lineno = 59;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_x0 );
        tmp_len_arg_1 = var_x0;
        tmp_list_element_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_1 );
        CHECK_OBJECT( var_f0 );
        tmp_len_arg_2 = var_f0;
        tmp_list_element_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 59;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_3, 1, tmp_list_element_1 );
        frame_0eb0d2054f37cbe29190f42ae3b40a6e->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_jac == NULL );
        var_jac = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_len_arg_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_zeros );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( var_x0 );
        tmp_len_arg_3 = var_x0;
        tmp_args_element_name_4 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0eb0d2054f37cbe29190f42ae3b40a6e->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dx == NULL );
        var_dx = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT( var_x0 );
        tmp_len_arg_4 = var_x0;
        tmp_xrange_low_1 = BUILTIN_LEN( tmp_len_arg_4 );
        if ( tmp_xrange_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "ooooooooo";
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
                type_description_1 = "ooooooooo";
                exception_lineno = 61;
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_epsilon );
        tmp_ass_subvalue_1 = par_epsilon;
        CHECK_OBJECT( var_dx );
        tmp_ass_subscribed_1 = var_dx;
        CHECK_OBJECT( var_i );
        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( par_func );
        tmp_dircall_arg1_2 = par_func;
        CHECK_OBJECT( var_x0 );
        tmp_left_name_5 = var_x0;
        CHECK_OBJECT( var_dx );
        tmp_right_name_2 = var_dx;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_4 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_left_name_4, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_args );
        tmp_right_name_3 = par_args;
        tmp_dircall_arg2_2 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_dircall_arg2_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_left_name_3 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_f0 );
        tmp_right_name_4 = var_f0;
        tmp_left_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_epsilon );
        tmp_right_name_5 = par_epsilon;
        tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_jac );
        tmp_ass_subscribed_2 = var_jac;
        CHECK_OBJECT( var_i );
        tmp_ass_subscript_2 = var_i;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = const_float_0_0;
        CHECK_OBJECT( var_dx );
        tmp_ass_subscribed_3 = var_dx;
        CHECK_OBJECT( var_i );
        tmp_ass_subscript_3 = var_i;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooooooooo";
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
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( var_jac );
        tmp_called_instance_1 = var_jac;
        frame_0eb0d2054f37cbe29190f42ae3b40a6e->m_frame.f_lineno = 66;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_transpose );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0eb0d2054f37cbe29190f42ae3b40a6e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0eb0d2054f37cbe29190f42ae3b40a6e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0eb0d2054f37cbe29190f42ae3b40a6e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0eb0d2054f37cbe29190f42ae3b40a6e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0eb0d2054f37cbe29190f42ae3b40a6e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0eb0d2054f37cbe29190f42ae3b40a6e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0eb0d2054f37cbe29190f42ae3b40a6e,
        type_description_1,
        par_x,
        par_func,
        par_epsilon,
        par_args,
        var_x0,
        var_f0,
        var_jac,
        var_dx,
        var_i
    );


    // Release cached frame.
    if ( frame_0eb0d2054f37cbe29190f42ae3b40a6e == cache_frame_0eb0d2054f37cbe29190f42ae3b40a6e )
    {
        Py_DECREF( frame_0eb0d2054f37cbe29190f42ae3b40a6e );
    }
    cache_frame_0eb0d2054f37cbe29190f42ae3b40a6e = NULL;

    assertFrameObject( frame_0eb0d2054f37cbe29190f42ae3b40a6e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_1_approx_jacobian );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_epsilon );
    Py_DECREF( par_epsilon );
    par_epsilon = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_x0 );
    Py_DECREF( var_x0 );
    var_x0 = NULL;

    CHECK_OBJECT( (PyObject *)var_f0 );
    Py_DECREF( var_f0 );
    var_f0 = NULL;

    CHECK_OBJECT( (PyObject *)var_jac );
    Py_DECREF( var_jac );
    var_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_dx );
    Py_DECREF( var_dx );
    var_dx = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_epsilon );
    Py_DECREF( par_epsilon );
    par_epsilon = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_x0 );
    var_x0 = NULL;

    Py_XDECREF( var_f0 );
    var_f0 = NULL;

    Py_XDECREF( var_jac );
    var_jac = NULL;

    Py_XDECREF( var_dx );
    var_dx = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_1_approx_jacobian );
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


static PyObject *impl_scipy$optimize$slsqp$$$function_2_fmin_slsqp( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_eqcons = python_pars[ 2 ];
    PyObject *par_f_eqcons = python_pars[ 3 ];
    PyObject *par_ieqcons = python_pars[ 4 ];
    PyObject *par_f_ieqcons = python_pars[ 5 ];
    PyObject *par_bounds = python_pars[ 6 ];
    PyObject *par_fprime = python_pars[ 7 ];
    PyObject *par_fprime_eqcons = python_pars[ 8 ];
    PyObject *par_fprime_ieqcons = python_pars[ 9 ];
    struct Nuitka_CellObject *par_args = PyCell_NEW1( python_pars[ 10 ] );
    PyObject *par_iter = python_pars[ 11 ];
    PyObject *par_acc = python_pars[ 12 ];
    PyObject *par_iprint = python_pars[ 13 ];
    PyObject *par_disp = python_pars[ 14 ];
    PyObject *par_full_output = python_pars[ 15 ];
    PyObject *par_epsilon = python_pars[ 16 ];
    PyObject *par_callback = python_pars[ 17 ];
    PyObject *var_opts = NULL;
    PyObject *var_cons = NULL;
    PyObject *var_res = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    struct Nuitka_FrameObject *frame_a2718d71d1d4bfb809f323c8400d55e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a2718d71d1d4bfb809f323c8400d55e9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_disp );
        tmp_compexpr_left_1 = par_disp;
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
            CHECK_OBJECT( par_disp );
            tmp_assign_source_1 = par_disp;
            {
                PyObject *old = par_iprint;
                assert( old != NULL );
                par_iprint = tmp_assign_source_1;
                Py_INCREF( par_iprint );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a2718d71d1d4bfb809f323c8400d55e9, codeobj_a2718d71d1d4bfb809f323c8400d55e9, module_scipy$optimize$slsqp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a2718d71d1d4bfb809f323c8400d55e9 = cache_frame_a2718d71d1d4bfb809f323c8400d55e9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a2718d71d1d4bfb809f323c8400d55e9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a2718d71d1d4bfb809f323c8400d55e9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_dict_key_1 = const_str_plain_maxiter;
        CHECK_OBJECT( par_iter );
        tmp_dict_value_1 = par_iter;
        tmp_assign_source_2 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_ftol;
        CHECK_OBJECT( par_acc );
        tmp_dict_value_2 = par_acc;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_iprint;
        CHECK_OBJECT( par_iprint );
        tmp_dict_value_3 = par_iprint;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_disp;
        CHECK_OBJECT( par_iprint );
        tmp_compexpr_left_2 = par_iprint;
        tmp_compexpr_right_2 = const_int_0;
        tmp_dict_value_4 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            exception_lineno = 187;
            type_description_1 = "oooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_eps;
        CHECK_OBJECT( par_epsilon );
        tmp_dict_value_5 = par_epsilon;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_callback;
        CHECK_OBJECT( par_callback );
        tmp_dict_value_6 = par_callback;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        assert( var_opts == NULL );
        var_opts = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_arg_1;
        tmp_left_name_1 = const_tuple_empty;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_eqcons );
            tmp_iter_arg_1 = par_eqcons;
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "oooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_4;
        }
        // Tried code:
        tmp_tuple_arg_1 = scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[0] = par_args;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[0] );
        ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[1] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_2_fmin_slsqp );
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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_2_fmin_slsqp );
        return NULL;
        outline_result_1:;
        tmp_right_name_1 = PySequence_Tuple( tmp_tuple_arg_1 );
        Py_DECREF( tmp_tuple_arg_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "oooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_ADD_TUPLE_TUPLE( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        assert( !(tmp_assign_source_3 == NULL) );
        assert( var_cons == NULL );
        var_cons = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_arg_2;
        CHECK_OBJECT( var_cons );
        tmp_left_name_2 = var_cons;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( par_ieqcons );
            tmp_iter_arg_2 = par_ieqcons;
            tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_1 = "oooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_2__$0 == NULL );
            tmp_genexpr_2__$0 = tmp_assign_source_6;
        }
        // Tried code:
        tmp_tuple_arg_2 = scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_2_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_2)->m_closure[0] = par_args;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_2)->m_closure[0] );
        ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_2)->m_closure[1] = PyCell_NEW0( tmp_genexpr_2__$0 );


        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_2_fmin_slsqp );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
        Py_DECREF( tmp_genexpr_2__$0 );
        tmp_genexpr_2__$0 = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
        Py_DECREF( tmp_genexpr_2__$0 );
        tmp_genexpr_2__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_2_fmin_slsqp );
        return NULL;
        outline_result_2:;
        tmp_right_name_2 = PySequence_Tuple( tmp_tuple_arg_2 );
        Py_DECREF( tmp_tuple_arg_2 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "oooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_TUPLE_TUPLE_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "oooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_left_name_2;
        var_cons = tmp_assign_source_5;

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_f_eqcons );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_f_eqcons );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            CHECK_OBJECT( var_cons );
            tmp_left_name_3 = var_cons;
            tmp_dict_key_7 = const_str_plain_type;
            tmp_dict_value_7 = const_str_plain_eq;
            tmp_tuple_element_1 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem( tmp_tuple_element_1, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_8 = const_str_plain_fun;
            CHECK_OBJECT( par_f_eqcons );
            tmp_dict_value_8 = par_f_eqcons;
            tmp_res = PyDict_SetItem( tmp_tuple_element_1, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_9 = const_str_plain_jac;
            CHECK_OBJECT( par_fprime_eqcons );
            tmp_dict_value_9 = par_fprime_eqcons;
            tmp_res = PyDict_SetItem( tmp_tuple_element_1, tmp_dict_key_9, tmp_dict_value_9 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_10 = const_str_plain_args;
            CHECK_OBJECT( PyCell_GET( par_args ) );
            tmp_dict_value_10 = PyCell_GET( par_args );
            tmp_res = PyDict_SetItem( tmp_tuple_element_1, tmp_dict_key_10, tmp_dict_value_10 );
            assert( !(tmp_res != 0) );
            tmp_right_name_3 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_1 );
            tmp_result = BINARY_OPERATION_ADD_OBJECT_TUPLE_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 201;
                type_description_1 = "oooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = tmp_left_name_3;
            var_cons = tmp_assign_source_7;

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_f_ieqcons );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_f_ieqcons );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "oooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            CHECK_OBJECT( var_cons );
            tmp_left_name_4 = var_cons;
            tmp_dict_key_11 = const_str_plain_type;
            tmp_dict_value_11 = const_str_plain_ineq;
            tmp_tuple_element_2 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem( tmp_tuple_element_2, tmp_dict_key_11, tmp_dict_value_11 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_12 = const_str_plain_fun;
            CHECK_OBJECT( par_f_ieqcons );
            tmp_dict_value_12 = par_f_ieqcons;
            tmp_res = PyDict_SetItem( tmp_tuple_element_2, tmp_dict_key_12, tmp_dict_value_12 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_13 = const_str_plain_jac;
            CHECK_OBJECT( par_fprime_ieqcons );
            tmp_dict_value_13 = par_fprime_ieqcons;
            tmp_res = PyDict_SetItem( tmp_tuple_element_2, tmp_dict_key_13, tmp_dict_value_13 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_14 = const_str_plain_args;
            CHECK_OBJECT( PyCell_GET( par_args ) );
            tmp_dict_value_14 = PyCell_GET( par_args );
            tmp_res = PyDict_SetItem( tmp_tuple_element_2, tmp_dict_key_14, tmp_dict_value_14 );
            assert( !(tmp_res != 0) );
            tmp_right_name_4 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_2 );
            tmp_result = BINARY_OPERATION_ADD_OBJECT_TUPLE_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "oooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = tmp_left_name_4;
            var_cons = tmp_assign_source_8;

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain__minimize_slsqp );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minimize_slsqp );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_minimize_slsqp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 207;
            type_description_1 = "oooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_func );
        tmp_tuple_element_3 = par_func;
        tmp_dircall_arg2_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_x0 );
        tmp_tuple_element_3 = par_x0;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_3 );
        CHECK_OBJECT( PyCell_GET( par_args ) );
        tmp_tuple_element_3 = PyCell_GET( par_args );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_3 );
        tmp_dict_key_15 = const_str_plain_jac;
        CHECK_OBJECT( par_fprime );
        tmp_dict_value_15 = par_fprime;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_15, tmp_dict_value_15 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_16 = const_str_plain_bounds;
        CHECK_OBJECT( par_bounds );
        tmp_dict_value_16 = par_bounds;
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_16, tmp_dict_value_16 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_17 = const_str_plain_constraints;
        if ( var_cons == NULL )
        {
            Py_DECREF( tmp_dircall_arg2_1 );
            Py_DECREF( tmp_dircall_arg3_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cons" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 208;
            type_description_1 = "oooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_17 = var_cons;
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_17, tmp_dict_value_17 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_opts );
        tmp_dircall_arg4_1 = var_opts;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_9 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "oooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_full_output );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_full_output );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oooooooooocoooooooooo";
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
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( var_res );
            tmp_subscribed_name_1 = var_res;
            tmp_subscript_name_1 = const_str_plain_x;
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 210;
                type_description_1 = "oooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 5 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( var_res );
            tmp_subscribed_name_2 = var_res;
            tmp_subscript_name_2 = const_str_plain_fun;
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 210;
                type_description_1 = "oooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( var_res );
            tmp_subscribed_name_3 = var_res;
            tmp_subscript_name_3 = const_str_plain_nit;
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 210;
                type_description_1 = "oooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( var_res );
            tmp_subscribed_name_4 = var_res;
            tmp_subscript_name_4 = const_str_plain_status;
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 210;
                type_description_1 = "oooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_4 );
            CHECK_OBJECT( var_res );
            tmp_subscribed_name_5 = var_res;
            tmp_subscript_name_5 = const_str_plain_message;
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 210;
                type_description_1 = "oooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_4 );
            goto frame_return_exit_1;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            CHECK_OBJECT( var_res );
            tmp_subscribed_name_6 = var_res;
            tmp_subscript_name_6 = const_str_plain_x;
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "oooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2718d71d1d4bfb809f323c8400d55e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2718d71d1d4bfb809f323c8400d55e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2718d71d1d4bfb809f323c8400d55e9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a2718d71d1d4bfb809f323c8400d55e9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a2718d71d1d4bfb809f323c8400d55e9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a2718d71d1d4bfb809f323c8400d55e9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a2718d71d1d4bfb809f323c8400d55e9,
        type_description_1,
        par_func,
        par_x0,
        par_eqcons,
        par_f_eqcons,
        par_ieqcons,
        par_f_ieqcons,
        par_bounds,
        par_fprime,
        par_fprime_eqcons,
        par_fprime_ieqcons,
        par_args,
        par_iter,
        par_acc,
        par_iprint,
        par_disp,
        par_full_output,
        par_epsilon,
        par_callback,
        var_opts,
        var_cons,
        var_res
    );


    // Release cached frame.
    if ( frame_a2718d71d1d4bfb809f323c8400d55e9 == cache_frame_a2718d71d1d4bfb809f323c8400d55e9 )
    {
        Py_DECREF( frame_a2718d71d1d4bfb809f323c8400d55e9 );
    }
    cache_frame_a2718d71d1d4bfb809f323c8400d55e9 = NULL;

    assertFrameObject( frame_a2718d71d1d4bfb809f323c8400d55e9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_2_fmin_slsqp );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_eqcons );
    Py_DECREF( par_eqcons );
    par_eqcons = NULL;

    CHECK_OBJECT( (PyObject *)par_f_eqcons );
    Py_DECREF( par_f_eqcons );
    par_f_eqcons = NULL;

    CHECK_OBJECT( (PyObject *)par_ieqcons );
    Py_DECREF( par_ieqcons );
    par_ieqcons = NULL;

    CHECK_OBJECT( (PyObject *)par_f_ieqcons );
    Py_DECREF( par_f_ieqcons );
    par_f_ieqcons = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_fprime );
    Py_DECREF( par_fprime );
    par_fprime = NULL;

    CHECK_OBJECT( (PyObject *)par_fprime_eqcons );
    Py_DECREF( par_fprime_eqcons );
    par_fprime_eqcons = NULL;

    CHECK_OBJECT( (PyObject *)par_fprime_ieqcons );
    Py_DECREF( par_fprime_ieqcons );
    par_fprime_ieqcons = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_iter );
    Py_DECREF( par_iter );
    par_iter = NULL;

    CHECK_OBJECT( (PyObject *)par_acc );
    Py_DECREF( par_acc );
    par_acc = NULL;

    CHECK_OBJECT( (PyObject *)par_iprint );
    Py_DECREF( par_iprint );
    par_iprint = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_full_output );
    Py_DECREF( par_full_output );
    par_full_output = NULL;

    CHECK_OBJECT( (PyObject *)par_epsilon );
    Py_DECREF( par_epsilon );
    par_epsilon = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)var_opts );
    Py_DECREF( var_opts );
    var_opts = NULL;

    Py_XDECREF( var_cons );
    var_cons = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_eqcons );
    Py_DECREF( par_eqcons );
    par_eqcons = NULL;

    CHECK_OBJECT( (PyObject *)par_f_eqcons );
    Py_DECREF( par_f_eqcons );
    par_f_eqcons = NULL;

    CHECK_OBJECT( (PyObject *)par_ieqcons );
    Py_DECREF( par_ieqcons );
    par_ieqcons = NULL;

    CHECK_OBJECT( (PyObject *)par_f_ieqcons );
    Py_DECREF( par_f_ieqcons );
    par_f_ieqcons = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_fprime );
    Py_DECREF( par_fprime );
    par_fprime = NULL;

    CHECK_OBJECT( (PyObject *)par_fprime_eqcons );
    Py_DECREF( par_fprime_eqcons );
    par_fprime_eqcons = NULL;

    CHECK_OBJECT( (PyObject *)par_fprime_ieqcons );
    Py_DECREF( par_fprime_ieqcons );
    par_fprime_ieqcons = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_iter );
    Py_DECREF( par_iter );
    par_iter = NULL;

    CHECK_OBJECT( (PyObject *)par_acc );
    Py_DECREF( par_acc );
    par_acc = NULL;

    CHECK_OBJECT( (PyObject *)par_iprint );
    Py_DECREF( par_iprint );
    par_iprint = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_full_output );
    Py_DECREF( par_full_output );
    par_full_output = NULL;

    CHECK_OBJECT( (PyObject *)par_epsilon );
    Py_DECREF( par_epsilon );
    par_epsilon = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    Py_XDECREF( var_opts );
    var_opts = NULL;

    Py_XDECREF( var_cons );
    var_cons = NULL;

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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_2_fmin_slsqp );
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



struct scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_1_genexpr_locals {
    PyObject *var_c;
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

static PyObject *scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_1_genexpr_locals *generator_heap = (struct scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_c = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_bdeeba85d598f4460ab298e6bb08c83f, module_scipy$optimize$slsqp, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
            PyObject *old = generator_heap->var_c;
            generator_heap->var_c = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_c );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_dict_key_1 = const_str_plain_type;
        tmp_dict_value_1 = const_str_plain_eq;
        tmp_expression_name_1 = _PyDict_NewPresized( 3 );
        generator_heap->tmp_res = PyDict_SetItem( tmp_expression_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(generator_heap->tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_fun;
        CHECK_OBJECT( generator_heap->var_c );
        tmp_dict_value_2 = generator_heap->var_c;
        generator_heap->tmp_res = PyDict_SetItem( tmp_expression_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(generator_heap->tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_args;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_expression_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "args" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_dict_value_3 = PyCell_GET( generator->m_closure[0] );
        generator_heap->tmp_res = PyDict_SetItem( tmp_expression_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(generator_heap->tmp_res != 0) );
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_dict_key_2, sizeof(PyObject *), &tmp_dict_value_2, sizeof(PyObject *), &tmp_dict_key_3, sizeof(PyObject *), &tmp_dict_value_3, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_dict_key_2, sizeof(PyObject *), &tmp_dict_value_2, sizeof(PyObject *), &tmp_dict_key_3, sizeof(PyObject *), &tmp_dict_value_3, sizeof(PyObject *), NULL );
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
            generator_heap->var_c,
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

    Py_XDECREF( generator_heap->var_c );
    generator_heap->var_c = NULL;

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

    Py_XDECREF( generator_heap->var_c );
    generator_heap->var_c = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_1_genexpr_context,
        module_scipy$optimize$slsqp,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_ca7776cf30eea6408ef49c7a37f095fd,
#endif
        codeobj_bdeeba85d598f4460ab298e6bb08c83f,
        2,
        sizeof(struct scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_1_genexpr_locals)
    );
}



struct scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_2_genexpr_locals {
    PyObject *var_c;
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

static PyObject *scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_2_genexpr_locals *generator_heap = (struct scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_c = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_3da7ce5522797664df77c684deba0b07, module_scipy$optimize$slsqp, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 196;
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
            PyObject *old = generator_heap->var_c;
            generator_heap->var_c = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_c );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_dict_key_1 = const_str_plain_type;
        tmp_dict_value_1 = const_str_plain_ineq;
        tmp_expression_name_1 = _PyDict_NewPresized( 3 );
        generator_heap->tmp_res = PyDict_SetItem( tmp_expression_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(generator_heap->tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_fun;
        CHECK_OBJECT( generator_heap->var_c );
        tmp_dict_value_2 = generator_heap->var_c;
        generator_heap->tmp_res = PyDict_SetItem( tmp_expression_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(generator_heap->tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_args;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_expression_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "args" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_dict_value_3 = PyCell_GET( generator->m_closure[0] );
        generator_heap->tmp_res = PyDict_SetItem( tmp_expression_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(generator_heap->tmp_res != 0) );
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_dict_key_2, sizeof(PyObject *), &tmp_dict_value_2, sizeof(PyObject *), &tmp_dict_key_3, sizeof(PyObject *), &tmp_dict_value_3, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_dict_key_2, sizeof(PyObject *), &tmp_dict_value_2, sizeof(PyObject *), &tmp_dict_key_3, sizeof(PyObject *), &tmp_dict_value_3, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 196;
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
            generator_heap->var_c,
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

    Py_XDECREF( generator_heap->var_c );
    generator_heap->var_c = NULL;

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

    Py_XDECREF( generator_heap->var_c );
    generator_heap->var_c = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_2_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_2_genexpr_context,
        module_scipy$optimize$slsqp,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_ca7776cf30eea6408ef49c7a37f095fd,
#endif
        codeobj_3da7ce5522797664df77c684deba0b07,
        2,
        sizeof(struct scipy$optimize$slsqp$$$function_2_fmin_slsqp$$$genexpr_2_genexpr_locals)
    );
}


static PyObject *impl_scipy$optimize$slsqp$$$function_3__minimize_slsqp( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_x0 = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_jac = python_pars[ 3 ];
    PyObject *par_bounds = python_pars[ 4 ];
    PyObject *par_constraints = python_pars[ 5 ];
    PyObject *par_maxiter = python_pars[ 6 ];
    PyObject *par_ftol = python_pars[ 7 ];
    PyObject *par_iprint = python_pars[ 8 ];
    PyObject *par_disp = python_pars[ 9 ];
    PyObject *par_eps = python_pars[ 10 ];
    PyObject *par_callback = python_pars[ 11 ];
    PyObject *par_unknown_options = python_pars[ 12 ];
    PyObject *var_fprime = NULL;
    PyObject *var_iter = NULL;
    PyObject *var_acc = NULL;
    struct Nuitka_CellObject *var_epsilon = PyCell_EMPTY();
    PyObject *var_cons = NULL;
    PyObject *var_ic = NULL;
    PyObject *var_con = NULL;
    PyObject *var_ctype = NULL;
    PyObject *var_cjac = NULL;
    PyObject *var_cjac_factory = NULL;
    PyObject *var_exit_modes = NULL;
    PyObject *var_feval = NULL;
    PyObject *var_geval = NULL;
    PyObject *var_x = NULL;
    PyObject *var_meq = NULL;
    PyObject *var_mieq = NULL;
    PyObject *var_m = NULL;
    PyObject *var_la = NULL;
    PyObject *var_n = NULL;
    PyObject *var_n1 = NULL;
    PyObject *var_mineq = NULL;
    PyObject *var_len_w = NULL;
    PyObject *var_len_jw = NULL;
    PyObject *var_w = NULL;
    PyObject *var_jw = NULL;
    PyObject *var_xl = NULL;
    PyObject *var_xu = NULL;
    PyObject *var_bnds = NULL;
    PyObject *var_bnderr = NULL;
    PyObject *var_infbnd = NULL;
    PyObject *var_have_bound = NULL;
    PyObject *var_mode = NULL;
    PyObject *var_majiter = NULL;
    PyObject *var_majiter_prev = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_f0 = NULL;
    PyObject *var_gs = NULL;
    PyObject *var_h1 = NULL;
    PyObject *var_h2 = NULL;
    PyObject *var_h3 = NULL;
    PyObject *var_h4 = NULL;
    PyObject *var_t = NULL;
    PyObject *var_t0 = NULL;
    PyObject *var_tol = NULL;
    PyObject *var_iexact = NULL;
    PyObject *var_incons = NULL;
    PyObject *var_ireset = NULL;
    PyObject *var_itermx = NULL;
    PyObject *var_line = NULL;
    PyObject *var_n2 = NULL;
    PyObject *var_n3 = NULL;
    PyObject *var_fx = NULL;
    PyObject *var_c_eq = NULL;
    PyObject *var_c_ieq = NULL;
    PyObject *var_c = NULL;
    PyObject *var_g = NULL;
    PyObject *var_a_eq = NULL;
    PyObject *var_a_ieq = NULL;
    PyObject *var_a = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *outline_1_var_c = NULL;
    PyObject *outline_2_var_con = NULL;
    PyObject *outline_3_var_con = NULL;
    PyObject *outline_4_var_con = NULL;
    PyObject *outline_5_var_con = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_listcomp_4__$0 = NULL;
    PyObject *tmp_listcomp_4__contraction = NULL;
    PyObject *tmp_listcomp_4__iter_value_0 = NULL;
    PyObject *tmp_listcomp_5__$0 = NULL;
    PyObject *tmp_listcomp_5__contraction = NULL;
    PyObject *tmp_listcomp_5__iter_value_0 = NULL;
    PyObject *tmp_listcomp_6__$0 = NULL;
    PyObject *tmp_listcomp_6__contraction = NULL;
    PyObject *tmp_listcomp_6__iter_value_0 = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_fd196b314c9e532c6f62f5120080450d;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
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
    struct Nuitka_FrameObject *frame_a55b469488ec486a887fe6d7a7a7d757_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    static struct Nuitka_FrameObject *cache_frame_a55b469488ec486a887fe6d7a7a7d757_2 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    struct Nuitka_FrameObject *frame_ec38eb56a6b4e079b49a8440eb57303f_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    static struct Nuitka_FrameObject *cache_frame_ec38eb56a6b4e079b49a8440eb57303f_3 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    struct Nuitka_FrameObject *frame_fe6002ea996736cfa1359f4d9f4784e2_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    static struct Nuitka_FrameObject *cache_frame_fe6002ea996736cfa1359f4d9f4784e2_4 = NULL;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    struct Nuitka_FrameObject *frame_d8f3f1e3406cafadf8668d36603c2325_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    static struct Nuitka_FrameObject *cache_frame_d8f3f1e3406cafadf8668d36603c2325_5 = NULL;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    struct Nuitka_FrameObject *frame_b4c556062e363cec2e9419b8a3692f9d_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    static struct Nuitka_FrameObject *cache_frame_b4c556062e363cec2e9419b8a3692f9d_6 = NULL;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    struct Nuitka_FrameObject *frame_6649dcebc0b91f9d0109d6a1f8cd882e_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    static struct Nuitka_FrameObject *cache_frame_6649dcebc0b91f9d0109d6a1f8cd882e_7 = NULL;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fd196b314c9e532c6f62f5120080450d = NULL;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fd196b314c9e532c6f62f5120080450d, codeobj_fd196b314c9e532c6f62f5120080450d, module_scipy$optimize$slsqp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fd196b314c9e532c6f62f5120080450d = cache_frame_fd196b314c9e532c6f62f5120080450d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fd196b314c9e532c6f62f5120080450d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fd196b314c9e532c6f62f5120080450d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain__check_unknown_options );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_unknown_options );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_unknown_options" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 237;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_unknown_options );
        tmp_args_element_name_1 = par_unknown_options;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( par_jac );
        tmp_assign_source_1 = par_jac;
        assert( var_fprime == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_fprime = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( par_maxiter );
        tmp_assign_source_2 = par_maxiter;
        assert( var_iter == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_iter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( par_ftol );
        tmp_assign_source_3 = par_ftol;
        assert( var_acc == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_acc = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( par_eps );
        tmp_assign_source_4 = par_eps;
        assert( PyCell_GET( var_epsilon ) == NULL );
        Py_INCREF( tmp_assign_source_4 );
        PyCell_SET( var_epsilon, tmp_assign_source_4 );

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_disp );
        tmp_operand_name_1 = par_disp;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_int_0;
            {
                PyObject *old = par_iprint;
                assert( old != NULL );
                par_iprint = tmp_assign_source_5;
                Py_INCREF( par_iprint );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_constraints );
        tmp_isinstance_inst_1 = par_constraints;
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_constraints );
            tmp_tuple_element_1 = par_constraints;
            tmp_assign_source_6 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_6, 0, tmp_tuple_element_1 );
            {
                PyObject *old = par_constraints;
                assert( old != NULL );
                par_constraints = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = PyDict_Copy( const_dict_399ee6cb3abecaf303b1b44c24e36dd1 );
        assert( var_cons == NULL );
        var_cons = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_2 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT( par_constraints );
        tmp_args_element_name_2 = par_constraints;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 251;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 251;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 251;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
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

                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 251;
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

            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 251;
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
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_ic;
            var_ic = tmp_assign_source_13;
            Py_INCREF( var_ic );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_con;
            var_con = tmp_assign_source_14;
            Py_INCREF( var_con );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_True;
        {
            PyObject *old = tmp_try_except_1__unhandled_indicator;
            tmp_try_except_1__unhandled_indicator = tmp_assign_source_15;
            Py_INCREF( tmp_try_except_1__unhandled_indicator );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_con );
        tmp_subscribed_name_1 = var_con;
        tmp_subscript_name_1 = const_str_plain_type;
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 254;
        tmp_assign_source_16 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_ctype;
            var_ctype = tmp_assign_source_16;
            Py_XDECREF( old );
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_fd196b314c9e532c6f62f5120080450d, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_fd196b314c9e532c6f62f5120080450d, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_e42d6da11da80253ac1c4d871c94e672;
            CHECK_OBJECT( var_ic );
            tmp_right_name_1 = var_ic;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 256;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_KeyError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 256;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = PyExc_TypeError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_5a3e4bed1fcc52c8c0f06941993712a7;
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 258;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 258;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_3 = PyExc_AttributeError;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 260;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
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
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_make_exception_arg_3;
                    tmp_make_exception_arg_3 = const_str_digest_f845cd55cd158a3b1b5e810779c6101f;
                    frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 261;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_3 };
                        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                    }

                    assert( !(tmp_raise_type_3 == NULL) );
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 261;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                goto branch_end_5;
                branch_no_5:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 253;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_fd196b314c9e532c6f62f5120080450d->m_frame) frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
                branch_end_5:;
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_6;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        int tmp_truth_name_1;
        CHECK_OBJECT( tmp_try_except_1__unhandled_indicator );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_try_except_1__unhandled_indicator );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_left_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_ctype );
            tmp_compexpr_left_5 = var_ctype;
            tmp_compexpr_right_5 = LIST_COPY( const_list_str_plain_eq_str_plain_ineq_list );
            tmp_res = PySequence_Contains( tmp_compexpr_right_5, tmp_compexpr_left_5 );
            Py_DECREF( tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
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
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_make_exception_arg_4;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                tmp_left_name_2 = const_str_digest_6d0ba9b0aa9b155fd8dd1b7ac21754a0;
                CHECK_OBJECT( var_con );
                tmp_subscribed_name_2 = var_con;
                tmp_subscript_name_2 = const_str_plain_type;
                tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 264;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_make_exception_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 264;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 264;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_4 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_4 );
                assert( !(tmp_raise_type_4 == NULL) );
                exception_type = tmp_raise_type_4;
                exception_lineno = 264;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            branch_no_7:;
        }
        branch_no_6:;
    }
    goto try_end_4;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        tmp_compexpr_left_6 = const_str_plain_fun;
        CHECK_OBJECT( var_con );
        tmp_compexpr_right_6 = var_con;
        tmp_res = PySequence_Contains( tmp_compexpr_right_6, tmp_compexpr_left_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_raise_type_5;
            PyObject *tmp_make_exception_arg_5;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_left_name_3 = const_str_digest_9471ae7caf86046ce4f0e07bcf4e4288;
            CHECK_OBJECT( var_ic );
            tmp_right_name_3 = var_ic;
            tmp_make_exception_arg_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_make_exception_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 268;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 268;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_5 };
                tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_5 );
            assert( !(tmp_raise_type_5 == NULL) );
            exception_type = tmp_raise_type_5;
            exception_lineno = 268;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        branch_no_8:;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_con );
        tmp_called_instance_2 = var_con;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 271;
        tmp_assign_source_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_jac_tuple, 0 ) );

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_cjac;
            var_cjac = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( var_cjac );
        tmp_compexpr_left_7 = var_cjac;
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_9 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = MAKE_FUNCTION_scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$function_1_cjac_factory(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[0] = var_epsilon;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[0] );


            {
                PyObject *old = var_cjac_factory;
                var_cjac_factory = tmp_assign_source_18;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( var_cjac_factory );
            tmp_called_name_3 = var_cjac_factory;
            CHECK_OBJECT( var_con );
            tmp_subscribed_name_3 = var_con;
            tmp_subscript_name_3 = const_str_plain_fun;
            tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 279;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_cjac;
                assert( old != NULL );
                var_cjac = tmp_assign_source_19;
                Py_DECREF( old );
            }

        }
        branch_no_9:;
    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( var_cons );
        tmp_assign_source_20 = var_cons;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_20;
            Py_INCREF( tmp_inplace_assign_subscr_1__target );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( var_ctype );
        tmp_assign_source_21 = var_ctype;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_21;
            Py_INCREF( tmp_inplace_assign_subscr_1__subscript );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_left_name_4;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_dict_name_1 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_key_name_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_4 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_dict_key_1 = const_str_plain_fun;
        CHECK_OBJECT( var_con );
        tmp_subscribed_name_4 = var_con;
        tmp_subscript_name_4 = const_str_plain_fun;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 282;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_tuple_element_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_tuple_element_2, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_jac;
        CHECK_OBJECT( var_cjac );
        tmp_dict_value_2 = var_cjac;
        tmp_res = PyDict_SetItem( tmp_tuple_element_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_args;
        CHECK_OBJECT( var_con );
        tmp_called_instance_3 = var_con;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 284;
        tmp_dict_value_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_args_tuple_empty_tuple, 0 ) );

        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_tuple_element_2 );

            exception_lineno = 284;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_res = PyDict_SetItem( tmp_tuple_element_2, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_right_name_4 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_2 );
        tmp_dictset_value = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_dictset_dict = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_dictset_key = tmp_inplace_assign_subscr_1__subscript;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    goto try_end_5;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
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


        exception_lineno = 251;
        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_Copy( const_dict_141a0513c1f03a2424841d6964c632f5 );
        assert( var_exit_modes == NULL );
        var_exit_modes = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_wrap_function );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_function );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wrap_function" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 299;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_func );
        tmp_args_element_name_4 = par_func;
        CHECK_OBJECT( par_args );
        tmp_args_element_name_5 = par_args;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 299;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_23;
    }
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


            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 299;
            goto try_except_handler_10;
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


            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 299;
            goto try_except_handler_10;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_25;
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

                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 299;
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

            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 299;
            goto try_except_handler_10;
        }
    }
    goto try_end_7;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
    goto try_end_8;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_26 = tmp_tuple_unpack_2__element_1;
        assert( var_feval == NULL );
        Py_INCREF( tmp_assign_source_26 );
        var_feval = tmp_assign_source_26;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_27 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = par_func;
            assert( old != NULL );
            par_func = tmp_assign_source_27;
            Py_INCREF( par_func );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_fprime );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_fprime );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_wrap_function );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_function );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wrap_function" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 303;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }

            tmp_called_name_5 = tmp_mvar_value_3;
            CHECK_OBJECT( var_fprime );
            tmp_args_element_name_6 = var_fprime;
            CHECK_OBJECT( par_args );
            tmp_args_element_name_7 = par_args;
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 303;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            if ( tmp_iter_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_4 );
            Py_DECREF( tmp_iter_arg_4 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
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


                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 303;
                goto try_except_handler_12;
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


                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 303;
                goto try_except_handler_12;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_30;
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

                        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 303;
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

                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 303;
                goto try_except_handler_12;
            }
        }
        goto try_end_9;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        try_end_9:;
        goto try_end_10;
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

        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_1;
        // End of try:
        try_end_10:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_31 = tmp_tuple_unpack_3__element_1;
            assert( var_geval == NULL );
            Py_INCREF( tmp_assign_source_31 );
            var_geval = tmp_assign_source_31;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_32;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_32 = tmp_tuple_unpack_3__element_2;
            {
                PyObject *old = var_fprime;
                assert( old != NULL );
                var_fprime = tmp_assign_source_32;
                Py_INCREF( var_fprime );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        goto branch_end_10;
        branch_no_10:;
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_tuple_element_3;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_wrap_function );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_function );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wrap_function" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 305;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }

            tmp_called_name_6 = tmp_mvar_value_4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_approx_jacobian );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_approx_jacobian );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "approx_jacobian" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 305;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }

            tmp_args_element_name_8 = tmp_mvar_value_5;
            CHECK_OBJECT( par_func );
            tmp_tuple_element_3 = par_func;
            tmp_args_element_name_9 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_element_name_9, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( PyCell_GET( var_epsilon ) );
            tmp_tuple_element_3 = PyCell_GET( var_epsilon );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_element_name_9, 1, tmp_tuple_element_3 );
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 305;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_iter_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_5 );
            Py_DECREF( tmp_iter_arg_5 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            assert( tmp_tuple_unpack_4__source_iter == NULL );
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_33;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_7, 0, 2 );
            if ( tmp_assign_source_34 == NULL )
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


                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 305;
                goto try_except_handler_14;
            }
            assert( tmp_tuple_unpack_4__element_1 == NULL );
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_35 = UNPACK_NEXT( tmp_unpack_8, 1, 2 );
            if ( tmp_assign_source_35 == NULL )
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


                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 305;
                goto try_except_handler_14;
            }
            assert( tmp_tuple_unpack_4__element_2 == NULL );
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_35;
        }
        {
            PyObject *tmp_iterator_name_4;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_4 ); assert( HAS_ITERNEXT( tmp_iterator_name_4 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_4 )->tp_iternext)( tmp_iterator_name_4 );

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

                        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 305;
                        goto try_except_handler_14;
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

                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 305;
                goto try_except_handler_14;
            }
        }
        goto try_end_11;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
        Py_DECREF( tmp_tuple_unpack_4__source_iter );
        tmp_tuple_unpack_4__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        try_end_11:;
        goto try_end_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto frame_exception_exit_1;
        // End of try:
        try_end_12:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
        Py_DECREF( tmp_tuple_unpack_4__source_iter );
        tmp_tuple_unpack_4__source_iter = NULL;

        {
            PyObject *tmp_assign_source_36;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
            tmp_assign_source_36 = tmp_tuple_unpack_4__element_1;
            assert( var_geval == NULL );
            Py_INCREF( tmp_assign_source_36 );
            var_geval = tmp_assign_source_36;
        }
        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_37;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
            tmp_assign_source_37 = tmp_tuple_unpack_4__element_2;
            {
                PyObject *old = var_fprime;
                assert( old != NULL );
                var_fprime = tmp_assign_source_37;
                Py_INCREF( var_fprime );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        branch_end_10:;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_asfarray );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asfarray );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asfarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 308;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_6;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_10 = par_x0;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 308;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_called_instance_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 308;
        tmp_assign_source_38 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_flatten );
        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_sum_sequence_1;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_called_name_8 = (PyObject *)&PyMap_Type;
        tmp_args_element_name_11 = LOOKUP_BUILTIN( const_str_plain_len );
        assert( tmp_args_element_name_11 != NULL );
        // Tried code:
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_dict_name_2;
            PyObject *tmp_key_name_2;
            CHECK_OBJECT( var_cons );
            tmp_dict_name_2 = var_cons;
            tmp_key_name_2 = const_str_plain_eq;
            tmp_iter_arg_6 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
            if ( tmp_iter_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_15;
            }
            tmp_assign_source_40 = MAKE_ITERATOR( tmp_iter_arg_6 );
            Py_DECREF( tmp_iter_arg_6 );
            if ( tmp_assign_source_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_15;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_40;
        }
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_41;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_a55b469488ec486a887fe6d7a7a7d757_2, codeobj_a55b469488ec486a887fe6d7a7a7d757, module_scipy$optimize$slsqp, sizeof(void *)+sizeof(void *) );
        frame_a55b469488ec486a887fe6d7a7a7d757_2 = cache_frame_a55b469488ec486a887fe6d7a7a7d757_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_a55b469488ec486a887fe6d7a7a7d757_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_a55b469488ec486a887fe6d7a7a7d757_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_42;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_42 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_42 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "oo";
                    exception_lineno = 312;
                    goto try_except_handler_16;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_42;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_43;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_43 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_43;
                Py_INCREF( outline_0_var_c );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_atleast_1d );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atleast_1d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 312;
                type_description_2 = "oo";
                goto try_except_handler_16;
            }

            tmp_called_name_9 = tmp_mvar_value_7;
            CHECK_OBJECT( outline_0_var_c );
            tmp_subscribed_name_5 = outline_0_var_c;
            tmp_subscript_name_5 = const_str_plain_fun;
            tmp_dircall_arg1_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_2 = "oo";
                goto try_except_handler_16;
            }
            CHECK_OBJECT( var_x );
            tmp_tuple_element_4 = var_x;
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( outline_0_var_c );
            tmp_subscribed_name_6 = outline_0_var_c;
            tmp_subscript_name_6 = const_str_plain_args;
            tmp_dircall_arg3_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            if ( tmp_dircall_arg3_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dircall_arg1_1 );
                Py_DECREF( tmp_dircall_arg2_1 );

                exception_lineno = 312;
                type_description_2 = "oo";
                goto try_except_handler_16;
            }

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_args_element_name_13 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
            }
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_2 = "oo";
                goto try_except_handler_16;
            }
            frame_a55b469488ec486a887fe6d7a7a7d757_2->m_frame.f_lineno = 312;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_args_element_name_13 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_2 = "oo";
                goto try_except_handler_16;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_2 = "oo";
                goto try_except_handler_16;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_2 = "oo";
            goto try_except_handler_16;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_args_element_name_12 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_args_element_name_12 );
        goto try_return_handler_16;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
        return NULL;
        // Return handler code:
        try_return_handler_16:;
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
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
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
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_a55b469488ec486a887fe6d7a7a7d757_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_a55b469488ec486a887fe6d7a7a7d757_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_15;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_a55b469488ec486a887fe6d7a7a7d757_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_a55b469488ec486a887fe6d7a7a7d757_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_a55b469488ec486a887fe6d7a7a7d757_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_a55b469488ec486a887fe6d7a7a7d757_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_a55b469488ec486a887fe6d7a7a7d757_2,
            type_description_2,
            outline_0_var_c,
            var_x
        );


        // Release cached frame.
        if ( frame_a55b469488ec486a887fe6d7a7a7d757_2 == cache_frame_a55b469488ec486a887fe6d7a7a7d757_2 )
        {
            Py_DECREF( frame_a55b469488ec486a887fe6d7a7a7d757_2 );
        }
        cache_frame_a55b469488ec486a887fe6d7a7a7d757_2 = NULL;

        assertFrameObject( frame_a55b469488ec486a887fe6d7a7a7d757_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_15;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_XDECREF( outline_0_var_c );
        outline_0_var_c = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( outline_0_var_c );
        outline_0_var_c = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
        return NULL;
        outline_exception_1:;
        exception_lineno = 312;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_sum_sequence_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_sum_sequence_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_39 = BUILTIN_SUM1( tmp_sum_sequence_1 );
        Py_DECREF( tmp_sum_sequence_1 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_meq == NULL );
        var_meq = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_sum_sequence_2;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        tmp_called_name_10 = (PyObject *)&PyMap_Type;
        tmp_args_element_name_14 = LOOKUP_BUILTIN( const_str_plain_len );
        assert( tmp_args_element_name_14 != NULL );
        // Tried code:
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_dict_name_3;
            PyObject *tmp_key_name_3;
            CHECK_OBJECT( var_cons );
            tmp_dict_name_3 = var_cons;
            tmp_key_name_3 = const_str_plain_ineq;
            tmp_iter_arg_7 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
            if ( tmp_iter_arg_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 315;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            tmp_assign_source_45 = MAKE_ITERATOR( tmp_iter_arg_7 );
            Py_DECREF( tmp_iter_arg_7 );
            if ( tmp_assign_source_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 314;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            assert( tmp_listcomp_2__$0 == NULL );
            tmp_listcomp_2__$0 = tmp_assign_source_45;
        }
        {
            PyObject *tmp_assign_source_46;
            tmp_assign_source_46 = PyList_New( 0 );
            assert( tmp_listcomp_2__contraction == NULL );
            tmp_listcomp_2__contraction = tmp_assign_source_46;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_ec38eb56a6b4e079b49a8440eb57303f_3, codeobj_ec38eb56a6b4e079b49a8440eb57303f, module_scipy$optimize$slsqp, sizeof(void *)+sizeof(void *) );
        frame_ec38eb56a6b4e079b49a8440eb57303f_3 = cache_frame_ec38eb56a6b4e079b49a8440eb57303f_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_ec38eb56a6b4e079b49a8440eb57303f_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_ec38eb56a6b4e079b49a8440eb57303f_3 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_47;
            CHECK_OBJECT( tmp_listcomp_2__$0 );
            tmp_next_source_3 = tmp_listcomp_2__$0;
            tmp_assign_source_47 = ITERATOR_NEXT( tmp_next_source_3 );
            if ( tmp_assign_source_47 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "oo";
                    exception_lineno = 314;
                    goto try_except_handler_18;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_47;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_48;
            CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
            tmp_assign_source_48 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_c;
                outline_1_var_c = tmp_assign_source_48;
                Py_INCREF( outline_1_var_c );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_name_11;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_dircall_arg1_2;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_dircall_arg2_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_dircall_arg3_2;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            CHECK_OBJECT( tmp_listcomp_2__contraction );
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_atleast_1d );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atleast_1d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 314;
                type_description_2 = "oo";
                goto try_except_handler_18;
            }

            tmp_called_name_11 = tmp_mvar_value_8;
            CHECK_OBJECT( outline_1_var_c );
            tmp_subscribed_name_7 = outline_1_var_c;
            tmp_subscript_name_7 = const_str_plain_fun;
            tmp_dircall_arg1_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            if ( tmp_dircall_arg1_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 314;
                type_description_2 = "oo";
                goto try_except_handler_18;
            }
            CHECK_OBJECT( var_x );
            tmp_tuple_element_5 = var_x;
            tmp_dircall_arg2_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( outline_1_var_c );
            tmp_subscribed_name_8 = outline_1_var_c;
            tmp_subscript_name_8 = const_str_plain_args;
            tmp_dircall_arg3_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
            if ( tmp_dircall_arg3_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dircall_arg1_2 );
                Py_DECREF( tmp_dircall_arg2_2 );

                exception_lineno = 314;
                type_description_2 = "oo";
                goto try_except_handler_18;
            }

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
                tmp_args_element_name_16 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
            }
            if ( tmp_args_element_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 314;
                type_description_2 = "oo";
                goto try_except_handler_18;
            }
            frame_ec38eb56a6b4e079b49a8440eb57303f_3->m_frame.f_lineno = 314;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_args_element_name_16 );
            if ( tmp_append_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 314;
                type_description_2 = "oo";
                goto try_except_handler_18;
            }
            assert( PyList_Check( tmp_append_list_2 ) );
            tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
            Py_DECREF( tmp_append_value_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 314;
                type_description_2 = "oo";
                goto try_except_handler_18;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_2 = "oo";
            goto try_except_handler_18;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT( tmp_listcomp_2__contraction );
        tmp_args_element_name_15 = tmp_listcomp_2__contraction;
        Py_INCREF( tmp_args_element_name_15 );
        goto try_return_handler_18;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
        return NULL;
        // Return handler code:
        try_return_handler_18:;
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
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
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
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ec38eb56a6b4e079b49a8440eb57303f_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_ec38eb56a6b4e079b49a8440eb57303f_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_17;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ec38eb56a6b4e079b49a8440eb57303f_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_ec38eb56a6b4e079b49a8440eb57303f_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_ec38eb56a6b4e079b49a8440eb57303f_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_ec38eb56a6b4e079b49a8440eb57303f_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_ec38eb56a6b4e079b49a8440eb57303f_3,
            type_description_2,
            outline_1_var_c,
            var_x
        );


        // Release cached frame.
        if ( frame_ec38eb56a6b4e079b49a8440eb57303f_3 == cache_frame_ec38eb56a6b4e079b49a8440eb57303f_3 )
        {
            Py_DECREF( frame_ec38eb56a6b4e079b49a8440eb57303f_3 );
        }
        cache_frame_ec38eb56a6b4e079b49a8440eb57303f_3 = NULL;

        assertFrameObject( frame_ec38eb56a6b4e079b49a8440eb57303f_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_17;
        skip_nested_handling_2:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_XDECREF( outline_1_var_c );
        outline_1_var_c = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( outline_1_var_c );
        outline_1_var_c = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
        return NULL;
        outline_exception_2:;
        exception_lineno = 314;
        goto frame_exception_exit_1;
        outline_result_2:;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 314;
        {
            PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_sum_sequence_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_args_element_name_15 );
        if ( tmp_sum_sequence_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_44 = BUILTIN_SUM1( tmp_sum_sequence_2 );
        Py_DECREF( tmp_sum_sequence_2 );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mieq == NULL );
        var_mieq = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_meq );
        tmp_left_name_5 = var_meq;
        CHECK_OBJECT( var_mieq );
        tmp_right_name_5 = var_mieq;
        tmp_assign_source_49 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_m == NULL );
        var_m = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 319;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_12 = tmp_mvar_value_9;
        tmp_list_element_1 = const_int_pos_1;
        tmp_args_element_name_17 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_17, 0, tmp_list_element_1 );
        CHECK_OBJECT( var_m );
        tmp_list_element_1 = var_m;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_17, 1, tmp_list_element_1 );
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_called_instance_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 319;
        tmp_assign_source_50 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_max );
        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_assign_source_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_la == NULL );
        var_la = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_x );
        tmp_len_arg_1 = var_x;
        tmp_assign_source_51 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_n );
        tmp_left_name_6 = var_n;
        tmp_right_name_6 = const_int_pos_1;
        tmp_assign_source_52 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_6, tmp_right_name_6 );
        assert( !(tmp_assign_source_52 == NULL) );
        assert( var_n1 == NULL );
        var_n1 = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT( var_m );
        tmp_left_name_9 = var_m;
        CHECK_OBJECT( var_meq );
        tmp_right_name_7 = var_meq;
        tmp_left_name_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_7 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n1 );
        tmp_right_name_8 = var_n1;
        tmp_left_name_7 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n1 );
        tmp_right_name_9 = var_n1;
        tmp_assign_source_53 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_7, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mineq == NULL );
        var_mineq = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_left_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_10;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_13;
        PyObject *tmp_right_name_14;
        PyObject *tmp_left_name_24;
        PyObject *tmp_left_name_25;
        PyObject *tmp_left_name_26;
        PyObject *tmp_right_name_15;
        PyObject *tmp_right_name_16;
        PyObject *tmp_right_name_17;
        PyObject *tmp_left_name_27;
        PyObject *tmp_right_name_18;
        PyObject *tmp_right_name_19;
        PyObject *tmp_left_name_28;
        PyObject *tmp_right_name_20;
        PyObject *tmp_right_name_21;
        PyObject *tmp_left_name_29;
        PyObject *tmp_left_name_30;
        PyObject *tmp_right_name_22;
        PyObject *tmp_right_name_23;
        PyObject *tmp_left_name_31;
        PyObject *tmp_right_name_24;
        PyObject *tmp_right_name_25;
        PyObject *tmp_left_name_32;
        PyObject *tmp_right_name_26;
        PyObject *tmp_right_name_27;
        PyObject *tmp_right_name_28;
        PyObject *tmp_left_name_33;
        PyObject *tmp_left_name_34;
        PyObject *tmp_left_name_35;
        PyObject *tmp_right_name_29;
        PyObject *tmp_right_name_30;
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
        tmp_left_name_22 = const_int_pos_3;
        CHECK_OBJECT( var_n1 );
        tmp_right_name_10 = var_n1;
        tmp_left_name_21 = BINARY_OPERATION_MUL_LONG_LONG( tmp_left_name_22, tmp_right_name_10 );
        assert( !(tmp_left_name_21 == NULL) );
        CHECK_OBJECT( var_m );
        tmp_right_name_11 = var_m;
        tmp_left_name_20 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_21, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_21 );
        if ( tmp_left_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n1 );
        tmp_left_name_23 = var_n1;
        tmp_right_name_13 = const_int_pos_1;
        tmp_right_name_12 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_23, tmp_right_name_13 );
        assert( !(tmp_right_name_12 == NULL) );
        tmp_left_name_19 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_20, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_20 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_left_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n1 );
        tmp_left_name_26 = var_n1;
        CHECK_OBJECT( var_meq );
        tmp_right_name_15 = var_meq;
        tmp_left_name_25 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_26, tmp_right_name_15 );
        if ( tmp_left_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_19 );

            exception_lineno = 326;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_16 = const_int_pos_1;
        tmp_left_name_24 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_25, tmp_right_name_16 );
        Py_DECREF( tmp_left_name_25 );
        if ( tmp_left_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_19 );

            exception_lineno = 326;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mineq );
        tmp_left_name_27 = var_mineq;
        tmp_right_name_18 = const_int_pos_2;
        tmp_right_name_17 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_27, tmp_right_name_18 );
        if ( tmp_right_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_19 );
            Py_DECREF( tmp_left_name_24 );

            exception_lineno = 326;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_14 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_17 );
        Py_DECREF( tmp_left_name_24 );
        Py_DECREF( tmp_right_name_17 );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_19 );

            exception_lineno = 326;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_19 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_left_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_28 = const_int_pos_2;
        CHECK_OBJECT( var_mineq );
        tmp_right_name_20 = var_mineq;
        tmp_right_name_19 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_28, tmp_right_name_20 );
        if ( tmp_right_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );

            exception_lineno = 326;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_19 );
        Py_DECREF( tmp_left_name_18 );
        Py_DECREF( tmp_right_name_19 );
        if ( tmp_left_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n1 );
        tmp_left_name_30 = var_n1;
        CHECK_OBJECT( var_mineq );
        tmp_right_name_22 = var_mineq;
        tmp_left_name_29 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_30, tmp_right_name_22 );
        if ( tmp_left_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_17 );

            exception_lineno = 326;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n1 );
        tmp_left_name_31 = var_n1;
        CHECK_OBJECT( var_meq );
        tmp_right_name_24 = var_meq;
        tmp_right_name_23 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_31, tmp_right_name_24 );
        if ( tmp_right_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_17 );
            Py_DECREF( tmp_left_name_29 );

            exception_lineno = 326;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_21 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_29, tmp_right_name_23 );
        Py_DECREF( tmp_left_name_29 );
        Py_DECREF( tmp_right_name_23 );
        if ( tmp_right_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_17 );

            exception_lineno = 326;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_21 );
        Py_DECREF( tmp_left_name_17 );
        Py_DECREF( tmp_right_name_21 );
        if ( tmp_left_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_32 = const_int_pos_2;
        CHECK_OBJECT( var_meq );
        tmp_right_name_26 = var_meq;
        tmp_right_name_25 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_32, tmp_right_name_26 );
        if ( tmp_right_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_16 );

            exception_lineno = 327;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_25 );
        Py_DECREF( tmp_left_name_16 );
        Py_DECREF( tmp_right_name_25 );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n1 );
        tmp_right_name_27 = var_n1;
        tmp_left_name_14 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_15, tmp_right_name_27 );
        Py_DECREF( tmp_left_name_15 );
        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_left_name_35 = var_n;
        tmp_right_name_29 = const_int_pos_1;
        tmp_left_name_34 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_35, tmp_right_name_29 );
        assert( !(tmp_left_name_34 == NULL) );
        CHECK_OBJECT( var_n );
        tmp_right_name_30 = var_n;
        tmp_left_name_33 = BINARY_OPERATION_MUL_LONG_LONG( tmp_left_name_34, tmp_right_name_30 );
        Py_DECREF( tmp_left_name_34 );
        assert( !(tmp_left_name_33 == NULL) );
        tmp_right_name_31 = const_int_pos_2;
        tmp_right_name_28 = BINARY_OPERATION_FLOORDIV_LONG_LONG( tmp_left_name_33, tmp_right_name_31 );
        Py_DECREF( tmp_left_name_33 );
        if ( tmp_right_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_14 );

            exception_lineno = 327;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_28 );
        Py_DECREF( tmp_left_name_14 );
        Py_DECREF( tmp_right_name_28 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_36 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_33 = var_m;
        tmp_right_name_32 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_36, tmp_right_name_33 );
        if ( tmp_right_name_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 327;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_32 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_32 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_37 = const_int_pos_3;
        CHECK_OBJECT( var_n );
        tmp_right_name_35 = var_n;
        tmp_right_name_34 = BINARY_OPERATION_MUL_LONG_LONG( tmp_left_name_37, tmp_right_name_35 );
        assert( !(tmp_right_name_34 == NULL) );
        tmp_left_name_11 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_12, tmp_right_name_34 );
        Py_DECREF( tmp_left_name_12 );
        Py_DECREF( tmp_right_name_34 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_38 = const_int_pos_3;
        CHECK_OBJECT( var_n1 );
        tmp_right_name_37 = var_n1;
        tmp_right_name_36 = BINARY_OPERATION_MUL_LONG_LONG( tmp_left_name_38, tmp_right_name_37 );
        assert( !(tmp_right_name_36 == NULL) );
        tmp_left_name_10 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_11, tmp_right_name_36 );
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_right_name_36 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_38 = const_int_pos_1;
        tmp_assign_source_54 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_10, tmp_right_name_38 );
        Py_DECREF( tmp_left_name_10 );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_len_w == NULL );
        var_len_w = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT( var_mineq );
        tmp_assign_source_55 = var_mineq;
        assert( var_len_jw == NULL );
        Py_INCREF( tmp_assign_source_55 );
        var_len_jw = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_18;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_zeros );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 329;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_10;
        CHECK_OBJECT( var_len_w );
        tmp_args_element_name_18 = var_len_w;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 329;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        if ( tmp_assign_source_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_w == NULL );
        var_w = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_19;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_zeros );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 330;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_14 = tmp_mvar_value_11;
        CHECK_OBJECT( var_len_jw );
        tmp_args_element_name_19 = var_len_jw;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 330;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        if ( tmp_assign_source_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_jw == NULL );
        var_jw = tmp_assign_source_57;
    }
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_bounds );
        tmp_compexpr_left_8 = par_bounds;
        tmp_compexpr_right_8 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_8 == tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_bounds );
        tmp_len_arg_2 = par_bounds;
        tmp_compexpr_left_9 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_left_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        Py_DECREF( tmp_compexpr_left_9 );
        assert( !(tmp_res == -1) );
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_11 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_11 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_name_15;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 334;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_12;
            tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_empty );
            if ( tmp_called_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 334;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_n );
            tmp_tuple_element_6 = var_n;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_6 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 334;
            tmp_assign_source_58 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 334;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_xl == NULL );
            var_xl = tmp_assign_source_58;
        }
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_name_16;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 335;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_13;
            tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_empty );
            if ( tmp_called_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_n );
            tmp_tuple_element_7 = var_n;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_7 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 335;
            tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_16 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_59 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_xu == NULL );
            var_xu = tmp_assign_source_59;
        }
        {
            PyObject *tmp_called_name_17;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_14;
            CHECK_OBJECT( var_xl );
            tmp_source_name_3 = var_xl;
            tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_fill );
            if ( tmp_called_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 336;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_14 == NULL )
            {
                Py_DECREF( tmp_called_name_17 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 336;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_14;
            tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_nan );
            if ( tmp_args_element_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_17 );

                exception_lineno = 336;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 336;
            {
                PyObject *call_args[] = { tmp_args_element_name_20 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
            }

            Py_DECREF( tmp_called_name_17 );
            Py_DECREF( tmp_args_element_name_20 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 336;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_called_name_18;
            PyObject *tmp_source_name_5;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_15;
            CHECK_OBJECT( var_xu );
            tmp_source_name_5 = var_xu;
            tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_fill );
            if ( tmp_called_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 337;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_15 == NULL )
            {
                Py_DECREF( tmp_called_name_18 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 337;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_15;
            tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_nan );
            if ( tmp_args_element_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_18 );

                exception_lineno = 337;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 337;
            {
                PyObject *call_args[] = { tmp_args_element_name_21 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
            }

            Py_DECREF( tmp_called_name_18 );
            Py_DECREF( tmp_args_element_name_21 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 337;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        goto branch_end_11;
        branch_no_11:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_name_19;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_args_element_name_23;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 339;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_19 = tmp_mvar_value_16;
            CHECK_OBJECT( par_bounds );
            tmp_args_element_name_22 = par_bounds;
            tmp_args_element_name_23 = (PyObject *)&PyFloat_Type;
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 339;
            {
                PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23 };
                tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
            }

            if ( tmp_assign_source_60 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 339;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_bnds == NULL );
            var_bnds = tmp_assign_source_60;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_9;
            CHECK_OBJECT( var_bnds );
            tmp_source_name_7 = var_bnds;
            tmp_subscribed_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
            if ( tmp_subscribed_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_9 = const_int_0;
            tmp_compexpr_left_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, 0 );
            Py_DECREF( tmp_subscribed_name_9 );
            if ( tmp_compexpr_left_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_n );
            tmp_compexpr_right_10 = var_n;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
            Py_DECREF( tmp_compexpr_left_10 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
                PyObject *tmp_raise_type_6;
                PyObject *tmp_make_exception_arg_6;
                tmp_make_exception_arg_6 = const_str_digest_b6e80b34945c556ab526d93fa8f9cdf1;
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 341;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_6 };
                    tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_IndexError, call_args );
                }

                assert( !(tmp_raise_type_6 == NULL) );
                exception_type = tmp_raise_type_6;
                exception_lineno = 341;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_12:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_called_name_20;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_kw_name_3;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 344;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_19;
            }

            tmp_source_name_8 = tmp_mvar_value_17;
            tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_errstate );
            if ( tmp_called_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 344;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_19;
            }
            tmp_kw_name_3 = PyDict_Copy( const_dict_d457aeaf5237c8e9bb82fdcc508844e3 );
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 344;
            tmp_assign_source_61 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_20, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_20 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assign_source_61 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 344;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_19;
            }
            assert( tmp_with_1__source == NULL );
            tmp_with_1__source = tmp_assign_source_61;
        }
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_called_name_21;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( tmp_with_1__source );
            tmp_source_name_9 = tmp_with_1__source;
            tmp_called_name_21 = LOOKUP_SPECIAL( tmp_source_name_9, const_str_plain___enter__ );
            if ( tmp_called_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 344;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_19;
            }
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 344;
            tmp_assign_source_62 = CALL_FUNCTION_NO_ARGS( tmp_called_name_21 );
            Py_DECREF( tmp_called_name_21 );
            if ( tmp_assign_source_62 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 344;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_19;
            }
            assert( tmp_with_1__enter == NULL );
            tmp_with_1__enter = tmp_assign_source_62;
        }
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( tmp_with_1__source );
            tmp_source_name_10 = tmp_with_1__source;
            tmp_assign_source_63 = LOOKUP_SPECIAL( tmp_source_name_10, const_str_plain___exit__ );
            if ( tmp_assign_source_63 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 344;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_19;
            }
            assert( tmp_with_1__exit == NULL );
            tmp_with_1__exit = tmp_assign_source_63;
        }
        {
            nuitka_bool tmp_assign_source_64;
            tmp_assign_source_64 = NUITKA_BOOL_TRUE;
            tmp_with_1__indicator = tmp_assign_source_64;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_subscript_name_10;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_subscript_name_11;
            CHECK_OBJECT( var_bnds );
            tmp_subscribed_name_10 = var_bnds;
            tmp_subscript_name_10 = const_tuple_slice_none_none_none_int_0_tuple;
            tmp_compexpr_left_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
            if ( tmp_compexpr_left_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 345;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_21;
            }
            CHECK_OBJECT( var_bnds );
            tmp_subscribed_name_11 = var_bnds;
            tmp_subscript_name_11 = const_tuple_slice_none_none_none_int_pos_1_tuple;
            tmp_compexpr_right_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
            if ( tmp_compexpr_right_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_11 );

                exception_lineno = 345;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_21;
            }
            tmp_assign_source_65 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
            Py_DECREF( tmp_compexpr_left_11 );
            Py_DECREF( tmp_compexpr_right_11 );
            if ( tmp_assign_source_65 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 345;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_21;
            }
            assert( var_bnderr == NULL );
            var_bnderr = tmp_assign_source_65;
        }
        goto try_end_13;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
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

        if ( exception_keeper_tb_18 == NULL )
        {
            exception_keeper_tb_18 = MAKE_TRACEBACK( frame_fd196b314c9e532c6f62f5120080450d, exception_keeper_lineno_18 );
        }
        else if ( exception_keeper_lineno_18 != 0 )
        {
            exception_keeper_tb_18 = ADD_TRACEBACK( exception_keeper_tb_18, frame_fd196b314c9e532c6f62f5120080450d, exception_keeper_lineno_18 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_18, &exception_keeper_value_18, &exception_keeper_tb_18 );
        PyException_SetTraceback( exception_keeper_value_18, (PyObject *)exception_keeper_tb_18 );
        PUBLISH_EXCEPTION( &exception_keeper_type_18, &exception_keeper_value_18, &exception_keeper_tb_18 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            tmp_compexpr_left_12 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_12 = PyExc_BaseException;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_12, tmp_compexpr_right_12 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 344;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_22;
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
                nuitka_bool tmp_assign_source_66;
                tmp_assign_source_66 = NUITKA_BOOL_FALSE;
                tmp_with_1__indicator = tmp_assign_source_66;
            }
            {
                nuitka_bool tmp_condition_result_14;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_called_name_22;
                PyObject *tmp_args_element_name_24;
                PyObject *tmp_args_element_name_25;
                PyObject *tmp_args_element_name_26;
                CHECK_OBJECT( tmp_with_1__exit );
                tmp_called_name_22 = tmp_with_1__exit;
                tmp_args_element_name_24 = EXC_TYPE(PyThreadState_GET());
                tmp_args_element_name_25 = EXC_VALUE(PyThreadState_GET());
                tmp_args_element_name_26 = EXC_TRACEBACK(PyThreadState_GET());
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 344;
                {
                    PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26 };
                    tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_22, call_args );
                }

                if ( tmp_operand_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 344;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_22;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                Py_DECREF( tmp_operand_name_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 344;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_22;
                }
                tmp_condition_result_14 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_14;
                }
                else
                {
                    goto branch_no_14;
                }
                branch_yes_14:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 344;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_fd196b314c9e532c6f62f5120080450d->m_frame) frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_22;
                branch_no_14:;
            }
            goto branch_end_13;
            branch_no_13:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 344;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_fd196b314c9e532c6f62f5120080450d->m_frame) frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
            branch_end_13:;
        }
        goto try_end_14;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        try_end_14:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        goto try_end_13;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
        return NULL;
        // End of try:
        try_end_13:;
        goto try_end_15;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            nuitka_bool tmp_condition_result_15;
            nuitka_bool tmp_compexpr_left_13;
            nuitka_bool tmp_compexpr_right_13;
            assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_13 = tmp_with_1__indicator;
            tmp_compexpr_right_13 = NUITKA_BOOL_TRUE;
            tmp_condition_result_15 = ( tmp_compexpr_left_13 == tmp_compexpr_right_13 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_23;
                PyObject *tmp_call_result_4;
                CHECK_OBJECT( tmp_with_1__exit );
                tmp_called_name_23 = tmp_with_1__exit;
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 344;
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_23, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    Py_DECREF( exception_keeper_type_20 );
                    Py_XDECREF( exception_keeper_value_20 );
                    Py_XDECREF( exception_keeper_tb_20 );

                    exception_lineno = 344;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_19;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_15:;
        }
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_19;
        // End of try:
        try_end_15:;
        {
            nuitka_bool tmp_condition_result_16;
            nuitka_bool tmp_compexpr_left_14;
            nuitka_bool tmp_compexpr_right_14;
            assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_14 = tmp_with_1__indicator;
            tmp_compexpr_right_14 = NUITKA_BOOL_TRUE;
            tmp_condition_result_16 = ( tmp_compexpr_left_14 == tmp_compexpr_right_14 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_24;
                PyObject *tmp_call_result_5;
                CHECK_OBJECT( tmp_with_1__exit );
                tmp_called_name_24 = tmp_with_1__exit;
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 344;
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_24, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

                if ( tmp_call_result_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 344;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_19;
                }
                Py_DECREF( tmp_call_result_5 );
            }
            branch_no_16:;
        }
        goto try_end_16;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
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
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto frame_exception_exit_1;
        // End of try:
        try_end_16:;
        CHECK_OBJECT( (PyObject *)tmp_with_1__source );
        Py_DECREF( tmp_with_1__source );
        tmp_with_1__source = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
        Py_DECREF( tmp_with_1__enter );
        tmp_with_1__enter = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
        Py_DECREF( tmp_with_1__exit );
        tmp_with_1__exit = NULL;

        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_call_result_6;
            int tmp_truth_name_3;
            if ( var_bnderr == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bnderr" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 347;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = var_bnderr;
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 347;
            tmp_call_result_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_any );
            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_6 );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_6 );

                exception_lineno = 347;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_17 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_6 );
            if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_17;
            }
            else
            {
                goto branch_no_17;
            }
            branch_yes_17:;
            {
                PyObject *tmp_raise_type_7;
                PyObject *tmp_make_exception_arg_7;
                PyObject *tmp_left_name_39;
                PyObject *tmp_right_name_39;
                PyObject *tmp_called_name_25;
                PyObject *tmp_source_name_11;
                PyObject *tmp_args_element_name_27;
                tmp_left_name_39 = const_str_digest_e1e55e8c3d8cb9f93bd16a5e1b0c4fba;
                tmp_source_name_11 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
                tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_join );
                assert( !(tmp_called_name_25 == NULL) );
                {
                    PyObject *tmp_assign_source_67;
                    PyObject *tmp_iter_arg_8;
                    if ( var_bnderr == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bnderr" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 349;
                        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_iter_arg_8 = var_bnderr;
                    tmp_assign_source_67 = MAKE_ITERATOR( tmp_iter_arg_8 );
                    if ( tmp_assign_source_67 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 349;
                        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( tmp_genexpr_1__$0 == NULL );
                    tmp_genexpr_1__$0 = tmp_assign_source_67;
                }
                // Tried code:
                tmp_args_element_name_27 = scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$genexpr_1_genexpr_maker();

                ((struct Nuitka_GeneratorObject *)tmp_args_element_name_27)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


                goto try_return_handler_23;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
                return NULL;
                // Return handler code:
                try_return_handler_23:;
                CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
                Py_DECREF( tmp_genexpr_1__$0 );
                tmp_genexpr_1__$0 = NULL;

                goto outline_result_3;
                // End of try:
                CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
                Py_DECREF( tmp_genexpr_1__$0 );
                tmp_genexpr_1__$0 = NULL;

                // Return statement must have exited already.
                NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
                return NULL;
                outline_result_3:;
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 349;
                {
                    PyObject *call_args[] = { tmp_args_element_name_27 };
                    tmp_right_name_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
                }

                Py_DECREF( tmp_called_name_25 );
                Py_DECREF( tmp_args_element_name_27 );
                if ( tmp_right_name_39 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 349;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_make_exception_arg_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_39, tmp_right_name_39 );
                Py_DECREF( tmp_right_name_39 );
                if ( tmp_make_exception_arg_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 348;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 348;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_7 };
                    tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_7 );
                assert( !(tmp_raise_type_7 == NULL) );
                exception_type = tmp_raise_type_7;
                exception_lineno = 348;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_17:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_iter_arg_9;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_subscribed_name_12;
            PyObject *tmp_subscript_name_12;
            PyObject *tmp_subscribed_name_13;
            PyObject *tmp_subscript_name_13;
            CHECK_OBJECT( var_bnds );
            tmp_subscribed_name_12 = var_bnds;
            tmp_subscript_name_12 = const_tuple_slice_none_none_none_int_0_tuple;
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
            if ( tmp_tuple_element_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_24;
            }
            tmp_iter_arg_9 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_iter_arg_9, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( var_bnds );
            tmp_subscribed_name_13 = var_bnds;
            tmp_subscript_name_13 = const_tuple_slice_none_none_none_int_pos_1_tuple;
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
            if ( tmp_tuple_element_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_9 );

                exception_lineno = 350;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_24;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_9, 1, tmp_tuple_element_8 );
            tmp_assign_source_68 = MAKE_ITERATOR( tmp_iter_arg_9 );
            Py_DECREF( tmp_iter_arg_9 );
            if ( tmp_assign_source_68 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_24;
            }
            assert( tmp_tuple_unpack_5__source_iter == NULL );
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_68;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_69 = UNPACK_NEXT( tmp_unpack_9, 0, 2 );
            if ( tmp_assign_source_69 == NULL )
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


                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 350;
                goto try_except_handler_25;
            }
            assert( tmp_tuple_unpack_5__element_1 == NULL );
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_69;
        }
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_70 = UNPACK_NEXT( tmp_unpack_10, 1, 2 );
            if ( tmp_assign_source_70 == NULL )
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


                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 350;
                goto try_except_handler_25;
            }
            assert( tmp_tuple_unpack_5__element_2 == NULL );
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_70;
        }
        goto try_end_17;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
        Py_DECREF( tmp_tuple_unpack_5__source_iter );
        tmp_tuple_unpack_5__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_24;
        // End of try:
        try_end_17:;
        goto try_end_18;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_5__element_1 );
        tmp_tuple_unpack_5__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto frame_exception_exit_1;
        // End of try:
        try_end_18:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
        Py_DECREF( tmp_tuple_unpack_5__source_iter );
        tmp_tuple_unpack_5__source_iter = NULL;

        {
            PyObject *tmp_assign_source_71;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
            tmp_assign_source_71 = tmp_tuple_unpack_5__element_1;
            assert( var_xl == NULL );
            Py_INCREF( tmp_assign_source_71 );
            var_xl = tmp_assign_source_71;
        }
        Py_XDECREF( tmp_tuple_unpack_5__element_1 );
        tmp_tuple_unpack_5__element_1 = NULL;

        {
            PyObject *tmp_assign_source_72;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
            tmp_assign_source_72 = tmp_tuple_unpack_5__element_2;
            assert( var_xu == NULL );
            Py_INCREF( tmp_assign_source_72 );
            var_xu = tmp_assign_source_72;
        }
        Py_XDECREF( tmp_tuple_unpack_5__element_2 );
        tmp_tuple_unpack_5__element_2 = NULL;

        {
            PyObject *tmp_assign_source_73;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_called_name_26;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_args_element_name_28;
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_isfinite );

            if (unlikely( tmp_mvar_value_18 == NULL ))
            {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfinite );
            }

            if ( tmp_mvar_value_18 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isfinite" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 353;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_26 = tmp_mvar_value_18;
            CHECK_OBJECT( var_bnds );
            tmp_args_element_name_28 = var_bnds;
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 353;
            {
                PyObject *call_args[] = { tmp_args_element_name_28 };
                tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
            }

            if ( tmp_operand_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 353;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_73 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_3 );
            Py_DECREF( tmp_operand_name_3 );
            if ( tmp_assign_source_73 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 353;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_infbnd == NULL );
            var_infbnd = tmp_assign_source_73;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_subscribed_name_14;
            PyObject *tmp_subscript_name_14;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 354;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = tmp_mvar_value_19;
            tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_nan );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_xl );
            tmp_ass_subscribed_1 = var_xl;
            CHECK_OBJECT( var_infbnd );
            tmp_subscribed_name_14 = var_infbnd;
            tmp_subscript_name_14 = const_tuple_slice_none_none_none_int_0_tuple;
            tmp_ass_subscript_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 354;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_source_name_13;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_subscribed_name_15;
            PyObject *tmp_subscript_name_15;
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 355;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_13 = tmp_mvar_value_20;
            tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_nan );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_xu );
            tmp_ass_subscribed_2 = var_xu;
            CHECK_OBJECT( var_infbnd );
            tmp_subscribed_name_15 = var_infbnd;
            tmp_subscript_name_15 = const_tuple_slice_none_none_none_int_pos_1_tuple;
            tmp_ass_subscript_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
            if ( tmp_ass_subscript_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 355;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_11:;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_29;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 359;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = tmp_mvar_value_21;
        CHECK_OBJECT( var_xl );
        tmp_args_element_name_29 = var_xl;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 359;
        {
            PyObject *call_args[] = { tmp_args_element_name_29 };
            tmp_assign_source_74 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_isfinite, call_args );
        }

        if ( tmp_assign_source_74 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_have_bound == NULL );
        var_have_bound = tmp_assign_source_74;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_name_27;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_subscribed_name_16;
        PyObject *tmp_subscript_name_16;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_subscribed_name_17;
        PyObject *tmp_subscript_name_17;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 360;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_22;
        tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_clip );
        if ( tmp_called_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_subscribed_name_16 = var_x;
        CHECK_OBJECT( var_have_bound );
        tmp_subscript_name_16 = var_have_bound;
        tmp_args_element_name_30 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
        if ( tmp_args_element_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_27 );

            exception_lineno = 360;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_xl );
        tmp_subscribed_name_17 = var_xl;
        CHECK_OBJECT( var_have_bound );
        tmp_subscript_name_17 = var_have_bound;
        tmp_args_element_name_31 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
        if ( tmp_args_element_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_27 );
            Py_DECREF( tmp_args_element_name_30 );

            exception_lineno = 360;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_23 == NULL )
        {
            Py_DECREF( tmp_called_name_27 );
            Py_DECREF( tmp_args_element_name_30 );
            Py_DECREF( tmp_args_element_name_31 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 360;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_23;
        tmp_args_element_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_inf );
        if ( tmp_args_element_name_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_27 );
            Py_DECREF( tmp_args_element_name_30 );
            Py_DECREF( tmp_args_element_name_31 );

            exception_lineno = 360;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 360;
        {
            PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32 };
            tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_27, call_args );
        }

        Py_DECREF( tmp_called_name_27 );
        Py_DECREF( tmp_args_element_name_30 );
        Py_DECREF( tmp_args_element_name_31 );
        Py_DECREF( tmp_args_element_name_32 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_ass_subscribed_3 = var_x;
        CHECK_OBJECT( var_have_bound );
        tmp_ass_subscript_3 = var_have_bound;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_33;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 361;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = tmp_mvar_value_24;
        CHECK_OBJECT( var_xu );
        tmp_args_element_name_33 = var_xu;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 361;
        {
            PyObject *call_args[] = { tmp_args_element_name_33 };
            tmp_assign_source_75 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_isfinite, call_args );
        }

        if ( tmp_assign_source_75 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_have_bound;
            assert( old != NULL );
            var_have_bound = tmp_assign_source_75;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_called_name_28;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_subscribed_name_18;
        PyObject *tmp_subscript_name_18;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_subscribed_name_19;
        PyObject *tmp_subscript_name_19;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_16 = tmp_mvar_value_25;
        tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_clip );
        if ( tmp_called_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_subscribed_name_18 = var_x;
        CHECK_OBJECT( var_have_bound );
        tmp_subscript_name_18 = var_have_bound;
        tmp_args_element_name_34 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
        if ( tmp_args_element_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_28 );

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_26 == NULL )
        {
            Py_DECREF( tmp_called_name_28 );
            Py_DECREF( tmp_args_element_name_34 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_26;
        tmp_operand_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_inf );
        if ( tmp_operand_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_28 );
            Py_DECREF( tmp_args_element_name_34 );

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_35 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
        Py_DECREF( tmp_operand_name_4 );
        if ( tmp_args_element_name_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_28 );
            Py_DECREF( tmp_args_element_name_34 );

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_xu );
        tmp_subscribed_name_19 = var_xu;
        CHECK_OBJECT( var_have_bound );
        tmp_subscript_name_19 = var_have_bound;
        tmp_args_element_name_36 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
        if ( tmp_args_element_name_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_28 );
            Py_DECREF( tmp_args_element_name_34 );
            Py_DECREF( tmp_args_element_name_35 );

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36 };
            tmp_ass_subvalue_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_28, call_args );
        }

        Py_DECREF( tmp_called_name_28 );
        Py_DECREF( tmp_args_element_name_34 );
        Py_DECREF( tmp_args_element_name_35 );
        Py_DECREF( tmp_args_element_name_36 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_ass_subscribed_4 = var_x;
        CHECK_OBJECT( var_have_bound );
        tmp_ass_subscript_4 = var_have_bound;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_name_29;
        PyObject *tmp_mvar_value_27;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 365;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_29 = tmp_mvar_value_27;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 365;
        tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_29, &PyTuple_GET_ITEM( const_tuple_int_0_type_int_tuple, 0 ) );

        if ( tmp_assign_source_76 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mode == NULL );
        var_mode = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_name_30;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_30 = tmp_mvar_value_28;
        CHECK_OBJECT( var_acc );
        tmp_args_element_name_37 = var_acc;
        tmp_args_element_name_38 = (PyObject *)&PyFloat_Type;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 366;
        {
            PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38 };
            tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_30, call_args );
        }

        if ( tmp_assign_source_77 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_acc;
            assert( old != NULL );
            var_acc = tmp_assign_source_77;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_name_31;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_args_element_name_40;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 367;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_31 = tmp_mvar_value_29;
        CHECK_OBJECT( var_iter );
        tmp_args_element_name_39 = var_iter;
        tmp_args_element_name_40 = (PyObject *)&PyLong_Type;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = { tmp_args_element_name_39, tmp_args_element_name_40 };
            tmp_assign_source_78 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_31, call_args );
        }

        if ( tmp_assign_source_78 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_majiter == NULL );
        var_majiter = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = const_int_0;
        assert( var_majiter_prev == NULL );
        Py_INCREF( tmp_assign_source_79 );
        var_majiter_prev = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_name_32;
        PyObject *tmp_mvar_value_30;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 371;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_32 = tmp_mvar_value_30;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 371;
        tmp_assign_source_80 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_32, &PyTuple_GET_ITEM( const_tuple_int_0_type_float_tuple, 0 ) );

        if ( tmp_assign_source_80 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_alpha == NULL );
        var_alpha = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_name_33;
        PyObject *tmp_mvar_value_31;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 372;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_33 = tmp_mvar_value_31;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 372;
        tmp_assign_source_81 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_33, &PyTuple_GET_ITEM( const_tuple_int_0_type_float_tuple, 0 ) );

        if ( tmp_assign_source_81 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f0 == NULL );
        var_f0 = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_name_34;
        PyObject *tmp_mvar_value_32;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 373;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_34 = tmp_mvar_value_32;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 373;
        tmp_assign_source_82 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_34, &PyTuple_GET_ITEM( const_tuple_int_0_type_float_tuple, 0 ) );

        if ( tmp_assign_source_82 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_gs == NULL );
        var_gs = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_name_35;
        PyObject *tmp_mvar_value_33;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_33 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 374;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_35 = tmp_mvar_value_33;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 374;
        tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_35, &PyTuple_GET_ITEM( const_tuple_int_0_type_float_tuple, 0 ) );

        if ( tmp_assign_source_83 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_h1 == NULL );
        var_h1 = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_name_36;
        PyObject *tmp_mvar_value_34;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_34 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_36 = tmp_mvar_value_34;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 375;
        tmp_assign_source_84 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_36, &PyTuple_GET_ITEM( const_tuple_int_0_type_float_tuple, 0 ) );

        if ( tmp_assign_source_84 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_h2 == NULL );
        var_h2 = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_name_37;
        PyObject *tmp_mvar_value_35;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_35 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 376;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_37 = tmp_mvar_value_35;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 376;
        tmp_assign_source_85 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_37, &PyTuple_GET_ITEM( const_tuple_int_0_type_float_tuple, 0 ) );

        if ( tmp_assign_source_85 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_h3 == NULL );
        var_h3 = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_name_38;
        PyObject *tmp_mvar_value_36;
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_36 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 377;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_38 = tmp_mvar_value_36;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 377;
        tmp_assign_source_86 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_38, &PyTuple_GET_ITEM( const_tuple_int_0_type_float_tuple, 0 ) );

        if ( tmp_assign_source_86 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_h4 == NULL );
        var_h4 = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_name_39;
        PyObject *tmp_mvar_value_37;
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_37 == NULL ))
        {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_37 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 378;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_39 = tmp_mvar_value_37;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 378;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_39, &PyTuple_GET_ITEM( const_tuple_int_0_type_float_tuple, 0 ) );

        if ( tmp_assign_source_87 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_t == NULL );
        var_t = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_name_40;
        PyObject *tmp_mvar_value_38;
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_38 == NULL ))
        {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_38 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_40 = tmp_mvar_value_38;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 379;
        tmp_assign_source_88 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_40, &PyTuple_GET_ITEM( const_tuple_int_0_type_float_tuple, 0 ) );

        if ( tmp_assign_source_88 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_t0 == NULL );
        var_t0 = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_name_41;
        PyObject *tmp_mvar_value_39;
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_39 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_41 = tmp_mvar_value_39;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 380;
        tmp_assign_source_89 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_41, &PyTuple_GET_ITEM( const_tuple_int_0_type_float_tuple, 0 ) );

        if ( tmp_assign_source_89 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tol == NULL );
        var_tol = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_name_42;
        PyObject *tmp_mvar_value_40;
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_40 == NULL ))
        {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_40 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 381;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_42 = tmp_mvar_value_40;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 381;
        tmp_assign_source_90 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_42, &PyTuple_GET_ITEM( const_tuple_int_0_type_int_tuple, 0 ) );

        if ( tmp_assign_source_90 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 381;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_iexact == NULL );
        var_iexact = tmp_assign_source_90;
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_name_43;
        PyObject *tmp_mvar_value_41;
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_41 == NULL ))
        {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_41 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 382;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_43 = tmp_mvar_value_41;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 382;
        tmp_assign_source_91 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_43, &PyTuple_GET_ITEM( const_tuple_int_0_type_int_tuple, 0 ) );

        if ( tmp_assign_source_91 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_incons == NULL );
        var_incons = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_name_44;
        PyObject *tmp_mvar_value_42;
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_42 == NULL ))
        {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_42 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 383;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_44 = tmp_mvar_value_42;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 383;
        tmp_assign_source_92 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_44, &PyTuple_GET_ITEM( const_tuple_int_0_type_int_tuple, 0 ) );

        if ( tmp_assign_source_92 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ireset == NULL );
        var_ireset = tmp_assign_source_92;
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_name_45;
        PyObject *tmp_mvar_value_43;
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_43 == NULL ))
        {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_43 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 384;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_45 = tmp_mvar_value_43;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 384;
        tmp_assign_source_93 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_45, &PyTuple_GET_ITEM( const_tuple_int_0_type_int_tuple, 0 ) );

        if ( tmp_assign_source_93 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_itermx == NULL );
        var_itermx = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_name_46;
        PyObject *tmp_mvar_value_44;
        tmp_mvar_value_44 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_44 == NULL ))
        {
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_44 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 385;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_46 = tmp_mvar_value_44;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 385;
        tmp_assign_source_94 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_46, &PyTuple_GET_ITEM( const_tuple_int_0_type_int_tuple, 0 ) );

        if ( tmp_assign_source_94 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_line == NULL );
        var_line = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_name_47;
        PyObject *tmp_mvar_value_45;
        tmp_mvar_value_45 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_45 == NULL ))
        {
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_45 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_47 = tmp_mvar_value_45;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 386;
        tmp_assign_source_95 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_47, &PyTuple_GET_ITEM( const_tuple_int_0_type_int_tuple, 0 ) );

        if ( tmp_assign_source_95 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_n1;
            assert( old != NULL );
            var_n1 = tmp_assign_source_95;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_name_48;
        PyObject *tmp_mvar_value_46;
        tmp_mvar_value_46 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_46 == NULL ))
        {
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_46 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 387;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_48 = tmp_mvar_value_46;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 387;
        tmp_assign_source_96 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_48, &PyTuple_GET_ITEM( const_tuple_int_0_type_int_tuple, 0 ) );

        if ( tmp_assign_source_96 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n2 == NULL );
        var_n2 = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_name_49;
        PyObject *tmp_mvar_value_47;
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_47 == NULL ))
        {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_47 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 388;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_49 = tmp_mvar_value_47;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 388;
        tmp_assign_source_97 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_49, &PyTuple_GET_ITEM( const_tuple_int_0_type_int_tuple, 0 ) );

        if ( tmp_assign_source_97 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n3 == NULL );
        var_n3 = tmp_assign_source_97;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        CHECK_OBJECT( par_iprint );
        tmp_compexpr_left_15 = par_iprint;
        tmp_compexpr_right_15 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_18;
        }
        else
        {
            goto branch_no_18;
        }
        branch_yes_18:;
        {
            PyObject *tmp_called_name_50;
            PyObject *tmp_call_result_7;
            tmp_called_name_50 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_50 != NULL );
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 392;
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_50, &PyTuple_GET_ITEM( const_tuple_str_digest_9e1b964a5bf465dfd570026352a019ea_tuple, 0 ) );

            if ( tmp_call_result_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 392;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_7 );
        }
        branch_no_18:;
    }
    loop_start_4:;
    {
        nuitka_bool tmp_condition_result_19;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        PyObject *tmp_compexpr_left_17;
        PyObject *tmp_compexpr_right_17;
        CHECK_OBJECT( var_mode );
        tmp_compexpr_left_16 = var_mode;
        tmp_compexpr_right_16 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        CHECK_OBJECT( var_mode );
        tmp_compexpr_left_17 = var_mode;
        tmp_compexpr_right_17 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_19 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_19 = tmp_or_left_value_2;
        or_end_2:;
        if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_19;
        }
        else
        {
            goto branch_no_19;
        }
        branch_yes_19:;
        {
            PyObject *tmp_assign_source_98;
            PyObject *tmp_called_name_51;
            PyObject *tmp_args_element_name_41;
            CHECK_OBJECT( par_func );
            tmp_called_name_51 = par_func;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_41 = var_x;
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 399;
            {
                PyObject *call_args[] = { tmp_args_element_name_41 };
                tmp_assign_source_98 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_51, call_args );
            }

            if ( tmp_assign_source_98 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 399;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_fx;
                var_fx = tmp_assign_source_98;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_99;
            PyObject *tmp_float_arg_1;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_mvar_value_48;
            PyObject *tmp_args_element_name_42;
            tmp_mvar_value_48 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_48 == NULL ))
            {
                tmp_mvar_value_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_48 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 401;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_26;
            }

            tmp_called_instance_9 = tmp_mvar_value_48;
            CHECK_OBJECT( var_fx );
            tmp_args_element_name_42 = var_fx;
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 401;
            {
                PyObject *call_args[] = { tmp_args_element_name_42 };
                tmp_float_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_asarray, call_args );
            }

            if ( tmp_float_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 401;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_26;
            }
            tmp_assign_source_99 = TO_FLOAT( tmp_float_arg_1 );
            Py_DECREF( tmp_float_arg_1 );
            if ( tmp_assign_source_99 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 401;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_26;
            }
            {
                PyObject *old = var_fx;
                assert( old != NULL );
                var_fx = tmp_assign_source_99;
                Py_DECREF( old );
            }

        }
        goto try_end_19;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_3 );
        exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_3 );
        exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_3 );

        if ( exception_keeper_tb_24 == NULL )
        {
            exception_keeper_tb_24 = MAKE_TRACEBACK( frame_fd196b314c9e532c6f62f5120080450d, exception_keeper_lineno_24 );
        }
        else if ( exception_keeper_lineno_24 != 0 )
        {
            exception_keeper_tb_24 = ADD_TRACEBACK( exception_keeper_tb_24, frame_fd196b314c9e532c6f62f5120080450d, exception_keeper_lineno_24 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_24, &exception_keeper_value_24, &exception_keeper_tb_24 );
        PyException_SetTraceback( exception_keeper_value_24, (PyObject *)exception_keeper_tb_24 );
        PUBLISH_EXCEPTION( &exception_keeper_type_24, &exception_keeper_value_24, &exception_keeper_tb_24 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_compexpr_left_18;
            PyObject *tmp_compexpr_right_18;
            tmp_compexpr_left_18 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_18 = const_tuple_type_TypeError_type_ValueError_tuple;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_18, tmp_compexpr_right_18 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 402;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_27;
            }
            tmp_condition_result_20 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_20;
            }
            else
            {
                goto branch_no_20;
            }
            branch_yes_20:;
            {
                PyObject *tmp_raise_type_8;
                PyObject *tmp_make_exception_arg_8;
                tmp_make_exception_arg_8 = const_str_digest_3a09f10bf61a22d96dab68163bdd5089;
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 403;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_8 };
                    tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_8 == NULL) );
                exception_type = tmp_raise_type_8;
                exception_lineno = 403;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_27;
            }
            goto branch_end_20;
            branch_no_20:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 400;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_fd196b314c9e532c6f62f5120080450d->m_frame) frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
            branch_end_20:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
        return NULL;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto frame_exception_exit_1;
        // End of try:
        // End of try:
        try_end_19:;
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_dict_name_4;
            PyObject *tmp_key_name_4;
            PyObject *tmp_dict_value_4;
            int tmp_truth_name_4;
            CHECK_OBJECT( var_cons );
            tmp_dict_name_4 = var_cons;
            tmp_key_name_4 = const_str_plain_eq;
            tmp_dict_value_4 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
            if ( tmp_dict_value_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 405;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_4 = CHECK_IF_TRUE( tmp_dict_value_4 );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dict_value_4 );

                exception_lineno = 405;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_21 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_dict_value_4 );
            if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_21;
            }
            else
            {
                goto branch_no_21;
            }
            branch_yes_21:;
            {
                PyObject *tmp_assign_source_100;
                PyObject *tmp_called_name_52;
                PyObject *tmp_mvar_value_49;
                PyObject *tmp_args_element_name_43;
                tmp_mvar_value_49 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_concatenate );

                if (unlikely( tmp_mvar_value_49 == NULL ))
                {
                    tmp_mvar_value_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_concatenate );
                }

                if ( tmp_mvar_value_49 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "concatenate" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 406;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_52 = tmp_mvar_value_49;
                // Tried code:
                {
                    PyObject *tmp_assign_source_101;
                    PyObject *tmp_iter_arg_10;
                    PyObject *tmp_dict_name_5;
                    PyObject *tmp_key_name_5;
                    CHECK_OBJECT( var_cons );
                    tmp_dict_name_5 = var_cons;
                    tmp_key_name_5 = const_str_plain_eq;
                    tmp_iter_arg_10 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
                    if ( tmp_iter_arg_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 407;
                        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_28;
                    }
                    tmp_assign_source_101 = MAKE_ITERATOR( tmp_iter_arg_10 );
                    Py_DECREF( tmp_iter_arg_10 );
                    if ( tmp_assign_source_101 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 406;
                        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_28;
                    }
                    {
                        PyObject *old = tmp_listcomp_3__$0;
                        tmp_listcomp_3__$0 = tmp_assign_source_101;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_102;
                    tmp_assign_source_102 = PyList_New( 0 );
                    {
                        PyObject *old = tmp_listcomp_3__contraction;
                        tmp_listcomp_3__contraction = tmp_assign_source_102;
                        Py_XDECREF( old );
                    }

                }
                MAKE_OR_REUSE_FRAME( cache_frame_fe6002ea996736cfa1359f4d9f4784e2_4, codeobj_fe6002ea996736cfa1359f4d9f4784e2, module_scipy$optimize$slsqp, sizeof(void *)+sizeof(void *) );
                frame_fe6002ea996736cfa1359f4d9f4784e2_4 = cache_frame_fe6002ea996736cfa1359f4d9f4784e2_4;

                // Push the new frame as the currently active one.
                pushFrameStack( frame_fe6002ea996736cfa1359f4d9f4784e2_4 );

                // Mark the frame object as in use, ref count 1 will be up for reuse.
                assert( Py_REFCNT( frame_fe6002ea996736cfa1359f4d9f4784e2_4 ) == 2 ); // Frame stack

                // Framed code:
                // Tried code:
                loop_start_5:;
                {
                    PyObject *tmp_next_source_4;
                    PyObject *tmp_assign_source_103;
                    CHECK_OBJECT( tmp_listcomp_3__$0 );
                    tmp_next_source_4 = tmp_listcomp_3__$0;
                    tmp_assign_source_103 = ITERATOR_NEXT( tmp_next_source_4 );
                    if ( tmp_assign_source_103 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_5;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_2 = "oo";
                            exception_lineno = 406;
                            goto try_except_handler_29;
                        }
                    }

                    {
                        PyObject *old = tmp_listcomp_3__iter_value_0;
                        tmp_listcomp_3__iter_value_0 = tmp_assign_source_103;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_104;
                    CHECK_OBJECT( tmp_listcomp_3__iter_value_0 );
                    tmp_assign_source_104 = tmp_listcomp_3__iter_value_0;
                    {
                        PyObject *old = outline_2_var_con;
                        outline_2_var_con = tmp_assign_source_104;
                        Py_INCREF( outline_2_var_con );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_append_list_3;
                    PyObject *tmp_append_value_3;
                    PyObject *tmp_called_name_53;
                    PyObject *tmp_mvar_value_50;
                    PyObject *tmp_args_element_name_44;
                    PyObject *tmp_dircall_arg1_3;
                    PyObject *tmp_subscribed_name_20;
                    PyObject *tmp_subscript_name_20;
                    PyObject *tmp_dircall_arg2_3;
                    PyObject *tmp_tuple_element_9;
                    PyObject *tmp_dircall_arg3_3;
                    PyObject *tmp_subscribed_name_21;
                    PyObject *tmp_subscript_name_21;
                    CHECK_OBJECT( tmp_listcomp_3__contraction );
                    tmp_append_list_3 = tmp_listcomp_3__contraction;
                    tmp_mvar_value_50 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_atleast_1d );

                    if (unlikely( tmp_mvar_value_50 == NULL ))
                    {
                        tmp_mvar_value_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
                    }

                    if ( tmp_mvar_value_50 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atleast_1d" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 406;
                        type_description_2 = "oo";
                        goto try_except_handler_29;
                    }

                    tmp_called_name_53 = tmp_mvar_value_50;
                    CHECK_OBJECT( outline_2_var_con );
                    tmp_subscribed_name_20 = outline_2_var_con;
                    tmp_subscript_name_20 = const_str_plain_fun;
                    tmp_dircall_arg1_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
                    if ( tmp_dircall_arg1_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 406;
                        type_description_2 = "oo";
                        goto try_except_handler_29;
                    }
                    CHECK_OBJECT( var_x );
                    tmp_tuple_element_9 = var_x;
                    tmp_dircall_arg2_3 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_9 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_9 );
                    CHECK_OBJECT( outline_2_var_con );
                    tmp_subscribed_name_21 = outline_2_var_con;
                    tmp_subscript_name_21 = const_str_plain_args;
                    tmp_dircall_arg3_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
                    if ( tmp_dircall_arg3_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_dircall_arg1_3 );
                        Py_DECREF( tmp_dircall_arg2_3 );

                        exception_lineno = 406;
                        type_description_2 = "oo";
                        goto try_except_handler_29;
                    }

                    {
                        PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
                        tmp_args_element_name_44 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
                    }
                    if ( tmp_args_element_name_44 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 406;
                        type_description_2 = "oo";
                        goto try_except_handler_29;
                    }
                    frame_fe6002ea996736cfa1359f4d9f4784e2_4->m_frame.f_lineno = 406;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_44 };
                        tmp_append_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_53, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_44 );
                    if ( tmp_append_value_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 406;
                        type_description_2 = "oo";
                        goto try_except_handler_29;
                    }
                    assert( PyList_Check( tmp_append_list_3 ) );
                    tmp_res = PyList_Append( tmp_append_list_3, tmp_append_value_3 );
                    Py_DECREF( tmp_append_value_3 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 406;
                        type_description_2 = "oo";
                        goto try_except_handler_29;
                    }
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 406;
                    type_description_2 = "oo";
                    goto try_except_handler_29;
                }
                goto loop_start_5;
                loop_end_5:;
                CHECK_OBJECT( tmp_listcomp_3__contraction );
                tmp_args_element_name_43 = tmp_listcomp_3__contraction;
                Py_INCREF( tmp_args_element_name_43 );
                goto try_return_handler_29;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
                return NULL;
                // Return handler code:
                try_return_handler_29:;
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
                try_except_handler_29:;
                exception_keeper_type_26 = exception_type;
                exception_keeper_value_26 = exception_value;
                exception_keeper_tb_26 = exception_tb;
                exception_keeper_lineno_26 = exception_lineno;
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
                exception_type = exception_keeper_type_26;
                exception_value = exception_keeper_value_26;
                exception_tb = exception_keeper_tb_26;
                exception_lineno = exception_keeper_lineno_26;

                goto frame_exception_exit_4;
                // End of try:

#if 0
                RESTORE_FRAME_EXCEPTION( frame_fe6002ea996736cfa1359f4d9f4784e2_4 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto frame_no_exception_3;

                frame_return_exit_4:;
#if 0
                RESTORE_FRAME_EXCEPTION( frame_fe6002ea996736cfa1359f4d9f4784e2_4 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto try_return_handler_28;

                frame_exception_exit_4:;

#if 0
                RESTORE_FRAME_EXCEPTION( frame_fe6002ea996736cfa1359f4d9f4784e2_4 );
#endif

                if ( exception_tb == NULL )
                {
                    exception_tb = MAKE_TRACEBACK( frame_fe6002ea996736cfa1359f4d9f4784e2_4, exception_lineno );
                }
                else if ( exception_tb->tb_frame != &frame_fe6002ea996736cfa1359f4d9f4784e2_4->m_frame )
                {
                    exception_tb = ADD_TRACEBACK( exception_tb, frame_fe6002ea996736cfa1359f4d9f4784e2_4, exception_lineno );
                }

                // Attachs locals to frame if any.
                Nuitka_Frame_AttachLocals(
                    (struct Nuitka_FrameObject *)frame_fe6002ea996736cfa1359f4d9f4784e2_4,
                    type_description_2,
                    outline_2_var_con,
                    var_x
                );


                // Release cached frame.
                if ( frame_fe6002ea996736cfa1359f4d9f4784e2_4 == cache_frame_fe6002ea996736cfa1359f4d9f4784e2_4 )
                {
                    Py_DECREF( frame_fe6002ea996736cfa1359f4d9f4784e2_4 );
                }
                cache_frame_fe6002ea996736cfa1359f4d9f4784e2_4 = NULL;

                assertFrameObject( frame_fe6002ea996736cfa1359f4d9f4784e2_4 );

                // Put the previous frame back on top.
                popFrameStack();

                // Return the error.
                goto nested_frame_exit_3;

                frame_no_exception_3:;
                goto skip_nested_handling_3;
                nested_frame_exit_3:;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_28;
                skip_nested_handling_3:;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
                return NULL;
                // Return handler code:
                try_return_handler_28:;
                Py_XDECREF( outline_2_var_con );
                outline_2_var_con = NULL;

                goto outline_result_4;
                // Exception handler code:
                try_except_handler_28:;
                exception_keeper_type_27 = exception_type;
                exception_keeper_value_27 = exception_value;
                exception_keeper_tb_27 = exception_tb;
                exception_keeper_lineno_27 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( outline_2_var_con );
                outline_2_var_con = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_27;
                exception_value = exception_keeper_value_27;
                exception_tb = exception_keeper_tb_27;
                exception_lineno = exception_keeper_lineno_27;

                goto outline_exception_3;
                // End of try:
                // Return statement must have exited already.
                NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
                return NULL;
                outline_exception_3:;
                exception_lineno = 406;
                goto frame_exception_exit_1;
                outline_result_4:;
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 406;
                {
                    PyObject *call_args[] = { tmp_args_element_name_43 };
                    tmp_assign_source_100 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_52, call_args );
                }

                Py_DECREF( tmp_args_element_name_43 );
                if ( tmp_assign_source_100 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 406;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_c_eq;
                    var_c_eq = tmp_assign_source_100;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_21;
            branch_no_21:;
            {
                PyObject *tmp_assign_source_105;
                PyObject *tmp_called_name_54;
                PyObject *tmp_mvar_value_51;
                tmp_mvar_value_51 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_zeros );

                if (unlikely( tmp_mvar_value_51 == NULL ))
                {
                    tmp_mvar_value_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
                }

                if ( tmp_mvar_value_51 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 409;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_54 = tmp_mvar_value_51;
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 409;
                tmp_assign_source_105 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_54, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

                if ( tmp_assign_source_105 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 409;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_c_eq;
                    var_c_eq = tmp_assign_source_105;
                    Py_XDECREF( old );
                }

            }
            branch_end_21:;
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_dict_name_6;
            PyObject *tmp_key_name_6;
            PyObject *tmp_dict_value_5;
            int tmp_truth_name_5;
            CHECK_OBJECT( var_cons );
            tmp_dict_name_6 = var_cons;
            tmp_key_name_6 = const_str_plain_ineq;
            tmp_dict_value_5 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
            if ( tmp_dict_value_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 410;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_5 = CHECK_IF_TRUE( tmp_dict_value_5 );
            if ( tmp_truth_name_5 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dict_value_5 );

                exception_lineno = 410;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_22 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_dict_value_5 );
            if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_22;
            }
            else
            {
                goto branch_no_22;
            }
            branch_yes_22:;
            {
                PyObject *tmp_assign_source_106;
                PyObject *tmp_called_name_55;
                PyObject *tmp_mvar_value_52;
                PyObject *tmp_args_element_name_45;
                tmp_mvar_value_52 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_concatenate );

                if (unlikely( tmp_mvar_value_52 == NULL ))
                {
                    tmp_mvar_value_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_concatenate );
                }

                if ( tmp_mvar_value_52 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "concatenate" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 411;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_55 = tmp_mvar_value_52;
                // Tried code:
                {
                    PyObject *tmp_assign_source_107;
                    PyObject *tmp_iter_arg_11;
                    PyObject *tmp_dict_name_7;
                    PyObject *tmp_key_name_7;
                    CHECK_OBJECT( var_cons );
                    tmp_dict_name_7 = var_cons;
                    tmp_key_name_7 = const_str_plain_ineq;
                    tmp_iter_arg_11 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
                    if ( tmp_iter_arg_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 412;
                        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_30;
                    }
                    tmp_assign_source_107 = MAKE_ITERATOR( tmp_iter_arg_11 );
                    Py_DECREF( tmp_iter_arg_11 );
                    if ( tmp_assign_source_107 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 411;
                        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_30;
                    }
                    {
                        PyObject *old = tmp_listcomp_4__$0;
                        tmp_listcomp_4__$0 = tmp_assign_source_107;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_108;
                    tmp_assign_source_108 = PyList_New( 0 );
                    {
                        PyObject *old = tmp_listcomp_4__contraction;
                        tmp_listcomp_4__contraction = tmp_assign_source_108;
                        Py_XDECREF( old );
                    }

                }
                MAKE_OR_REUSE_FRAME( cache_frame_d8f3f1e3406cafadf8668d36603c2325_5, codeobj_d8f3f1e3406cafadf8668d36603c2325, module_scipy$optimize$slsqp, sizeof(void *)+sizeof(void *) );
                frame_d8f3f1e3406cafadf8668d36603c2325_5 = cache_frame_d8f3f1e3406cafadf8668d36603c2325_5;

                // Push the new frame as the currently active one.
                pushFrameStack( frame_d8f3f1e3406cafadf8668d36603c2325_5 );

                // Mark the frame object as in use, ref count 1 will be up for reuse.
                assert( Py_REFCNT( frame_d8f3f1e3406cafadf8668d36603c2325_5 ) == 2 ); // Frame stack

                // Framed code:
                // Tried code:
                loop_start_6:;
                {
                    PyObject *tmp_next_source_5;
                    PyObject *tmp_assign_source_109;
                    CHECK_OBJECT( tmp_listcomp_4__$0 );
                    tmp_next_source_5 = tmp_listcomp_4__$0;
                    tmp_assign_source_109 = ITERATOR_NEXT( tmp_next_source_5 );
                    if ( tmp_assign_source_109 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_6;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_2 = "oo";
                            exception_lineno = 411;
                            goto try_except_handler_31;
                        }
                    }

                    {
                        PyObject *old = tmp_listcomp_4__iter_value_0;
                        tmp_listcomp_4__iter_value_0 = tmp_assign_source_109;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_110;
                    CHECK_OBJECT( tmp_listcomp_4__iter_value_0 );
                    tmp_assign_source_110 = tmp_listcomp_4__iter_value_0;
                    {
                        PyObject *old = outline_3_var_con;
                        outline_3_var_con = tmp_assign_source_110;
                        Py_INCREF( outline_3_var_con );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_append_list_4;
                    PyObject *tmp_append_value_4;
                    PyObject *tmp_called_name_56;
                    PyObject *tmp_mvar_value_53;
                    PyObject *tmp_args_element_name_46;
                    PyObject *tmp_dircall_arg1_4;
                    PyObject *tmp_subscribed_name_22;
                    PyObject *tmp_subscript_name_22;
                    PyObject *tmp_dircall_arg2_4;
                    PyObject *tmp_tuple_element_10;
                    PyObject *tmp_dircall_arg3_4;
                    PyObject *tmp_subscribed_name_23;
                    PyObject *tmp_subscript_name_23;
                    CHECK_OBJECT( tmp_listcomp_4__contraction );
                    tmp_append_list_4 = tmp_listcomp_4__contraction;
                    tmp_mvar_value_53 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_atleast_1d );

                    if (unlikely( tmp_mvar_value_53 == NULL ))
                    {
                        tmp_mvar_value_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
                    }

                    if ( tmp_mvar_value_53 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atleast_1d" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 411;
                        type_description_2 = "oo";
                        goto try_except_handler_31;
                    }

                    tmp_called_name_56 = tmp_mvar_value_53;
                    CHECK_OBJECT( outline_3_var_con );
                    tmp_subscribed_name_22 = outline_3_var_con;
                    tmp_subscript_name_22 = const_str_plain_fun;
                    tmp_dircall_arg1_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
                    if ( tmp_dircall_arg1_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 411;
                        type_description_2 = "oo";
                        goto try_except_handler_31;
                    }
                    CHECK_OBJECT( var_x );
                    tmp_tuple_element_10 = var_x;
                    tmp_dircall_arg2_4 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_10 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_4, 0, tmp_tuple_element_10 );
                    CHECK_OBJECT( outline_3_var_con );
                    tmp_subscribed_name_23 = outline_3_var_con;
                    tmp_subscript_name_23 = const_str_plain_args;
                    tmp_dircall_arg3_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_23, tmp_subscript_name_23 );
                    if ( tmp_dircall_arg3_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_dircall_arg1_4 );
                        Py_DECREF( tmp_dircall_arg2_4 );

                        exception_lineno = 411;
                        type_description_2 = "oo";
                        goto try_except_handler_31;
                    }

                    {
                        PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4, tmp_dircall_arg3_4};
                        tmp_args_element_name_46 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
                    }
                    if ( tmp_args_element_name_46 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 411;
                        type_description_2 = "oo";
                        goto try_except_handler_31;
                    }
                    frame_d8f3f1e3406cafadf8668d36603c2325_5->m_frame.f_lineno = 411;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_46 };
                        tmp_append_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_56, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_46 );
                    if ( tmp_append_value_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 411;
                        type_description_2 = "oo";
                        goto try_except_handler_31;
                    }
                    assert( PyList_Check( tmp_append_list_4 ) );
                    tmp_res = PyList_Append( tmp_append_list_4, tmp_append_value_4 );
                    Py_DECREF( tmp_append_value_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 411;
                        type_description_2 = "oo";
                        goto try_except_handler_31;
                    }
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 411;
                    type_description_2 = "oo";
                    goto try_except_handler_31;
                }
                goto loop_start_6;
                loop_end_6:;
                CHECK_OBJECT( tmp_listcomp_4__contraction );
                tmp_args_element_name_45 = tmp_listcomp_4__contraction;
                Py_INCREF( tmp_args_element_name_45 );
                goto try_return_handler_31;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
                return NULL;
                // Return handler code:
                try_return_handler_31:;
                CHECK_OBJECT( (PyObject *)tmp_listcomp_4__$0 );
                Py_DECREF( tmp_listcomp_4__$0 );
                tmp_listcomp_4__$0 = NULL;

                CHECK_OBJECT( (PyObject *)tmp_listcomp_4__contraction );
                Py_DECREF( tmp_listcomp_4__contraction );
                tmp_listcomp_4__contraction = NULL;

                Py_XDECREF( tmp_listcomp_4__iter_value_0 );
                tmp_listcomp_4__iter_value_0 = NULL;

                goto frame_return_exit_5;
                // Exception handler code:
                try_except_handler_31:;
                exception_keeper_type_28 = exception_type;
                exception_keeper_value_28 = exception_value;
                exception_keeper_tb_28 = exception_tb;
                exception_keeper_lineno_28 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_listcomp_4__$0 );
                Py_DECREF( tmp_listcomp_4__$0 );
                tmp_listcomp_4__$0 = NULL;

                CHECK_OBJECT( (PyObject *)tmp_listcomp_4__contraction );
                Py_DECREF( tmp_listcomp_4__contraction );
                tmp_listcomp_4__contraction = NULL;

                Py_XDECREF( tmp_listcomp_4__iter_value_0 );
                tmp_listcomp_4__iter_value_0 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_28;
                exception_value = exception_keeper_value_28;
                exception_tb = exception_keeper_tb_28;
                exception_lineno = exception_keeper_lineno_28;

                goto frame_exception_exit_5;
                // End of try:

#if 0
                RESTORE_FRAME_EXCEPTION( frame_d8f3f1e3406cafadf8668d36603c2325_5 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto frame_no_exception_4;

                frame_return_exit_5:;
#if 0
                RESTORE_FRAME_EXCEPTION( frame_d8f3f1e3406cafadf8668d36603c2325_5 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto try_return_handler_30;

                frame_exception_exit_5:;

#if 0
                RESTORE_FRAME_EXCEPTION( frame_d8f3f1e3406cafadf8668d36603c2325_5 );
#endif

                if ( exception_tb == NULL )
                {
                    exception_tb = MAKE_TRACEBACK( frame_d8f3f1e3406cafadf8668d36603c2325_5, exception_lineno );
                }
                else if ( exception_tb->tb_frame != &frame_d8f3f1e3406cafadf8668d36603c2325_5->m_frame )
                {
                    exception_tb = ADD_TRACEBACK( exception_tb, frame_d8f3f1e3406cafadf8668d36603c2325_5, exception_lineno );
                }

                // Attachs locals to frame if any.
                Nuitka_Frame_AttachLocals(
                    (struct Nuitka_FrameObject *)frame_d8f3f1e3406cafadf8668d36603c2325_5,
                    type_description_2,
                    outline_3_var_con,
                    var_x
                );


                // Release cached frame.
                if ( frame_d8f3f1e3406cafadf8668d36603c2325_5 == cache_frame_d8f3f1e3406cafadf8668d36603c2325_5 )
                {
                    Py_DECREF( frame_d8f3f1e3406cafadf8668d36603c2325_5 );
                }
                cache_frame_d8f3f1e3406cafadf8668d36603c2325_5 = NULL;

                assertFrameObject( frame_d8f3f1e3406cafadf8668d36603c2325_5 );

                // Put the previous frame back on top.
                popFrameStack();

                // Return the error.
                goto nested_frame_exit_4;

                frame_no_exception_4:;
                goto skip_nested_handling_4;
                nested_frame_exit_4:;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_30;
                skip_nested_handling_4:;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
                return NULL;
                // Return handler code:
                try_return_handler_30:;
                Py_XDECREF( outline_3_var_con );
                outline_3_var_con = NULL;

                goto outline_result_5;
                // Exception handler code:
                try_except_handler_30:;
                exception_keeper_type_29 = exception_type;
                exception_keeper_value_29 = exception_value;
                exception_keeper_tb_29 = exception_tb;
                exception_keeper_lineno_29 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( outline_3_var_con );
                outline_3_var_con = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_29;
                exception_value = exception_keeper_value_29;
                exception_tb = exception_keeper_tb_29;
                exception_lineno = exception_keeper_lineno_29;

                goto outline_exception_4;
                // End of try:
                // Return statement must have exited already.
                NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
                return NULL;
                outline_exception_4:;
                exception_lineno = 411;
                goto frame_exception_exit_1;
                outline_result_5:;
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 411;
                {
                    PyObject *call_args[] = { tmp_args_element_name_45 };
                    tmp_assign_source_106 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_55, call_args );
                }

                Py_DECREF( tmp_args_element_name_45 );
                if ( tmp_assign_source_106 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 411;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_c_ieq;
                    var_c_ieq = tmp_assign_source_106;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_22;
            branch_no_22:;
            {
                PyObject *tmp_assign_source_111;
                PyObject *tmp_called_name_57;
                PyObject *tmp_mvar_value_54;
                tmp_mvar_value_54 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_zeros );

                if (unlikely( tmp_mvar_value_54 == NULL ))
                {
                    tmp_mvar_value_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
                }

                if ( tmp_mvar_value_54 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 414;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_57 = tmp_mvar_value_54;
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 414;
                tmp_assign_source_111 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_57, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

                if ( tmp_assign_source_111 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 414;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_c_ieq;
                    var_c_ieq = tmp_assign_source_111;
                    Py_XDECREF( old );
                }

            }
            branch_end_22:;
        }
        {
            PyObject *tmp_assign_source_112;
            PyObject *tmp_called_name_58;
            PyObject *tmp_mvar_value_55;
            PyObject *tmp_args_element_name_47;
            PyObject *tmp_tuple_element_11;
            tmp_mvar_value_55 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_concatenate );

            if (unlikely( tmp_mvar_value_55 == NULL ))
            {
                tmp_mvar_value_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_concatenate );
            }

            if ( tmp_mvar_value_55 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "concatenate" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 417;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_58 = tmp_mvar_value_55;
            CHECK_OBJECT( var_c_eq );
            tmp_tuple_element_11 = var_c_eq;
            tmp_args_element_name_47 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_element_name_47, 0, tmp_tuple_element_11 );
            CHECK_OBJECT( var_c_ieq );
            tmp_tuple_element_11 = var_c_ieq;
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_element_name_47, 1, tmp_tuple_element_11 );
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 417;
            {
                PyObject *call_args[] = { tmp_args_element_name_47 };
                tmp_assign_source_112 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_58, call_args );
            }

            Py_DECREF( tmp_args_element_name_47 );
            if ( tmp_assign_source_112 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 417;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_c;
                var_c = tmp_assign_source_112;
                Py_XDECREF( old );
            }

        }
        branch_no_19:;
    }
    {
        nuitka_bool tmp_condition_result_23;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_compexpr_left_19;
        PyObject *tmp_compexpr_right_19;
        PyObject *tmp_compexpr_left_20;
        PyObject *tmp_compexpr_right_20;
        CHECK_OBJECT( var_mode );
        tmp_compexpr_left_19 = var_mode;
        tmp_compexpr_right_19 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_19, tmp_compexpr_right_19 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_3 == 1 )
        {
            goto or_left_3;
        }
        else
        {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT( var_mode );
        tmp_compexpr_left_20 = var_mode;
        tmp_compexpr_right_20 = const_int_neg_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_20, tmp_compexpr_right_20 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_23 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_condition_result_23 = tmp_or_left_value_3;
        or_end_3:;
        if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_23;
        }
        else
        {
            goto branch_no_23;
        }
        branch_yes_23:;
        {
            PyObject *tmp_assign_source_113;
            PyObject *tmp_called_name_59;
            PyObject *tmp_mvar_value_56;
            PyObject *tmp_args_element_name_48;
            PyObject *tmp_called_name_60;
            PyObject *tmp_args_element_name_49;
            PyObject *tmp_args_element_name_50;
            tmp_mvar_value_56 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_append );

            if (unlikely( tmp_mvar_value_56 == NULL ))
            {
                tmp_mvar_value_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_append );
            }

            if ( tmp_mvar_value_56 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "append" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 423;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_59 = tmp_mvar_value_56;
            CHECK_OBJECT( var_fprime );
            tmp_called_name_60 = var_fprime;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_49 = var_x;
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 423;
            {
                PyObject *call_args[] = { tmp_args_element_name_49 };
                tmp_args_element_name_48 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_60, call_args );
            }

            if ( tmp_args_element_name_48 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_50 = const_float_0_0;
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 423;
            {
                PyObject *call_args[] = { tmp_args_element_name_48, tmp_args_element_name_50 };
                tmp_assign_source_113 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_59, call_args );
            }

            Py_DECREF( tmp_args_element_name_48 );
            if ( tmp_assign_source_113 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_g;
                var_g = tmp_assign_source_113;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_dict_name_8;
            PyObject *tmp_key_name_8;
            PyObject *tmp_dict_value_6;
            int tmp_truth_name_6;
            CHECK_OBJECT( var_cons );
            tmp_dict_name_8 = var_cons;
            tmp_key_name_8 = const_str_plain_eq;
            tmp_dict_value_6 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
            if ( tmp_dict_value_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 426;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_6 = CHECK_IF_TRUE( tmp_dict_value_6 );
            if ( tmp_truth_name_6 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dict_value_6 );

                exception_lineno = 426;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_24 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_dict_value_6 );
            if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_24;
            }
            else
            {
                goto branch_no_24;
            }
            branch_yes_24:;
            {
                PyObject *tmp_assign_source_114;
                PyObject *tmp_called_name_61;
                PyObject *tmp_mvar_value_57;
                PyObject *tmp_args_element_name_51;
                tmp_mvar_value_57 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_vstack );

                if (unlikely( tmp_mvar_value_57 == NULL ))
                {
                    tmp_mvar_value_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_vstack );
                }

                if ( tmp_mvar_value_57 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "vstack" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 427;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_61 = tmp_mvar_value_57;
                // Tried code:
                {
                    PyObject *tmp_assign_source_115;
                    PyObject *tmp_iter_arg_12;
                    PyObject *tmp_dict_name_9;
                    PyObject *tmp_key_name_9;
                    CHECK_OBJECT( var_cons );
                    tmp_dict_name_9 = var_cons;
                    tmp_key_name_9 = const_str_plain_eq;
                    tmp_iter_arg_12 = DICT_GET_ITEM( tmp_dict_name_9, tmp_key_name_9 );
                    if ( tmp_iter_arg_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 428;
                        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_32;
                    }
                    tmp_assign_source_115 = MAKE_ITERATOR( tmp_iter_arg_12 );
                    Py_DECREF( tmp_iter_arg_12 );
                    if ( tmp_assign_source_115 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 427;
                        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_32;
                    }
                    {
                        PyObject *old = tmp_listcomp_5__$0;
                        tmp_listcomp_5__$0 = tmp_assign_source_115;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_116;
                    tmp_assign_source_116 = PyList_New( 0 );
                    {
                        PyObject *old = tmp_listcomp_5__contraction;
                        tmp_listcomp_5__contraction = tmp_assign_source_116;
                        Py_XDECREF( old );
                    }

                }
                MAKE_OR_REUSE_FRAME( cache_frame_b4c556062e363cec2e9419b8a3692f9d_6, codeobj_b4c556062e363cec2e9419b8a3692f9d, module_scipy$optimize$slsqp, sizeof(void *)+sizeof(void *) );
                frame_b4c556062e363cec2e9419b8a3692f9d_6 = cache_frame_b4c556062e363cec2e9419b8a3692f9d_6;

                // Push the new frame as the currently active one.
                pushFrameStack( frame_b4c556062e363cec2e9419b8a3692f9d_6 );

                // Mark the frame object as in use, ref count 1 will be up for reuse.
                assert( Py_REFCNT( frame_b4c556062e363cec2e9419b8a3692f9d_6 ) == 2 ); // Frame stack

                // Framed code:
                // Tried code:
                loop_start_7:;
                {
                    PyObject *tmp_next_source_6;
                    PyObject *tmp_assign_source_117;
                    CHECK_OBJECT( tmp_listcomp_5__$0 );
                    tmp_next_source_6 = tmp_listcomp_5__$0;
                    tmp_assign_source_117 = ITERATOR_NEXT( tmp_next_source_6 );
                    if ( tmp_assign_source_117 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_7;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_2 = "oo";
                            exception_lineno = 427;
                            goto try_except_handler_33;
                        }
                    }

                    {
                        PyObject *old = tmp_listcomp_5__iter_value_0;
                        tmp_listcomp_5__iter_value_0 = tmp_assign_source_117;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_118;
                    CHECK_OBJECT( tmp_listcomp_5__iter_value_0 );
                    tmp_assign_source_118 = tmp_listcomp_5__iter_value_0;
                    {
                        PyObject *old = outline_4_var_con;
                        outline_4_var_con = tmp_assign_source_118;
                        Py_INCREF( outline_4_var_con );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_append_list_5;
                    PyObject *tmp_append_value_5;
                    PyObject *tmp_dircall_arg1_5;
                    PyObject *tmp_subscribed_name_24;
                    PyObject *tmp_subscript_name_24;
                    PyObject *tmp_dircall_arg2_5;
                    PyObject *tmp_tuple_element_12;
                    PyObject *tmp_dircall_arg3_5;
                    PyObject *tmp_subscribed_name_25;
                    PyObject *tmp_subscript_name_25;
                    CHECK_OBJECT( tmp_listcomp_5__contraction );
                    tmp_append_list_5 = tmp_listcomp_5__contraction;
                    CHECK_OBJECT( outline_4_var_con );
                    tmp_subscribed_name_24 = outline_4_var_con;
                    tmp_subscript_name_24 = const_str_plain_jac;
                    tmp_dircall_arg1_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_24, tmp_subscript_name_24 );
                    if ( tmp_dircall_arg1_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 427;
                        type_description_2 = "oo";
                        goto try_except_handler_33;
                    }
                    CHECK_OBJECT( var_x );
                    tmp_tuple_element_12 = var_x;
                    tmp_dircall_arg2_5 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_12 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_5, 0, tmp_tuple_element_12 );
                    CHECK_OBJECT( outline_4_var_con );
                    tmp_subscribed_name_25 = outline_4_var_con;
                    tmp_subscript_name_25 = const_str_plain_args;
                    tmp_dircall_arg3_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_25, tmp_subscript_name_25 );
                    if ( tmp_dircall_arg3_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_dircall_arg1_5 );
                        Py_DECREF( tmp_dircall_arg2_5 );

                        exception_lineno = 427;
                        type_description_2 = "oo";
                        goto try_except_handler_33;
                    }

                    {
                        PyObject *dir_call_args[] = {tmp_dircall_arg1_5, tmp_dircall_arg2_5, tmp_dircall_arg3_5};
                        tmp_append_value_5 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
                    }
                    if ( tmp_append_value_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 427;
                        type_description_2 = "oo";
                        goto try_except_handler_33;
                    }
                    assert( PyList_Check( tmp_append_list_5 ) );
                    tmp_res = PyList_Append( tmp_append_list_5, tmp_append_value_5 );
                    Py_DECREF( tmp_append_value_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 427;
                        type_description_2 = "oo";
                        goto try_except_handler_33;
                    }
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 427;
                    type_description_2 = "oo";
                    goto try_except_handler_33;
                }
                goto loop_start_7;
                loop_end_7:;
                CHECK_OBJECT( tmp_listcomp_5__contraction );
                tmp_args_element_name_51 = tmp_listcomp_5__contraction;
                Py_INCREF( tmp_args_element_name_51 );
                goto try_return_handler_33;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
                return NULL;
                // Return handler code:
                try_return_handler_33:;
                CHECK_OBJECT( (PyObject *)tmp_listcomp_5__$0 );
                Py_DECREF( tmp_listcomp_5__$0 );
                tmp_listcomp_5__$0 = NULL;

                CHECK_OBJECT( (PyObject *)tmp_listcomp_5__contraction );
                Py_DECREF( tmp_listcomp_5__contraction );
                tmp_listcomp_5__contraction = NULL;

                Py_XDECREF( tmp_listcomp_5__iter_value_0 );
                tmp_listcomp_5__iter_value_0 = NULL;

                goto frame_return_exit_6;
                // Exception handler code:
                try_except_handler_33:;
                exception_keeper_type_30 = exception_type;
                exception_keeper_value_30 = exception_value;
                exception_keeper_tb_30 = exception_tb;
                exception_keeper_lineno_30 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_listcomp_5__$0 );
                Py_DECREF( tmp_listcomp_5__$0 );
                tmp_listcomp_5__$0 = NULL;

                CHECK_OBJECT( (PyObject *)tmp_listcomp_5__contraction );
                Py_DECREF( tmp_listcomp_5__contraction );
                tmp_listcomp_5__contraction = NULL;

                Py_XDECREF( tmp_listcomp_5__iter_value_0 );
                tmp_listcomp_5__iter_value_0 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_30;
                exception_value = exception_keeper_value_30;
                exception_tb = exception_keeper_tb_30;
                exception_lineno = exception_keeper_lineno_30;

                goto frame_exception_exit_6;
                // End of try:

#if 0
                RESTORE_FRAME_EXCEPTION( frame_b4c556062e363cec2e9419b8a3692f9d_6 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto frame_no_exception_5;

                frame_return_exit_6:;
#if 0
                RESTORE_FRAME_EXCEPTION( frame_b4c556062e363cec2e9419b8a3692f9d_6 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto try_return_handler_32;

                frame_exception_exit_6:;

#if 0
                RESTORE_FRAME_EXCEPTION( frame_b4c556062e363cec2e9419b8a3692f9d_6 );
#endif

                if ( exception_tb == NULL )
                {
                    exception_tb = MAKE_TRACEBACK( frame_b4c556062e363cec2e9419b8a3692f9d_6, exception_lineno );
                }
                else if ( exception_tb->tb_frame != &frame_b4c556062e363cec2e9419b8a3692f9d_6->m_frame )
                {
                    exception_tb = ADD_TRACEBACK( exception_tb, frame_b4c556062e363cec2e9419b8a3692f9d_6, exception_lineno );
                }

                // Attachs locals to frame if any.
                Nuitka_Frame_AttachLocals(
                    (struct Nuitka_FrameObject *)frame_b4c556062e363cec2e9419b8a3692f9d_6,
                    type_description_2,
                    outline_4_var_con,
                    var_x
                );


                // Release cached frame.
                if ( frame_b4c556062e363cec2e9419b8a3692f9d_6 == cache_frame_b4c556062e363cec2e9419b8a3692f9d_6 )
                {
                    Py_DECREF( frame_b4c556062e363cec2e9419b8a3692f9d_6 );
                }
                cache_frame_b4c556062e363cec2e9419b8a3692f9d_6 = NULL;

                assertFrameObject( frame_b4c556062e363cec2e9419b8a3692f9d_6 );

                // Put the previous frame back on top.
                popFrameStack();

                // Return the error.
                goto nested_frame_exit_5;

                frame_no_exception_5:;
                goto skip_nested_handling_5;
                nested_frame_exit_5:;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_32;
                skip_nested_handling_5:;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
                return NULL;
                // Return handler code:
                try_return_handler_32:;
                Py_XDECREF( outline_4_var_con );
                outline_4_var_con = NULL;

                goto outline_result_6;
                // Exception handler code:
                try_except_handler_32:;
                exception_keeper_type_31 = exception_type;
                exception_keeper_value_31 = exception_value;
                exception_keeper_tb_31 = exception_tb;
                exception_keeper_lineno_31 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( outline_4_var_con );
                outline_4_var_con = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_31;
                exception_value = exception_keeper_value_31;
                exception_tb = exception_keeper_tb_31;
                exception_lineno = exception_keeper_lineno_31;

                goto outline_exception_5;
                // End of try:
                // Return statement must have exited already.
                NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
                return NULL;
                outline_exception_5:;
                exception_lineno = 427;
                goto frame_exception_exit_1;
                outline_result_6:;
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 427;
                {
                    PyObject *call_args[] = { tmp_args_element_name_51 };
                    tmp_assign_source_114 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_61, call_args );
                }

                Py_DECREF( tmp_args_element_name_51 );
                if ( tmp_assign_source_114 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 427;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_a_eq;
                    var_a_eq = tmp_assign_source_114;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_24;
            branch_no_24:;
            {
                PyObject *tmp_assign_source_119;
                PyObject *tmp_called_name_62;
                PyObject *tmp_mvar_value_58;
                PyObject *tmp_args_element_name_52;
                PyObject *tmp_tuple_element_13;
                tmp_mvar_value_58 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_zeros );

                if (unlikely( tmp_mvar_value_58 == NULL ))
                {
                    tmp_mvar_value_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
                }

                if ( tmp_mvar_value_58 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 430;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_62 = tmp_mvar_value_58;
                CHECK_OBJECT( var_meq );
                tmp_tuple_element_13 = var_meq;
                tmp_args_element_name_52 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_13 );
                PyTuple_SET_ITEM( tmp_args_element_name_52, 0, tmp_tuple_element_13 );
                CHECK_OBJECT( var_n );
                tmp_tuple_element_13 = var_n;
                Py_INCREF( tmp_tuple_element_13 );
                PyTuple_SET_ITEM( tmp_args_element_name_52, 1, tmp_tuple_element_13 );
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 430;
                {
                    PyObject *call_args[] = { tmp_args_element_name_52 };
                    tmp_assign_source_119 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_62, call_args );
                }

                Py_DECREF( tmp_args_element_name_52 );
                if ( tmp_assign_source_119 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 430;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_a_eq;
                    var_a_eq = tmp_assign_source_119;
                    Py_XDECREF( old );
                }

            }
            branch_end_24:;
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_dict_name_10;
            PyObject *tmp_key_name_10;
            PyObject *tmp_dict_value_7;
            int tmp_truth_name_7;
            CHECK_OBJECT( var_cons );
            tmp_dict_name_10 = var_cons;
            tmp_key_name_10 = const_str_plain_ineq;
            tmp_dict_value_7 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
            if ( tmp_dict_value_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 432;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_7 = CHECK_IF_TRUE( tmp_dict_value_7 );
            if ( tmp_truth_name_7 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dict_value_7 );

                exception_lineno = 432;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_25 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_dict_value_7 );
            if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_25;
            }
            else
            {
                goto branch_no_25;
            }
            branch_yes_25:;
            {
                PyObject *tmp_assign_source_120;
                PyObject *tmp_called_name_63;
                PyObject *tmp_mvar_value_59;
                PyObject *tmp_args_element_name_53;
                tmp_mvar_value_59 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_vstack );

                if (unlikely( tmp_mvar_value_59 == NULL ))
                {
                    tmp_mvar_value_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_vstack );
                }

                if ( tmp_mvar_value_59 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "vstack" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 433;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_63 = tmp_mvar_value_59;
                // Tried code:
                {
                    PyObject *tmp_assign_source_121;
                    PyObject *tmp_iter_arg_13;
                    PyObject *tmp_dict_name_11;
                    PyObject *tmp_key_name_11;
                    CHECK_OBJECT( var_cons );
                    tmp_dict_name_11 = var_cons;
                    tmp_key_name_11 = const_str_plain_ineq;
                    tmp_iter_arg_13 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
                    if ( tmp_iter_arg_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 434;
                        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_34;
                    }
                    tmp_assign_source_121 = MAKE_ITERATOR( tmp_iter_arg_13 );
                    Py_DECREF( tmp_iter_arg_13 );
                    if ( tmp_assign_source_121 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 433;
                        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_34;
                    }
                    {
                        PyObject *old = tmp_listcomp_6__$0;
                        tmp_listcomp_6__$0 = tmp_assign_source_121;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_122;
                    tmp_assign_source_122 = PyList_New( 0 );
                    {
                        PyObject *old = tmp_listcomp_6__contraction;
                        tmp_listcomp_6__contraction = tmp_assign_source_122;
                        Py_XDECREF( old );
                    }

                }
                MAKE_OR_REUSE_FRAME( cache_frame_6649dcebc0b91f9d0109d6a1f8cd882e_7, codeobj_6649dcebc0b91f9d0109d6a1f8cd882e, module_scipy$optimize$slsqp, sizeof(void *)+sizeof(void *) );
                frame_6649dcebc0b91f9d0109d6a1f8cd882e_7 = cache_frame_6649dcebc0b91f9d0109d6a1f8cd882e_7;

                // Push the new frame as the currently active one.
                pushFrameStack( frame_6649dcebc0b91f9d0109d6a1f8cd882e_7 );

                // Mark the frame object as in use, ref count 1 will be up for reuse.
                assert( Py_REFCNT( frame_6649dcebc0b91f9d0109d6a1f8cd882e_7 ) == 2 ); // Frame stack

                // Framed code:
                // Tried code:
                loop_start_8:;
                {
                    PyObject *tmp_next_source_7;
                    PyObject *tmp_assign_source_123;
                    CHECK_OBJECT( tmp_listcomp_6__$0 );
                    tmp_next_source_7 = tmp_listcomp_6__$0;
                    tmp_assign_source_123 = ITERATOR_NEXT( tmp_next_source_7 );
                    if ( tmp_assign_source_123 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_8;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_2 = "oo";
                            exception_lineno = 433;
                            goto try_except_handler_35;
                        }
                    }

                    {
                        PyObject *old = tmp_listcomp_6__iter_value_0;
                        tmp_listcomp_6__iter_value_0 = tmp_assign_source_123;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_124;
                    CHECK_OBJECT( tmp_listcomp_6__iter_value_0 );
                    tmp_assign_source_124 = tmp_listcomp_6__iter_value_0;
                    {
                        PyObject *old = outline_5_var_con;
                        outline_5_var_con = tmp_assign_source_124;
                        Py_INCREF( outline_5_var_con );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_append_list_6;
                    PyObject *tmp_append_value_6;
                    PyObject *tmp_dircall_arg1_6;
                    PyObject *tmp_subscribed_name_26;
                    PyObject *tmp_subscript_name_26;
                    PyObject *tmp_dircall_arg2_6;
                    PyObject *tmp_tuple_element_14;
                    PyObject *tmp_dircall_arg3_6;
                    PyObject *tmp_subscribed_name_27;
                    PyObject *tmp_subscript_name_27;
                    CHECK_OBJECT( tmp_listcomp_6__contraction );
                    tmp_append_list_6 = tmp_listcomp_6__contraction;
                    CHECK_OBJECT( outline_5_var_con );
                    tmp_subscribed_name_26 = outline_5_var_con;
                    tmp_subscript_name_26 = const_str_plain_jac;
                    tmp_dircall_arg1_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_26, tmp_subscript_name_26 );
                    if ( tmp_dircall_arg1_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 433;
                        type_description_2 = "oo";
                        goto try_except_handler_35;
                    }
                    CHECK_OBJECT( var_x );
                    tmp_tuple_element_14 = var_x;
                    tmp_dircall_arg2_6 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_14 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_6, 0, tmp_tuple_element_14 );
                    CHECK_OBJECT( outline_5_var_con );
                    tmp_subscribed_name_27 = outline_5_var_con;
                    tmp_subscript_name_27 = const_str_plain_args;
                    tmp_dircall_arg3_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_27, tmp_subscript_name_27 );
                    if ( tmp_dircall_arg3_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_dircall_arg1_6 );
                        Py_DECREF( tmp_dircall_arg2_6 );

                        exception_lineno = 433;
                        type_description_2 = "oo";
                        goto try_except_handler_35;
                    }

                    {
                        PyObject *dir_call_args[] = {tmp_dircall_arg1_6, tmp_dircall_arg2_6, tmp_dircall_arg3_6};
                        tmp_append_value_6 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
                    }
                    if ( tmp_append_value_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 433;
                        type_description_2 = "oo";
                        goto try_except_handler_35;
                    }
                    assert( PyList_Check( tmp_append_list_6 ) );
                    tmp_res = PyList_Append( tmp_append_list_6, tmp_append_value_6 );
                    Py_DECREF( tmp_append_value_6 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 433;
                        type_description_2 = "oo";
                        goto try_except_handler_35;
                    }
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 433;
                    type_description_2 = "oo";
                    goto try_except_handler_35;
                }
                goto loop_start_8;
                loop_end_8:;
                CHECK_OBJECT( tmp_listcomp_6__contraction );
                tmp_args_element_name_53 = tmp_listcomp_6__contraction;
                Py_INCREF( tmp_args_element_name_53 );
                goto try_return_handler_35;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
                return NULL;
                // Return handler code:
                try_return_handler_35:;
                CHECK_OBJECT( (PyObject *)tmp_listcomp_6__$0 );
                Py_DECREF( tmp_listcomp_6__$0 );
                tmp_listcomp_6__$0 = NULL;

                CHECK_OBJECT( (PyObject *)tmp_listcomp_6__contraction );
                Py_DECREF( tmp_listcomp_6__contraction );
                tmp_listcomp_6__contraction = NULL;

                Py_XDECREF( tmp_listcomp_6__iter_value_0 );
                tmp_listcomp_6__iter_value_0 = NULL;

                goto frame_return_exit_7;
                // Exception handler code:
                try_except_handler_35:;
                exception_keeper_type_32 = exception_type;
                exception_keeper_value_32 = exception_value;
                exception_keeper_tb_32 = exception_tb;
                exception_keeper_lineno_32 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_listcomp_6__$0 );
                Py_DECREF( tmp_listcomp_6__$0 );
                tmp_listcomp_6__$0 = NULL;

                CHECK_OBJECT( (PyObject *)tmp_listcomp_6__contraction );
                Py_DECREF( tmp_listcomp_6__contraction );
                tmp_listcomp_6__contraction = NULL;

                Py_XDECREF( tmp_listcomp_6__iter_value_0 );
                tmp_listcomp_6__iter_value_0 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_32;
                exception_value = exception_keeper_value_32;
                exception_tb = exception_keeper_tb_32;
                exception_lineno = exception_keeper_lineno_32;

                goto frame_exception_exit_7;
                // End of try:

#if 0
                RESTORE_FRAME_EXCEPTION( frame_6649dcebc0b91f9d0109d6a1f8cd882e_7 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto frame_no_exception_6;

                frame_return_exit_7:;
#if 0
                RESTORE_FRAME_EXCEPTION( frame_6649dcebc0b91f9d0109d6a1f8cd882e_7 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto try_return_handler_34;

                frame_exception_exit_7:;

#if 0
                RESTORE_FRAME_EXCEPTION( frame_6649dcebc0b91f9d0109d6a1f8cd882e_7 );
#endif

                if ( exception_tb == NULL )
                {
                    exception_tb = MAKE_TRACEBACK( frame_6649dcebc0b91f9d0109d6a1f8cd882e_7, exception_lineno );
                }
                else if ( exception_tb->tb_frame != &frame_6649dcebc0b91f9d0109d6a1f8cd882e_7->m_frame )
                {
                    exception_tb = ADD_TRACEBACK( exception_tb, frame_6649dcebc0b91f9d0109d6a1f8cd882e_7, exception_lineno );
                }

                // Attachs locals to frame if any.
                Nuitka_Frame_AttachLocals(
                    (struct Nuitka_FrameObject *)frame_6649dcebc0b91f9d0109d6a1f8cd882e_7,
                    type_description_2,
                    outline_5_var_con,
                    var_x
                );


                // Release cached frame.
                if ( frame_6649dcebc0b91f9d0109d6a1f8cd882e_7 == cache_frame_6649dcebc0b91f9d0109d6a1f8cd882e_7 )
                {
                    Py_DECREF( frame_6649dcebc0b91f9d0109d6a1f8cd882e_7 );
                }
                cache_frame_6649dcebc0b91f9d0109d6a1f8cd882e_7 = NULL;

                assertFrameObject( frame_6649dcebc0b91f9d0109d6a1f8cd882e_7 );

                // Put the previous frame back on top.
                popFrameStack();

                // Return the error.
                goto nested_frame_exit_6;

                frame_no_exception_6:;
                goto skip_nested_handling_6;
                nested_frame_exit_6:;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_34;
                skip_nested_handling_6:;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
                return NULL;
                // Return handler code:
                try_return_handler_34:;
                Py_XDECREF( outline_5_var_con );
                outline_5_var_con = NULL;

                goto outline_result_7;
                // Exception handler code:
                try_except_handler_34:;
                exception_keeper_type_33 = exception_type;
                exception_keeper_value_33 = exception_value;
                exception_keeper_tb_33 = exception_tb;
                exception_keeper_lineno_33 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( outline_5_var_con );
                outline_5_var_con = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_33;
                exception_value = exception_keeper_value_33;
                exception_tb = exception_keeper_tb_33;
                exception_lineno = exception_keeper_lineno_33;

                goto outline_exception_6;
                // End of try:
                // Return statement must have exited already.
                NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
                return NULL;
                outline_exception_6:;
                exception_lineno = 433;
                goto frame_exception_exit_1;
                outline_result_7:;
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 433;
                {
                    PyObject *call_args[] = { tmp_args_element_name_53 };
                    tmp_assign_source_120 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_63, call_args );
                }

                Py_DECREF( tmp_args_element_name_53 );
                if ( tmp_assign_source_120 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 433;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_a_ieq;
                    var_a_ieq = tmp_assign_source_120;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_25;
            branch_no_25:;
            {
                PyObject *tmp_assign_source_125;
                PyObject *tmp_called_name_64;
                PyObject *tmp_mvar_value_60;
                PyObject *tmp_args_element_name_54;
                PyObject *tmp_tuple_element_15;
                tmp_mvar_value_60 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_zeros );

                if (unlikely( tmp_mvar_value_60 == NULL ))
                {
                    tmp_mvar_value_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
                }

                if ( tmp_mvar_value_60 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 436;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_64 = tmp_mvar_value_60;
                CHECK_OBJECT( var_mieq );
                tmp_tuple_element_15 = var_mieq;
                tmp_args_element_name_54 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_15 );
                PyTuple_SET_ITEM( tmp_args_element_name_54, 0, tmp_tuple_element_15 );
                CHECK_OBJECT( var_n );
                tmp_tuple_element_15 = var_n;
                Py_INCREF( tmp_tuple_element_15 );
                PyTuple_SET_ITEM( tmp_args_element_name_54, 1, tmp_tuple_element_15 );
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 436;
                {
                    PyObject *call_args[] = { tmp_args_element_name_54 };
                    tmp_assign_source_125 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_64, call_args );
                }

                Py_DECREF( tmp_args_element_name_54 );
                if ( tmp_assign_source_125 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 436;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_a_ieq;
                    var_a_ieq = tmp_assign_source_125;
                    Py_XDECREF( old );
                }

            }
            branch_end_25:;
        }
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_compexpr_left_21;
            PyObject *tmp_compexpr_right_21;
            CHECK_OBJECT( var_m );
            tmp_compexpr_left_21 = var_m;
            tmp_compexpr_right_21 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_21, tmp_compexpr_right_21 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_26 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_26;
            }
            else
            {
                goto branch_no_26;
            }
            branch_yes_26:;
            {
                PyObject *tmp_assign_source_126;
                PyObject *tmp_called_name_65;
                PyObject *tmp_mvar_value_61;
                PyObject *tmp_args_element_name_55;
                PyObject *tmp_tuple_element_16;
                tmp_mvar_value_61 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_zeros );

                if (unlikely( tmp_mvar_value_61 == NULL ))
                {
                    tmp_mvar_value_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
                }

                if ( tmp_mvar_value_61 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 440;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_65 = tmp_mvar_value_61;
                CHECK_OBJECT( var_la );
                tmp_tuple_element_16 = var_la;
                tmp_args_element_name_55 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_16 );
                PyTuple_SET_ITEM( tmp_args_element_name_55, 0, tmp_tuple_element_16 );
                CHECK_OBJECT( var_n );
                tmp_tuple_element_16 = var_n;
                Py_INCREF( tmp_tuple_element_16 );
                PyTuple_SET_ITEM( tmp_args_element_name_55, 1, tmp_tuple_element_16 );
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 440;
                {
                    PyObject *call_args[] = { tmp_args_element_name_55 };
                    tmp_assign_source_126 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_65, call_args );
                }

                Py_DECREF( tmp_args_element_name_55 );
                if ( tmp_assign_source_126 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 440;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_a;
                    var_a = tmp_assign_source_126;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_26;
            branch_no_26:;
            {
                PyObject *tmp_assign_source_127;
                PyObject *tmp_called_name_66;
                PyObject *tmp_mvar_value_62;
                PyObject *tmp_args_element_name_56;
                PyObject *tmp_tuple_element_17;
                tmp_mvar_value_62 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_vstack );

                if (unlikely( tmp_mvar_value_62 == NULL ))
                {
                    tmp_mvar_value_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_vstack );
                }

                if ( tmp_mvar_value_62 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "vstack" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 442;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_66 = tmp_mvar_value_62;
                CHECK_OBJECT( var_a_eq );
                tmp_tuple_element_17 = var_a_eq;
                tmp_args_element_name_56 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_17 );
                PyTuple_SET_ITEM( tmp_args_element_name_56, 0, tmp_tuple_element_17 );
                CHECK_OBJECT( var_a_ieq );
                tmp_tuple_element_17 = var_a_ieq;
                Py_INCREF( tmp_tuple_element_17 );
                PyTuple_SET_ITEM( tmp_args_element_name_56, 1, tmp_tuple_element_17 );
                frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 442;
                {
                    PyObject *call_args[] = { tmp_args_element_name_56 };
                    tmp_assign_source_127 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_66, call_args );
                }

                Py_DECREF( tmp_args_element_name_56 );
                if ( tmp_assign_source_127 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 442;
                    type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_a;
                    var_a = tmp_assign_source_127;
                    Py_XDECREF( old );
                }

            }
            branch_end_26:;
        }
        {
            PyObject *tmp_assign_source_128;
            PyObject *tmp_called_name_67;
            PyObject *tmp_mvar_value_63;
            PyObject *tmp_args_element_name_57;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_called_name_68;
            PyObject *tmp_mvar_value_64;
            PyObject *tmp_args_element_name_58;
            PyObject *tmp_list_element_2;
            PyObject *tmp_args_element_name_59;
            tmp_mvar_value_63 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_concatenate );

            if (unlikely( tmp_mvar_value_63 == NULL ))
            {
                tmp_mvar_value_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_concatenate );
            }

            if ( tmp_mvar_value_63 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "concatenate" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 443;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_67 = tmp_mvar_value_63;
            CHECK_OBJECT( var_a );
            tmp_tuple_element_18 = var_a;
            tmp_args_element_name_57 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_18 );
            PyTuple_SET_ITEM( tmp_args_element_name_57, 0, tmp_tuple_element_18 );
            tmp_mvar_value_64 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_zeros );

            if (unlikely( tmp_mvar_value_64 == NULL ))
            {
                tmp_mvar_value_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
            }

            if ( tmp_mvar_value_64 == NULL )
            {
                Py_DECREF( tmp_args_element_name_57 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 443;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_68 = tmp_mvar_value_64;
            CHECK_OBJECT( var_la );
            tmp_list_element_2 = var_la;
            tmp_args_element_name_58 = PyList_New( 2 );
            Py_INCREF( tmp_list_element_2 );
            PyList_SET_ITEM( tmp_args_element_name_58, 0, tmp_list_element_2 );
            tmp_list_element_2 = const_int_pos_1;
            Py_INCREF( tmp_list_element_2 );
            PyList_SET_ITEM( tmp_args_element_name_58, 1, tmp_list_element_2 );
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 443;
            {
                PyObject *call_args[] = { tmp_args_element_name_58 };
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_68, call_args );
            }

            Py_DECREF( tmp_args_element_name_58 );
            if ( tmp_tuple_element_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_57 );

                exception_lineno = 443;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_57, 1, tmp_tuple_element_18 );
            tmp_args_element_name_59 = const_int_pos_1;
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 443;
            {
                PyObject *call_args[] = { tmp_args_element_name_57, tmp_args_element_name_59 };
                tmp_assign_source_128 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_67, call_args );
            }

            Py_DECREF( tmp_args_element_name_57 );
            if ( tmp_assign_source_128 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 443;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_a;
                assert( old != NULL );
                var_a = tmp_assign_source_128;
                Py_DECREF( old );
            }

        }
        branch_no_23:;
    }
    {
        PyObject *tmp_called_name_69;
        PyObject *tmp_mvar_value_65;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_60;
        PyObject *tmp_args_element_name_61;
        PyObject *tmp_args_element_name_62;
        PyObject *tmp_args_element_name_63;
        PyObject *tmp_args_element_name_64;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_args_element_name_66;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_args_element_name_68;
        PyObject *tmp_args_element_name_69;
        PyObject *tmp_args_element_name_70;
        PyObject *tmp_args_element_name_71;
        PyObject *tmp_args_element_name_72;
        PyObject *tmp_args_element_name_73;
        PyObject *tmp_args_element_name_74;
        PyObject *tmp_args_element_name_75;
        PyObject *tmp_args_element_name_76;
        PyObject *tmp_args_element_name_77;
        PyObject *tmp_args_element_name_78;
        PyObject *tmp_args_element_name_79;
        PyObject *tmp_args_element_name_80;
        PyObject *tmp_args_element_name_81;
        PyObject *tmp_args_element_name_82;
        PyObject *tmp_args_element_name_83;
        PyObject *tmp_args_element_name_84;
        PyObject *tmp_args_element_name_85;
        PyObject *tmp_args_element_name_86;
        PyObject *tmp_args_element_name_87;
        PyObject *tmp_args_element_name_88;
        PyObject *tmp_args_element_name_89;
        PyObject *tmp_args_element_name_90;
        PyObject *tmp_args_element_name_91;
        tmp_mvar_value_65 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_slsqp );

        if (unlikely( tmp_mvar_value_65 == NULL ))
        {
            tmp_mvar_value_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_slsqp );
        }

        if ( tmp_mvar_value_65 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "slsqp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 446;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_69 = tmp_mvar_value_65;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_60 = var_m;
        CHECK_OBJECT( var_meq );
        tmp_args_element_name_61 = var_meq;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_62 = var_x;
        CHECK_OBJECT( var_xl );
        tmp_args_element_name_63 = var_xl;
        CHECK_OBJECT( var_xu );
        tmp_args_element_name_64 = var_xu;
        if ( var_fx == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 446;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_65 = var_fx;
        if ( var_c == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 446;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_66 = var_c;
        if ( var_g == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 446;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_67 = var_g;
        if ( var_a == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 446;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_68 = var_a;
        CHECK_OBJECT( var_acc );
        tmp_args_element_name_69 = var_acc;
        CHECK_OBJECT( var_majiter );
        tmp_args_element_name_70 = var_majiter;
        CHECK_OBJECT( var_mode );
        tmp_args_element_name_71 = var_mode;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_72 = var_w;
        CHECK_OBJECT( var_jw );
        tmp_args_element_name_73 = var_jw;
        CHECK_OBJECT( var_alpha );
        tmp_args_element_name_74 = var_alpha;
        CHECK_OBJECT( var_f0 );
        tmp_args_element_name_75 = var_f0;
        CHECK_OBJECT( var_gs );
        tmp_args_element_name_76 = var_gs;
        CHECK_OBJECT( var_h1 );
        tmp_args_element_name_77 = var_h1;
        CHECK_OBJECT( var_h2 );
        tmp_args_element_name_78 = var_h2;
        CHECK_OBJECT( var_h3 );
        tmp_args_element_name_79 = var_h3;
        CHECK_OBJECT( var_h4 );
        tmp_args_element_name_80 = var_h4;
        CHECK_OBJECT( var_t );
        tmp_args_element_name_81 = var_t;
        CHECK_OBJECT( var_t0 );
        tmp_args_element_name_82 = var_t0;
        CHECK_OBJECT( var_tol );
        tmp_args_element_name_83 = var_tol;
        CHECK_OBJECT( var_iexact );
        tmp_args_element_name_84 = var_iexact;
        CHECK_OBJECT( var_incons );
        tmp_args_element_name_85 = var_incons;
        CHECK_OBJECT( var_ireset );
        tmp_args_element_name_86 = var_ireset;
        CHECK_OBJECT( var_itermx );
        tmp_args_element_name_87 = var_itermx;
        CHECK_OBJECT( var_line );
        tmp_args_element_name_88 = var_line;
        CHECK_OBJECT( var_n1 );
        tmp_args_element_name_89 = var_n1;
        CHECK_OBJECT( var_n2 );
        tmp_args_element_name_90 = var_n2;
        CHECK_OBJECT( var_n3 );
        tmp_args_element_name_91 = var_n3;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 446;
        {
            PyObject *call_args[] = { tmp_args_element_name_60, tmp_args_element_name_61, tmp_args_element_name_62, tmp_args_element_name_63, tmp_args_element_name_64, tmp_args_element_name_65, tmp_args_element_name_66, tmp_args_element_name_67, tmp_args_element_name_68, tmp_args_element_name_69, tmp_args_element_name_70, tmp_args_element_name_71, tmp_args_element_name_72, tmp_args_element_name_73, tmp_args_element_name_74, tmp_args_element_name_75, tmp_args_element_name_76, tmp_args_element_name_77, tmp_args_element_name_78, tmp_args_element_name_79, tmp_args_element_name_80, tmp_args_element_name_81, tmp_args_element_name_82, tmp_args_element_name_83, tmp_args_element_name_84, tmp_args_element_name_85, tmp_args_element_name_86, tmp_args_element_name_87, tmp_args_element_name_88, tmp_args_element_name_89, tmp_args_element_name_90, tmp_args_element_name_91 };
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS32( tmp_called_name_69, call_args );
        }

        if ( tmp_call_result_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_8 );
    }
    {
        nuitka_bool tmp_condition_result_27;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_22;
        PyObject *tmp_compexpr_right_22;
        PyObject *tmp_compexpr_left_23;
        PyObject *tmp_compexpr_right_23;
        CHECK_OBJECT( par_callback );
        tmp_compexpr_left_22 = par_callback;
        tmp_compexpr_right_22 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_22 != tmp_compexpr_right_22 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_majiter );
        tmp_compexpr_left_23 = var_majiter;
        CHECK_OBJECT( var_majiter_prev );
        tmp_compexpr_right_23 = var_majiter_prev;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_23, tmp_compexpr_right_23 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_27 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_27 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_27;
        }
        else
        {
            goto branch_no_27;
        }
        branch_yes_27:;
        {
            PyObject *tmp_called_name_70;
            PyObject *tmp_call_result_9;
            PyObject *tmp_args_element_name_92;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_mvar_value_66;
            PyObject *tmp_args_element_name_93;
            CHECK_OBJECT( par_callback );
            tmp_called_name_70 = par_callback;
            tmp_mvar_value_66 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_66 == NULL ))
            {
                tmp_mvar_value_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_66 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 453;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_10 = tmp_mvar_value_66;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_93 = var_x;
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 453;
            {
                PyObject *call_args[] = { tmp_args_element_name_93 };
                tmp_args_element_name_92 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_copy, call_args );
            }

            if ( tmp_args_element_name_92 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 453;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 453;
            {
                PyObject *call_args[] = { tmp_args_element_name_92 };
                tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_70, call_args );
            }

            Py_DECREF( tmp_args_element_name_92 );
            if ( tmp_call_result_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 453;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_9 );
        }
        branch_no_27:;
    }
    {
        nuitka_bool tmp_condition_result_28;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_24;
        PyObject *tmp_compexpr_right_24;
        PyObject *tmp_compexpr_left_25;
        PyObject *tmp_compexpr_right_25;
        CHECK_OBJECT( par_iprint );
        tmp_compexpr_left_24 = par_iprint;
        tmp_compexpr_right_24 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_24, tmp_compexpr_right_24 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        CHECK_OBJECT( var_majiter );
        tmp_compexpr_left_25 = var_majiter;
        CHECK_OBJECT( var_majiter_prev );
        tmp_compexpr_right_25 = var_majiter_prev;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_25, tmp_compexpr_right_25 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_28 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_28 = tmp_and_left_value_2;
        and_end_2:;
        if ( tmp_condition_result_28 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_28;
        }
        else
        {
            goto branch_no_28;
        }
        branch_yes_28:;
        {
            PyObject *tmp_called_name_71;
            PyObject *tmp_call_result_10;
            PyObject *tmp_args_element_name_94;
            PyObject *tmp_left_name_40;
            PyObject *tmp_right_name_40;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_subscribed_name_28;
            PyObject *tmp_subscript_name_28;
            PyObject *tmp_called_name_72;
            PyObject *tmp_source_name_18;
            PyObject *tmp_mvar_value_67;
            PyObject *tmp_args_element_name_95;
            tmp_called_name_71 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_71 != NULL );
            tmp_left_name_40 = const_str_digest_93081b93c2c73f7f515b059f141b265e;
            CHECK_OBJECT( var_majiter );
            tmp_tuple_element_19 = var_majiter;
            tmp_right_name_40 = PyTuple_New( 4 );
            Py_INCREF( tmp_tuple_element_19 );
            PyTuple_SET_ITEM( tmp_right_name_40, 0, tmp_tuple_element_19 );
            CHECK_OBJECT( var_feval );
            tmp_subscribed_name_28 = var_feval;
            tmp_subscript_name_28 = const_int_0;
            tmp_tuple_element_19 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_28, tmp_subscript_name_28, 0 );
            if ( tmp_tuple_element_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_40 );

                exception_lineno = 458;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_right_name_40, 1, tmp_tuple_element_19 );
            if ( var_fx == NULL )
            {
                Py_DECREF( tmp_right_name_40 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fx" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 459;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_19 = var_fx;
            Py_INCREF( tmp_tuple_element_19 );
            PyTuple_SET_ITEM( tmp_right_name_40, 2, tmp_tuple_element_19 );
            tmp_mvar_value_67 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_linalg );

            if (unlikely( tmp_mvar_value_67 == NULL ))
            {
                tmp_mvar_value_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linalg );
            }

            if ( tmp_mvar_value_67 == NULL )
            {
                Py_DECREF( tmp_right_name_40 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "linalg" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 459;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_18 = tmp_mvar_value_67;
            tmp_called_name_72 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_norm );
            if ( tmp_called_name_72 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_40 );

                exception_lineno = 459;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_g == NULL )
            {
                Py_DECREF( tmp_right_name_40 );
                Py_DECREF( tmp_called_name_72 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 459;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_95 = var_g;
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 459;
            {
                PyObject *call_args[] = { tmp_args_element_name_95 };
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_72, call_args );
            }

            Py_DECREF( tmp_called_name_72 );
            if ( tmp_tuple_element_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_40 );

                exception_lineno = 459;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_right_name_40, 3, tmp_tuple_element_19 );
            tmp_args_element_name_94 = BINARY_OPERATION_REMAINDER( tmp_left_name_40, tmp_right_name_40 );
            Py_DECREF( tmp_right_name_40 );
            if ( tmp_args_element_name_94 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 458;
            {
                PyObject *call_args[] = { tmp_args_element_name_94 };
                tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_71, call_args );
            }

            Py_DECREF( tmp_args_element_name_94 );
            if ( tmp_call_result_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_10 );
        }
        branch_no_28:;
    }
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_compexpr_left_26;
        PyObject *tmp_compexpr_right_26;
        PyObject *tmp_called_name_73;
        PyObject *tmp_args_element_name_96;
        tmp_called_name_73 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_73 != NULL );
        CHECK_OBJECT( var_mode );
        tmp_args_element_name_96 = var_mode;
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 462;
        {
            PyObject *call_args[] = { tmp_args_element_name_96 };
            tmp_compexpr_left_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_73, call_args );
        }

        if ( tmp_compexpr_left_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_26 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_26, tmp_compexpr_right_26 );
        Py_DECREF( tmp_compexpr_left_26 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_29 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_29 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_29;
        }
        else
        {
            goto branch_no_29;
        }
        branch_yes_29:;
        goto loop_end_4;
        branch_no_29:;
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT( var_majiter );
        tmp_int_arg_1 = var_majiter;
        tmp_assign_source_129 = PyNumber_Int( tmp_int_arg_1 );
        if ( tmp_assign_source_129 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 465;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_majiter_prev;
            assert( old != NULL );
            var_majiter_prev = tmp_assign_source_129;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_4;
    loop_end_4:;
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_compexpr_left_27;
        PyObject *tmp_compexpr_right_27;
        CHECK_OBJECT( par_iprint );
        tmp_compexpr_left_27 = par_iprint;
        tmp_compexpr_right_27 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_27, tmp_compexpr_right_27 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 468;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_30 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_30 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_30;
        }
        else
        {
            goto branch_no_30;
        }
        branch_yes_30:;
        {
            PyObject *tmp_called_name_74;
            PyObject *tmp_call_result_11;
            PyObject *tmp_args_element_name_97;
            PyObject *tmp_left_name_41;
            PyObject *tmp_left_name_42;
            PyObject *tmp_left_name_43;
            PyObject *tmp_dict_name_12;
            PyObject *tmp_key_name_12;
            PyObject *tmp_int_arg_2;
            PyObject *tmp_right_name_41;
            PyObject *tmp_right_name_42;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_right_name_43;
            tmp_called_name_74 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_74 != NULL );
            CHECK_OBJECT( var_exit_modes );
            tmp_dict_name_12 = var_exit_modes;
            CHECK_OBJECT( var_mode );
            tmp_int_arg_2 = var_mode;
            tmp_key_name_12 = PyNumber_Int( tmp_int_arg_2 );
            if ( tmp_key_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_43 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
            Py_DECREF( tmp_key_name_12 );
            if ( tmp_left_name_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_41 = const_str_digest_e87196e4427ab2cd27cef26205837f88;
            tmp_left_name_42 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_43, tmp_right_name_41 );
            Py_DECREF( tmp_left_name_43 );
            if ( tmp_left_name_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_mode );
            tmp_unicode_arg_1 = var_mode;
            tmp_right_name_42 = PyObject_Unicode( tmp_unicode_arg_1 );
            if ( tmp_right_name_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_42 );

                exception_lineno = 469;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_41 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_42, tmp_right_name_42 );
            Py_DECREF( tmp_left_name_42 );
            Py_DECREF( tmp_right_name_42 );
            if ( tmp_left_name_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_43 = const_str_chr_41;
            tmp_args_element_name_97 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_41, tmp_right_name_43 );
            Py_DECREF( tmp_left_name_41 );
            if ( tmp_args_element_name_97 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 469;
            {
                PyObject *call_args[] = { tmp_args_element_name_97 };
                tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_74, call_args );
            }

            Py_DECREF( tmp_args_element_name_97 );
            if ( tmp_call_result_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_11 );
        }
        {
            PyObject *tmp_called_name_75;
            PyObject *tmp_call_result_12;
            PyObject *tmp_args_element_name_98;
            PyObject *tmp_args_element_name_99;
            tmp_called_name_75 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_75 != NULL );
            tmp_args_element_name_98 = const_str_digest_ba4d02f191e5ecc47cb90bacd94d1d51;
            if ( var_fx == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fx" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 470;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_99 = var_fx;
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 470;
            {
                PyObject *call_args[] = { tmp_args_element_name_98, tmp_args_element_name_99 };
                tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_75, call_args );
            }

            if ( tmp_call_result_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 470;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_12 );
        }
        {
            PyObject *tmp_called_name_76;
            PyObject *tmp_call_result_13;
            PyObject *tmp_args_element_name_100;
            PyObject *tmp_args_element_name_101;
            tmp_called_name_76 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_76 != NULL );
            tmp_args_element_name_100 = const_str_digest_420246a5437d3efdf5f350c1648264f0;
            CHECK_OBJECT( var_majiter );
            tmp_args_element_name_101 = var_majiter;
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 471;
            {
                PyObject *call_args[] = { tmp_args_element_name_100, tmp_args_element_name_101 };
                tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_76, call_args );
            }

            if ( tmp_call_result_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 471;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_13 );
        }
        {
            PyObject *tmp_called_name_77;
            PyObject *tmp_call_result_14;
            PyObject *tmp_args_element_name_102;
            PyObject *tmp_args_element_name_103;
            PyObject *tmp_subscribed_name_29;
            PyObject *tmp_subscript_name_29;
            tmp_called_name_77 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_77 != NULL );
            tmp_args_element_name_102 = const_str_digest_395bc8d7b91838a47093caf3b6fcbdaa;
            CHECK_OBJECT( var_feval );
            tmp_subscribed_name_29 = var_feval;
            tmp_subscript_name_29 = const_int_0;
            tmp_args_element_name_103 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_29, tmp_subscript_name_29, 0 );
            if ( tmp_args_element_name_103 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 472;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 472;
            {
                PyObject *call_args[] = { tmp_args_element_name_102, tmp_args_element_name_103 };
                tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_77, call_args );
            }

            Py_DECREF( tmp_args_element_name_103 );
            if ( tmp_call_result_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 472;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_14 );
        }
        {
            PyObject *tmp_called_name_78;
            PyObject *tmp_call_result_15;
            PyObject *tmp_args_element_name_104;
            PyObject *tmp_args_element_name_105;
            PyObject *tmp_subscribed_name_30;
            PyObject *tmp_subscript_name_30;
            tmp_called_name_78 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_78 != NULL );
            tmp_args_element_name_104 = const_str_digest_cf77e9a819add34163dfbf095a8331d0;
            CHECK_OBJECT( var_geval );
            tmp_subscribed_name_30 = var_geval;
            tmp_subscript_name_30 = const_int_0;
            tmp_args_element_name_105 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_30, tmp_subscript_name_30, 0 );
            if ( tmp_args_element_name_105 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 473;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 473;
            {
                PyObject *call_args[] = { tmp_args_element_name_104, tmp_args_element_name_105 };
                tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_78, call_args );
            }

            Py_DECREF( tmp_args_element_name_105 );
            if ( tmp_call_result_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 473;
                type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_15 );
        }
        branch_no_30:;
    }
    {
        PyObject *tmp_called_name_79;
        PyObject *tmp_mvar_value_68;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_subscribed_name_31;
        PyObject *tmp_subscript_name_31;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_subscribed_name_32;
        PyObject *tmp_subscript_name_32;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_subscribed_name_33;
        PyObject *tmp_subscript_name_33;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_int_arg_4;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_key_name_13;
        PyObject *tmp_int_arg_5;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_compexpr_left_28;
        PyObject *tmp_compexpr_right_28;
        tmp_mvar_value_68 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

        if (unlikely( tmp_mvar_value_68 == NULL ))
        {
            tmp_mvar_value_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
        }

        if ( tmp_mvar_value_68 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 475;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_79 = tmp_mvar_value_68;
        tmp_dict_key_4 = const_str_plain_x;
        CHECK_OBJECT( var_x );
        tmp_dict_value_8 = var_x;
        tmp_kw_name_4 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_fun;
        if ( var_fx == NULL )
        {
            Py_DECREF( tmp_kw_name_4 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 475;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_9 = var_fx;
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_5, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_jac;
        if ( var_g == NULL )
        {
            Py_DECREF( tmp_kw_name_4 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 475;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_31 = var_g;
        tmp_subscript_name_31 = const_slice_none_int_neg_1_none;
        tmp_dict_value_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_31, tmp_subscript_name_31 );
        if ( tmp_dict_value_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_4 );

            exception_lineno = 475;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_6, tmp_dict_value_10 );
        Py_DECREF( tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_nit;
        CHECK_OBJECT( var_majiter );
        tmp_int_arg_3 = var_majiter;
        tmp_dict_value_11 = PyNumber_Int( tmp_int_arg_3 );
        if ( tmp_dict_value_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_4 );

            exception_lineno = 475;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_7, tmp_dict_value_11 );
        Py_DECREF( tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_nfev;
        CHECK_OBJECT( var_feval );
        tmp_subscribed_name_32 = var_feval;
        tmp_subscript_name_32 = const_int_0;
        tmp_dict_value_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_32, tmp_subscript_name_32, 0 );
        if ( tmp_dict_value_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_4 );

            exception_lineno = 476;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_8, tmp_dict_value_12 );
        Py_DECREF( tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_njev;
        CHECK_OBJECT( var_geval );
        tmp_subscribed_name_33 = var_geval;
        tmp_subscript_name_33 = const_int_0;
        tmp_dict_value_13 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_33, tmp_subscript_name_33, 0 );
        if ( tmp_dict_value_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_4 );

            exception_lineno = 476;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_9, tmp_dict_value_13 );
        Py_DECREF( tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_status;
        CHECK_OBJECT( var_mode );
        tmp_int_arg_4 = var_mode;
        tmp_dict_value_14 = PyNumber_Int( tmp_int_arg_4 );
        if ( tmp_dict_value_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_4 );

            exception_lineno = 476;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_10, tmp_dict_value_14 );
        Py_DECREF( tmp_dict_value_14 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_message;
        CHECK_OBJECT( var_exit_modes );
        tmp_dict_name_13 = var_exit_modes;
        CHECK_OBJECT( var_mode );
        tmp_int_arg_5 = var_mode;
        tmp_key_name_13 = PyNumber_Int( tmp_int_arg_5 );
        if ( tmp_key_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_4 );

            exception_lineno = 477;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_15 = DICT_GET_ITEM( tmp_dict_name_13, tmp_key_name_13 );
        Py_DECREF( tmp_key_name_13 );
        if ( tmp_dict_value_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_4 );

            exception_lineno = 477;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_11, tmp_dict_value_15 );
        Py_DECREF( tmp_dict_value_15 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_12 = const_str_plain_success;
        CHECK_OBJECT( var_mode );
        tmp_compexpr_left_28 = var_mode;
        tmp_compexpr_right_28 = const_int_0;
        tmp_dict_value_16 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_28, tmp_compexpr_right_28 );
        if ( tmp_dict_value_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_4 );

            exception_lineno = 477;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_12, tmp_dict_value_16 );
        Py_DECREF( tmp_dict_value_16 );
        assert( !(tmp_res != 0) );
        frame_fd196b314c9e532c6f62f5120080450d->m_frame.f_lineno = 475;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_79, tmp_kw_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 475;
            type_description_1 = "oooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd196b314c9e532c6f62f5120080450d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd196b314c9e532c6f62f5120080450d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd196b314c9e532c6f62f5120080450d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fd196b314c9e532c6f62f5120080450d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fd196b314c9e532c6f62f5120080450d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fd196b314c9e532c6f62f5120080450d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fd196b314c9e532c6f62f5120080450d,
        type_description_1,
        par_func,
        par_x0,
        par_args,
        par_jac,
        par_bounds,
        par_constraints,
        par_maxiter,
        par_ftol,
        par_iprint,
        par_disp,
        par_eps,
        par_callback,
        par_unknown_options,
        var_fprime,
        var_iter,
        var_acc,
        var_epsilon,
        var_cons,
        var_ic,
        var_con,
        var_ctype,
        var_cjac,
        var_cjac_factory,
        var_exit_modes,
        var_feval,
        var_geval,
        var_x,
        var_meq,
        var_mieq,
        var_m,
        var_la,
        var_n,
        var_n1,
        var_mineq,
        var_len_w,
        var_len_jw,
        var_w,
        var_jw,
        var_xl,
        var_xu,
        var_bnds,
        var_bnderr,
        var_infbnd,
        var_have_bound,
        var_mode,
        var_majiter,
        var_majiter_prev,
        var_alpha,
        var_f0,
        var_gs,
        var_h1,
        var_h2,
        var_h3,
        var_h4,
        var_t,
        var_t0,
        var_tol,
        var_iexact,
        var_incons,
        var_ireset,
        var_itermx,
        var_line,
        var_n2,
        var_n3,
        var_fx,
        var_c_eq,
        var_c_ieq,
        var_c,
        var_g,
        var_a_eq,
        var_a_ieq,
        var_a
    );


    // Release cached frame.
    if ( frame_fd196b314c9e532c6f62f5120080450d == cache_frame_fd196b314c9e532c6f62f5120080450d )
    {
        Py_DECREF( frame_fd196b314c9e532c6f62f5120080450d );
    }
    cache_frame_fd196b314c9e532c6f62f5120080450d = NULL;

    assertFrameObject( frame_fd196b314c9e532c6f62f5120080450d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_7:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    CHECK_OBJECT( (PyObject *)par_constraints );
    Py_DECREF( par_constraints );
    par_constraints = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    CHECK_OBJECT( (PyObject *)par_iprint );
    Py_DECREF( par_iprint );
    par_iprint = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_eps );
    Py_DECREF( par_eps );
    par_eps = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_unknown_options );
    Py_DECREF( par_unknown_options );
    par_unknown_options = NULL;

    CHECK_OBJECT( (PyObject *)var_fprime );
    Py_DECREF( var_fprime );
    var_fprime = NULL;

    CHECK_OBJECT( (PyObject *)var_iter );
    Py_DECREF( var_iter );
    var_iter = NULL;

    CHECK_OBJECT( (PyObject *)var_acc );
    Py_DECREF( var_acc );
    var_acc = NULL;

    CHECK_OBJECT( (PyObject *)var_epsilon );
    Py_DECREF( var_epsilon );
    var_epsilon = NULL;

    CHECK_OBJECT( (PyObject *)var_cons );
    Py_DECREF( var_cons );
    var_cons = NULL;

    Py_XDECREF( var_ic );
    var_ic = NULL;

    Py_XDECREF( var_con );
    var_con = NULL;

    Py_XDECREF( var_ctype );
    var_ctype = NULL;

    Py_XDECREF( var_cjac );
    var_cjac = NULL;

    Py_XDECREF( var_cjac_factory );
    var_cjac_factory = NULL;

    CHECK_OBJECT( (PyObject *)var_exit_modes );
    Py_DECREF( var_exit_modes );
    var_exit_modes = NULL;

    CHECK_OBJECT( (PyObject *)var_feval );
    Py_DECREF( var_feval );
    var_feval = NULL;

    CHECK_OBJECT( (PyObject *)var_geval );
    Py_DECREF( var_geval );
    var_geval = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_meq );
    Py_DECREF( var_meq );
    var_meq = NULL;

    CHECK_OBJECT( (PyObject *)var_mieq );
    Py_DECREF( var_mieq );
    var_mieq = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_la );
    Py_DECREF( var_la );
    var_la = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_n1 );
    Py_DECREF( var_n1 );
    var_n1 = NULL;

    CHECK_OBJECT( (PyObject *)var_mineq );
    Py_DECREF( var_mineq );
    var_mineq = NULL;

    CHECK_OBJECT( (PyObject *)var_len_w );
    Py_DECREF( var_len_w );
    var_len_w = NULL;

    CHECK_OBJECT( (PyObject *)var_len_jw );
    Py_DECREF( var_len_jw );
    var_len_jw = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

    CHECK_OBJECT( (PyObject *)var_jw );
    Py_DECREF( var_jw );
    var_jw = NULL;

    CHECK_OBJECT( (PyObject *)var_xl );
    Py_DECREF( var_xl );
    var_xl = NULL;

    CHECK_OBJECT( (PyObject *)var_xu );
    Py_DECREF( var_xu );
    var_xu = NULL;

    Py_XDECREF( var_bnds );
    var_bnds = NULL;

    Py_XDECREF( var_bnderr );
    var_bnderr = NULL;

    Py_XDECREF( var_infbnd );
    var_infbnd = NULL;

    CHECK_OBJECT( (PyObject *)var_have_bound );
    Py_DECREF( var_have_bound );
    var_have_bound = NULL;

    CHECK_OBJECT( (PyObject *)var_mode );
    Py_DECREF( var_mode );
    var_mode = NULL;

    CHECK_OBJECT( (PyObject *)var_majiter );
    Py_DECREF( var_majiter );
    var_majiter = NULL;

    CHECK_OBJECT( (PyObject *)var_majiter_prev );
    Py_DECREF( var_majiter_prev );
    var_majiter_prev = NULL;

    CHECK_OBJECT( (PyObject *)var_alpha );
    Py_DECREF( var_alpha );
    var_alpha = NULL;

    CHECK_OBJECT( (PyObject *)var_f0 );
    Py_DECREF( var_f0 );
    var_f0 = NULL;

    CHECK_OBJECT( (PyObject *)var_gs );
    Py_DECREF( var_gs );
    var_gs = NULL;

    CHECK_OBJECT( (PyObject *)var_h1 );
    Py_DECREF( var_h1 );
    var_h1 = NULL;

    CHECK_OBJECT( (PyObject *)var_h2 );
    Py_DECREF( var_h2 );
    var_h2 = NULL;

    CHECK_OBJECT( (PyObject *)var_h3 );
    Py_DECREF( var_h3 );
    var_h3 = NULL;

    CHECK_OBJECT( (PyObject *)var_h4 );
    Py_DECREF( var_h4 );
    var_h4 = NULL;

    CHECK_OBJECT( (PyObject *)var_t );
    Py_DECREF( var_t );
    var_t = NULL;

    CHECK_OBJECT( (PyObject *)var_t0 );
    Py_DECREF( var_t0 );
    var_t0 = NULL;

    CHECK_OBJECT( (PyObject *)var_tol );
    Py_DECREF( var_tol );
    var_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_iexact );
    Py_DECREF( var_iexact );
    var_iexact = NULL;

    CHECK_OBJECT( (PyObject *)var_incons );
    Py_DECREF( var_incons );
    var_incons = NULL;

    CHECK_OBJECT( (PyObject *)var_ireset );
    Py_DECREF( var_ireset );
    var_ireset = NULL;

    CHECK_OBJECT( (PyObject *)var_itermx );
    Py_DECREF( var_itermx );
    var_itermx = NULL;

    CHECK_OBJECT( (PyObject *)var_line );
    Py_DECREF( var_line );
    var_line = NULL;

    CHECK_OBJECT( (PyObject *)var_n2 );
    Py_DECREF( var_n2 );
    var_n2 = NULL;

    CHECK_OBJECT( (PyObject *)var_n3 );
    Py_DECREF( var_n3 );
    var_n3 = NULL;

    Py_XDECREF( var_fx );
    var_fx = NULL;

    Py_XDECREF( var_c_eq );
    var_c_eq = NULL;

    Py_XDECREF( var_c_ieq );
    var_c_ieq = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_a_eq );
    var_a_eq = NULL;

    Py_XDECREF( var_a_ieq );
    var_a_ieq = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_bounds );
    Py_DECREF( par_bounds );
    par_bounds = NULL;

    Py_XDECREF( par_constraints );
    par_constraints = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_ftol );
    Py_DECREF( par_ftol );
    par_ftol = NULL;

    Py_XDECREF( par_iprint );
    par_iprint = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_eps );
    Py_DECREF( par_eps );
    par_eps = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_unknown_options );
    Py_DECREF( par_unknown_options );
    par_unknown_options = NULL;

    Py_XDECREF( var_fprime );
    var_fprime = NULL;

    Py_XDECREF( var_iter );
    var_iter = NULL;

    Py_XDECREF( var_acc );
    var_acc = NULL;

    CHECK_OBJECT( (PyObject *)var_epsilon );
    Py_DECREF( var_epsilon );
    var_epsilon = NULL;

    Py_XDECREF( var_cons );
    var_cons = NULL;

    Py_XDECREF( var_ic );
    var_ic = NULL;

    Py_XDECREF( var_con );
    var_con = NULL;

    Py_XDECREF( var_ctype );
    var_ctype = NULL;

    Py_XDECREF( var_cjac );
    var_cjac = NULL;

    Py_XDECREF( var_cjac_factory );
    var_cjac_factory = NULL;

    Py_XDECREF( var_exit_modes );
    var_exit_modes = NULL;

    Py_XDECREF( var_feval );
    var_feval = NULL;

    Py_XDECREF( var_geval );
    var_geval = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_meq );
    var_meq = NULL;

    Py_XDECREF( var_mieq );
    var_mieq = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_la );
    var_la = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_n1 );
    var_n1 = NULL;

    Py_XDECREF( var_mineq );
    var_mineq = NULL;

    Py_XDECREF( var_len_w );
    var_len_w = NULL;

    Py_XDECREF( var_len_jw );
    var_len_jw = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_jw );
    var_jw = NULL;

    Py_XDECREF( var_xl );
    var_xl = NULL;

    Py_XDECREF( var_xu );
    var_xu = NULL;

    Py_XDECREF( var_bnds );
    var_bnds = NULL;

    Py_XDECREF( var_bnderr );
    var_bnderr = NULL;

    Py_XDECREF( var_infbnd );
    var_infbnd = NULL;

    Py_XDECREF( var_have_bound );
    var_have_bound = NULL;

    Py_XDECREF( var_mode );
    var_mode = NULL;

    Py_XDECREF( var_majiter );
    var_majiter = NULL;

    Py_XDECREF( var_majiter_prev );
    var_majiter_prev = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_f0 );
    var_f0 = NULL;

    Py_XDECREF( var_gs );
    var_gs = NULL;

    Py_XDECREF( var_h1 );
    var_h1 = NULL;

    Py_XDECREF( var_h2 );
    var_h2 = NULL;

    Py_XDECREF( var_h3 );
    var_h3 = NULL;

    Py_XDECREF( var_h4 );
    var_h4 = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_t0 );
    var_t0 = NULL;

    Py_XDECREF( var_tol );
    var_tol = NULL;

    Py_XDECREF( var_iexact );
    var_iexact = NULL;

    Py_XDECREF( var_incons );
    var_incons = NULL;

    Py_XDECREF( var_ireset );
    var_ireset = NULL;

    Py_XDECREF( var_itermx );
    var_itermx = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_n2 );
    var_n2 = NULL;

    Py_XDECREF( var_n3 );
    var_n3 = NULL;

    Py_XDECREF( var_fx );
    var_fx = NULL;

    Py_XDECREF( var_c_eq );
    var_c_eq = NULL;

    Py_XDECREF( var_c_ieq );
    var_c_ieq = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_a_eq );
    var_a_eq = NULL;

    Py_XDECREF( var_a_ieq );
    var_a_ieq = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp );
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


static PyObject *impl_scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$function_1_cjac_factory( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_fun = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_cjac = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$function_1_cjac_factory$$$function_1_cjac(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = self->m_closure[0];
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] = par_fun;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] );


        assert( var_cjac == NULL );
        var_cjac = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT( var_cjac );
    tmp_return_value = var_cjac;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$function_1_cjac_factory );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)var_cjac );
    Py_DECREF( var_cjac );
    var_cjac = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$function_1_cjac_factory );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$function_1_cjac_factory$$$function_1_cjac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_42b4cd7cf7475d3543b1187cbc267626;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_42b4cd7cf7475d3543b1187cbc267626 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_42b4cd7cf7475d3543b1187cbc267626, codeobj_42b4cd7cf7475d3543b1187cbc267626, module_scipy$optimize$slsqp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_42b4cd7cf7475d3543b1187cbc267626 = cache_frame_42b4cd7cf7475d3543b1187cbc267626;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_42b4cd7cf7475d3543b1187cbc267626 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_42b4cd7cf7475d3543b1187cbc267626 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_approx_jacobian );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_approx_jacobian );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "approx_jacobian" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_dircall_arg2_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "fun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "epsilon" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_42b4cd7cf7475d3543b1187cbc267626 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_42b4cd7cf7475d3543b1187cbc267626 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_42b4cd7cf7475d3543b1187cbc267626 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_42b4cd7cf7475d3543b1187cbc267626, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_42b4cd7cf7475d3543b1187cbc267626->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_42b4cd7cf7475d3543b1187cbc267626, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_42b4cd7cf7475d3543b1187cbc267626,
        type_description_1,
        par_x,
        par_args,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_42b4cd7cf7475d3543b1187cbc267626 == cache_frame_42b4cd7cf7475d3543b1187cbc267626 )
    {
        Py_DECREF( frame_42b4cd7cf7475d3543b1187cbc267626 );
    }
    cache_frame_42b4cd7cf7475d3543b1187cbc267626 = NULL;

    assertFrameObject( frame_42b4cd7cf7475d3543b1187cbc267626 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$function_1_cjac_factory$$$function_1_cjac );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$function_1_cjac_factory$$$function_1_cjac );
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



struct scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$genexpr_1_genexpr_locals {
    PyObject *var_b;
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

static PyObject *scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$genexpr_1_genexpr_locals *generator_heap = (struct scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_b = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_ccb5979ffcf318aa55942aca3b227bd7, module_scipy$optimize$slsqp, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 349;
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
            PyObject *old = generator_heap->var_b;
            generator_heap->var_b = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_b );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_unicode_arg_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_b );
        tmp_unicode_arg_1 = generator_heap->var_b;
        tmp_expression_name_1 = PyObject_Unicode( tmp_unicode_arg_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 349;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 349;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 349;
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
            generator_heap->var_b
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

    Py_XDECREF( generator_heap->var_b );
    generator_heap->var_b = NULL;

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

    Py_XDECREF( generator_heap->var_b );
    generator_heap->var_b = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$genexpr_1_genexpr_context,
        module_scipy$optimize$slsqp,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_340cdc2992bb5278443e822fe0d01552,
#endif
        codeobj_ccb5979ffcf318aa55942aca3b227bd7,
        1,
        sizeof(struct scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$genexpr_1_genexpr_locals)
    );
}



static PyObject *MAKE_FUNCTION_scipy$optimize$slsqp$$$function_1_approx_jacobian(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$slsqp$$$function_1_approx_jacobian,
        const_str_plain_approx_jacobian,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0eb0d2054f37cbe29190f42ae3b40a6e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$slsqp,
        const_str_digest_44367e116a0f1ac5c11887c6f6aef1ae,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$slsqp$$$function_2_fmin_slsqp( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$slsqp$$$function_2_fmin_slsqp,
        const_str_plain_fmin_slsqp,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a2718d71d1d4bfb809f323c8400d55e9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$slsqp,
        const_str_digest_3bd46f44d6d3623ff5d93e6f49aa8a3b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$slsqp$$$function_3__minimize_slsqp( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$slsqp$$$function_3__minimize_slsqp,
        const_str_plain__minimize_slsqp,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fd196b314c9e532c6f62f5120080450d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$slsqp,
        const_str_digest_d515936cc574c359ed3981ced1fc8ebf,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$function_1_cjac_factory(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$function_1_cjac_factory,
        const_str_plain_cjac_factory,
#if PYTHON_VERSION >= 300
        const_str_digest_b0d0a401fbd6e5c4a3c6963a35d8ad97,
#endif
        codeobj_dfe3881c591bc83dbb4f4666383d31af,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$slsqp,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$function_1_cjac_factory$$$function_1_cjac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$slsqp$$$function_3__minimize_slsqp$$$function_1_cjac_factory$$$function_1_cjac,
        const_str_plain_cjac,
#if PYTHON_VERSION >= 300
        const_str_digest_6451106b22fd31c8c30e15751a140349,
#endif
        codeobj_42b4cd7cf7475d3543b1187cbc267626,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$slsqp,
        NULL,
        2
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$slsqp =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize.slsqp",
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

MOD_INIT_DECL( scipy$optimize$slsqp )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$slsqp );
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
    puts("scipy.optimize.slsqp: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize.slsqp: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize.slsqp: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$slsqp" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$slsqp = Py_InitModule4(
        "scipy.optimize.slsqp",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$slsqp = PyModule_Create( &mdef_scipy$optimize$slsqp );
#endif

    moduledict_scipy$optimize$slsqp = MODULE_DICT( module_scipy$optimize$slsqp );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$slsqp,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$slsqp,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$slsqp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$slsqp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$slsqp );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_978a5eac1cc81fb2cd0c4011475c79b9, module_scipy$optimize$slsqp );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_7dc9317ae3ab5a2dfbf2a8c52e33045f;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_f8ea57c112936f7a4eb28e96c0cc5907;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_7dc9317ae3ab5a2dfbf2a8c52e33045f = MAKE_MODULE_FRAME( codeobj_7dc9317ae3ab5a2dfbf2a8c52e33045f, module_scipy$optimize$slsqp );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_7dc9317ae3ab5a2dfbf2a8c52e33045f );
    assert( Py_REFCNT( frame_7dc9317ae3ab5a2dfbf2a8c52e33045f ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_7dc9317ae3ab5a2dfbf2a8c52e33045f->m_frame.f_lineno = 16;
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


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_assign_source_8 = LIST_COPY( const_list_str_plain_approx_jacobian_str_plain_fmin_slsqp_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$slsqp;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_7dc9317ae3ab5a2dfbf2a8c52e33045f->m_frame.f_lineno = 20;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_152ca1147f6fb9944a86f66d1a358905;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$slsqp;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_slsqp_tuple;
        tmp_level_name_2 = const_int_0;
        frame_7dc9317ae3ab5a2dfbf2a8c52e33045f->m_frame.f_lineno = 21;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_slsqp );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_slsqp, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_numpy;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$slsqp;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_dca3ee712b174232759d82ad1fc7d69e_tuple;
        tmp_level_name_3 = const_int_0;
        frame_7dc9317ae3ab5a2dfbf2a8c52e33045f->m_frame.f_lineno = 22;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
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


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_array );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_linalg );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_linalg, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_append );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_append, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_asfarray );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_asfarray, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_concatenate );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_concatenate, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_finfo );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_finfo, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_12 = tmp_import_from_2__module;
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_sqrt );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_sqrt, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_13 = tmp_import_from_2__module;
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_vstack );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_vstack, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_14 = tmp_import_from_2__module;
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_exp );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_exp, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_15 = tmp_import_from_2__module;
        tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_inf );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_inf, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_16 = tmp_import_from_2__module;
        tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_isfinite );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_isfinite, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_17 = tmp_import_from_2__module;
        tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_atleast_1d );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_atleast_1d, tmp_assign_source_24 );
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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_optimize;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$slsqp;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_431e2e976d28fb73754dc29fc273ee9a_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_7dc9317ae3ab5a2dfbf2a8c52e33045f->m_frame.f_lineno = 24;
        tmp_assign_source_25 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_25;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_18 ) )
        {
           tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_scipy$optimize$slsqp,
                const_str_plain_wrap_function,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_wrap_function );
        }

        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_wrap_function, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_19 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_19 ) )
        {
           tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_scipy$optimize$slsqp,
                const_str_plain_OptimizeResult,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_OptimizeResult );
        }

        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_OptimizeResult, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_20 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_20 ) )
        {
           tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_scipy$optimize$slsqp,
                const_str_plain__check_unknown_options,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain__check_unknown_options );
        }

        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain__check_unknown_options, tmp_assign_source_28 );
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
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = const_str_digest_e58b8e238daae7f316f45d0978267798;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___docformat__, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_sqrt );

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

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_finfo );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_finfo );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "finfo" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        frame_7dc9317ae3ab5a2dfbf2a8c52e33045f->m_frame.f_lineno = 28;
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_type_float_tuple, 0 ) );

        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_eps );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        frame_7dc9317ae3ab5a2dfbf2a8c52e33045f->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain__epsilon, tmp_assign_source_30 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7dc9317ae3ab5a2dfbf2a8c52e33045f );
#endif
    popFrameStack();

    assertFrameObject( frame_7dc9317ae3ab5a2dfbf2a8c52e33045f );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7dc9317ae3ab5a2dfbf2a8c52e33045f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7dc9317ae3ab5a2dfbf2a8c52e33045f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7dc9317ae3ab5a2dfbf2a8c52e33045f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7dc9317ae3ab5a2dfbf2a8c52e33045f, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_scipy$optimize$slsqp$$$function_1_approx_jacobian(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_approx_jacobian, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_5;
        tmp_tuple_element_1 = const_tuple_empty;
        tmp_defaults_1 = PyTuple_New( 16 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_tuple_empty;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_tuple_empty;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 5, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 6, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 7, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_tuple_empty;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 8, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_pos_100;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 9, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_float_1eminus_06;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 10, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 11, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 12, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 13, tmp_tuple_element_1 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain__epsilon );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__epsilon );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_tuple_element_1 = tmp_mvar_value_5;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 14, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 15, tmp_tuple_element_1 );
        tmp_assign_source_32 = MAKE_FUNCTION_scipy$optimize$slsqp$$$function_2_fmin_slsqp( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain_fmin_slsqp, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_6;
        tmp_tuple_element_2 = const_tuple_empty;
        tmp_defaults_2 = PyTuple_New( 10 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_None;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_None;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 2, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_tuple_empty;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 3, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_pos_100;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 4, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_float_1eminus_06;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 5, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 6, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_False;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 7, tmp_tuple_element_2 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain__epsilon );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__epsilon );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_tuple_element_2 = tmp_mvar_value_6;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 8, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_None;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 9, tmp_tuple_element_2 );
        tmp_assign_source_33 = MAKE_FUNCTION_scipy$optimize$slsqp$$$function_3__minimize_slsqp( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain__minimize_slsqp, tmp_assign_source_33 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$slsqp, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$slsqp );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
