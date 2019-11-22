/* Generated code for Python module 'scipy.optimize._trustregion_constr.canonical_constraint'
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

/* The "_module_scipy$optimize$_trustregion_constr$canonical_constraint" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_trustregion_constr$canonical_constraint;
PyDictObject *moduledict_scipy$optimize$_trustregion_constr$canonical_constraint;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_result;
static PyObject *const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_interval;
static PyObject *const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_tuple_str_plain_c_tuple;
extern PyObject *const_str_plain_zip;
static PyObject *const_str_plain_index_ineq;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_h;
static PyObject *const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple;
static PyObject *const_str_digest_a175847ca99949fa7ba269b227922c17;
static PyObject *const_tuple_str_plain_x_str_plain_empty_fun_str_plain_cfun_str_plain_ub_tuple;
static PyObject *const_str_plain_n_interval;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_zeros_like;
static PyObject *const_str_plain_finite_ub;
static PyObject *const_str_digest_f447b5bb13881bab9f64245c20b0144b;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_jac;
static PyObject *const_str_digest_c1436350f021d6f25286256a15855f7a;
static PyObject *const_str_digest_fe468d1c987f27d85d4842ffc96097c3;
static PyObject *const_str_digest_a9b2641cfe3d1463334d4f96ca5e137a;
static PyObject *const_tuple_str_plain_x_str_plain_v_eq_str_plain_v_ineq_str_plain_cfun_tuple;
static PyObject *const_str_digest_6b530982ceab60ea0450df2b5616cff2;
extern PyObject *const_str_plain_hess;
extern PyObject *const_str_plain_m;
static PyObject *const_str_digest_0b491275b4dfbd3f9a99afc2c1693f19;
static PyObject *const_tuple_str_plain_x_str_plain_empty_fun_str_plain_lb_str_plain_cfun_tuple;
static PyObject *const_str_plain_empty_fun;
static PyObject *const_str_plain_canonical_constraints;
extern PyObject *const_str_plain_n_ineq;
extern PyObject *const_str_plain_classmethod;
static PyObject *const_str_digest_38af509fb80c9a7e7cd436e264e2fef0;
static PyObject *const_tuple_str_plain_CanonicalConstraint_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_e9f07429659cdcdc28588cf64f151044;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_hstack;
static PyObject *const_tuple_str_plain_x_str_plain_empty_jac_tuple;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_v_ineq;
static PyObject *const_str_plain_n_greater;
static PyObject *const_str_digest_d7943be770ac08fc59b63e6cfbdf403e;
static PyObject *const_str_digest_50eedd0676181a1129301fa273b31fe4;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_tuple_list_empty_list_empty_tuple;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_equal;
static PyObject *const_str_plain_hess_all;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_4bf0956bbb2cabfbe03a71d8e47f180a_tuple;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_J;
static PyObject *const_str_plain_v_l;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_p;
static PyObject *const_str_digest_cbd0c358c492d0a921135ea83beae8cd;
static PyObject *const_tuple_8fb37f6c67b52ae51145859e969c7a91_tuple;
extern PyObject *const_str_plain_value;
static PyObject *const_str_plain_ineq_all;
extern PyObject *const_str_plain_float;
static PyObject *const_str_plain_n_start;
extern PyObject *const_str_plain_all;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_c_tuple;
static PyObject *const_str_plain_index_eq;
static PyObject *const_str_digest_d6e9cffb0aeb62d515c00f9750f5f722;
static PyObject *const_str_digest_6aaaca2d20360fd9d49aa594ef317b07;
static PyObject *const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple;
extern PyObject *const_str_plain_from_PreparedConstraint;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_plain_il;
extern PyObject *const_str_plain_ge;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_5d1ccb4fd0db149583d8744320d26fb0;
static PyObject *const_str_digest_1a1aa507769c98595fce8a2b97f171f3;
static PyObject *const_tuple_a6731bf874dae06f1b47705501093380_tuple;
static PyObject *const_tuple_f1c44e0ae95df9755c0b774ccca5ca3b_tuple;
static PyObject *const_str_plain_vc_eq;
static PyObject *const_str_digest_68bb1842ff0d461de56cf24a7df5284e;
extern PyObject *const_str_plain_ub;
static PyObject *const_tuple_str_plain_p_str_plain_result_str_plain_h_str_plain_hess_all_tuple;
static PyObject *const_str_digest_c77d9754d6b8c6a6ba439f118f54c9f3;
static PyObject *const_str_digest_5d664284f6d39b5e60c84e9105e8d607;
static PyObject *const_tuple_str_plain_x_str_plain_empty_jac_str_plain_cfun_tuple;
extern PyObject *const_str_plain_matvec;
static PyObject *const_tuple_d8d4f14826ea3fa54a1ed6b4255921ac_tuple;
static PyObject *const_tuple_64abca84f0576c79df5e6547b19cb007_tuple;
extern PyObject *const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202;
static PyObject *const_str_digest_869f70370b475e6ac8b732cbf44b77a2;
extern PyObject *const_tuple_str_plain_c_str_plain_x_tuple;
static PyObject *const_str_plain__equal_to_canonical;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_sparse_jacobian;
extern PyObject *const_str_plain_issparse;
static PyObject *const_str_digest_1f4dc25f2fc1213c730ad476490bfa12;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_str_plain_concatenate;
static PyObject *const_tuple_48b77e71308830e305852f795764fc9d_tuple;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_eq;
extern PyObject *const_str_plain_greater;
static PyObject *const_str_plain_n_less;
extern PyObject *const_str_plain_sps;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_f;
static PyObject *const_tuple_0b57d08075ae0e8a88e654b0b75a7957_tuple;
extern PyObject *const_str_plain_vstack;
static PyObject *const_tuple_2cdc05e8e0200f64d98319d551d4c11c_tuple;
static PyObject *const_str_plain_v_il;
static PyObject *const_tuple_str_plain_x_str_plain_cfun_str_plain_empty_jac_tuple;
extern PyObject *const_int_0;
static PyObject *const_str_plain_v_ig;
static PyObject *const_str_plain_cfun;
extern PyObject *const_str_plain_initial_constraints_as_canonical;
static PyObject *const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple;
static PyObject *const_str_plain_finite_lb;
static PyObject *const_str_digest_651e18aa01d78e23b816799a427d5632;
static PyObject *const_str_plain__less_to_canonical;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_v_eq;
static PyObject *const_str_digest_925ebe92959001dc48fb96e337fc5979;
extern PyObject *const_str_plain_CanonicalConstraint;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_str_digest_48a88dfeff85e2d8733367c6a53d2ddc;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_sparse;
extern PyObject *const_dict_8a6ce79bb59f45c062c2a0027a3a0c33;
static PyObject *const_str_digest_cebd83733491c54df846f05a078e3cf9;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_less;
static PyObject *const_str_digest_fb1f8addfe6a59acf2f8f427ad06e0f3;
static PyObject *const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple;
static PyObject *const_str_digest_d85d81c0e8371b8f6bc724864670fa84;
extern PyObject *const_str_plain_n_eq;
static PyObject *const_tuple_str_plain_x_str_plain_empty_fun_tuple;
static PyObject *const_str_plain__interval_to_canonical;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_35032cc2f1a77cb4428ba95e4bcaf387_tuple;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_vc_ineq;
static PyObject *const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_zeros;
static PyObject *const_tuple_355e78762f6937b0d0ec9c80fb8d8589_tuple;
static PyObject *const_str_digest_a824b1415562212ab21c5323e6d0f9a7;
extern PyObject *const_str_plain_keep_feasible;
static PyObject *const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple;
static PyObject *const_str_digest_8e11349ac45b5a7668d9fb4da34cb1e1;
static PyObject *const_str_digest_6428c1fb608574415ee63f9fafa27e83;
static PyObject *const_str_plain_eq_all;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
static PyObject *const_str_plain__greater_to_canonical;
extern PyObject *const_str_plain_LinearOperator;
static PyObject *const_str_plain_ig;
static PyObject *const_tuple_a8e712cb97313bde75b0e52128da9420_tuple;
extern PyObject *const_str_plain_ineq;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_lb;
static PyObject *const_str_plain_empty_hess;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_10f0eb3f7922f6199df36f9c53afe201;
static PyObject *const_str_digest_6f11995c4bfb8a3ef1d0281c81b129e9;
extern PyObject *const_str_plain_csr_matrix;
static PyObject *const_tuple_998fbea0e81e58b86c941a0be407ee08_tuple;
static PyObject *const_str_digest_60bf0056ab18eba17c9812c7e1c43fd8;
static PyObject *const_str_digest_593b12bc62ca3fd90d1393c8301275a7;
static PyObject *const_str_digest_b591988fb3c430c827895f8c4289f755;
extern PyObject *const_list_empty;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_bounds;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_3b1b709772fd90d12ff41bfe43d79b26_tuple;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_ub_inf;
static PyObject *const_str_plain_v_g;
static PyObject *const_str_plain_lb_inf;
extern PyObject *const_str_plain_le;
static PyObject *const_str_digest_b84dff457d63afd20942fdd0d1421e9e;
static PyObject *const_tuple_e2e7b72379bc937abbce2fdae62d232b_tuple;
extern PyObject *const_str_plain_constraint;
static PyObject *const_str_plain_empty_jac;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple, 1, const_str_plain_J ); Py_INCREF( const_str_plain_J );
    PyTuple_SET_ITEM( const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple, 2, const_str_plain_eq ); Py_INCREF( const_str_plain_eq );
    PyTuple_SET_ITEM( const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple, 3, const_str_plain_le ); Py_INCREF( const_str_plain_le );
    PyTuple_SET_ITEM( const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple, 4, const_str_plain_ge ); Py_INCREF( const_str_plain_ge );
    PyTuple_SET_ITEM( const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple, 5, const_str_plain_il ); Py_INCREF( const_str_plain_il );
    const_str_plain_ig = UNSTREAM_STRING_ASCII( &constant_bin[ 1063 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple, 6, const_str_plain_ig ); Py_INCREF( const_str_plain_ig );
    PyTuple_SET_ITEM( const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple, 7, const_str_plain_ineq ); Py_INCREF( const_str_plain_ineq );
    const_str_plain_cfun = UNSTREAM_STRING_ASCII( &constant_bin[ 4099042 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple, 8, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple, 9, const_str_plain_equal ); Py_INCREF( const_str_plain_equal );
    PyTuple_SET_ITEM( const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple, 10, const_str_plain_less ); Py_INCREF( const_str_plain_less );
    PyTuple_SET_ITEM( const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple, 11, const_str_plain_greater ); Py_INCREF( const_str_plain_greater );
    PyTuple_SET_ITEM( const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple, 12, const_str_plain_interval ); Py_INCREF( const_str_plain_interval );
    const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 1, const_str_plain_v_eq ); Py_INCREF( const_str_plain_v_eq );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 2, const_str_plain_v_ineq ); Py_INCREF( const_str_plain_v_ineq );
    const_str_plain_n_start = UNSTREAM_STRING_ASCII( &constant_bin[ 1959625 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 3, const_str_plain_n_start ); Py_INCREF( const_str_plain_n_start );
    const_str_plain_v_l = UNSTREAM_STRING_ASCII( &constant_bin[ 4265609 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 4, const_str_plain_v_l ); Py_INCREF( const_str_plain_v_l );
    const_str_plain_v_g = UNSTREAM_STRING_ASCII( &constant_bin[ 2933778 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 5, const_str_plain_v_g ); Py_INCREF( const_str_plain_v_g );
    const_str_plain_v_il = UNSTREAM_STRING_ASCII( &constant_bin[ 5073483 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 6, const_str_plain_v_il ); Py_INCREF( const_str_plain_v_il );
    const_str_plain_v_ig = UNSTREAM_STRING_ASCII( &constant_bin[ 5073487 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 7, const_str_plain_v_ig ); Py_INCREF( const_str_plain_v_ig );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 8, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_plain_n_less = UNSTREAM_STRING_ASCII( &constant_bin[ 5073491 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 9, const_str_plain_n_less ); Py_INCREF( const_str_plain_n_less );
    const_str_plain_n_greater = UNSTREAM_STRING_ASCII( &constant_bin[ 5073497 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 10, const_str_plain_n_greater ); Py_INCREF( const_str_plain_n_greater );
    const_str_plain_n_interval = UNSTREAM_STRING_ASCII( &constant_bin[ 5073506 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 11, const_str_plain_n_interval ); Py_INCREF( const_str_plain_n_interval );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 12, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 13, const_str_plain_equal ); Py_INCREF( const_str_plain_equal );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 14, const_str_plain_less ); Py_INCREF( const_str_plain_less );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 15, const_str_plain_greater ); Py_INCREF( const_str_plain_greater );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 16, const_str_plain_interval ); Py_INCREF( const_str_plain_interval );
    PyTuple_SET_ITEM( const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 17, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    const_str_plain_index_ineq = UNSTREAM_STRING_ASCII( &constant_bin[ 5073516 ], 10, 1 );
    const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple = PyTuple_New( 19 );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 1, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 2, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 3, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 4, const_str_plain_keep_feasible ); Py_INCREF( const_str_plain_keep_feasible );
    const_str_plain_lb_inf = UNSTREAM_STRING_ASCII( &constant_bin[ 5073526 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 5, const_str_plain_lb_inf ); Py_INCREF( const_str_plain_lb_inf );
    const_str_plain_ub_inf = UNSTREAM_STRING_ASCII( &constant_bin[ 5073532 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 6, const_str_plain_ub_inf ); Py_INCREF( const_str_plain_ub_inf );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 7, const_str_plain_equal ); Py_INCREF( const_str_plain_equal );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 8, const_str_plain_less ); Py_INCREF( const_str_plain_less );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 9, const_str_plain_greater ); Py_INCREF( const_str_plain_greater );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 10, const_str_plain_interval ); Py_INCREF( const_str_plain_interval );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 11, const_str_plain_n_less ); Py_INCREF( const_str_plain_n_less );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 12, const_str_plain_n_greater ); Py_INCREF( const_str_plain_n_greater );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 13, const_str_plain_n_interval ); Py_INCREF( const_str_plain_n_interval );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 14, const_str_plain_n_ineq ); Py_INCREF( const_str_plain_n_ineq );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 15, const_str_plain_n_eq ); Py_INCREF( const_str_plain_n_eq );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 16, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 17, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 18, const_str_plain_hess ); Py_INCREF( const_str_plain_hess );
    const_str_digest_a175847ca99949fa7ba269b227922c17 = UNSTREAM_STRING_ASCII( &constant_bin[ 5073538 ], 51, 0 );
    const_tuple_str_plain_x_str_plain_empty_fun_str_plain_cfun_str_plain_ub_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_fun_str_plain_cfun_str_plain_ub_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_empty_fun = UNSTREAM_STRING_ASCII( &constant_bin[ 5073589 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_fun_str_plain_cfun_str_plain_ub_tuple, 1, const_str_plain_empty_fun ); Py_INCREF( const_str_plain_empty_fun );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_fun_str_plain_cfun_str_plain_ub_tuple, 2, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_fun_str_plain_cfun_str_plain_ub_tuple, 3, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    const_str_plain_finite_ub = UNSTREAM_STRING_ASCII( &constant_bin[ 5073598 ], 9, 1 );
    const_str_digest_f447b5bb13881bab9f64245c20b0144b = UNSTREAM_STRING_ASCII( &constant_bin[ 5073607 ], 44, 0 );
    const_str_digest_c1436350f021d6f25286256a15855f7a = UNSTREAM_STRING_ASCII( &constant_bin[ 5073651 ], 54, 0 );
    const_str_digest_fe468d1c987f27d85d4842ffc96097c3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5073705 ], 44, 0 );
    const_str_digest_a9b2641cfe3d1463334d4f96ca5e137a = UNSTREAM_STRING_ASCII( &constant_bin[ 5073749 ], 55, 0 );
    const_tuple_str_plain_x_str_plain_v_eq_str_plain_v_ineq_str_plain_cfun_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_v_eq_str_plain_v_ineq_str_plain_cfun_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_v_eq_str_plain_v_ineq_str_plain_cfun_tuple, 1, const_str_plain_v_eq ); Py_INCREF( const_str_plain_v_eq );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_v_eq_str_plain_v_ineq_str_plain_cfun_tuple, 2, const_str_plain_v_ineq ); Py_INCREF( const_str_plain_v_ineq );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_v_eq_str_plain_v_ineq_str_plain_cfun_tuple, 3, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    const_str_digest_6b530982ceab60ea0450df2b5616cff2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5073804 ], 54, 0 );
    const_str_digest_0b491275b4dfbd3f9a99afc2c1693f19 = UNSTREAM_STRING_ASCII( &constant_bin[ 5073858 ], 39, 0 );
    const_tuple_str_plain_x_str_plain_empty_fun_str_plain_lb_str_plain_cfun_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_fun_str_plain_lb_str_plain_cfun_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_fun_str_plain_lb_str_plain_cfun_tuple, 1, const_str_plain_empty_fun ); Py_INCREF( const_str_plain_empty_fun );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_fun_str_plain_lb_str_plain_cfun_tuple, 2, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_fun_str_plain_lb_str_plain_cfun_tuple, 3, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    const_str_plain_canonical_constraints = UNSTREAM_STRING_ASCII( &constant_bin[ 5073897 ], 21, 1 );
    const_str_digest_38af509fb80c9a7e7cd436e264e2fef0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5073918 ], 56, 0 );
    const_tuple_str_plain_CanonicalConstraint_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CanonicalConstraint_tuple_type_object_tuple_tuple, 0, const_str_plain_CanonicalConstraint ); Py_INCREF( const_str_plain_CanonicalConstraint );
    PyTuple_SET_ITEM( const_tuple_str_plain_CanonicalConstraint_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_e9f07429659cdcdc28588cf64f151044 = UNSTREAM_STRING_ASCII( &constant_bin[ 5073858 ], 25, 0 );
    const_tuple_str_plain_x_str_plain_empty_jac_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_jac_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_empty_jac = UNSTREAM_STRING_ASCII( &constant_bin[ 5073974 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_jac_tuple, 1, const_str_plain_empty_jac ); Py_INCREF( const_str_plain_empty_jac );
    const_str_digest_d7943be770ac08fc59b63e6cfbdf403e = UNSTREAM_STRING_ASCII( &constant_bin[ 5073983 ], 166, 0 );
    const_str_digest_50eedd0676181a1129301fa273b31fe4 = UNSTREAM_STRING_ASCII( &constant_bin[ 5074149 ], 52, 0 );
    const_str_plain_hess_all = UNSTREAM_STRING_ASCII( &constant_bin[ 5074201 ], 8, 1 );
    const_tuple_4bf0956bbb2cabfbe03a71d8e47f180a_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5074209 ], 174 );
    const_str_digest_cbd0c358c492d0a921135ea83beae8cd = UNSTREAM_STRING_ASCII( &constant_bin[ 5074383 ], 61, 0 );
    const_tuple_8fb37f6c67b52ae51145859e969c7a91_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_8fb37f6c67b52ae51145859e969c7a91_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_8fb37f6c67b52ae51145859e969c7a91_tuple, 1, const_str_plain_v_eq ); Py_INCREF( const_str_plain_v_eq );
    PyTuple_SET_ITEM( const_tuple_8fb37f6c67b52ae51145859e969c7a91_tuple, 2, const_str_plain_v_ineq ); Py_INCREF( const_str_plain_v_ineq );
    PyTuple_SET_ITEM( const_tuple_8fb37f6c67b52ae51145859e969c7a91_tuple, 3, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_8fb37f6c67b52ae51145859e969c7a91_tuple, 4, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    const_str_plain_finite_lb = UNSTREAM_STRING_ASCII( &constant_bin[ 5074311 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_8fb37f6c67b52ae51145859e969c7a91_tuple, 5, const_str_plain_finite_lb ); Py_INCREF( const_str_plain_finite_lb );
    const_str_plain_ineq_all = UNSTREAM_STRING_ASCII( &constant_bin[ 5074444 ], 8, 1 );
    const_str_plain_index_eq = UNSTREAM_STRING_ASCII( &constant_bin[ 5074452 ], 8, 1 );
    const_str_digest_d6e9cffb0aeb62d515c00f9750f5f722 = UNSTREAM_STRING_ASCII( &constant_bin[ 5074460 ], 1454, 0 );
    const_str_digest_6aaaca2d20360fd9d49aa594ef317b07 = UNSTREAM_STRING_ASCII( &constant_bin[ 5075914 ], 64, 0 );
    const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple, 1, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple, 2, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple, 3, const_str_plain_empty_fun ); Py_INCREF( const_str_plain_empty_fun );
    PyTuple_SET_ITEM( const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple, 5, const_str_plain_n_eq ); Py_INCREF( const_str_plain_n_eq );
    PyTuple_SET_ITEM( const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple, 6, const_str_plain_n_ineq ); Py_INCREF( const_str_plain_n_ineq );
    PyTuple_SET_ITEM( const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple, 7, const_str_plain_keep_feasible ); Py_INCREF( const_str_plain_keep_feasible );
    PyTuple_SET_ITEM( const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple, 8, const_str_plain_empty_jac ); Py_INCREF( const_str_plain_empty_jac );
    PyTuple_SET_ITEM( const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple, 9, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple, 10, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple, 11, const_str_plain_hess ); Py_INCREF( const_str_plain_hess );
    const_str_digest_5d1ccb4fd0db149583d8744320d26fb0 = UNSTREAM_STRING_ASCII( &constant_bin[ 5075978 ], 38, 0 );
    const_str_digest_1a1aa507769c98595fce8a2b97f171f3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5074383 ], 45, 0 );
    const_tuple_a6731bf874dae06f1b47705501093380_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a6731bf874dae06f1b47705501093380_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_a6731bf874dae06f1b47705501093380_tuple, 1, const_str_plain_v_eq ); Py_INCREF( const_str_plain_v_eq );
    PyTuple_SET_ITEM( const_tuple_a6731bf874dae06f1b47705501093380_tuple, 2, const_str_plain_v_ineq ); Py_INCREF( const_str_plain_v_ineq );
    const_str_plain_empty_hess = UNSTREAM_STRING_ASCII( &constant_bin[ 5076016 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_a6731bf874dae06f1b47705501093380_tuple, 3, const_str_plain_empty_hess ); Py_INCREF( const_str_plain_empty_hess );
    const_tuple_f1c44e0ae95df9755c0b774ccca5ca3b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f1c44e0ae95df9755c0b774ccca5ca3b_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_eq_all = UNSTREAM_STRING_ASCII( &constant_bin[ 5074446 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_f1c44e0ae95df9755c0b774ccca5ca3b_tuple, 1, const_str_plain_eq_all ); Py_INCREF( const_str_plain_eq_all );
    PyTuple_SET_ITEM( const_tuple_f1c44e0ae95df9755c0b774ccca5ca3b_tuple, 2, const_str_plain_ineq_all ); Py_INCREF( const_str_plain_ineq_all );
    PyTuple_SET_ITEM( const_tuple_f1c44e0ae95df9755c0b774ccca5ca3b_tuple, 3, const_str_plain_canonical_constraints ); Py_INCREF( const_str_plain_canonical_constraints );
    PyTuple_SET_ITEM( const_tuple_f1c44e0ae95df9755c0b774ccca5ca3b_tuple, 4, const_str_plain_vstack ); Py_INCREF( const_str_plain_vstack );
    const_str_plain_vc_eq = UNSTREAM_STRING_ASCII( &constant_bin[ 5076026 ], 5, 1 );
    const_str_digest_68bb1842ff0d461de56cf24a7df5284e = UNSTREAM_STRING_ASCII( &constant_bin[ 5076031 ], 28, 0 );
    const_tuple_str_plain_p_str_plain_result_str_plain_h_str_plain_hess_all_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_result_str_plain_h_str_plain_hess_all_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_result_str_plain_h_str_plain_hess_all_tuple, 1, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_result_str_plain_h_str_plain_hess_all_tuple, 2, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_result_str_plain_h_str_plain_hess_all_tuple, 3, const_str_plain_hess_all ); Py_INCREF( const_str_plain_hess_all );
    const_str_digest_c77d9754d6b8c6a6ba439f118f54c9f3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5076059 ], 53, 0 );
    const_str_digest_5d664284f6d39b5e60c84e9105e8d607 = UNSTREAM_STRING_ASCII( &constant_bin[ 5073651 ], 41, 0 );
    const_tuple_str_plain_x_str_plain_empty_jac_str_plain_cfun_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_jac_str_plain_cfun_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_jac_str_plain_cfun_tuple, 1, const_str_plain_empty_jac ); Py_INCREF( const_str_plain_empty_jac );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_jac_str_plain_cfun_tuple, 2, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    const_tuple_d8d4f14826ea3fa54a1ed6b4255921ac_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d8d4f14826ea3fa54a1ed6b4255921ac_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_d8d4f14826ea3fa54a1ed6b4255921ac_tuple, 1, const_str_plain_empty_fun ); Py_INCREF( const_str_plain_empty_fun );
    PyTuple_SET_ITEM( const_tuple_d8d4f14826ea3fa54a1ed6b4255921ac_tuple, 2, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_d8d4f14826ea3fa54a1ed6b4255921ac_tuple, 3, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_d8d4f14826ea3fa54a1ed6b4255921ac_tuple, 4, const_str_plain_finite_lb ); Py_INCREF( const_str_plain_finite_lb );
    const_tuple_64abca84f0576c79df5e6547b19cb007_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_64abca84f0576c79df5e6547b19cb007_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_64abca84f0576c79df5e6547b19cb007_tuple, 1, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_64abca84f0576c79df5e6547b19cb007_tuple, 2, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_64abca84f0576c79df5e6547b19cb007_tuple, 3, const_str_plain_empty_fun ); Py_INCREF( const_str_plain_empty_fun );
    const_str_digest_869f70370b475e6ac8b732cbf44b77a2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5076112 ], 55, 0 );
    const_str_plain__equal_to_canonical = UNSTREAM_STRING_ASCII( &constant_bin[ 5074169 ], 19, 1 );
    const_str_digest_1f4dc25f2fc1213c730ad476490bfa12 = UNSTREAM_STRING_ASCII( &constant_bin[ 5076167 ], 43, 0 );
    const_tuple_48b77e71308830e305852f795764fc9d_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_48b77e71308830e305852f795764fc9d_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_48b77e71308830e305852f795764fc9d_tuple, 1, const_str_plain_empty_fun ); Py_INCREF( const_str_plain_empty_fun );
    PyTuple_SET_ITEM( const_tuple_48b77e71308830e305852f795764fc9d_tuple, 2, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_48b77e71308830e305852f795764fc9d_tuple, 3, const_str_plain_finite_ub ); Py_INCREF( const_str_plain_finite_ub );
    PyTuple_SET_ITEM( const_tuple_48b77e71308830e305852f795764fc9d_tuple, 4, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    const_tuple_0b57d08075ae0e8a88e654b0b75a7957_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_0b57d08075ae0e8a88e654b0b75a7957_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_0b57d08075ae0e8a88e654b0b75a7957_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_0b57d08075ae0e8a88e654b0b75a7957_tuple, 2, const_str_plain_empty_fun ); Py_INCREF( const_str_plain_empty_fun );
    PyTuple_SET_ITEM( const_tuple_0b57d08075ae0e8a88e654b0b75a7957_tuple, 3, const_str_plain_empty_jac ); Py_INCREF( const_str_plain_empty_jac );
    PyTuple_SET_ITEM( const_tuple_0b57d08075ae0e8a88e654b0b75a7957_tuple, 4, const_str_plain_empty_hess ); Py_INCREF( const_str_plain_empty_hess );
    PyTuple_SET_ITEM( const_tuple_0b57d08075ae0e8a88e654b0b75a7957_tuple, 5, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_0b57d08075ae0e8a88e654b0b75a7957_tuple, 6, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_0b57d08075ae0e8a88e654b0b75a7957_tuple, 7, const_str_plain_hess ); Py_INCREF( const_str_plain_hess );
    const_tuple_2cdc05e8e0200f64d98319d551d4c11c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_2cdc05e8e0200f64d98319d551d4c11c_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_2cdc05e8e0200f64d98319d551d4c11c_tuple, 1, const_str_plain_empty_jac ); Py_INCREF( const_str_plain_empty_jac );
    PyTuple_SET_ITEM( const_tuple_2cdc05e8e0200f64d98319d551d4c11c_tuple, 2, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_2cdc05e8e0200f64d98319d551d4c11c_tuple, 3, const_str_plain_finite_lb ); Py_INCREF( const_str_plain_finite_lb );
    const_tuple_str_plain_x_str_plain_cfun_str_plain_empty_jac_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_cfun_str_plain_empty_jac_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_cfun_str_plain_empty_jac_tuple, 1, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_cfun_str_plain_empty_jac_tuple, 2, const_str_plain_empty_jac ); Py_INCREF( const_str_plain_empty_jac );
    const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 1, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 2, const_str_plain_eq ); Py_INCREF( const_str_plain_eq );
    PyTuple_SET_ITEM( const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 3, const_str_plain_le ); Py_INCREF( const_str_plain_le );
    PyTuple_SET_ITEM( const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 4, const_str_plain_ge ); Py_INCREF( const_str_plain_ge );
    PyTuple_SET_ITEM( const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 5, const_str_plain_il ); Py_INCREF( const_str_plain_il );
    PyTuple_SET_ITEM( const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 6, const_str_plain_ig ); Py_INCREF( const_str_plain_ig );
    PyTuple_SET_ITEM( const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 7, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 8, const_str_plain_equal ); Py_INCREF( const_str_plain_equal );
    PyTuple_SET_ITEM( const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 9, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 10, const_str_plain_less ); Py_INCREF( const_str_plain_less );
    PyTuple_SET_ITEM( const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 11, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 12, const_str_plain_greater ); Py_INCREF( const_str_plain_greater );
    PyTuple_SET_ITEM( const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 13, const_str_plain_interval ); Py_INCREF( const_str_plain_interval );
    const_str_digest_651e18aa01d78e23b816799a427d5632 = UNSTREAM_STRING_ASCII( &constant_bin[ 5076210 ], 58, 0 );
    const_str_plain__less_to_canonical = UNSTREAM_STRING_ASCII( &constant_bin[ 5073558 ], 18, 1 );
    const_str_digest_925ebe92959001dc48fb96e337fc5979 = UNSTREAM_STRING_ASCII( &constant_bin[ 5073607 ], 31, 0 );
    const_str_digest_48a88dfeff85e2d8733367c6a53d2ddc = UNSTREAM_STRING_ASCII( &constant_bin[ 5076268 ], 38, 0 );
    const_str_digest_cebd83733491c54df846f05a078e3cf9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5073749 ], 42, 0 );
    const_str_digest_fb1f8addfe6a59acf2f8f427ad06e0f3 = UNSTREAM_STRING_ASCII( &constant_bin[ 5074149 ], 39, 0 );
    const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple, 1, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple, 2, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple, 3, const_str_plain_keep_feasible ); Py_INCREF( const_str_plain_keep_feasible );
    PyTuple_SET_ITEM( const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple, 4, const_str_plain_empty_fun ); Py_INCREF( const_str_plain_empty_fun );
    PyTuple_SET_ITEM( const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple, 5, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple, 6, const_str_plain_empty_jac ); Py_INCREF( const_str_plain_empty_jac );
    PyTuple_SET_ITEM( const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple, 7, const_str_plain_finite_ub ); Py_INCREF( const_str_plain_finite_ub );
    PyTuple_SET_ITEM( const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple, 8, const_str_plain_n_eq ); Py_INCREF( const_str_plain_n_eq );
    PyTuple_SET_ITEM( const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple, 9, const_str_plain_n_ineq ); Py_INCREF( const_str_plain_n_ineq );
    PyTuple_SET_ITEM( const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple, 10, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple, 11, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple, 12, const_str_plain_hess ); Py_INCREF( const_str_plain_hess );
    const_str_digest_d85d81c0e8371b8f6bc724864670fa84 = UNSTREAM_STRING_ASCII( &constant_bin[ 5076306 ], 50, 0 );
    const_tuple_str_plain_x_str_plain_empty_fun_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_fun_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_empty_fun_tuple, 1, const_str_plain_empty_fun ); Py_INCREF( const_str_plain_empty_fun );
    const_str_plain__interval_to_canonical = UNSTREAM_STRING_ASCII( &constant_bin[ 5073769 ], 22, 1 );
    const_tuple_35032cc2f1a77cb4428ba95e4bcaf387_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_35032cc2f1a77cb4428ba95e4bcaf387_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_35032cc2f1a77cb4428ba95e4bcaf387_tuple, 1, const_str_plain_v_eq ); Py_INCREF( const_str_plain_v_eq );
    PyTuple_SET_ITEM( const_tuple_35032cc2f1a77cb4428ba95e4bcaf387_tuple, 2, const_str_plain_v_ineq ); Py_INCREF( const_str_plain_v_ineq );
    PyTuple_SET_ITEM( const_tuple_35032cc2f1a77cb4428ba95e4bcaf387_tuple, 3, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_35032cc2f1a77cb4428ba95e4bcaf387_tuple, 4, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_35032cc2f1a77cb4428ba95e4bcaf387_tuple, 5, const_str_plain_finite_ub ); Py_INCREF( const_str_plain_finite_ub );
    const_str_plain_vc_ineq = UNSTREAM_STRING_ASCII( &constant_bin[ 5076356 ], 7, 1 );
    const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple, 1, const_str_plain_v_eq ); Py_INCREF( const_str_plain_v_eq );
    PyTuple_SET_ITEM( const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple, 2, const_str_plain_v_ineq ); Py_INCREF( const_str_plain_v_ineq );
    PyTuple_SET_ITEM( const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple, 3, const_str_plain_hess_all ); Py_INCREF( const_str_plain_hess_all );
    PyTuple_SET_ITEM( const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple, 4, const_str_plain_index_eq ); Py_INCREF( const_str_plain_index_eq );
    PyTuple_SET_ITEM( const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple, 5, const_str_plain_index_ineq ); Py_INCREF( const_str_plain_index_ineq );
    PyTuple_SET_ITEM( const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple, 6, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple, 7, const_str_plain_vc_eq ); Py_INCREF( const_str_plain_vc_eq );
    PyTuple_SET_ITEM( const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple, 8, const_str_plain_vc_ineq ); Py_INCREF( const_str_plain_vc_ineq );
    PyTuple_SET_ITEM( const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple, 9, const_str_plain_matvec ); Py_INCREF( const_str_plain_matvec );
    PyTuple_SET_ITEM( const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple, 10, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple, 11, const_str_plain_canonical_constraints ); Py_INCREF( const_str_plain_canonical_constraints );
    const_tuple_355e78762f6937b0d0ec9c80fb8d8589_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_355e78762f6937b0d0ec9c80fb8d8589_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_355e78762f6937b0d0ec9c80fb8d8589_tuple, 1, const_str_plain_constraint ); Py_INCREF( const_str_plain_constraint );
    PyTuple_SET_ITEM( const_tuple_355e78762f6937b0d0ec9c80fb8d8589_tuple, 2, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_355e78762f6937b0d0ec9c80fb8d8589_tuple, 3, const_str_plain_ub ); Py_INCREF( const_str_plain_ub );
    PyTuple_SET_ITEM( const_tuple_355e78762f6937b0d0ec9c80fb8d8589_tuple, 4, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_355e78762f6937b0d0ec9c80fb8d8589_tuple, 5, const_str_plain_keep_feasible ); Py_INCREF( const_str_plain_keep_feasible );
    const_str_digest_a824b1415562212ab21c5323e6d0f9a7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5076363 ], 53, 0 );
    const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple, 1, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple, 2, const_str_plain_lb ); Py_INCREF( const_str_plain_lb );
    PyTuple_SET_ITEM( const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple, 3, const_str_plain_keep_feasible ); Py_INCREF( const_str_plain_keep_feasible );
    PyTuple_SET_ITEM( const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple, 4, const_str_plain_empty_fun ); Py_INCREF( const_str_plain_empty_fun );
    PyTuple_SET_ITEM( const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple, 5, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple, 6, const_str_plain_empty_jac ); Py_INCREF( const_str_plain_empty_jac );
    PyTuple_SET_ITEM( const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple, 7, const_str_plain_finite_lb ); Py_INCREF( const_str_plain_finite_lb );
    PyTuple_SET_ITEM( const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple, 8, const_str_plain_n_eq ); Py_INCREF( const_str_plain_n_eq );
    PyTuple_SET_ITEM( const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple, 9, const_str_plain_n_ineq ); Py_INCREF( const_str_plain_n_ineq );
    PyTuple_SET_ITEM( const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple, 10, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple, 11, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple, 12, const_str_plain_hess ); Py_INCREF( const_str_plain_hess );
    const_str_digest_8e11349ac45b5a7668d9fb4da34cb1e1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5073538 ], 38, 0 );
    const_str_digest_6428c1fb608574415ee63f9fafa27e83 = UNSTREAM_STRING_ASCII( &constant_bin[ 5075922 ], 55, 0 );
    const_str_plain__greater_to_canonical = UNSTREAM_STRING_ASCII( &constant_bin[ 5073671 ], 21, 1 );
    const_tuple_a8e712cb97313bde75b0e52128da9420_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_a8e712cb97313bde75b0e52128da9420_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a8e712cb97313bde75b0e52128da9420_tuple, 1, const_str_plain_n_eq ); Py_INCREF( const_str_plain_n_eq );
    PyTuple_SET_ITEM( const_tuple_a8e712cb97313bde75b0e52128da9420_tuple, 2, const_str_plain_n_ineq ); Py_INCREF( const_str_plain_n_ineq );
    PyTuple_SET_ITEM( const_tuple_a8e712cb97313bde75b0e52128da9420_tuple, 3, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_a8e712cb97313bde75b0e52128da9420_tuple, 4, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_a8e712cb97313bde75b0e52128da9420_tuple, 5, const_str_plain_hess ); Py_INCREF( const_str_plain_hess );
    PyTuple_SET_ITEM( const_tuple_a8e712cb97313bde75b0e52128da9420_tuple, 6, const_str_plain_keep_feasible ); Py_INCREF( const_str_plain_keep_feasible );
    const_str_digest_10f0eb3f7922f6199df36f9c53afe201 = UNSTREAM_STRING_ASCII( &constant_bin[ 5076416 ], 52, 0 );
    const_str_digest_6f11995c4bfb8a3ef1d0281c81b129e9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5076468 ], 52, 0 );
    const_tuple_998fbea0e81e58b86c941a0be407ee08_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_998fbea0e81e58b86c941a0be407ee08_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_998fbea0e81e58b86c941a0be407ee08_tuple, 1, const_str_plain_eq_all ); Py_INCREF( const_str_plain_eq_all );
    PyTuple_SET_ITEM( const_tuple_998fbea0e81e58b86c941a0be407ee08_tuple, 2, const_str_plain_ineq_all ); Py_INCREF( const_str_plain_ineq_all );
    PyTuple_SET_ITEM( const_tuple_998fbea0e81e58b86c941a0be407ee08_tuple, 3, const_str_plain_canonical_constraints ); Py_INCREF( const_str_plain_canonical_constraints );
    const_str_digest_60bf0056ab18eba17c9812c7e1c43fd8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5076520 ], 51, 0 );
    const_str_digest_593b12bc62ca3fd90d1393c8301275a7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5076571 ], 263, 0 );
    const_str_digest_b591988fb3c430c827895f8c4289f755 = UNSTREAM_STRING_ASCII( &constant_bin[ 5076834 ], 55, 0 );
    const_tuple_3b1b709772fd90d12ff41bfe43d79b26_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_3b1b709772fd90d12ff41bfe43d79b26_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_3b1b709772fd90d12ff41bfe43d79b26_tuple, 1, const_str_plain_canonical_constraints ); Py_INCREF( const_str_plain_canonical_constraints );
    PyTuple_SET_ITEM( const_tuple_3b1b709772fd90d12ff41bfe43d79b26_tuple, 2, const_str_plain_sparse_jacobian ); Py_INCREF( const_str_plain_sparse_jacobian );
    PyTuple_SET_ITEM( const_tuple_3b1b709772fd90d12ff41bfe43d79b26_tuple, 3, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_3b1b709772fd90d12ff41bfe43d79b26_tuple, 4, const_str_plain_vstack ); Py_INCREF( const_str_plain_vstack );
    PyTuple_SET_ITEM( const_tuple_3b1b709772fd90d12ff41bfe43d79b26_tuple, 5, const_str_plain_jac ); Py_INCREF( const_str_plain_jac );
    PyTuple_SET_ITEM( const_tuple_3b1b709772fd90d12ff41bfe43d79b26_tuple, 6, const_str_plain_hess ); Py_INCREF( const_str_plain_hess );
    PyTuple_SET_ITEM( const_tuple_3b1b709772fd90d12ff41bfe43d79b26_tuple, 7, const_str_plain_n_eq ); Py_INCREF( const_str_plain_n_eq );
    PyTuple_SET_ITEM( const_tuple_3b1b709772fd90d12ff41bfe43d79b26_tuple, 8, const_str_plain_n_ineq ); Py_INCREF( const_str_plain_n_ineq );
    PyTuple_SET_ITEM( const_tuple_3b1b709772fd90d12ff41bfe43d79b26_tuple, 9, const_str_plain_keep_feasible ); Py_INCREF( const_str_plain_keep_feasible );
    const_str_digest_b84dff457d63afd20942fdd0d1421e9e = UNSTREAM_STRING_ASCII( &constant_bin[ 5076889 ], 281, 0 );
    const_tuple_e2e7b72379bc937abbce2fdae62d232b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e2e7b72379bc937abbce2fdae62d232b_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_e2e7b72379bc937abbce2fdae62d232b_tuple, 1, const_str_plain_empty_jac ); Py_INCREF( const_str_plain_empty_jac );
    PyTuple_SET_ITEM( const_tuple_e2e7b72379bc937abbce2fdae62d232b_tuple, 2, const_str_plain_cfun ); Py_INCREF( const_str_plain_cfun );
    PyTuple_SET_ITEM( const_tuple_e2e7b72379bc937abbce2fdae62d232b_tuple, 3, const_str_plain_finite_ub ); Py_INCREF( const_str_plain_finite_ub );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_trustregion_constr$canonical_constraint( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_69617bdd572b0b38575fc047f0b78c8b;
static PyCodeObject *codeobj_9f4db52418015fe7f20b7d2a211845ab;
static PyCodeObject *codeobj_82a120a0d486bd35325b13b78c9fd749;
static PyCodeObject *codeobj_ea00ca5c5e3b918cf493a8855d931e32;
static PyCodeObject *codeobj_fa2a86c98777fc4fde46d3e727bb832b;
static PyCodeObject *codeobj_6bc2c906a74a4b17e731bfc685e353be;
static PyCodeObject *codeobj_4c16cf652f130fa13e0018275d06b205;
static PyCodeObject *codeobj_b2105c80cbb73c3a2a7264bd1a9edcbe;
static PyCodeObject *codeobj_9466bf3ed30fd7d0979d2942f2d371d5;
static PyCodeObject *codeobj_a7b0ab208fae6845b1c9673e184f690c;
static PyCodeObject *codeobj_b70d2ea400f7f3a82dcd1bd6bb7746fb;
static PyCodeObject *codeobj_ca683b9a9ccb95c1b72add0ab34984ca;
static PyCodeObject *codeobj_d9983f5c6678fb5a620b7f562c31d6f6;
static PyCodeObject *codeobj_4195f79eeea2e25d05ea3f89287552d1;
static PyCodeObject *codeobj_7b749797b69353f3d8192fba092917fd;
static PyCodeObject *codeobj_4c296b1ffc1349439917b1eedcb50d12;
static PyCodeObject *codeobj_2a172c81896b35cfb8f7ea064d67ee10;
static PyCodeObject *codeobj_060f1662281e372db4dd108e71f3615f;
static PyCodeObject *codeobj_1f8318cc12483abf1c5847842933a355;
static PyCodeObject *codeobj_f075587286ed9d2afc438f6e7b50c22c;
static PyCodeObject *codeobj_306d7200a22fea5c1f0f63316a734fde;
static PyCodeObject *codeobj_783ca5023668ee3fb044ef523aad81da;
static PyCodeObject *codeobj_337c2a3b7cb5d6cf52890e92970dbff6;
static PyCodeObject *codeobj_e14751ff53b1f7b1ad8008ccc8e37e90;
static PyCodeObject *codeobj_4d8e25e47b8eb924482c125bb803c784;
static PyCodeObject *codeobj_abf93fe868ae67ddf0fd4ff1fa03e931;
static PyCodeObject *codeobj_9b1e2d68d7d8c991a4c7c5c02059bd24;
static PyCodeObject *codeobj_59e19ef32bf2d6d8f6d9b478dc3567ee;
static PyCodeObject *codeobj_05908fed27ce9db45fc9c857e855e529;
static PyCodeObject *codeobj_f9e57066b19cbb806ba18bf10205f39c;
static PyCodeObject *codeobj_34f54d8526074249495d95d7b7cd40b2;
static PyCodeObject *codeobj_c7b770c8fdbbd549700aede51ed08d8b;
static PyCodeObject *codeobj_16d360f8d11e40cf075a2ccad02302f9;
static PyCodeObject *codeobj_021e7abba9b931cd78ae23c378c69df6;
static PyCodeObject *codeobj_445b3833213d2bbec688f083a41faf69;
static PyCodeObject *codeobj_08ab07e0127bc5166cddda8e5623c657;
static PyCodeObject *codeobj_dbdefb3eb171016b879144fdda7979f0;
static PyCodeObject *codeobj_bcdefaa4aa7f2752563276d68c746941;
static PyCodeObject *codeobj_d7fd781376a234839bbe521cf47186e8;
static PyCodeObject *codeobj_9e7c3a5cfe5a2344c85812e203fd9ceb;
static PyCodeObject *codeobj_42a8aee01ff93a6a1943b1320143cd35;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_651e18aa01d78e23b816799a427d5632 );
    codeobj_69617bdd572b0b38575fc047f0b78c8b = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 144, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_c_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9f4db52418015fe7f20b7d2a211845ab = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 145, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_c_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_82a120a0d486bd35325b13b78c9fd749 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 104, const_tuple_str_plain_c_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ea00ca5c5e3b918cf493a8855d931e32 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 118, const_tuple_str_plain_c_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fa2a86c98777fc4fde46d3e727bb832b = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 146, const_tuple_str_plain_c_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6bc2c906a74a4b17e731bfc685e353be = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6aaaca2d20360fd9d49aa594ef317b07, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_4c16cf652f130fa13e0018275d06b205 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CanonicalConstraint, 5, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_b2105c80cbb73c3a2a7264bd1a9edcbe = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 42, const_tuple_a8e712cb97313bde75b0e52128da9420_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9466bf3ed30fd7d0979d2942f2d371d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__equal_to_canonical, 151, const_tuple_312cd782ad59e408daf0055eeb2b76c8_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a7b0ab208fae6845b1c9673e184f690c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__greater_to_canonical, 223, const_tuple_6e53d930c820fe22a38cb9399dd90056_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b70d2ea400f7f3a82dcd1bd6bb7746fb = MAKE_CODEOBJ( module_filename_obj, const_str_plain__interval_to_canonical, 263, const_tuple_40fb4d5e0e1d23d7e487cf9c4d0af6e5_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ca683b9a9ccb95c1b72add0ab34984ca = MAKE_CODEOBJ( module_filename_obj, const_str_plain__less_to_canonical, 183, const_tuple_9f01ffe8c810a5fd455438376ca09c98_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9983f5c6678fb5a620b7f562c31d6f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_concatenate, 93, const_tuple_3b1b709772fd90d12ff41bfe43d79b26_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4195f79eeea2e25d05ea3f89287552d1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_empty, 71, const_tuple_0b57d08075ae0e8a88e654b0b75a7957_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7b749797b69353f3d8192fba092917fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_PreparedConstraint, 50, const_tuple_355e78762f6937b0d0ec9c80fb8d8589_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4c296b1ffc1349439917b1eedcb50d12 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fun, 82, const_tuple_str_plain_x_str_plain_empty_fun_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_2a172c81896b35cfb8f7ea064d67ee10 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fun, 101, const_tuple_998fbea0e81e58b86c941a0be407ee08_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_060f1662281e372db4dd108e71f3615f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fun, 165, const_tuple_64abca84f0576c79df5e6547b19cb007_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_1f8318cc12483abf1c5847842933a355 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fun, 197, const_tuple_str_plain_x_str_plain_empty_fun_str_plain_cfun_str_plain_ub_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_f075587286ed9d2afc438f6e7b50c22c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fun, 210, const_tuple_48b77e71308830e305852f795764fc9d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_306d7200a22fea5c1f0f63316a734fde = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fun, 237, const_tuple_str_plain_x_str_plain_empty_fun_str_plain_lb_str_plain_cfun_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_783ca5023668ee3fb044ef523aad81da = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fun, 250, const_tuple_d8d4f14826ea3fa54a1ed6b4255921ac_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_337c2a3b7cb5d6cf52890e92970dbff6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fun, 287, const_tuple_90e4ef27fcd790c80e88fc779b84caef_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_e14751ff53b1f7b1ad8008ccc8e37e90 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hess, 88, const_tuple_a6731bf874dae06f1b47705501093380_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_4d8e25e47b8eb924482c125bb803c784 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hess, 124, const_tuple_d7e1978d27dbeaab9637714a96cd6c33_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_abf93fe868ae67ddf0fd4ff1fa03e931 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hess, 171, const_tuple_str_plain_x_str_plain_v_eq_str_plain_v_ineq_str_plain_cfun_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_9b1e2d68d7d8c991a4c7c5c02059bd24 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hess, 203, const_tuple_str_plain_x_str_plain_v_eq_str_plain_v_ineq_str_plain_cfun_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_59e19ef32bf2d6d8f6d9b478dc3567ee = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hess, 216, const_tuple_35032cc2f1a77cb4428ba95e4bcaf387_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_05908fed27ce9db45fc9c857e855e529 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hess, 243, const_tuple_str_plain_x_str_plain_v_eq_str_plain_v_ineq_str_plain_cfun_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_f9e57066b19cbb806ba18bf10205f39c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hess, 256, const_tuple_8fb37f6c67b52ae51145859e969c7a91_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_34f54d8526074249495d95d7b7cd40b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hess, 309, const_tuple_0379ad0af84936d3b70fcdb55cafe41c_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_c7b770c8fdbbd549700aede51ed08d8b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_initial_constraints_as_canonical, 330, const_tuple_4bf0956bbb2cabfbe03a71d8e47f180a_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_16d360f8d11e40cf075a2ccad02302f9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac, 85, const_tuple_str_plain_x_str_plain_empty_jac_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_021e7abba9b931cd78ae23c378c69df6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac, 115, const_tuple_f1c44e0ae95df9755c0b774ccca5ca3b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_445b3833213d2bbec688f083a41faf69 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac, 168, const_tuple_str_plain_x_str_plain_cfun_str_plain_empty_jac_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_08ab07e0127bc5166cddda8e5623c657 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac, 200, const_tuple_str_plain_x_str_plain_empty_jac_str_plain_cfun_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_dbdefb3eb171016b879144fdda7979f0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac, 213, const_tuple_e2e7b72379bc937abbce2fdae62d232b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_bcdefaa4aa7f2752563276d68c746941 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac, 240, const_tuple_str_plain_x_str_plain_empty_jac_str_plain_cfun_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_d7fd781376a234839bbe521cf47186e8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac, 253, const_tuple_2cdc05e8e0200f64d98319d551d4c11c_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_9e7c3a5cfe5a2344c85812e203fd9ceb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_jac, 296, const_tuple_b5e7ca0ec27125ba7286c97f6ab3bbb1_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_42a8aee01ff93a6a1943b1320143cd35 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_matvec, 135, const_tuple_str_plain_p_str_plain_result_str_plain_h_str_plain_hess_all_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
static PyObject *scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_1_genexpr_maker( void );


static PyObject *scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_2_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_2_from_PreparedConstraint(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_1_fun(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_2_jac(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_3_hess(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_1_fun(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_2_jac(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_3_hess(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_3_hess$$$function_1_matvec(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_1_fun(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_2_jac(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_3_hess(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_1_fun(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_2_jac(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_3_hess(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_4_fun(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_5_jac(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_6_hess(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_1_fun(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_2_jac(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_3_hess(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_4_fun(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_5_jac(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_6_hess(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_1_fun(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_2_jac(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_3_hess(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_9_initial_constraints_as_canonical(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_n_eq = python_pars[ 1 ];
    PyObject *par_n_ineq = python_pars[ 2 ];
    PyObject *par_fun = python_pars[ 3 ];
    PyObject *par_jac = python_pars[ 4 ];
    PyObject *par_hess = python_pars[ 5 ];
    PyObject *par_keep_feasible = python_pars[ 6 ];
    struct Nuitka_FrameObject *frame_b2105c80cbb73c3a2a7264bd1a9edcbe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b2105c80cbb73c3a2a7264bd1a9edcbe = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b2105c80cbb73c3a2a7264bd1a9edcbe, codeobj_b2105c80cbb73c3a2a7264bd1a9edcbe, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b2105c80cbb73c3a2a7264bd1a9edcbe = cache_frame_b2105c80cbb73c3a2a7264bd1a9edcbe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b2105c80cbb73c3a2a7264bd1a9edcbe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b2105c80cbb73c3a2a7264bd1a9edcbe ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_n_eq );
        tmp_assattr_name_1 = par_n_eq;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_n_eq, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_n_ineq );
        tmp_assattr_name_2 = par_n_ineq;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_n_ineq, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_fun );
        tmp_assattr_name_3 = par_fun;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_fun, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_jac );
        tmp_assattr_name_4 = par_jac;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_jac, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_hess );
        tmp_assattr_name_5 = par_hess;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_hess, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_keep_feasible );
        tmp_assattr_name_6 = par_keep_feasible;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_keep_feasible, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2105c80cbb73c3a2a7264bd1a9edcbe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2105c80cbb73c3a2a7264bd1a9edcbe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b2105c80cbb73c3a2a7264bd1a9edcbe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b2105c80cbb73c3a2a7264bd1a9edcbe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b2105c80cbb73c3a2a7264bd1a9edcbe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b2105c80cbb73c3a2a7264bd1a9edcbe,
        type_description_1,
        par_self,
        par_n_eq,
        par_n_ineq,
        par_fun,
        par_jac,
        par_hess,
        par_keep_feasible
    );


    // Release cached frame.
    if ( frame_b2105c80cbb73c3a2a7264bd1a9edcbe == cache_frame_b2105c80cbb73c3a2a7264bd1a9edcbe )
    {
        Py_DECREF( frame_b2105c80cbb73c3a2a7264bd1a9edcbe );
    }
    cache_frame_b2105c80cbb73c3a2a7264bd1a9edcbe = NULL;

    assertFrameObject( frame_b2105c80cbb73c3a2a7264bd1a9edcbe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n_eq );
    Py_DECREF( par_n_eq );
    par_n_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_n_ineq );
    Py_DECREF( par_n_ineq );
    par_n_ineq = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_hess );
    Py_DECREF( par_hess );
    par_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_keep_feasible );
    Py_DECREF( par_keep_feasible );
    par_keep_feasible = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n_eq );
    Py_DECREF( par_n_eq );
    par_n_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_n_ineq );
    Py_DECREF( par_n_ineq );
    par_n_ineq = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    CHECK_OBJECT( (PyObject *)par_jac );
    Py_DECREF( par_jac );
    par_jac = NULL;

    CHECK_OBJECT( (PyObject *)par_hess );
    Py_DECREF( par_hess );
    par_hess = NULL;

    CHECK_OBJECT( (PyObject *)par_keep_feasible );
    Py_DECREF( par_keep_feasible );
    par_keep_feasible = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_1___init__ );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_2_from_PreparedConstraint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_constraint = python_pars[ 1 ];
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    PyObject *var_cfun = NULL;
    PyObject *var_keep_feasible = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_7b749797b69353f3d8192fba092917fd;
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
    static struct Nuitka_FrameObject *cache_frame_7b749797b69353f3d8192fba092917fd = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7b749797b69353f3d8192fba092917fd, codeobj_7b749797b69353f3d8192fba092917fd, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7b749797b69353f3d8192fba092917fd = cache_frame_7b749797b69353f3d8192fba092917fd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7b749797b69353f3d8192fba092917fd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7b749797b69353f3d8192fba092917fd ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_constraint );
        tmp_source_name_1 = par_constraint;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_bounds );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
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
            exception_lineno = 53;
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
            exception_lineno = 53;
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
                    exception_lineno = 53;
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
            exception_lineno = 53;
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
        assert( var_lb == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_lb = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_ub == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_ub = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_constraint );
        tmp_source_name_2 = par_constraint;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fun );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cfun == NULL );
        var_cfun = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_constraint );
        tmp_source_name_3 = par_constraint;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_keep_feasible );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_keep_feasible == NULL );
        var_keep_feasible = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_4;
        int tmp_truth_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_all );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lb );
        tmp_compexpr_left_1 = var_lb;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_2;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_inf );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_7b749797b69353f3d8192fba092917fd->m_frame.f_lineno = 57;
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


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 57;
            type_description_1 = "oooooo";
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
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_all );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ub );
        tmp_compexpr_left_2 = var_ub;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_4;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_inf );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_7b749797b69353f3d8192fba092917fd->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( par_cls );
            tmp_source_name_8 = par_cls;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_empty );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_cfun );
            tmp_source_name_9 = var_cfun;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_n );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 58;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_7b749797b69353f3d8192fba092917fd->m_frame.f_lineno = 58;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_6;
        int tmp_truth_name_3;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_8;
        int tmp_truth_name_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_all );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lb );
        tmp_compexpr_left_3 = var_lb;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_6;
        tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_inf );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_7b749797b69353f3d8192fba092917fd->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_7;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_all );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ub );
        tmp_compexpr_left_4 = var_ub;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_8;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_inf );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_7b749797b69353f3d8192fba092917fd->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_4 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_4 );

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_4 );
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_14;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( par_cls );
            tmp_source_name_14 = par_cls;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_empty );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_cfun );
            tmp_source_name_15 = var_cfun;
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_n );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 61;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_7b749797b69353f3d8192fba092917fd->m_frame.f_lineno = 61;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            int tmp_truth_name_5;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 62;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_16 = tmp_mvar_value_9;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_all );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_lb );
            tmp_compexpr_left_5 = var_lb;
            CHECK_OBJECT( var_ub );
            tmp_compexpr_right_5 = var_ub;
            tmp_args_element_name_7 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 62;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_7b749797b69353f3d8192fba092917fd->m_frame.f_lineno = 62;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_5 = CHECK_IF_TRUE( tmp_call_result_5 );
            if ( tmp_truth_name_5 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_5 );

                exception_lineno = 62;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_5 );
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
                PyObject *tmp_called_instance_1;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                CHECK_OBJECT( par_cls );
                tmp_called_instance_1 = par_cls;
                CHECK_OBJECT( var_cfun );
                tmp_args_element_name_8 = var_cfun;
                CHECK_OBJECT( var_lb );
                tmp_args_element_name_9 = var_lb;
                frame_7b749797b69353f3d8192fba092917fd->m_frame.f_lineno = 63;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                    tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__equal_to_canonical, call_args );
                }

                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 63;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_called_name_8;
                PyObject *tmp_source_name_17;
                PyObject *tmp_mvar_value_10;
                PyObject *tmp_call_result_6;
                PyObject *tmp_args_element_name_10;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                PyObject *tmp_operand_name_3;
                PyObject *tmp_source_name_18;
                PyObject *tmp_mvar_value_11;
                int tmp_truth_name_6;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 64;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_17 = tmp_mvar_value_10;
                tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_all );
                if ( tmp_called_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_lb );
                tmp_compexpr_left_6 = var_lb;
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_11 == NULL )
                {
                    Py_DECREF( tmp_called_name_8 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 64;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_18 = tmp_mvar_value_11;
                tmp_operand_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_inf );
                if ( tmp_operand_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_8 );

                    exception_lineno = 64;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
                Py_DECREF( tmp_operand_name_3 );
                if ( tmp_compexpr_right_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_8 );

                    exception_lineno = 64;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_10 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                Py_DECREF( tmp_compexpr_right_6 );
                if ( tmp_args_element_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_8 );

                    exception_lineno = 64;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_7b749797b69353f3d8192fba092917fd->m_frame.f_lineno = 64;
                {
                    PyObject *call_args[] = { tmp_args_element_name_10 };
                    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                }

                Py_DECREF( tmp_called_name_8 );
                Py_DECREF( tmp_args_element_name_10 );
                if ( tmp_call_result_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_6 = CHECK_IF_TRUE( tmp_call_result_6 );
                if ( tmp_truth_name_6 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_6 );

                    exception_lineno = 64;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_4 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_6 );
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
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_args_element_name_11;
                    PyObject *tmp_args_element_name_12;
                    PyObject *tmp_args_element_name_13;
                    CHECK_OBJECT( par_cls );
                    tmp_called_instance_2 = par_cls;
                    CHECK_OBJECT( var_cfun );
                    tmp_args_element_name_11 = var_cfun;
                    CHECK_OBJECT( var_ub );
                    tmp_args_element_name_12 = var_ub;
                    CHECK_OBJECT( var_keep_feasible );
                    tmp_args_element_name_13 = var_keep_feasible;
                    frame_7b749797b69353f3d8192fba092917fd->m_frame.f_lineno = 65;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
                        tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain__less_to_canonical, call_args );
                    }

                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 65;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_source_name_19;
                    PyObject *tmp_mvar_value_12;
                    PyObject *tmp_call_result_7;
                    PyObject *tmp_args_element_name_14;
                    PyObject *tmp_compexpr_left_7;
                    PyObject *tmp_compexpr_right_7;
                    PyObject *tmp_source_name_20;
                    PyObject *tmp_mvar_value_13;
                    int tmp_truth_name_7;
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 66;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_19 = tmp_mvar_value_12;
                    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_all );
                    if ( tmp_called_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 66;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_ub );
                    tmp_compexpr_left_7 = var_ub;
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

                    if (unlikely( tmp_mvar_value_13 == NULL ))
                    {
                        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                    }

                    if ( tmp_mvar_value_13 == NULL )
                    {
                        Py_DECREF( tmp_called_name_9 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 66;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_20 = tmp_mvar_value_13;
                    tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_inf );
                    if ( tmp_compexpr_right_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_9 );

                        exception_lineno = 66;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_14 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                    Py_DECREF( tmp_compexpr_right_7 );
                    if ( tmp_args_element_name_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_9 );

                        exception_lineno = 66;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_7b749797b69353f3d8192fba092917fd->m_frame.f_lineno = 66;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_14 };
                        tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
                    }

                    Py_DECREF( tmp_called_name_9 );
                    Py_DECREF( tmp_args_element_name_14 );
                    if ( tmp_call_result_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 66;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_truth_name_7 = CHECK_IF_TRUE( tmp_call_result_7 );
                    if ( tmp_truth_name_7 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_call_result_7 );

                        exception_lineno = 66;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_5 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    Py_DECREF( tmp_call_result_7 );
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
                        PyObject *tmp_called_instance_3;
                        PyObject *tmp_args_element_name_15;
                        PyObject *tmp_args_element_name_16;
                        PyObject *tmp_args_element_name_17;
                        CHECK_OBJECT( par_cls );
                        tmp_called_instance_3 = par_cls;
                        CHECK_OBJECT( var_cfun );
                        tmp_args_element_name_15 = var_cfun;
                        CHECK_OBJECT( var_lb );
                        tmp_args_element_name_16 = var_lb;
                        CHECK_OBJECT( var_keep_feasible );
                        tmp_args_element_name_17 = var_keep_feasible;
                        frame_7b749797b69353f3d8192fba092917fd->m_frame.f_lineno = 67;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
                            tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain__greater_to_canonical, call_args );
                        }

                        if ( tmp_return_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 67;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        goto frame_return_exit_1;
                    }
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        PyObject *tmp_called_instance_4;
                        PyObject *tmp_args_element_name_18;
                        PyObject *tmp_args_element_name_19;
                        PyObject *tmp_args_element_name_20;
                        PyObject *tmp_args_element_name_21;
                        CHECK_OBJECT( par_cls );
                        tmp_called_instance_4 = par_cls;
                        CHECK_OBJECT( var_cfun );
                        tmp_args_element_name_18 = var_cfun;
                        CHECK_OBJECT( var_lb );
                        tmp_args_element_name_19 = var_lb;
                        CHECK_OBJECT( var_ub );
                        tmp_args_element_name_20 = var_ub;
                        CHECK_OBJECT( var_keep_feasible );
                        tmp_args_element_name_21 = var_keep_feasible;
                        frame_7b749797b69353f3d8192fba092917fd->m_frame.f_lineno = 69;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
                            tmp_return_value = CALL_METHOD_WITH_ARGS4( tmp_called_instance_4, const_str_plain__interval_to_canonical, call_args );
                        }

                        if ( tmp_return_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 69;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        goto frame_return_exit_1;
                    }
                    branch_end_5:;
                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b749797b69353f3d8192fba092917fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b749797b69353f3d8192fba092917fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b749797b69353f3d8192fba092917fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7b749797b69353f3d8192fba092917fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7b749797b69353f3d8192fba092917fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7b749797b69353f3d8192fba092917fd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7b749797b69353f3d8192fba092917fd,
        type_description_1,
        par_cls,
        par_constraint,
        var_lb,
        var_ub,
        var_cfun,
        var_keep_feasible
    );


    // Release cached frame.
    if ( frame_7b749797b69353f3d8192fba092917fd == cache_frame_7b749797b69353f3d8192fba092917fd )
    {
        Py_DECREF( frame_7b749797b69353f3d8192fba092917fd );
    }
    cache_frame_7b749797b69353f3d8192fba092917fd = NULL;

    assertFrameObject( frame_7b749797b69353f3d8192fba092917fd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_2_from_PreparedConstraint );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_constraint );
    Py_DECREF( par_constraint );
    par_constraint = NULL;

    CHECK_OBJECT( (PyObject *)var_lb );
    Py_DECREF( var_lb );
    var_lb = NULL;

    CHECK_OBJECT( (PyObject *)var_ub );
    Py_DECREF( var_ub );
    var_ub = NULL;

    CHECK_OBJECT( (PyObject *)var_cfun );
    Py_DECREF( var_cfun );
    var_cfun = NULL;

    CHECK_OBJECT( (PyObject *)var_keep_feasible );
    Py_DECREF( var_keep_feasible );
    var_keep_feasible = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_constraint );
    Py_DECREF( par_constraint );
    par_constraint = NULL;

    Py_XDECREF( var_lb );
    var_lb = NULL;

    Py_XDECREF( var_ub );
    var_ub = NULL;

    Py_XDECREF( var_cfun );
    var_cfun = NULL;

    Py_XDECREF( var_keep_feasible );
    var_keep_feasible = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_2_from_PreparedConstraint );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    struct Nuitka_CellObject *var_empty_fun = PyCell_EMPTY();
    struct Nuitka_CellObject *var_empty_jac = PyCell_EMPTY();
    struct Nuitka_CellObject *var_empty_hess = PyCell_EMPTY();
    PyObject *var_fun = NULL;
    PyObject *var_jac = NULL;
    PyObject *var_hess = NULL;
    struct Nuitka_FrameObject *frame_4195f79eeea2e25d05ea3f89287552d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4195f79eeea2e25d05ea3f89287552d1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4195f79eeea2e25d05ea3f89287552d1, codeobj_4195f79eeea2e25d05ea3f89287552d1, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4195f79eeea2e25d05ea3f89287552d1 = cache_frame_4195f79eeea2e25d05ea3f89287552d1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4195f79eeea2e25d05ea3f89287552d1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4195f79eeea2e25d05ea3f89287552d1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 78;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_4195f79eeea2e25d05ea3f89287552d1->m_frame.f_lineno = 78;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_empty, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_empty_fun ) == NULL );
        PyCell_SET( var_empty_fun, tmp_assign_source_1 );

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 79;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        tmp_tuple_element_1 = const_int_0;
        tmp_args_element_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_n );
        tmp_tuple_element_1 = par_n;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
        frame_4195f79eeea2e25d05ea3f89287552d1->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_empty, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_empty_jac ) == NULL );
        PyCell_SET( var_empty_jac, tmp_assign_source_2 );

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_tuple_element_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_sps );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_n );
        tmp_tuple_element_2 = par_n;
        tmp_args_element_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_n );
        tmp_tuple_element_2 = par_n;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_2 );
        frame_4195f79eeea2e25d05ea3f89287552d1->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_csr_matrix, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_empty_hess ) == NULL );
        PyCell_SET( var_empty_hess, tmp_assign_source_3 );

    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_1_fun(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] = var_empty_fun;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] );


        assert( var_fun == NULL );
        var_fun = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_2_jac(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_5)->m_closure[0] = var_empty_jac;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_5)->m_closure[0] );


        assert( var_jac == NULL );
        var_jac = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_3_hess(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[0] = var_empty_hess;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[0] );


        assert( var_hess == NULL );
        var_hess = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT( par_cls );
        tmp_called_name_1 = par_cls;
        tmp_args_element_name_3 = const_int_0;
        tmp_args_element_name_4 = const_int_0;
        CHECK_OBJECT( var_fun );
        tmp_args_element_name_5 = var_fun;
        CHECK_OBJECT( var_jac );
        tmp_args_element_name_6 = var_jac;
        CHECK_OBJECT( var_hess );
        tmp_args_element_name_7 = var_hess;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_4;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_empty );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = const_tuple_int_0_tuple;
        tmp_dict_key_1 = const_str_plain_dtype;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 91;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_5;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_bool );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 91;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_4195f79eeea2e25d05ea3f89287552d1->m_frame.f_lineno = 91;
        tmp_args_element_name_8 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        frame_4195f79eeea2e25d05ea3f89287552d1->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4195f79eeea2e25d05ea3f89287552d1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4195f79eeea2e25d05ea3f89287552d1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4195f79eeea2e25d05ea3f89287552d1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4195f79eeea2e25d05ea3f89287552d1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4195f79eeea2e25d05ea3f89287552d1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4195f79eeea2e25d05ea3f89287552d1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4195f79eeea2e25d05ea3f89287552d1,
        type_description_1,
        par_cls,
        par_n,
        var_empty_fun,
        var_empty_jac,
        var_empty_hess,
        var_fun,
        var_jac,
        var_hess
    );


    // Release cached frame.
    if ( frame_4195f79eeea2e25d05ea3f89287552d1 == cache_frame_4195f79eeea2e25d05ea3f89287552d1 )
    {
        Py_DECREF( frame_4195f79eeea2e25d05ea3f89287552d1 );
    }
    cache_frame_4195f79eeea2e25d05ea3f89287552d1 = NULL;

    assertFrameObject( frame_4195f79eeea2e25d05ea3f89287552d1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_fun );
    Py_DECREF( var_empty_fun );
    var_empty_fun = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_jac );
    Py_DECREF( var_empty_jac );
    var_empty_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_hess );
    Py_DECREF( var_empty_hess );
    var_empty_hess = NULL;

    CHECK_OBJECT( (PyObject *)var_fun );
    Py_DECREF( var_fun );
    var_fun = NULL;

    CHECK_OBJECT( (PyObject *)var_jac );
    Py_DECREF( var_jac );
    var_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_hess );
    Py_DECREF( var_hess );
    var_hess = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_fun );
    Py_DECREF( var_empty_fun );
    var_empty_fun = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_jac );
    Py_DECREF( var_empty_jac );
    var_empty_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_hess );
    Py_DECREF( var_empty_hess );
    var_empty_hess = NULL;

    Py_XDECREF( var_fun );
    var_fun = NULL;

    Py_XDECREF( var_jac );
    var_jac = NULL;

    Py_XDECREF( var_hess );
    var_hess = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_1_fun( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4c296b1ffc1349439917b1eedcb50d12;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4c296b1ffc1349439917b1eedcb50d12 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4c296b1ffc1349439917b1eedcb50d12, codeobj_4c296b1ffc1349439917b1eedcb50d12, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *) );
    frame_4c296b1ffc1349439917b1eedcb50d12 = cache_frame_4c296b1ffc1349439917b1eedcb50d12;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4c296b1ffc1349439917b1eedcb50d12 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4c296b1ffc1349439917b1eedcb50d12 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_fun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_fun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c296b1ffc1349439917b1eedcb50d12 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c296b1ffc1349439917b1eedcb50d12 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c296b1ffc1349439917b1eedcb50d12 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4c296b1ffc1349439917b1eedcb50d12, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4c296b1ffc1349439917b1eedcb50d12->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4c296b1ffc1349439917b1eedcb50d12, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4c296b1ffc1349439917b1eedcb50d12,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_4c296b1ffc1349439917b1eedcb50d12 == cache_frame_4c296b1ffc1349439917b1eedcb50d12 )
    {
        Py_DECREF( frame_4c296b1ffc1349439917b1eedcb50d12 );
    }
    cache_frame_4c296b1ffc1349439917b1eedcb50d12 = NULL;

    assertFrameObject( frame_4c296b1ffc1349439917b1eedcb50d12 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_1_fun );
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_1_fun );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_2_jac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_16d360f8d11e40cf075a2ccad02302f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_16d360f8d11e40cf075a2ccad02302f9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_16d360f8d11e40cf075a2ccad02302f9, codeobj_16d360f8d11e40cf075a2ccad02302f9, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *) );
    frame_16d360f8d11e40cf075a2ccad02302f9 = cache_frame_16d360f8d11e40cf075a2ccad02302f9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_16d360f8d11e40cf075a2ccad02302f9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_16d360f8d11e40cf075a2ccad02302f9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_16d360f8d11e40cf075a2ccad02302f9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_16d360f8d11e40cf075a2ccad02302f9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_16d360f8d11e40cf075a2ccad02302f9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_16d360f8d11e40cf075a2ccad02302f9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_16d360f8d11e40cf075a2ccad02302f9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_16d360f8d11e40cf075a2ccad02302f9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_16d360f8d11e40cf075a2ccad02302f9,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_16d360f8d11e40cf075a2ccad02302f9 == cache_frame_16d360f8d11e40cf075a2ccad02302f9 )
    {
        Py_DECREF( frame_16d360f8d11e40cf075a2ccad02302f9 );
    }
    cache_frame_16d360f8d11e40cf075a2ccad02302f9 = NULL;

    assertFrameObject( frame_16d360f8d11e40cf075a2ccad02302f9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_2_jac );
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_2_jac );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_3_hess( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_v_eq = python_pars[ 1 ];
    PyObject *par_v_ineq = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_e14751ff53b1f7b1ad8008ccc8e37e90;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e14751ff53b1f7b1ad8008ccc8e37e90 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e14751ff53b1f7b1ad8008ccc8e37e90, codeobj_e14751ff53b1f7b1ad8008ccc8e37e90, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e14751ff53b1f7b1ad8008ccc8e37e90 = cache_frame_e14751ff53b1f7b1ad8008ccc8e37e90;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e14751ff53b1f7b1ad8008ccc8e37e90 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e14751ff53b1f7b1ad8008ccc8e37e90 ) == 2 ); // Frame stack

    // Framed code:
    if ( PyCell_GET( self->m_closure[0] ) == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_hess" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "oooc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyCell_GET( self->m_closure[0] );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e14751ff53b1f7b1ad8008ccc8e37e90 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e14751ff53b1f7b1ad8008ccc8e37e90 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e14751ff53b1f7b1ad8008ccc8e37e90 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e14751ff53b1f7b1ad8008ccc8e37e90, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e14751ff53b1f7b1ad8008ccc8e37e90->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e14751ff53b1f7b1ad8008ccc8e37e90, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e14751ff53b1f7b1ad8008ccc8e37e90,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_e14751ff53b1f7b1ad8008ccc8e37e90 == cache_frame_e14751ff53b1f7b1ad8008ccc8e37e90 )
    {
        Py_DECREF( frame_e14751ff53b1f7b1ad8008ccc8e37e90 );
    }
    cache_frame_e14751ff53b1f7b1ad8008ccc8e37e90 = NULL;

    assertFrameObject( frame_e14751ff53b1f7b1ad8008ccc8e37e90 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_3_hess );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_3_hess );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    struct Nuitka_CellObject *par_canonical_constraints = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_sparse_jacobian = python_pars[ 2 ];
    PyObject *var_fun = NULL;
    struct Nuitka_CellObject *var_vstack = PyCell_EMPTY();
    PyObject *var_jac = NULL;
    PyObject *var_hess = NULL;
    PyObject *var_n_eq = NULL;
    PyObject *var_n_ineq = NULL;
    PyObject *var_keep_feasible = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_d9983f5c6678fb5a620b7f562c31d6f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_fa2a86c98777fc4fde46d3e727bb832b_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_fa2a86c98777fc4fde46d3e727bb832b_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d9983f5c6678fb5a620b7f562c31d6f6 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_1_fun(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_canonical_constraints;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );


        assert( var_fun == NULL );
        var_fun = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9983f5c6678fb5a620b7f562c31d6f6, codeobj_d9983f5c6678fb5a620b7f562c31d6f6, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d9983f5c6678fb5a620b7f562c31d6f6 = cache_frame_d9983f5c6678fb5a620b7f562c31d6f6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9983f5c6678fb5a620b7f562c31d6f6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9983f5c6678fb5a620b7f562c31d6f6 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_sparse_jacobian );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_sparse_jacobian );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "ocoocooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_sps );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 111;
                type_description_1 = "ocoocooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_vstack );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
                type_description_1 = "ocoocooooo";
                goto frame_exception_exit_1;
            }
            assert( PyCell_GET( var_vstack ) == NULL );
            PyCell_SET( var_vstack, tmp_assign_source_2 );

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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
                type_description_1 = "ocoocooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_vstack );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 113;
                type_description_1 = "ocoocooooo";
                goto frame_exception_exit_1;
            }
            assert( PyCell_GET( var_vstack ) == NULL );
            PyCell_SET( var_vstack, tmp_assign_source_3 );

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_2_jac(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] = par_canonical_constraints;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[1] = var_vstack;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[1] );


        assert( var_jac == NULL );
        var_jac = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_3_hess(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_5)->m_closure[0] = par_canonical_constraints;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_5)->m_closure[0] );


        assert( var_hess == NULL );
        var_hess = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_sum_sequence_1;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( PyCell_GET( par_canonical_constraints ) );
            tmp_iter_arg_1 = PyCell_GET( par_canonical_constraints );
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 144;
                type_description_1 = "ocoocooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_7;
        }
        // Tried code:
        tmp_sum_sequence_1 = scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_sum_sequence_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate );
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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate );
        return NULL;
        outline_result_1:;
        tmp_assign_source_6 = BUILTIN_SUM1( tmp_sum_sequence_1 );
        Py_DECREF( tmp_sum_sequence_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n_eq == NULL );
        var_n_eq = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_sum_sequence_2;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( PyCell_GET( par_canonical_constraints ) );
            tmp_iter_arg_2 = PyCell_GET( par_canonical_constraints );
            tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 145;
                type_description_1 = "ocoocooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_2__$0 == NULL );
            tmp_genexpr_2__$0 = tmp_assign_source_9;
        }
        // Tried code:
        tmp_sum_sequence_2 = scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_2_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_sum_sequence_2)->m_closure[0] = PyCell_NEW0( tmp_genexpr_2__$0 );


        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate );
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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate );
        return NULL;
        outline_result_2:;
        tmp_assign_source_8 = BUILTIN_SUM1( tmp_sum_sequence_2 );
        Py_DECREF( tmp_sum_sequence_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n_ineq == NULL );
        var_n_ineq = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 146;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hstack );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( PyCell_GET( par_canonical_constraints ) );
            tmp_iter_arg_3 = PyCell_GET( par_canonical_constraints );
            tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "ocoocooooo";
                goto try_except_handler_4;
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
        MAKE_OR_REUSE_FRAME( cache_frame_fa2a86c98777fc4fde46d3e727bb832b_2, codeobj_fa2a86c98777fc4fde46d3e727bb832b, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *) );
        frame_fa2a86c98777fc4fde46d3e727bb832b_2 = cache_frame_fa2a86c98777fc4fde46d3e727bb832b_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_fa2a86c98777fc4fde46d3e727bb832b_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_fa2a86c98777fc4fde46d3e727bb832b_2 ) == 2 ); // Frame stack

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
                    type_description_2 = "o";
                    exception_lineno = 146;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_14;
                Py_INCREF( outline_0_var_c );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT( outline_0_var_c );
            tmp_source_name_4 = outline_0_var_c;
            tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_keep_feasible );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_args_element_name_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_args_element_name_1 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate );
        return NULL;
        // Return handler code:
        try_return_handler_5:;
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
        try_except_handler_5:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
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
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_fa2a86c98777fc4fde46d3e727bb832b_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_fa2a86c98777fc4fde46d3e727bb832b_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_fa2a86c98777fc4fde46d3e727bb832b_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_fa2a86c98777fc4fde46d3e727bb832b_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_fa2a86c98777fc4fde46d3e727bb832b_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_fa2a86c98777fc4fde46d3e727bb832b_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_fa2a86c98777fc4fde46d3e727bb832b_2,
            type_description_2,
            outline_0_var_c
        );


        // Release cached frame.
        if ( frame_fa2a86c98777fc4fde46d3e727bb832b_2 == cache_frame_fa2a86c98777fc4fde46d3e727bb832b_2 )
        {
            Py_DECREF( frame_fa2a86c98777fc4fde46d3e727bb832b_2 );
        }
        cache_frame_fa2a86c98777fc4fde46d3e727bb832b_2 = NULL;

        assertFrameObject( frame_fa2a86c98777fc4fde46d3e727bb832b_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ocoocooooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF( outline_0_var_c );
        outline_0_var_c = NULL;

        goto outline_result_3;
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

        Py_XDECREF( outline_0_var_c );
        outline_0_var_c = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate );
        return NULL;
        outline_exception_1:;
        exception_lineno = 146;
        goto frame_exception_exit_1;
        outline_result_3:;
        frame_d9983f5c6678fb5a620b7f562c31d6f6->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        assert( var_keep_feasible == NULL );
        var_keep_feasible = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_cls );
        tmp_called_name_2 = par_cls;
        CHECK_OBJECT( var_n_eq );
        tmp_args_element_name_2 = var_n_eq;
        CHECK_OBJECT( var_n_ineq );
        tmp_args_element_name_3 = var_n_ineq;
        CHECK_OBJECT( var_fun );
        tmp_args_element_name_4 = var_fun;
        CHECK_OBJECT( var_jac );
        tmp_args_element_name_5 = var_jac;
        CHECK_OBJECT( var_hess );
        tmp_args_element_name_6 = var_hess;
        CHECK_OBJECT( var_keep_feasible );
        tmp_args_element_name_7 = var_keep_feasible;
        frame_d9983f5c6678fb5a620b7f562c31d6f6->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9983f5c6678fb5a620b7f562c31d6f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9983f5c6678fb5a620b7f562c31d6f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9983f5c6678fb5a620b7f562c31d6f6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9983f5c6678fb5a620b7f562c31d6f6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9983f5c6678fb5a620b7f562c31d6f6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9983f5c6678fb5a620b7f562c31d6f6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9983f5c6678fb5a620b7f562c31d6f6,
        type_description_1,
        par_cls,
        par_canonical_constraints,
        par_sparse_jacobian,
        var_fun,
        var_vstack,
        var_jac,
        var_hess,
        var_n_eq,
        var_n_ineq,
        var_keep_feasible
    );


    // Release cached frame.
    if ( frame_d9983f5c6678fb5a620b7f562c31d6f6 == cache_frame_d9983f5c6678fb5a620b7f562c31d6f6 )
    {
        Py_DECREF( frame_d9983f5c6678fb5a620b7f562c31d6f6 );
    }
    cache_frame_d9983f5c6678fb5a620b7f562c31d6f6 = NULL;

    assertFrameObject( frame_d9983f5c6678fb5a620b7f562c31d6f6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_canonical_constraints );
    Py_DECREF( par_canonical_constraints );
    par_canonical_constraints = NULL;

    CHECK_OBJECT( (PyObject *)par_sparse_jacobian );
    Py_DECREF( par_sparse_jacobian );
    par_sparse_jacobian = NULL;

    CHECK_OBJECT( (PyObject *)var_fun );
    Py_DECREF( var_fun );
    var_fun = NULL;

    CHECK_OBJECT( (PyObject *)var_vstack );
    Py_DECREF( var_vstack );
    var_vstack = NULL;

    CHECK_OBJECT( (PyObject *)var_jac );
    Py_DECREF( var_jac );
    var_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_hess );
    Py_DECREF( var_hess );
    var_hess = NULL;

    CHECK_OBJECT( (PyObject *)var_n_eq );
    Py_DECREF( var_n_eq );
    var_n_eq = NULL;

    CHECK_OBJECT( (PyObject *)var_n_ineq );
    Py_DECREF( var_n_ineq );
    var_n_ineq = NULL;

    CHECK_OBJECT( (PyObject *)var_keep_feasible );
    Py_DECREF( var_keep_feasible );
    var_keep_feasible = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_canonical_constraints );
    Py_DECREF( par_canonical_constraints );
    par_canonical_constraints = NULL;

    CHECK_OBJECT( (PyObject *)par_sparse_jacobian );
    Py_DECREF( par_sparse_jacobian );
    par_sparse_jacobian = NULL;

    CHECK_OBJECT( (PyObject *)var_fun );
    Py_DECREF( var_fun );
    var_fun = NULL;

    CHECK_OBJECT( (PyObject *)var_vstack );
    Py_DECREF( var_vstack );
    var_vstack = NULL;

    Py_XDECREF( var_jac );
    var_jac = NULL;

    Py_XDECREF( var_hess );
    var_hess = NULL;

    Py_XDECREF( var_n_eq );
    var_n_eq = NULL;

    Py_XDECREF( var_n_ineq );
    var_n_ineq = NULL;

    Py_XDECREF( var_keep_feasible );
    var_keep_feasible = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_1_fun( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_eq_all = NULL;
    PyObject *var_ineq_all = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2a172c81896b35cfb8f7ea064d67ee10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_82a120a0d486bd35325b13b78c9fd749_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_82a120a0d486bd35325b13b78c9fd749_2 = NULL;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2a172c81896b35cfb8f7ea064d67ee10 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2a172c81896b35cfb8f7ea064d67ee10, codeobj_2a172c81896b35cfb8f7ea064d67ee10, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2a172c81896b35cfb8f7ea064d67ee10 = cache_frame_2a172c81896b35cfb8f7ea064d67ee10;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2a172c81896b35cfb8f7ea064d67ee10 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2a172c81896b35cfb8f7ea064d67ee10 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "canonical_constraints" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( PyCell_GET( self->m_closure[0] ) );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "oooc";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_dircall_arg2_1;
            tmp_dircall_arg1_1 = (PyObject *)&PyZip_Type;
            // Tried code:
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_iter_arg_2;
                if ( PyCell_GET( self->m_closure[0] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "canonical_constraints" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 104;
                    type_description_1 = "oooc";
                    goto try_except_handler_3;
                }

                tmp_iter_arg_2 = PyCell_GET( self->m_closure[0] );
                tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_2 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;
                    type_description_1 = "oooc";
                    goto try_except_handler_3;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_2;
            }
            {
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_3;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_82a120a0d486bd35325b13b78c9fd749_2, codeobj_82a120a0d486bd35325b13b78c9fd749, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *) );
            frame_82a120a0d486bd35325b13b78c9fd749_2 = cache_frame_82a120a0d486bd35325b13b78c9fd749_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_82a120a0d486bd35325b13b78c9fd749_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_82a120a0d486bd35325b13b78c9fd749_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_4;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_1 = tmp_listcomp_1__$0;
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
                        type_description_2 = "oo";
                        exception_lineno = 104;
                        goto try_except_handler_4;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_c;
                    outline_0_var_c = tmp_assign_source_5;
                    Py_INCREF( outline_0_var_c );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_args_element_name_1;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT( outline_0_var_c );
                tmp_called_instance_1 = outline_0_var_c;
                CHECK_OBJECT( par_x );
                tmp_args_element_name_1 = par_x;
                frame_82a120a0d486bd35325b13b78c9fd749_2->m_frame.f_lineno = 104;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fun, call_args );
                }

                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;
                    type_description_2 = "oo";
                    goto try_except_handler_4;
                }
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;
                    type_description_2 = "oo";
                    goto try_except_handler_4;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_dircall_arg2_1 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_dircall_arg2_1 );
            goto try_return_handler_4;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_1_fun );
            return NULL;
            // Return handler code:
            try_return_handler_4:;
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
            try_except_handler_4:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
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
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_2;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_82a120a0d486bd35325b13b78c9fd749_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_82a120a0d486bd35325b13b78c9fd749_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_3;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_82a120a0d486bd35325b13b78c9fd749_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_82a120a0d486bd35325b13b78c9fd749_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_82a120a0d486bd35325b13b78c9fd749_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_82a120a0d486bd35325b13b78c9fd749_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_82a120a0d486bd35325b13b78c9fd749_2,
                type_description_2,
                outline_0_var_c,
                par_x
            );


            // Release cached frame.
            if ( frame_82a120a0d486bd35325b13b78c9fd749_2 == cache_frame_82a120a0d486bd35325b13b78c9fd749_2 )
            {
                Py_DECREF( frame_82a120a0d486bd35325b13b78c9fd749_2 );
            }
            cache_frame_82a120a0d486bd35325b13b78c9fd749_2 = NULL;

            assertFrameObject( frame_82a120a0d486bd35325b13b78c9fd749_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "oooc";
            goto try_except_handler_3;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_1_fun );
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            Py_XDECREF( outline_0_var_c );
            outline_0_var_c = NULL;

            goto outline_result_1;
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

            Py_XDECREF( outline_0_var_c );
            outline_0_var_c = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_1_fun );
            return NULL;
            outline_exception_1:;
            exception_lineno = 104;
            goto try_except_handler_2;
            outline_result_1:;
            Py_INCREF( tmp_dircall_arg1_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_iter_arg_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
            }
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "oooc";
                goto try_except_handler_2;
            }
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "oooc";
                goto try_except_handler_2;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
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


                type_description_1 = "oooc";
                exception_lineno = 103;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
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


                type_description_1 = "oooc";
                exception_lineno = 103;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                        type_description_1 = "oooc";
                        exception_lineno = 103;
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

                type_description_1 = "oooc";
                exception_lineno = 103;
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
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

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
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
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
            assert( var_eq_all == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_eq_all = tmp_assign_source_8;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
            assert( var_ineq_all == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_ineq_all = tmp_assign_source_9;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_3;
            tmp_iter_arg_3 = DEEP_COPY( const_tuple_list_empty_list_empty_tuple );
            tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            assert( !(tmp_assign_source_10 == NULL) );
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


                type_description_1 = "oooc";
                exception_lineno = 106;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


                type_description_1 = "oooc";
                exception_lineno = 106;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
        }
        goto try_end_3;
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
        try_end_3:;
        goto try_end_4;
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

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
            assert( var_eq_all == NULL );
            Py_INCREF( tmp_assign_source_13 );
            var_eq_all = tmp_assign_source_13;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
            assert( var_ineq_all == NULL );
            Py_INCREF( tmp_assign_source_14 );
            var_ineq_all = tmp_assign_source_14;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        branch_end_1:;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 108;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_eq_all );
        tmp_args_element_name_2 = var_eq_all;
        frame_2a172c81896b35cfb8f7ea064d67ee10->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_hstack, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT( var_ineq_all );
        tmp_args_element_name_3 = var_ineq_all;
        frame_2a172c81896b35cfb8f7ea064d67ee10->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_hstack, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 108;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a172c81896b35cfb8f7ea064d67ee10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a172c81896b35cfb8f7ea064d67ee10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a172c81896b35cfb8f7ea064d67ee10 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2a172c81896b35cfb8f7ea064d67ee10, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2a172c81896b35cfb8f7ea064d67ee10->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2a172c81896b35cfb8f7ea064d67ee10, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2a172c81896b35cfb8f7ea064d67ee10,
        type_description_1,
        par_x,
        var_eq_all,
        var_ineq_all,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_2a172c81896b35cfb8f7ea064d67ee10 == cache_frame_2a172c81896b35cfb8f7ea064d67ee10 )
    {
        Py_DECREF( frame_2a172c81896b35cfb8f7ea064d67ee10 );
    }
    cache_frame_2a172c81896b35cfb8f7ea064d67ee10 = NULL;

    assertFrameObject( frame_2a172c81896b35cfb8f7ea064d67ee10 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_1_fun );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_eq_all );
    Py_DECREF( var_eq_all );
    var_eq_all = NULL;

    CHECK_OBJECT( (PyObject *)var_ineq_all );
    Py_DECREF( var_ineq_all );
    var_ineq_all = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_eq_all );
    var_eq_all = NULL;

    Py_XDECREF( var_ineq_all );
    var_ineq_all = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_1_fun );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_2_jac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_eq_all = NULL;
    PyObject *var_ineq_all = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_021e7abba9b931cd78ae23c378c69df6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_ea00ca5c5e3b918cf493a8855d931e32_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_ea00ca5c5e3b918cf493a8855d931e32_2 = NULL;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_021e7abba9b931cd78ae23c378c69df6 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_021e7abba9b931cd78ae23c378c69df6, codeobj_021e7abba9b931cd78ae23c378c69df6, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_021e7abba9b931cd78ae23c378c69df6 = cache_frame_021e7abba9b931cd78ae23c378c69df6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_021e7abba9b931cd78ae23c378c69df6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_021e7abba9b931cd78ae23c378c69df6 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "canonical_constraints" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( PyCell_GET( self->m_closure[0] ) );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooocc";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_dircall_arg2_1;
            tmp_dircall_arg1_1 = (PyObject *)&PyZip_Type;
            // Tried code:
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_iter_arg_2;
                if ( PyCell_GET( self->m_closure[0] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "canonical_constraints" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 118;
                    type_description_1 = "ooocc";
                    goto try_except_handler_3;
                }

                tmp_iter_arg_2 = PyCell_GET( self->m_closure[0] );
                tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_2 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 118;
                    type_description_1 = "ooocc";
                    goto try_except_handler_3;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_2;
            }
            {
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_3;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_ea00ca5c5e3b918cf493a8855d931e32_2, codeobj_ea00ca5c5e3b918cf493a8855d931e32, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *) );
            frame_ea00ca5c5e3b918cf493a8855d931e32_2 = cache_frame_ea00ca5c5e3b918cf493a8855d931e32_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_ea00ca5c5e3b918cf493a8855d931e32_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_ea00ca5c5e3b918cf493a8855d931e32_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_4;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_1 = tmp_listcomp_1__$0;
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
                        type_description_2 = "oo";
                        exception_lineno = 118;
                        goto try_except_handler_4;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_c;
                    outline_0_var_c = tmp_assign_source_5;
                    Py_INCREF( outline_0_var_c );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_args_element_name_1;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT( outline_0_var_c );
                tmp_called_instance_1 = outline_0_var_c;
                CHECK_OBJECT( par_x );
                tmp_args_element_name_1 = par_x;
                frame_ea00ca5c5e3b918cf493a8855d931e32_2->m_frame.f_lineno = 118;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_jac, call_args );
                }

                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 118;
                    type_description_2 = "oo";
                    goto try_except_handler_4;
                }
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 118;
                    type_description_2 = "oo";
                    goto try_except_handler_4;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_dircall_arg2_1 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_dircall_arg2_1 );
            goto try_return_handler_4;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_2_jac );
            return NULL;
            // Return handler code:
            try_return_handler_4:;
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
            try_except_handler_4:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
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
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_2;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_ea00ca5c5e3b918cf493a8855d931e32_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_ea00ca5c5e3b918cf493a8855d931e32_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_3;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_ea00ca5c5e3b918cf493a8855d931e32_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_ea00ca5c5e3b918cf493a8855d931e32_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_ea00ca5c5e3b918cf493a8855d931e32_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_ea00ca5c5e3b918cf493a8855d931e32_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_ea00ca5c5e3b918cf493a8855d931e32_2,
                type_description_2,
                outline_0_var_c,
                par_x
            );


            // Release cached frame.
            if ( frame_ea00ca5c5e3b918cf493a8855d931e32_2 == cache_frame_ea00ca5c5e3b918cf493a8855d931e32_2 )
            {
                Py_DECREF( frame_ea00ca5c5e3b918cf493a8855d931e32_2 );
            }
            cache_frame_ea00ca5c5e3b918cf493a8855d931e32_2 = NULL;

            assertFrameObject( frame_ea00ca5c5e3b918cf493a8855d931e32_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "ooocc";
            goto try_except_handler_3;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_2_jac );
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            Py_XDECREF( outline_0_var_c );
            outline_0_var_c = NULL;

            goto outline_result_1;
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

            Py_XDECREF( outline_0_var_c );
            outline_0_var_c = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_2_jac );
            return NULL;
            outline_exception_1:;
            exception_lineno = 118;
            goto try_except_handler_2;
            outline_result_1:;
            Py_INCREF( tmp_dircall_arg1_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_iter_arg_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
            }
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;
                type_description_1 = "ooocc";
                goto try_except_handler_2;
            }
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;
                type_description_1 = "ooocc";
                goto try_except_handler_2;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
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


                type_description_1 = "ooocc";
                exception_lineno = 117;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
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


                type_description_1 = "ooocc";
                exception_lineno = 117;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                        type_description_1 = "ooocc";
                        exception_lineno = 117;
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

                type_description_1 = "ooocc";
                exception_lineno = 117;
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
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

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
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
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
            assert( var_eq_all == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_eq_all = tmp_assign_source_8;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
            assert( var_ineq_all == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_ineq_all = tmp_assign_source_9;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_3;
            tmp_iter_arg_3 = DEEP_COPY( const_tuple_list_empty_list_empty_tuple );
            tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            assert( !(tmp_assign_source_10 == NULL) );
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


                type_description_1 = "ooocc";
                exception_lineno = 120;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


                type_description_1 = "ooocc";
                exception_lineno = 120;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
        }
        goto try_end_3;
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
        try_end_3:;
        goto try_end_4;
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

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
            assert( var_eq_all == NULL );
            Py_INCREF( tmp_assign_source_13 );
            var_eq_all = tmp_assign_source_13;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
            assert( var_ineq_all == NULL );
            Py_INCREF( tmp_assign_source_14 );
            var_ineq_all = tmp_assign_source_14;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        branch_end_1:;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "vstack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( var_eq_all );
        tmp_args_element_name_2 = var_eq_all;
        frame_021e7abba9b931cd78ae23c378c69df6->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "vstack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( var_ineq_all );
        tmp_args_element_name_3 = var_ineq_all;
        frame_021e7abba9b931cd78ae23c378c69df6->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 122;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_021e7abba9b931cd78ae23c378c69df6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_021e7abba9b931cd78ae23c378c69df6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_021e7abba9b931cd78ae23c378c69df6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_021e7abba9b931cd78ae23c378c69df6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_021e7abba9b931cd78ae23c378c69df6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_021e7abba9b931cd78ae23c378c69df6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_021e7abba9b931cd78ae23c378c69df6,
        type_description_1,
        par_x,
        var_eq_all,
        var_ineq_all,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_021e7abba9b931cd78ae23c378c69df6 == cache_frame_021e7abba9b931cd78ae23c378c69df6 )
    {
        Py_DECREF( frame_021e7abba9b931cd78ae23c378c69df6 );
    }
    cache_frame_021e7abba9b931cd78ae23c378c69df6 = NULL;

    assertFrameObject( frame_021e7abba9b931cd78ae23c378c69df6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_2_jac );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_eq_all );
    Py_DECREF( var_eq_all );
    var_eq_all = NULL;

    CHECK_OBJECT( (PyObject *)var_ineq_all );
    Py_DECREF( var_ineq_all );
    var_ineq_all = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_eq_all );
    var_eq_all = NULL;

    Py_XDECREF( var_ineq_all );
    var_ineq_all = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_2_jac );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_3_hess( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_v_eq = python_pars[ 1 ];
    PyObject *par_v_ineq = python_pars[ 2 ];
    struct Nuitka_CellObject *var_hess_all = PyCell_EMPTY();
    PyObject *var_index_eq = NULL;
    PyObject *var_index_ineq = NULL;
    PyObject *var_c = NULL;
    PyObject *var_vc_eq = NULL;
    PyObject *var_vc_ineq = NULL;
    PyObject *var_matvec = NULL;
    PyObject *var_n = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_4d8e25e47b8eb924482c125bb803c784;
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
    static struct Nuitka_FrameObject *cache_frame_4d8e25e47b8eb924482c125bb803c784 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( PyCell_GET( var_hess_all ) == NULL );
        PyCell_SET( var_hess_all, tmp_assign_source_1 );

    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_0;
        assert( var_index_eq == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_index_eq = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_0;
        assert( var_index_ineq == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_index_ineq = tmp_assign_source_3;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4d8e25e47b8eb924482c125bb803c784, codeobj_4d8e25e47b8eb924482c125bb803c784, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4d8e25e47b8eb924482c125bb803c784 = cache_frame_4d8e25e47b8eb924482c125bb803c784;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4d8e25e47b8eb924482c125bb803c784 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4d8e25e47b8eb924482c125bb803c784 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "canonical_constraints" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 128;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = PyCell_GET( self->m_closure[0] );
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooocoooooooc";
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
                type_description_1 = "ooocoooooooc";
                exception_lineno = 128;
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
            PyObject *old = var_c;
            var_c = tmp_assign_source_6;
            Py_INCREF( var_c );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_v_eq );
        tmp_subscribed_name_1 = par_v_eq;
        CHECK_OBJECT( var_index_eq );
        tmp_start_name_1 = var_index_eq;
        CHECK_OBJECT( var_index_eq );
        tmp_left_name_1 = var_index_eq;
        CHECK_OBJECT( var_c );
        tmp_source_name_1 = var_c;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n_eq );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_vc_eq;
            var_vc_eq = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( par_v_ineq );
        tmp_subscribed_name_2 = par_v_ineq;
        CHECK_OBJECT( var_index_ineq );
        tmp_start_name_2 = var_index_ineq;
        CHECK_OBJECT( var_index_ineq );
        tmp_left_name_2 = var_index_ineq;
        CHECK_OBJECT( var_c );
        tmp_source_name_2 = var_c;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n_ineq );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_stop_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_stop_name_2 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_vc_ineq;
            var_vc_ineq = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( PyCell_GET( var_hess_all ) );
        tmp_source_name_3 = PyCell_GET( var_hess_all );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_c );
        tmp_called_instance_1 = var_c;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        CHECK_OBJECT( var_vc_eq );
        tmp_args_element_name_3 = var_vc_eq;
        CHECK_OBJECT( var_vc_ineq );
        tmp_args_element_name_4 = var_vc_ineq;
        frame_4d8e25e47b8eb924482c125bb803c784->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_hess, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 131;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        frame_4d8e25e47b8eb924482c125bb803c784->m_frame.f_lineno = 131;
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


            exception_lineno = 131;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_index_eq );
        tmp_left_name_3 = var_index_eq;
        CHECK_OBJECT( var_c );
        tmp_source_name_4 = var_c;
        tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_n_eq );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = tmp_left_name_3;
        var_index_eq = tmp_assign_source_9;

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( var_index_ineq );
        tmp_left_name_4 = var_index_ineq;
        CHECK_OBJECT( var_c );
        tmp_source_name_5 = var_c;
        tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_n_ineq );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = tmp_left_name_4;
        var_index_ineq = tmp_assign_source_10;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooocoooooooc";
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
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_3_hess$$$function_1_matvec(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_11)->m_closure[0] = var_hess_all;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_11)->m_closure[0] );


        assert( var_matvec == NULL );
        var_matvec = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( par_x );
        tmp_source_name_6 = par_x;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_sps );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 142;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_1;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_linalg );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_LinearOperator );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_tuple_element_2 = var_n;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_n );
        tmp_tuple_element_2 = var_n;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_matvec );
        tmp_tuple_element_1 = var_matvec;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
        frame_4d8e25e47b8eb924482c125bb803c784->m_frame.f_lineno = 142;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d8e25e47b8eb924482c125bb803c784 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d8e25e47b8eb924482c125bb803c784 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d8e25e47b8eb924482c125bb803c784 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d8e25e47b8eb924482c125bb803c784, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d8e25e47b8eb924482c125bb803c784->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d8e25e47b8eb924482c125bb803c784, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4d8e25e47b8eb924482c125bb803c784,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        var_hess_all,
        var_index_eq,
        var_index_ineq,
        var_c,
        var_vc_eq,
        var_vc_ineq,
        var_matvec,
        var_n,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_4d8e25e47b8eb924482c125bb803c784 == cache_frame_4d8e25e47b8eb924482c125bb803c784 )
    {
        Py_DECREF( frame_4d8e25e47b8eb924482c125bb803c784 );
    }
    cache_frame_4d8e25e47b8eb924482c125bb803c784 = NULL;

    assertFrameObject( frame_4d8e25e47b8eb924482c125bb803c784 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_3_hess );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

    CHECK_OBJECT( (PyObject *)var_hess_all );
    Py_DECREF( var_hess_all );
    var_hess_all = NULL;

    CHECK_OBJECT( (PyObject *)var_index_eq );
    Py_DECREF( var_index_eq );
    var_index_eq = NULL;

    CHECK_OBJECT( (PyObject *)var_index_ineq );
    Py_DECREF( var_index_ineq );
    var_index_ineq = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_vc_eq );
    var_vc_eq = NULL;

    Py_XDECREF( var_vc_ineq );
    var_vc_ineq = NULL;

    CHECK_OBJECT( (PyObject *)var_matvec );
    Py_DECREF( var_matvec );
    var_matvec = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

    CHECK_OBJECT( (PyObject *)var_hess_all );
    Py_DECREF( var_hess_all );
    var_hess_all = NULL;

    Py_XDECREF( var_index_eq );
    var_index_eq = NULL;

    Py_XDECREF( var_index_ineq );
    var_index_ineq = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_vc_eq );
    var_vc_eq = NULL;

    Py_XDECREF( var_vc_ineq );
    var_vc_ineq = NULL;

    Py_XDECREF( var_matvec );
    var_matvec = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_3_hess );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_3_hess$$$function_1_matvec( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *var_result = NULL;
    PyObject *var_h = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_42a8aee01ff93a6a1943b1320143cd35;
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
    static struct Nuitka_FrameObject *cache_frame_42a8aee01ff93a6a1943b1320143cd35 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_42a8aee01ff93a6a1943b1320143cd35, codeobj_42a8aee01ff93a6a1943b1320143cd35, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_42a8aee01ff93a6a1943b1320143cd35 = cache_frame_42a8aee01ff93a6a1943b1320143cd35;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_42a8aee01ff93a6a1943b1320143cd35 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_42a8aee01ff93a6a1943b1320143cd35 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 136;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_1 = par_p;
        frame_42a8aee01ff93a6a1943b1320143cd35->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_zeros_like, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "hess_all" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 137;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = PyCell_GET( self->m_closure[0] );
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooc";
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
                type_description_1 = "oooc";
                exception_lineno = 137;
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
            PyObject *old = var_h;
            var_h = tmp_assign_source_4;
            Py_INCREF( var_h );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_result );
        tmp_left_name_1 = var_result;
        CHECK_OBJECT( var_h );
        tmp_called_instance_2 = var_h;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_2 = par_p;
        frame_42a8aee01ff93a6a1943b1320143cd35->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = tmp_left_name_1;
        var_result = tmp_assign_source_5;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooc";
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
    RESTORE_FRAME_EXCEPTION( frame_42a8aee01ff93a6a1943b1320143cd35 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_42a8aee01ff93a6a1943b1320143cd35 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_42a8aee01ff93a6a1943b1320143cd35, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_42a8aee01ff93a6a1943b1320143cd35->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_42a8aee01ff93a6a1943b1320143cd35, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_42a8aee01ff93a6a1943b1320143cd35,
        type_description_1,
        par_p,
        var_result,
        var_h,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_42a8aee01ff93a6a1943b1320143cd35 == cache_frame_42a8aee01ff93a6a1943b1320143cd35 )
    {
        Py_DECREF( frame_42a8aee01ff93a6a1943b1320143cd35 );
    }
    cache_frame_42a8aee01ff93a6a1943b1320143cd35 = NULL;

    assertFrameObject( frame_42a8aee01ff93a6a1943b1320143cd35 );

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

    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_3_hess$$$function_1_matvec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_3_hess$$$function_1_matvec );
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



struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_1_genexpr_locals {
    PyObject *var_c;
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

static PyObject *scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_1_genexpr_locals *generator_heap = (struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

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
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_69617bdd572b0b38575fc047f0b78c8b, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 144;
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
        PyObject *tmp_source_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_c );
        tmp_source_name_1 = generator_heap->var_c;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n_eq );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 144;
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
            generator_heap->var_c
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

static PyObject *scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_1_genexpr_context,
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_d85d81c0e8371b8f6bc724864670fa84,
#endif
        codeobj_69617bdd572b0b38575fc047f0b78c8b,
        1,
        sizeof(struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_1_genexpr_locals)
    );
}



struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_2_genexpr_locals {
    PyObject *var_c;
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

static PyObject *scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_2_genexpr_locals *generator_heap = (struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_2_genexpr_locals *)generator->m_heap_storage;

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
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_9f4db52418015fe7f20b7d2a211845ab, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 145;
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
        PyObject *tmp_source_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_c );
        tmp_source_name_1 = generator_heap->var_c;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n_ineq );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 145;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 145;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 145;
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
            generator_heap->var_c
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

static PyObject *scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_2_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_2_genexpr_context,
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_d85d81c0e8371b8f6bc724864670fa84,
#endif
        codeobj_9f4db52418015fe7f20b7d2a211845ab,
        1,
        sizeof(struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$genexpr_2_genexpr_locals)
    );
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    struct Nuitka_CellObject *par_cfun = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_value = PyCell_NEW1( python_pars[ 2 ] );
    struct Nuitka_CellObject *var_empty_fun = PyCell_EMPTY();
    PyObject *var_n = NULL;
    PyObject *var_n_eq = NULL;
    PyObject *var_keep_feasible = NULL;
    struct Nuitka_CellObject *var_empty_jac = PyCell_EMPTY();
    PyObject *var_fun = NULL;
    PyObject *var_jac = NULL;
    PyObject *var_hess = NULL;
    struct Nuitka_FrameObject *frame_9466bf3ed30fd7d0979d2942f2d371d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9466bf3ed30fd7d0979d2942f2d371d5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9466bf3ed30fd7d0979d2942f2d371d5, codeobj_9466bf3ed30fd7d0979d2942f2d371d5, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9466bf3ed30fd7d0979d2942f2d371d5 = cache_frame_9466bf3ed30fd7d0979d2942f2d371d5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9466bf3ed30fd7d0979d2942f2d371d5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9466bf3ed30fd7d0979d2942f2d371d5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 153;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_9466bf3ed30fd7d0979d2942f2d371d5->m_frame.f_lineno = 153;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_empty, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_empty_fun ) == NULL );
        PyCell_SET( var_empty_fun, tmp_assign_source_1 );

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( PyCell_GET( par_cfun ) );
        tmp_source_name_1 = PyCell_GET( par_cfun );
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( PyCell_GET( par_value ) );
        tmp_source_name_2 = PyCell_GET( par_value );
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        assert( var_n_eq == NULL );
        var_n_eq = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 158;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_empty );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = const_tuple_int_0_tuple;
        tmp_kw_name_1 = PyDict_Copy( const_dict_8a6ce79bb59f45c062c2a0027a3a0c33 );
        frame_9466bf3ed30fd7d0979d2942f2d371d5->m_frame.f_lineno = 158;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        assert( var_keep_feasible == NULL );
        var_keep_feasible = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( PyCell_GET( par_cfun ) );
        tmp_source_name_4 = PyCell_GET( par_cfun );
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sparse_jacobian );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 160;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_tuple_element_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_sps );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 161;
                type_description_1 = "occcooNocooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_3;
            tmp_tuple_element_1 = const_int_0;
            tmp_args_element_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_1 = var_n;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
            frame_9466bf3ed30fd7d0979d2942f2d371d5->m_frame.f_lineno = 161;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_csr_matrix, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "occcooNocooo";
                goto frame_exception_exit_1;
            }
            assert( PyCell_GET( var_empty_jac ) == NULL );
            PyCell_SET( var_empty_jac, tmp_assign_source_5 );

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_tuple_element_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 163;
                type_description_1 = "occcooNocooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_4;
            tmp_tuple_element_2 = const_int_0;
            tmp_args_element_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_2 = var_n;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_2 );
            frame_9466bf3ed30fd7d0979d2942f2d371d5->m_frame.f_lineno = 163;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_empty, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "occcooNocooo";
                goto frame_exception_exit_1;
            }
            assert( PyCell_GET( var_empty_jac ) == NULL );
            PyCell_SET( var_empty_jac, tmp_assign_source_6 );

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_1_fun(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] = par_cfun;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[1] = var_empty_fun;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[2] = par_value;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[2] );


        assert( var_fun == NULL );
        var_fun = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_2_jac(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] = par_cfun;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[1] = var_empty_jac;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[1] );


        assert( var_jac == NULL );
        var_jac = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_3_hess(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[0] = par_cfun;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[0] );


        assert( var_hess == NULL );
        var_hess = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 174;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_5;
        frame_9466bf3ed30fd7d0979d2942f2d371d5->m_frame.f_lineno = 174;
        tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_empty, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = PyCell_GET( var_empty_fun );
            PyCell_SET( var_empty_fun, tmp_assign_source_10 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( PyCell_GET( par_cfun ) );
        tmp_source_name_5 = PyCell_GET( par_cfun );
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_n );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_n;
            assert( old != NULL );
            var_n = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( PyCell_GET( par_cfun ) );
        tmp_source_name_6 = PyCell_GET( par_cfun );
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sparse_jacobian );
        if ( tmp_attribute_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_2 );

            exception_lineno = 176;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_2 );
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
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_tuple_element_3;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_sps );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 177;
                type_description_1 = "occcooNocooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = tmp_mvar_value_6;
            tmp_tuple_element_3 = const_int_0;
            tmp_args_element_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_3 = var_n;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_3 );
            frame_9466bf3ed30fd7d0979d2942f2d371d5->m_frame.f_lineno = 177;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_csr_matrix, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "occcooNocooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = PyCell_GET( var_empty_jac );
                PyCell_SET( var_empty_jac, tmp_assign_source_12 );
                Py_XDECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_tuple_element_4;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 179;
                type_description_1 = "occcooNocooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_7;
            tmp_tuple_element_4 = const_int_0;
            tmp_args_element_name_4 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_4 = var_n;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_4 );
            frame_9466bf3ed30fd7d0979d2942f2d371d5->m_frame.f_lineno = 179;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_empty, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "occcooNocooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = PyCell_GET( var_empty_jac );
                PyCell_SET( var_empty_jac, tmp_assign_source_13 );
                Py_XDECREF( old );
            }

        }
        branch_end_2:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT( par_cls );
        tmp_called_name_2 = par_cls;
        CHECK_OBJECT( var_n_eq );
        tmp_args_element_name_5 = var_n_eq;
        tmp_args_element_name_6 = const_int_0;
        CHECK_OBJECT( var_fun );
        tmp_args_element_name_7 = var_fun;
        CHECK_OBJECT( var_jac );
        tmp_args_element_name_8 = var_jac;
        CHECK_OBJECT( var_hess );
        tmp_args_element_name_9 = var_hess;
        CHECK_OBJECT( var_keep_feasible );
        tmp_args_element_name_10 = var_keep_feasible;
        frame_9466bf3ed30fd7d0979d2942f2d371d5->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9466bf3ed30fd7d0979d2942f2d371d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9466bf3ed30fd7d0979d2942f2d371d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9466bf3ed30fd7d0979d2942f2d371d5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9466bf3ed30fd7d0979d2942f2d371d5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9466bf3ed30fd7d0979d2942f2d371d5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9466bf3ed30fd7d0979d2942f2d371d5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9466bf3ed30fd7d0979d2942f2d371d5,
        type_description_1,
        par_cls,
        par_cfun,
        par_value,
        var_empty_fun,
        var_n,
        var_n_eq,
        NULL,
        var_keep_feasible,
        var_empty_jac,
        var_fun,
        var_jac,
        var_hess
    );


    // Release cached frame.
    if ( frame_9466bf3ed30fd7d0979d2942f2d371d5 == cache_frame_9466bf3ed30fd7d0979d2942f2d371d5 )
    {
        Py_DECREF( frame_9466bf3ed30fd7d0979d2942f2d371d5 );
    }
    cache_frame_9466bf3ed30fd7d0979d2942f2d371d5 = NULL;

    assertFrameObject( frame_9466bf3ed30fd7d0979d2942f2d371d5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_cfun );
    Py_DECREF( par_cfun );
    par_cfun = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_fun );
    Py_DECREF( var_empty_fun );
    var_empty_fun = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_n_eq );
    Py_DECREF( var_n_eq );
    var_n_eq = NULL;

    CHECK_OBJECT( (PyObject *)var_keep_feasible );
    Py_DECREF( var_keep_feasible );
    var_keep_feasible = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_jac );
    Py_DECREF( var_empty_jac );
    var_empty_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_fun );
    Py_DECREF( var_fun );
    var_fun = NULL;

    CHECK_OBJECT( (PyObject *)var_jac );
    Py_DECREF( var_jac );
    var_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_hess );
    Py_DECREF( var_hess );
    var_hess = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_cfun );
    Py_DECREF( par_cfun );
    par_cfun = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_fun );
    Py_DECREF( var_empty_fun );
    var_empty_fun = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_n_eq );
    var_n_eq = NULL;

    Py_XDECREF( var_keep_feasible );
    var_keep_feasible = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_jac );
    Py_DECREF( var_empty_jac );
    var_empty_jac = NULL;

    Py_XDECREF( var_fun );
    var_fun = NULL;

    Py_XDECREF( var_jac );
    var_jac = NULL;

    Py_XDECREF( var_hess );
    var_hess = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_1_fun( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_060f1662281e372db4dd108e71f3615f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_060f1662281e372db4dd108e71f3615f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_060f1662281e372db4dd108e71f3615f, codeobj_060f1662281e372db4dd108e71f3615f, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_060f1662281e372db4dd108e71f3615f = cache_frame_060f1662281e372db4dd108e71f3615f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_060f1662281e372db4dd108e71f3615f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_060f1662281e372db4dd108e71f3615f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 166;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_060f1662281e372db4dd108e71f3615f->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fun, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "value" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 166;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = PyCell_GET( self->m_closure[2] );
        tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_fun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 166;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_060f1662281e372db4dd108e71f3615f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_060f1662281e372db4dd108e71f3615f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_060f1662281e372db4dd108e71f3615f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_060f1662281e372db4dd108e71f3615f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_060f1662281e372db4dd108e71f3615f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_060f1662281e372db4dd108e71f3615f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_060f1662281e372db4dd108e71f3615f,
        type_description_1,
        par_x,
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_060f1662281e372db4dd108e71f3615f == cache_frame_060f1662281e372db4dd108e71f3615f )
    {
        Py_DECREF( frame_060f1662281e372db4dd108e71f3615f );
    }
    cache_frame_060f1662281e372db4dd108e71f3615f = NULL;

    assertFrameObject( frame_060f1662281e372db4dd108e71f3615f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_1_fun );
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_1_fun );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_2_jac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_445b3833213d2bbec688f083a41faf69;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_445b3833213d2bbec688f083a41faf69 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_445b3833213d2bbec688f083a41faf69, codeobj_445b3833213d2bbec688f083a41faf69, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_445b3833213d2bbec688f083a41faf69 = cache_frame_445b3833213d2bbec688f083a41faf69;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_445b3833213d2bbec688f083a41faf69 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_445b3833213d2bbec688f083a41faf69 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 169;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_445b3833213d2bbec688f083a41faf69->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_jac, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 169;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_445b3833213d2bbec688f083a41faf69 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_445b3833213d2bbec688f083a41faf69 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_445b3833213d2bbec688f083a41faf69 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_445b3833213d2bbec688f083a41faf69, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_445b3833213d2bbec688f083a41faf69->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_445b3833213d2bbec688f083a41faf69, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_445b3833213d2bbec688f083a41faf69,
        type_description_1,
        par_x,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_445b3833213d2bbec688f083a41faf69 == cache_frame_445b3833213d2bbec688f083a41faf69 )
    {
        Py_DECREF( frame_445b3833213d2bbec688f083a41faf69 );
    }
    cache_frame_445b3833213d2bbec688f083a41faf69 = NULL;

    assertFrameObject( frame_445b3833213d2bbec688f083a41faf69 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_2_jac );
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_2_jac );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_3_hess( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_v_eq = python_pars[ 1 ];
    PyObject *par_v_ineq = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_abf93fe868ae67ddf0fd4ff1fa03e931;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_abf93fe868ae67ddf0fd4ff1fa03e931 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_abf93fe868ae67ddf0fd4ff1fa03e931, codeobj_abf93fe868ae67ddf0fd4ff1fa03e931, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_abf93fe868ae67ddf0fd4ff1fa03e931 = cache_frame_abf93fe868ae67ddf0fd4ff1fa03e931;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_abf93fe868ae67ddf0fd4ff1fa03e931 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_abf93fe868ae67ddf0fd4ff1fa03e931 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 172;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        CHECK_OBJECT( par_v_eq );
        tmp_args_element_name_2 = par_v_eq;
        frame_abf93fe868ae67ddf0fd4ff1fa03e931->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_hess, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abf93fe868ae67ddf0fd4ff1fa03e931 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_abf93fe868ae67ddf0fd4ff1fa03e931 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abf93fe868ae67ddf0fd4ff1fa03e931 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_abf93fe868ae67ddf0fd4ff1fa03e931, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_abf93fe868ae67ddf0fd4ff1fa03e931->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_abf93fe868ae67ddf0fd4ff1fa03e931, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_abf93fe868ae67ddf0fd4ff1fa03e931,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_abf93fe868ae67ddf0fd4ff1fa03e931 == cache_frame_abf93fe868ae67ddf0fd4ff1fa03e931 )
    {
        Py_DECREF( frame_abf93fe868ae67ddf0fd4ff1fa03e931 );
    }
    cache_frame_abf93fe868ae67ddf0fd4ff1fa03e931 = NULL;

    assertFrameObject( frame_abf93fe868ae67ddf0fd4ff1fa03e931 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_3_hess );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_3_hess );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    struct Nuitka_CellObject *par_cfun = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_ub = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *par_keep_feasible = python_pars[ 3 ];
    struct Nuitka_CellObject *var_empty_fun = PyCell_EMPTY();
    PyObject *var_n = NULL;
    struct Nuitka_CellObject *var_empty_jac = PyCell_EMPTY();
    struct Nuitka_CellObject *var_finite_ub = PyCell_EMPTY();
    PyObject *var_n_ineq = NULL;
    PyObject *var_fun = NULL;
    PyObject *var_jac = NULL;
    PyObject *var_hess = NULL;
    struct Nuitka_FrameObject *frame_ca683b9a9ccb95c1b72add0ab34984ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ca683b9a9ccb95c1b72add0ab34984ca = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ca683b9a9ccb95c1b72add0ab34984ca, codeobj_ca683b9a9ccb95c1b72add0ab34984ca, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ca683b9a9ccb95c1b72add0ab34984ca = cache_frame_ca683b9a9ccb95c1b72add0ab34984ca;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ca683b9a9ccb95c1b72add0ab34984ca );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ca683b9a9ccb95c1b72add0ab34984ca ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 185;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_ca683b9a9ccb95c1b72add0ab34984ca->m_frame.f_lineno = 185;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_empty, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_empty_fun ) == NULL );
        PyCell_SET( var_empty_fun, tmp_assign_source_1 );

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( PyCell_GET( par_cfun ) );
        tmp_source_name_1 = PyCell_GET( par_cfun );
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( PyCell_GET( par_cfun ) );
        tmp_source_name_2 = PyCell_GET( par_cfun );
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sparse_jacobian );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 187;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_tuple_element_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_sps );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 188;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            tmp_tuple_element_1 = const_int_0;
            tmp_args_element_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_1 = var_n;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
            frame_ca683b9a9ccb95c1b72add0ab34984ca->m_frame.f_lineno = 188;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_csr_matrix, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }
            assert( PyCell_GET( var_empty_jac ) == NULL );
            PyCell_SET( var_empty_jac, tmp_assign_source_3 );

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_tuple_element_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 190;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_3;
            tmp_tuple_element_2 = const_int_0;
            tmp_args_element_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_2 = var_n;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_2 );
            frame_ca683b9a9ccb95c1b72add0ab34984ca->m_frame.f_lineno = 190;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_empty, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 190;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }
            assert( PyCell_GET( var_empty_jac ) == NULL );
            PyCell_SET( var_empty_jac, tmp_assign_source_4 );

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( PyCell_GET( par_ub ) );
        tmp_compexpr_left_1 = PyCell_GET( par_ub );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 192;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_inf );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_finite_ub ) == NULL );
        PyCell_SET( var_finite_ub, tmp_assign_source_5 );

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 194;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_5;
        CHECK_OBJECT( PyCell_GET( var_finite_ub ) );
        tmp_args_element_name_3 = PyCell_GET( var_finite_ub );
        frame_ca683b9a9ccb95c1b72add0ab34984ca->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_sum, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert( var_n_ineq == NULL );
        var_n_ineq = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_2;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_6;
        CHECK_OBJECT( PyCell_GET( var_finite_ub ) );
        tmp_args_element_name_4 = PyCell_GET( var_finite_ub );
        frame_ca683b9a9ccb95c1b72add0ab34984ca->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_all, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 196;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_1_fun(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] = par_cfun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[1] = var_empty_fun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[1] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[2] = par_ub;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[2] );


            assert( var_fun == NULL );
            var_fun = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_2_jac(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] = par_cfun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[1] = var_empty_jac;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[1] );


            assert( var_jac == NULL );
            var_jac = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_3_hess(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[0] = par_cfun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[0] );


            assert( var_hess == NULL );
            var_hess = tmp_assign_source_9;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 206;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_7;
            CHECK_OBJECT( PyCell_GET( var_finite_ub ) );
            tmp_args_element_name_5 = PyCell_GET( var_finite_ub );
            frame_ca683b9a9ccb95c1b72add0ab34984ca->m_frame.f_lineno = 206;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_nonzero, call_args );
            }

            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = PyCell_GET( var_finite_ub );
                PyCell_SET( var_finite_ub, tmp_assign_source_10 );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_keep_feasible );
            tmp_subscribed_name_2 = par_keep_feasible;
            CHECK_OBJECT( PyCell_GET( var_finite_ub ) );
            tmp_subscript_name_2 = PyCell_GET( var_finite_ub );
            tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 207;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_keep_feasible;
                assert( old != NULL );
                par_keep_feasible = tmp_assign_source_11;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( PyCell_GET( par_ub ) );
            tmp_subscribed_name_3 = PyCell_GET( par_ub );
            CHECK_OBJECT( PyCell_GET( var_finite_ub ) );
            tmp_subscript_name_3 = PyCell_GET( var_finite_ub );
            tmp_assign_source_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = PyCell_GET( par_ub );
                PyCell_SET( par_ub, tmp_assign_source_12 );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_4_fun(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[0] = par_cfun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[1] = var_empty_fun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[1] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[2] = var_finite_ub;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[2] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[3] = par_ub;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[3] );


            assert( var_fun == NULL );
            var_fun = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_5_jac(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[0] = par_cfun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[1] = var_empty_jac;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[1] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[2] = var_finite_ub;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[2] );


            assert( var_jac == NULL );
            var_jac = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_6_hess(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_15)->m_closure[0] = par_cfun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_15)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_15)->m_closure[1] = var_finite_ub;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_15)->m_closure[1] );


            assert( var_hess == NULL );
            var_hess = tmp_assign_source_15;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( par_cls );
        tmp_called_name_1 = par_cls;
        tmp_args_element_name_6 = const_int_0;
        CHECK_OBJECT( var_n_ineq );
        tmp_args_element_name_7 = var_n_ineq;
        CHECK_OBJECT( var_fun );
        tmp_args_element_name_8 = var_fun;
        CHECK_OBJECT( var_jac );
        tmp_args_element_name_9 = var_jac;
        CHECK_OBJECT( var_hess );
        tmp_args_element_name_10 = var_hess;
        CHECK_OBJECT( par_keep_feasible );
        tmp_args_element_name_11 = par_keep_feasible;
        frame_ca683b9a9ccb95c1b72add0ab34984ca->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca683b9a9ccb95c1b72add0ab34984ca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca683b9a9ccb95c1b72add0ab34984ca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca683b9a9ccb95c1b72add0ab34984ca );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ca683b9a9ccb95c1b72add0ab34984ca, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ca683b9a9ccb95c1b72add0ab34984ca->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ca683b9a9ccb95c1b72add0ab34984ca, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ca683b9a9ccb95c1b72add0ab34984ca,
        type_description_1,
        par_cls,
        par_cfun,
        par_ub,
        par_keep_feasible,
        var_empty_fun,
        var_n,
        var_empty_jac,
        var_finite_ub,
        NULL,
        var_n_ineq,
        var_fun,
        var_jac,
        var_hess
    );


    // Release cached frame.
    if ( frame_ca683b9a9ccb95c1b72add0ab34984ca == cache_frame_ca683b9a9ccb95c1b72add0ab34984ca )
    {
        Py_DECREF( frame_ca683b9a9ccb95c1b72add0ab34984ca );
    }
    cache_frame_ca683b9a9ccb95c1b72add0ab34984ca = NULL;

    assertFrameObject( frame_ca683b9a9ccb95c1b72add0ab34984ca );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_cfun );
    Py_DECREF( par_cfun );
    par_cfun = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_keep_feasible );
    Py_DECREF( par_keep_feasible );
    par_keep_feasible = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_fun );
    Py_DECREF( var_empty_fun );
    var_empty_fun = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_jac );
    Py_DECREF( var_empty_jac );
    var_empty_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_finite_ub );
    Py_DECREF( var_finite_ub );
    var_finite_ub = NULL;

    CHECK_OBJECT( (PyObject *)var_n_ineq );
    Py_DECREF( var_n_ineq );
    var_n_ineq = NULL;

    CHECK_OBJECT( (PyObject *)var_fun );
    Py_DECREF( var_fun );
    var_fun = NULL;

    CHECK_OBJECT( (PyObject *)var_jac );
    Py_DECREF( var_jac );
    var_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_hess );
    Py_DECREF( var_hess );
    var_hess = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_cfun );
    Py_DECREF( par_cfun );
    par_cfun = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    Py_XDECREF( par_keep_feasible );
    par_keep_feasible = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_fun );
    Py_DECREF( var_empty_fun );
    var_empty_fun = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_jac );
    Py_DECREF( var_empty_jac );
    var_empty_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_finite_ub );
    Py_DECREF( var_finite_ub );
    var_finite_ub = NULL;

    Py_XDECREF( var_n_ineq );
    var_n_ineq = NULL;

    Py_XDECREF( var_fun );
    var_fun = NULL;

    Py_XDECREF( var_jac );
    var_jac = NULL;

    Py_XDECREF( var_hess );
    var_hess = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_1_fun( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_1f8318cc12483abf1c5847842933a355;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1f8318cc12483abf1c5847842933a355 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1f8318cc12483abf1c5847842933a355, codeobj_1f8318cc12483abf1c5847842933a355, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1f8318cc12483abf1c5847842933a355 = cache_frame_1f8318cc12483abf1c5847842933a355;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f8318cc12483abf1c5847842933a355 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f8318cc12483abf1c5847842933a355 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_fun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 198;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 198;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_1f8318cc12483abf1c5847842933a355->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fun, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 198;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ub" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 198;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = PyCell_GET( self->m_closure[2] );
        tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 198;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f8318cc12483abf1c5847842933a355 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f8318cc12483abf1c5847842933a355 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f8318cc12483abf1c5847842933a355 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f8318cc12483abf1c5847842933a355, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f8318cc12483abf1c5847842933a355->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f8318cc12483abf1c5847842933a355, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f8318cc12483abf1c5847842933a355,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_1f8318cc12483abf1c5847842933a355 == cache_frame_1f8318cc12483abf1c5847842933a355 )
    {
        Py_DECREF( frame_1f8318cc12483abf1c5847842933a355 );
    }
    cache_frame_1f8318cc12483abf1c5847842933a355 = NULL;

    assertFrameObject( frame_1f8318cc12483abf1c5847842933a355 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_1_fun );
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_1_fun );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_2_jac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_08ab07e0127bc5166cddda8e5623c657;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_08ab07e0127bc5166cddda8e5623c657 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_08ab07e0127bc5166cddda8e5623c657, codeobj_08ab07e0127bc5166cddda8e5623c657, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_08ab07e0127bc5166cddda8e5623c657 = cache_frame_08ab07e0127bc5166cddda8e5623c657;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_08ab07e0127bc5166cddda8e5623c657 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_08ab07e0127bc5166cddda8e5623c657 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 201;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 201;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_08ab07e0127bc5166cddda8e5623c657->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_jac, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 201;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_08ab07e0127bc5166cddda8e5623c657 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_08ab07e0127bc5166cddda8e5623c657 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_08ab07e0127bc5166cddda8e5623c657 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_08ab07e0127bc5166cddda8e5623c657, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_08ab07e0127bc5166cddda8e5623c657->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_08ab07e0127bc5166cddda8e5623c657, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_08ab07e0127bc5166cddda8e5623c657,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_08ab07e0127bc5166cddda8e5623c657 == cache_frame_08ab07e0127bc5166cddda8e5623c657 )
    {
        Py_DECREF( frame_08ab07e0127bc5166cddda8e5623c657 );
    }
    cache_frame_08ab07e0127bc5166cddda8e5623c657 = NULL;

    assertFrameObject( frame_08ab07e0127bc5166cddda8e5623c657 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_2_jac );
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_2_jac );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_3_hess( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_v_eq = python_pars[ 1 ];
    PyObject *par_v_ineq = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_9b1e2d68d7d8c991a4c7c5c02059bd24;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9b1e2d68d7d8c991a4c7c5c02059bd24 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9b1e2d68d7d8c991a4c7c5c02059bd24, codeobj_9b1e2d68d7d8c991a4c7c5c02059bd24, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9b1e2d68d7d8c991a4c7c5c02059bd24 = cache_frame_9b1e2d68d7d8c991a4c7c5c02059bd24;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9b1e2d68d7d8c991a4c7c5c02059bd24 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9b1e2d68d7d8c991a4c7c5c02059bd24 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 204;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        CHECK_OBJECT( par_v_ineq );
        tmp_args_element_name_2 = par_v_ineq;
        frame_9b1e2d68d7d8c991a4c7c5c02059bd24->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_hess, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b1e2d68d7d8c991a4c7c5c02059bd24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b1e2d68d7d8c991a4c7c5c02059bd24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b1e2d68d7d8c991a4c7c5c02059bd24 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9b1e2d68d7d8c991a4c7c5c02059bd24, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9b1e2d68d7d8c991a4c7c5c02059bd24->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9b1e2d68d7d8c991a4c7c5c02059bd24, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9b1e2d68d7d8c991a4c7c5c02059bd24,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_9b1e2d68d7d8c991a4c7c5c02059bd24 == cache_frame_9b1e2d68d7d8c991a4c7c5c02059bd24 )
    {
        Py_DECREF( frame_9b1e2d68d7d8c991a4c7c5c02059bd24 );
    }
    cache_frame_9b1e2d68d7d8c991a4c7c5c02059bd24 = NULL;

    assertFrameObject( frame_9b1e2d68d7d8c991a4c7c5c02059bd24 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_3_hess );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_3_hess );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_4_fun( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_f075587286ed9d2afc438f6e7b50c22c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f075587286ed9d2afc438f6e7b50c22c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f075587286ed9d2afc438f6e7b50c22c, codeobj_f075587286ed9d2afc438f6e7b50c22c, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f075587286ed9d2afc438f6e7b50c22c = cache_frame_f075587286ed9d2afc438f6e7b50c22c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f075587286ed9d2afc438f6e7b50c22c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f075587286ed9d2afc438f6e7b50c22c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_fun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 211;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 211;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_f075587286ed9d2afc438f6e7b50c22c->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fun, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 211;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_subscribed_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "finite_ub" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 211;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_1 = PyCell_GET( self->m_closure[2] );
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 211;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ub" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 211;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = PyCell_GET( self->m_closure[3] );
        tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 211;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f075587286ed9d2afc438f6e7b50c22c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f075587286ed9d2afc438f6e7b50c22c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f075587286ed9d2afc438f6e7b50c22c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f075587286ed9d2afc438f6e7b50c22c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f075587286ed9d2afc438f6e7b50c22c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f075587286ed9d2afc438f6e7b50c22c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f075587286ed9d2afc438f6e7b50c22c,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[3]
    );


    // Release cached frame.
    if ( frame_f075587286ed9d2afc438f6e7b50c22c == cache_frame_f075587286ed9d2afc438f6e7b50c22c )
    {
        Py_DECREF( frame_f075587286ed9d2afc438f6e7b50c22c );
    }
    cache_frame_f075587286ed9d2afc438f6e7b50c22c = NULL;

    assertFrameObject( frame_f075587286ed9d2afc438f6e7b50c22c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_4_fun );
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_4_fun );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_5_jac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_dbdefb3eb171016b879144fdda7979f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dbdefb3eb171016b879144fdda7979f0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dbdefb3eb171016b879144fdda7979f0, codeobj_dbdefb3eb171016b879144fdda7979f0, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dbdefb3eb171016b879144fdda7979f0 = cache_frame_dbdefb3eb171016b879144fdda7979f0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dbdefb3eb171016b879144fdda7979f0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dbdefb3eb171016b879144fdda7979f0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscript_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 214;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 214;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_dbdefb3eb171016b879144fdda7979f0->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_jac, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 214;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_subscribed_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "finite_ub" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 214;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_1 = PyCell_GET( self->m_closure[2] );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 214;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbdefb3eb171016b879144fdda7979f0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbdefb3eb171016b879144fdda7979f0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbdefb3eb171016b879144fdda7979f0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dbdefb3eb171016b879144fdda7979f0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dbdefb3eb171016b879144fdda7979f0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dbdefb3eb171016b879144fdda7979f0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dbdefb3eb171016b879144fdda7979f0,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_dbdefb3eb171016b879144fdda7979f0 == cache_frame_dbdefb3eb171016b879144fdda7979f0 )
    {
        Py_DECREF( frame_dbdefb3eb171016b879144fdda7979f0 );
    }
    cache_frame_dbdefb3eb171016b879144fdda7979f0 = NULL;

    assertFrameObject( frame_dbdefb3eb171016b879144fdda7979f0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_5_jac );
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_5_jac );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_6_hess( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_v_eq = python_pars[ 1 ];
    PyObject *par_v_ineq = python_pars[ 2 ];
    PyObject *var_v = NULL;
    struct Nuitka_FrameObject *frame_59e19ef32bf2d6d8f6d9b478dc3567ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_59e19ef32bf2d6d8f6d9b478dc3567ee = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_59e19ef32bf2d6d8f6d9b478dc3567ee, codeobj_59e19ef32bf2d6d8f6d9b478dc3567ee, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_59e19ef32bf2d6d8f6d9b478dc3567ee = cache_frame_59e19ef32bf2d6d8f6d9b478dc3567ee;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_59e19ef32bf2d6d8f6d9b478dc3567ee );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_59e19ef32bf2d6d8f6d9b478dc3567ee ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 217;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 217;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = PyCell_GET( self->m_closure[0] );
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_m );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 217;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        frame_59e19ef32bf2d6d8f6d9b478dc3567ee->m_frame.f_lineno = 217;
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


            exception_lineno = 217;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_v_ineq );
        tmp_ass_subvalue_1 = par_v_ineq;
        CHECK_OBJECT( var_v );
        tmp_ass_subscribed_1 = var_v;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "finite_ub" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 218;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = PyCell_GET( self->m_closure[1] );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 219;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_3 = var_v;
        frame_59e19ef32bf2d6d8f6d9b478dc3567ee->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_hess, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59e19ef32bf2d6d8f6d9b478dc3567ee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_59e19ef32bf2d6d8f6d9b478dc3567ee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59e19ef32bf2d6d8f6d9b478dc3567ee );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_59e19ef32bf2d6d8f6d9b478dc3567ee, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_59e19ef32bf2d6d8f6d9b478dc3567ee->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_59e19ef32bf2d6d8f6d9b478dc3567ee, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_59e19ef32bf2d6d8f6d9b478dc3567ee,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        var_v,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_59e19ef32bf2d6d8f6d9b478dc3567ee == cache_frame_59e19ef32bf2d6d8f6d9b478dc3567ee )
    {
        Py_DECREF( frame_59e19ef32bf2d6d8f6d9b478dc3567ee );
    }
    cache_frame_59e19ef32bf2d6d8f6d9b478dc3567ee = NULL;

    assertFrameObject( frame_59e19ef32bf2d6d8f6d9b478dc3567ee );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_6_hess );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_6_hess );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    struct Nuitka_CellObject *par_cfun = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_lb = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *par_keep_feasible = python_pars[ 3 ];
    struct Nuitka_CellObject *var_empty_fun = PyCell_EMPTY();
    PyObject *var_n = NULL;
    struct Nuitka_CellObject *var_empty_jac = PyCell_EMPTY();
    struct Nuitka_CellObject *var_finite_lb = PyCell_EMPTY();
    PyObject *var_n_ineq = NULL;
    PyObject *var_fun = NULL;
    PyObject *var_jac = NULL;
    PyObject *var_hess = NULL;
    struct Nuitka_FrameObject *frame_a7b0ab208fae6845b1c9673e184f690c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a7b0ab208fae6845b1c9673e184f690c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a7b0ab208fae6845b1c9673e184f690c, codeobj_a7b0ab208fae6845b1c9673e184f690c, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a7b0ab208fae6845b1c9673e184f690c = cache_frame_a7b0ab208fae6845b1c9673e184f690c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a7b0ab208fae6845b1c9673e184f690c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a7b0ab208fae6845b1c9673e184f690c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 225;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_a7b0ab208fae6845b1c9673e184f690c->m_frame.f_lineno = 225;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_empty, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_empty_fun ) == NULL );
        PyCell_SET( var_empty_fun, tmp_assign_source_1 );

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( PyCell_GET( par_cfun ) );
        tmp_source_name_1 = PyCell_GET( par_cfun );
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( PyCell_GET( par_cfun ) );
        tmp_source_name_2 = PyCell_GET( par_cfun );
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sparse_jacobian );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 227;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_tuple_element_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_sps );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 228;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            tmp_tuple_element_1 = const_int_0;
            tmp_args_element_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_1 = var_n;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
            frame_a7b0ab208fae6845b1c9673e184f690c->m_frame.f_lineno = 228;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_csr_matrix, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 228;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }
            assert( PyCell_GET( var_empty_jac ) == NULL );
            PyCell_SET( var_empty_jac, tmp_assign_source_3 );

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_tuple_element_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 230;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_3;
            tmp_tuple_element_2 = const_int_0;
            tmp_args_element_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_2 = var_n;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_2 );
            frame_a7b0ab208fae6845b1c9673e184f690c->m_frame.f_lineno = 230;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_empty, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }
            assert( PyCell_GET( var_empty_jac ) == NULL );
            PyCell_SET( var_empty_jac, tmp_assign_source_4 );

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( PyCell_GET( par_lb ) );
        tmp_compexpr_left_1 = PyCell_GET( par_lb );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 232;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_inf );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_finite_lb ) == NULL );
        PyCell_SET( var_finite_lb, tmp_assign_source_5 );

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 234;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_5;
        CHECK_OBJECT( PyCell_GET( var_finite_lb ) );
        tmp_args_element_name_3 = PyCell_GET( var_finite_lb );
        frame_a7b0ab208fae6845b1c9673e184f690c->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_sum, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert( var_n_ineq == NULL );
        var_n_ineq = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_2;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 236;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_6;
        CHECK_OBJECT( PyCell_GET( var_finite_lb ) );
        tmp_args_element_name_4 = PyCell_GET( var_finite_lb );
        frame_a7b0ab208fae6845b1c9673e184f690c->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_all, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 236;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_1_fun(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] = par_cfun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[1] = var_empty_fun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[1] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[2] = par_lb;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[2] );


            assert( var_fun == NULL );
            var_fun = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_2_jac(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] = par_cfun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[1] = var_empty_jac;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[1] );


            assert( var_jac == NULL );
            var_jac = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_3_hess(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[0] = par_cfun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[0] );


            assert( var_hess == NULL );
            var_hess = tmp_assign_source_9;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 246;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_7;
            CHECK_OBJECT( PyCell_GET( var_finite_lb ) );
            tmp_args_element_name_5 = PyCell_GET( var_finite_lb );
            frame_a7b0ab208fae6845b1c9673e184f690c->m_frame.f_lineno = 246;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_nonzero, call_args );
            }

            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 246;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 246;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = PyCell_GET( var_finite_lb );
                PyCell_SET( var_finite_lb, tmp_assign_source_10 );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_keep_feasible );
            tmp_subscribed_name_2 = par_keep_feasible;
            CHECK_OBJECT( PyCell_GET( var_finite_lb ) );
            tmp_subscript_name_2 = PyCell_GET( var_finite_lb );
            tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 247;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_keep_feasible;
                assert( old != NULL );
                par_keep_feasible = tmp_assign_source_11;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( PyCell_GET( par_lb ) );
            tmp_subscribed_name_3 = PyCell_GET( par_lb );
            CHECK_OBJECT( PyCell_GET( var_finite_lb ) );
            tmp_subscript_name_3 = PyCell_GET( var_finite_lb );
            tmp_assign_source_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 248;
                type_description_1 = "occococcNoooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = PyCell_GET( par_lb );
                PyCell_SET( par_lb, tmp_assign_source_12 );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_4_fun(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[0] = par_cfun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[1] = var_empty_fun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[1] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[2] = var_finite_lb;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[2] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[3] = par_lb;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[3] );


            assert( var_fun == NULL );
            var_fun = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_5_jac(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[0] = par_cfun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[1] = var_empty_jac;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[1] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[2] = var_finite_lb;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[2] );


            assert( var_jac == NULL );
            var_jac = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_6_hess(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_15)->m_closure[0] = par_cfun;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_15)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_15)->m_closure[1] = var_finite_lb;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_15)->m_closure[1] );


            assert( var_hess == NULL );
            var_hess = tmp_assign_source_15;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( par_cls );
        tmp_called_name_1 = par_cls;
        tmp_args_element_name_6 = const_int_0;
        CHECK_OBJECT( var_n_ineq );
        tmp_args_element_name_7 = var_n_ineq;
        CHECK_OBJECT( var_fun );
        tmp_args_element_name_8 = var_fun;
        CHECK_OBJECT( var_jac );
        tmp_args_element_name_9 = var_jac;
        CHECK_OBJECT( var_hess );
        tmp_args_element_name_10 = var_hess;
        CHECK_OBJECT( par_keep_feasible );
        tmp_args_element_name_11 = par_keep_feasible;
        frame_a7b0ab208fae6845b1c9673e184f690c->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7b0ab208fae6845b1c9673e184f690c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7b0ab208fae6845b1c9673e184f690c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7b0ab208fae6845b1c9673e184f690c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a7b0ab208fae6845b1c9673e184f690c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a7b0ab208fae6845b1c9673e184f690c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a7b0ab208fae6845b1c9673e184f690c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a7b0ab208fae6845b1c9673e184f690c,
        type_description_1,
        par_cls,
        par_cfun,
        par_lb,
        par_keep_feasible,
        var_empty_fun,
        var_n,
        var_empty_jac,
        var_finite_lb,
        NULL,
        var_n_ineq,
        var_fun,
        var_jac,
        var_hess
    );


    // Release cached frame.
    if ( frame_a7b0ab208fae6845b1c9673e184f690c == cache_frame_a7b0ab208fae6845b1c9673e184f690c )
    {
        Py_DECREF( frame_a7b0ab208fae6845b1c9673e184f690c );
    }
    cache_frame_a7b0ab208fae6845b1c9673e184f690c = NULL;

    assertFrameObject( frame_a7b0ab208fae6845b1c9673e184f690c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_cfun );
    Py_DECREF( par_cfun );
    par_cfun = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_keep_feasible );
    Py_DECREF( par_keep_feasible );
    par_keep_feasible = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_fun );
    Py_DECREF( var_empty_fun );
    var_empty_fun = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_jac );
    Py_DECREF( var_empty_jac );
    var_empty_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_finite_lb );
    Py_DECREF( var_finite_lb );
    var_finite_lb = NULL;

    CHECK_OBJECT( (PyObject *)var_n_ineq );
    Py_DECREF( var_n_ineq );
    var_n_ineq = NULL;

    CHECK_OBJECT( (PyObject *)var_fun );
    Py_DECREF( var_fun );
    var_fun = NULL;

    CHECK_OBJECT( (PyObject *)var_jac );
    Py_DECREF( var_jac );
    var_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_hess );
    Py_DECREF( var_hess );
    var_hess = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_cfun );
    Py_DECREF( par_cfun );
    par_cfun = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    Py_XDECREF( par_keep_feasible );
    par_keep_feasible = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_fun );
    Py_DECREF( var_empty_fun );
    var_empty_fun = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_empty_jac );
    Py_DECREF( var_empty_jac );
    var_empty_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_finite_lb );
    Py_DECREF( var_finite_lb );
    var_finite_lb = NULL;

    Py_XDECREF( var_n_ineq );
    var_n_ineq = NULL;

    Py_XDECREF( var_fun );
    var_fun = NULL;

    Py_XDECREF( var_jac );
    var_jac = NULL;

    Py_XDECREF( var_hess );
    var_hess = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_1_fun( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_306d7200a22fea5c1f0f63316a734fde;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_306d7200a22fea5c1f0f63316a734fde = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_306d7200a22fea5c1f0f63316a734fde, codeobj_306d7200a22fea5c1f0f63316a734fde, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_306d7200a22fea5c1f0f63316a734fde = cache_frame_306d7200a22fea5c1f0f63316a734fde;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_306d7200a22fea5c1f0f63316a734fde );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_306d7200a22fea5c1f0f63316a734fde ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_fun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 238;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "lb" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 238;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = PyCell_GET( self->m_closure[2] );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 238;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_306d7200a22fea5c1f0f63316a734fde->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fun, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 238;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 238;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_306d7200a22fea5c1f0f63316a734fde );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_306d7200a22fea5c1f0f63316a734fde );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_306d7200a22fea5c1f0f63316a734fde );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_306d7200a22fea5c1f0f63316a734fde, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_306d7200a22fea5c1f0f63316a734fde->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_306d7200a22fea5c1f0f63316a734fde, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_306d7200a22fea5c1f0f63316a734fde,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_306d7200a22fea5c1f0f63316a734fde == cache_frame_306d7200a22fea5c1f0f63316a734fde )
    {
        Py_DECREF( frame_306d7200a22fea5c1f0f63316a734fde );
    }
    cache_frame_306d7200a22fea5c1f0f63316a734fde = NULL;

    assertFrameObject( frame_306d7200a22fea5c1f0f63316a734fde );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_1_fun );
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_1_fun );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_2_jac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_bcdefaa4aa7f2752563276d68c746941;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bcdefaa4aa7f2752563276d68c746941 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bcdefaa4aa7f2752563276d68c746941, codeobj_bcdefaa4aa7f2752563276d68c746941, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bcdefaa4aa7f2752563276d68c746941 = cache_frame_bcdefaa4aa7f2752563276d68c746941;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bcdefaa4aa7f2752563276d68c746941 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bcdefaa4aa7f2752563276d68c746941 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 241;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 241;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_bcdefaa4aa7f2752563276d68c746941->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_jac, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 241;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 241;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcdefaa4aa7f2752563276d68c746941 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcdefaa4aa7f2752563276d68c746941 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcdefaa4aa7f2752563276d68c746941 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bcdefaa4aa7f2752563276d68c746941, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bcdefaa4aa7f2752563276d68c746941->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bcdefaa4aa7f2752563276d68c746941, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bcdefaa4aa7f2752563276d68c746941,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_bcdefaa4aa7f2752563276d68c746941 == cache_frame_bcdefaa4aa7f2752563276d68c746941 )
    {
        Py_DECREF( frame_bcdefaa4aa7f2752563276d68c746941 );
    }
    cache_frame_bcdefaa4aa7f2752563276d68c746941 = NULL;

    assertFrameObject( frame_bcdefaa4aa7f2752563276d68c746941 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_2_jac );
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_2_jac );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_3_hess( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_v_eq = python_pars[ 1 ];
    PyObject *par_v_ineq = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_05908fed27ce9db45fc9c857e855e529;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_05908fed27ce9db45fc9c857e855e529 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_05908fed27ce9db45fc9c857e855e529, codeobj_05908fed27ce9db45fc9c857e855e529, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_05908fed27ce9db45fc9c857e855e529 = cache_frame_05908fed27ce9db45fc9c857e855e529;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_05908fed27ce9db45fc9c857e855e529 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_05908fed27ce9db45fc9c857e855e529 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_operand_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 244;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hess );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        CHECK_OBJECT( par_v_ineq );
        tmp_operand_name_1 = par_v_ineq;
        tmp_args_element_name_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 244;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_05908fed27ce9db45fc9c857e855e529->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05908fed27ce9db45fc9c857e855e529 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_05908fed27ce9db45fc9c857e855e529 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05908fed27ce9db45fc9c857e855e529 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_05908fed27ce9db45fc9c857e855e529, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_05908fed27ce9db45fc9c857e855e529->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_05908fed27ce9db45fc9c857e855e529, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_05908fed27ce9db45fc9c857e855e529,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_05908fed27ce9db45fc9c857e855e529 == cache_frame_05908fed27ce9db45fc9c857e855e529 )
    {
        Py_DECREF( frame_05908fed27ce9db45fc9c857e855e529 );
    }
    cache_frame_05908fed27ce9db45fc9c857e855e529 = NULL;

    assertFrameObject( frame_05908fed27ce9db45fc9c857e855e529 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_3_hess );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_3_hess );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_4_fun( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_783ca5023668ee3fb044ef523aad81da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_783ca5023668ee3fb044ef523aad81da = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_783ca5023668ee3fb044ef523aad81da, codeobj_783ca5023668ee3fb044ef523aad81da, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_783ca5023668ee3fb044ef523aad81da = cache_frame_783ca5023668ee3fb044ef523aad81da;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_783ca5023668ee3fb044ef523aad81da );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_783ca5023668ee3fb044ef523aad81da ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscript_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_fun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 251;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "lb" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 251;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = PyCell_GET( self->m_closure[3] );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 251;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_783ca5023668ee3fb044ef523aad81da->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fun, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 251;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_subscribed_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "finite_lb" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 251;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_1 = PyCell_GET( self->m_closure[2] );
        tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 251;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 251;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_783ca5023668ee3fb044ef523aad81da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_783ca5023668ee3fb044ef523aad81da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_783ca5023668ee3fb044ef523aad81da );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_783ca5023668ee3fb044ef523aad81da, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_783ca5023668ee3fb044ef523aad81da->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_783ca5023668ee3fb044ef523aad81da, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_783ca5023668ee3fb044ef523aad81da,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[3],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_783ca5023668ee3fb044ef523aad81da == cache_frame_783ca5023668ee3fb044ef523aad81da )
    {
        Py_DECREF( frame_783ca5023668ee3fb044ef523aad81da );
    }
    cache_frame_783ca5023668ee3fb044ef523aad81da = NULL;

    assertFrameObject( frame_783ca5023668ee3fb044ef523aad81da );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_4_fun );
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_4_fun );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_5_jac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d7fd781376a234839bbe521cf47186e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d7fd781376a234839bbe521cf47186e8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d7fd781376a234839bbe521cf47186e8, codeobj_d7fd781376a234839bbe521cf47186e8, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d7fd781376a234839bbe521cf47186e8 = cache_frame_d7fd781376a234839bbe521cf47186e8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d7fd781376a234839bbe521cf47186e8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d7fd781376a234839bbe521cf47186e8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscript_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "empty_jac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 254;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 254;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_d7fd781376a234839bbe521cf47186e8->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_jac, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 254;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_subscribed_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "finite_lb" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 254;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_1 = PyCell_GET( self->m_closure[2] );
        tmp_operand_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 254;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 254;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7fd781376a234839bbe521cf47186e8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7fd781376a234839bbe521cf47186e8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7fd781376a234839bbe521cf47186e8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d7fd781376a234839bbe521cf47186e8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d7fd781376a234839bbe521cf47186e8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d7fd781376a234839bbe521cf47186e8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d7fd781376a234839bbe521cf47186e8,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_d7fd781376a234839bbe521cf47186e8 == cache_frame_d7fd781376a234839bbe521cf47186e8 )
    {
        Py_DECREF( frame_d7fd781376a234839bbe521cf47186e8 );
    }
    cache_frame_d7fd781376a234839bbe521cf47186e8 = NULL;

    assertFrameObject( frame_d7fd781376a234839bbe521cf47186e8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_5_jac );
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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_5_jac );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_6_hess( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_v_eq = python_pars[ 1 ];
    PyObject *par_v_ineq = python_pars[ 2 ];
    PyObject *var_v = NULL;
    struct Nuitka_FrameObject *frame_f9e57066b19cbb806ba18bf10205f39c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f9e57066b19cbb806ba18bf10205f39c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f9e57066b19cbb806ba18bf10205f39c, codeobj_f9e57066b19cbb806ba18bf10205f39c, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f9e57066b19cbb806ba18bf10205f39c = cache_frame_f9e57066b19cbb806ba18bf10205f39c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f9e57066b19cbb806ba18bf10205f39c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f9e57066b19cbb806ba18bf10205f39c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 257;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 257;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 257;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = PyCell_GET( self->m_closure[0] );
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_m );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 257;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        frame_f9e57066b19cbb806ba18bf10205f39c->m_frame.f_lineno = 257;
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


            exception_lineno = 257;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_v_ineq );
        tmp_operand_name_1 = par_v_ineq;
        tmp_ass_subvalue_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_ass_subscribed_1 = var_v;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "finite_lb" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 258;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = PyCell_GET( self->m_closure[1] );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 259;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_3 = var_v;
        frame_f9e57066b19cbb806ba18bf10205f39c->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_hess, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9e57066b19cbb806ba18bf10205f39c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9e57066b19cbb806ba18bf10205f39c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9e57066b19cbb806ba18bf10205f39c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f9e57066b19cbb806ba18bf10205f39c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f9e57066b19cbb806ba18bf10205f39c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f9e57066b19cbb806ba18bf10205f39c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f9e57066b19cbb806ba18bf10205f39c,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        var_v,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_f9e57066b19cbb806ba18bf10205f39c == cache_frame_f9e57066b19cbb806ba18bf10205f39c )
    {
        Py_DECREF( frame_f9e57066b19cbb806ba18bf10205f39c );
    }
    cache_frame_f9e57066b19cbb806ba18bf10205f39c = NULL;

    assertFrameObject( frame_f9e57066b19cbb806ba18bf10205f39c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_6_hess );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_6_hess );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    struct Nuitka_CellObject *par_cfun = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_lb = PyCell_NEW1( python_pars[ 2 ] );
    struct Nuitka_CellObject *par_ub = PyCell_NEW1( python_pars[ 3 ] );
    PyObject *par_keep_feasible = python_pars[ 4 ];
    PyObject *var_lb_inf = NULL;
    PyObject *var_ub_inf = NULL;
    struct Nuitka_CellObject *var_equal = PyCell_EMPTY();
    struct Nuitka_CellObject *var_less = PyCell_EMPTY();
    struct Nuitka_CellObject *var_greater = PyCell_EMPTY();
    struct Nuitka_CellObject *var_interval = PyCell_EMPTY();
    struct Nuitka_CellObject *var_n_less = PyCell_EMPTY();
    struct Nuitka_CellObject *var_n_greater = PyCell_EMPTY();
    struct Nuitka_CellObject *var_n_interval = PyCell_EMPTY();
    PyObject *var_n_ineq = NULL;
    PyObject *var_n_eq = NULL;
    PyObject *var_fun = NULL;
    PyObject *var_jac = NULL;
    PyObject *var_hess = NULL;
    struct Nuitka_FrameObject *frame_b70d2ea400f7f3a82dcd1bd6bb7746fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b70d2ea400f7f3a82dcd1bd6bb7746fb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b70d2ea400f7f3a82dcd1bd6bb7746fb, codeobj_b70d2ea400f7f3a82dcd1bd6bb7746fb, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b70d2ea400f7f3a82dcd1bd6bb7746fb = cache_frame_b70d2ea400f7f3a82dcd1bd6bb7746fb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b70d2ea400f7f3a82dcd1bd6bb7746fb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b70d2ea400f7f3a82dcd1bd6bb7746fb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_lb ) );
        tmp_compexpr_left_1 = PyCell_GET( par_lb );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 265;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lb_inf == NULL );
        var_lb_inf = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( PyCell_GET( par_ub ) );
        tmp_compexpr_left_2 = PyCell_GET( par_ub );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 266;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inf );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ub_inf == NULL );
        var_ub_inf = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( PyCell_GET( par_lb ) );
        tmp_compexpr_left_3 = PyCell_GET( par_lb );
        CHECK_OBJECT( PyCell_GET( par_ub ) );
        tmp_compexpr_right_3 = PyCell_GET( par_ub );
        tmp_assign_source_3 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 267;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_equal ) == NULL );
        PyCell_SET( var_equal, tmp_assign_source_3 );

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_lb_inf );
        tmp_left_name_1 = var_lb_inf;
        CHECK_OBJECT( var_ub_inf );
        tmp_operand_name_2 = var_ub_inf;
        tmp_right_name_1 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_less ) == NULL );
        PyCell_SET( var_less, tmp_assign_source_4 );

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT( var_ub_inf );
        tmp_left_name_2 = var_ub_inf;
        CHECK_OBJECT( var_lb_inf );
        tmp_operand_name_3 = var_lb_inf;
        tmp_right_name_2 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION( PyNumber_And, tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_greater ) == NULL );
        PyCell_SET( var_greater, tmp_assign_source_5 );

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_operand_name_6;
        CHECK_OBJECT( PyCell_GET( var_equal ) );
        tmp_operand_name_4 = PyCell_GET( var_equal );
        tmp_left_name_4 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_4 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lb_inf );
        tmp_operand_name_5 = var_lb_inf;
        tmp_right_name_3 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_5 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 270;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION( PyNumber_And, tmp_left_name_4, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ub_inf );
        tmp_operand_name_6 = var_ub_inf;
        tmp_right_name_4 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_6 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 270;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION( PyNumber_And, tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_interval ) == NULL );
        PyCell_SET( var_interval, tmp_assign_source_6 );

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 272;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( PyCell_GET( var_equal ) );
        tmp_args_element_name_1 = PyCell_GET( var_equal );
        frame_b70d2ea400f7f3a82dcd1bd6bb7746fb->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_nonzero, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = PyCell_GET( var_equal );
            PyCell_SET( var_equal, tmp_assign_source_7 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 273;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( PyCell_GET( var_less ) );
        tmp_args_element_name_2 = PyCell_GET( var_less );
        frame_b70d2ea400f7f3a82dcd1bd6bb7746fb->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_subscribed_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_nonzero, call_args );
        }

        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_0;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = PyCell_GET( var_less );
            PyCell_SET( var_less, tmp_assign_source_8 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscript_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 274;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_5;
        CHECK_OBJECT( PyCell_GET( var_greater ) );
        tmp_args_element_name_3 = PyCell_GET( var_greater );
        frame_b70d2ea400f7f3a82dcd1bd6bb7746fb->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_subscribed_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_nonzero, call_args );
        }

        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = PyCell_GET( var_greater );
            PyCell_SET( var_greater, tmp_assign_source_9 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_subscript_name_4;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 275;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_6;
        CHECK_OBJECT( PyCell_GET( var_interval ) );
        tmp_args_element_name_4 = PyCell_GET( var_interval );
        frame_b70d2ea400f7f3a82dcd1bd6bb7746fb->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_subscribed_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_nonzero, call_args );
        }

        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_int_0;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = PyCell_GET( var_interval );
            PyCell_SET( var_interval, tmp_assign_source_10 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( PyCell_GET( var_less ) );
        tmp_source_name_3 = PyCell_GET( var_less );
        tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = const_int_0;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_n_less ) == NULL );
        PyCell_SET( var_n_less, tmp_assign_source_11 );

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT( PyCell_GET( var_greater ) );
        tmp_source_name_4 = PyCell_GET( var_greater );
        tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_subscribed_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_6 = const_int_0;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
        Py_DECREF( tmp_subscribed_name_6 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_n_greater ) == NULL );
        PyCell_SET( var_n_greater, tmp_assign_source_12 );

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_source_name_5;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT( PyCell_GET( var_interval ) );
        tmp_source_name_5 = PyCell_GET( var_interval );
        tmp_subscribed_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
        if ( tmp_subscribed_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_7 = const_int_0;
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
        Py_DECREF( tmp_subscribed_name_7 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_n_interval ) == NULL );
        PyCell_SET( var_n_interval, tmp_assign_source_13 );

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( PyCell_GET( var_n_less ) );
        tmp_left_name_6 = PyCell_GET( var_n_less );
        CHECK_OBJECT( PyCell_GET( var_n_greater ) );
        tmp_right_name_5 = PyCell_GET( var_n_greater );
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = const_int_pos_2;
        CHECK_OBJECT( PyCell_GET( var_n_interval ) );
        tmp_right_name_7 = PyCell_GET( var_n_interval );
        tmp_right_name_6 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 279;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n_ineq == NULL );
        var_n_ineq = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT( PyCell_GET( var_equal ) );
        tmp_source_name_6 = PyCell_GET( var_equal );
        tmp_subscribed_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
        if ( tmp_subscribed_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_8 = const_int_0;
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 0 );
        Py_DECREF( tmp_subscribed_name_8 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n_eq == NULL );
        var_n_eq = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 282;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_7;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_hstack );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_keep_feasible );
        tmp_subscribed_name_9 = par_keep_feasible;
        CHECK_OBJECT( PyCell_GET( var_less ) );
        tmp_subscript_name_9 = PyCell_GET( var_less );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 282;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = PyTuple_New( 4 );
        PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_keep_feasible );
        tmp_subscribed_name_10 = par_keep_feasible;
        CHECK_OBJECT( PyCell_GET( var_greater ) );
        tmp_subscript_name_10 = PyCell_GET( var_greater );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 283;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_keep_feasible );
        tmp_subscribed_name_11 = par_keep_feasible;
        CHECK_OBJECT( PyCell_GET( var_interval ) );
        tmp_subscript_name_11 = PyCell_GET( var_interval );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 284;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_5, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_keep_feasible );
        tmp_subscribed_name_12 = par_keep_feasible;
        CHECK_OBJECT( PyCell_GET( var_interval ) );
        tmp_subscript_name_12 = PyCell_GET( var_interval );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 285;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_5, 3, tmp_tuple_element_1 );
        frame_b70d2ea400f7f3a82dcd1bd6bb7746fb->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keep_feasible;
            assert( old != NULL );
            par_keep_feasible = tmp_assign_source_16;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_1_fun(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[0] = par_cfun;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[1] = var_equal;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[2] = var_greater;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[3] = var_interval;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[3] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[4] = par_lb;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[4] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[5] = var_less;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[5] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[6] = par_ub;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[6] );


        assert( var_fun == NULL );
        var_fun = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_2_jac(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[0] = par_cfun;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[1] = var_equal;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[2] = var_greater;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[3] = var_interval;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[3] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[4] = var_less;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[4] );


        assert( var_jac == NULL );
        var_jac = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_3_hess(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[0] = par_cfun;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[1] = var_equal;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[2] = var_greater;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[3] = var_interval;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[3] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[4] = par_lb;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[4] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[5] = var_less;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[5] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[6] = var_n_greater;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[6] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[7] = var_n_interval;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[7] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[8] = var_n_less;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[8] );


        assert( var_hess == NULL );
        var_hess = tmp_assign_source_19;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( par_cls );
        tmp_called_name_2 = par_cls;
        CHECK_OBJECT( var_n_eq );
        tmp_args_element_name_6 = var_n_eq;
        CHECK_OBJECT( var_n_ineq );
        tmp_args_element_name_7 = var_n_ineq;
        CHECK_OBJECT( var_fun );
        tmp_args_element_name_8 = var_fun;
        CHECK_OBJECT( var_jac );
        tmp_args_element_name_9 = var_jac;
        CHECK_OBJECT( var_hess );
        tmp_args_element_name_10 = var_hess;
        CHECK_OBJECT( par_keep_feasible );
        tmp_args_element_name_11 = par_keep_feasible;
        frame_b70d2ea400f7f3a82dcd1bd6bb7746fb->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b70d2ea400f7f3a82dcd1bd6bb7746fb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b70d2ea400f7f3a82dcd1bd6bb7746fb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b70d2ea400f7f3a82dcd1bd6bb7746fb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b70d2ea400f7f3a82dcd1bd6bb7746fb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b70d2ea400f7f3a82dcd1bd6bb7746fb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b70d2ea400f7f3a82dcd1bd6bb7746fb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b70d2ea400f7f3a82dcd1bd6bb7746fb,
        type_description_1,
        par_cls,
        par_cfun,
        par_lb,
        par_ub,
        par_keep_feasible,
        var_lb_inf,
        var_ub_inf,
        var_equal,
        var_less,
        var_greater,
        var_interval,
        var_n_less,
        var_n_greater,
        var_n_interval,
        var_n_ineq,
        var_n_eq,
        var_fun,
        var_jac,
        var_hess
    );


    // Release cached frame.
    if ( frame_b70d2ea400f7f3a82dcd1bd6bb7746fb == cache_frame_b70d2ea400f7f3a82dcd1bd6bb7746fb )
    {
        Py_DECREF( frame_b70d2ea400f7f3a82dcd1bd6bb7746fb );
    }
    cache_frame_b70d2ea400f7f3a82dcd1bd6bb7746fb = NULL;

    assertFrameObject( frame_b70d2ea400f7f3a82dcd1bd6bb7746fb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_cfun );
    Py_DECREF( par_cfun );
    par_cfun = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_keep_feasible );
    Py_DECREF( par_keep_feasible );
    par_keep_feasible = NULL;

    CHECK_OBJECT( (PyObject *)var_lb_inf );
    Py_DECREF( var_lb_inf );
    var_lb_inf = NULL;

    CHECK_OBJECT( (PyObject *)var_ub_inf );
    Py_DECREF( var_ub_inf );
    var_ub_inf = NULL;

    CHECK_OBJECT( (PyObject *)var_equal );
    Py_DECREF( var_equal );
    var_equal = NULL;

    CHECK_OBJECT( (PyObject *)var_less );
    Py_DECREF( var_less );
    var_less = NULL;

    CHECK_OBJECT( (PyObject *)var_greater );
    Py_DECREF( var_greater );
    var_greater = NULL;

    CHECK_OBJECT( (PyObject *)var_interval );
    Py_DECREF( var_interval );
    var_interval = NULL;

    CHECK_OBJECT( (PyObject *)var_n_less );
    Py_DECREF( var_n_less );
    var_n_less = NULL;

    CHECK_OBJECT( (PyObject *)var_n_greater );
    Py_DECREF( var_n_greater );
    var_n_greater = NULL;

    CHECK_OBJECT( (PyObject *)var_n_interval );
    Py_DECREF( var_n_interval );
    var_n_interval = NULL;

    CHECK_OBJECT( (PyObject *)var_n_ineq );
    Py_DECREF( var_n_ineq );
    var_n_ineq = NULL;

    CHECK_OBJECT( (PyObject *)var_n_eq );
    Py_DECREF( var_n_eq );
    var_n_eq = NULL;

    CHECK_OBJECT( (PyObject *)var_fun );
    Py_DECREF( var_fun );
    var_fun = NULL;

    CHECK_OBJECT( (PyObject *)var_jac );
    Py_DECREF( var_jac );
    var_jac = NULL;

    CHECK_OBJECT( (PyObject *)var_hess );
    Py_DECREF( var_hess );
    var_hess = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_cfun );
    Py_DECREF( par_cfun );
    par_cfun = NULL;

    CHECK_OBJECT( (PyObject *)par_lb );
    Py_DECREF( par_lb );
    par_lb = NULL;

    CHECK_OBJECT( (PyObject *)par_ub );
    Py_DECREF( par_ub );
    par_ub = NULL;

    CHECK_OBJECT( (PyObject *)par_keep_feasible );
    Py_DECREF( par_keep_feasible );
    par_keep_feasible = NULL;

    Py_XDECREF( var_lb_inf );
    var_lb_inf = NULL;

    Py_XDECREF( var_ub_inf );
    var_ub_inf = NULL;

    CHECK_OBJECT( (PyObject *)var_equal );
    Py_DECREF( var_equal );
    var_equal = NULL;

    CHECK_OBJECT( (PyObject *)var_less );
    Py_DECREF( var_less );
    var_less = NULL;

    CHECK_OBJECT( (PyObject *)var_greater );
    Py_DECREF( var_greater );
    var_greater = NULL;

    CHECK_OBJECT( (PyObject *)var_interval );
    Py_DECREF( var_interval );
    var_interval = NULL;

    CHECK_OBJECT( (PyObject *)var_n_less );
    Py_DECREF( var_n_less );
    var_n_less = NULL;

    CHECK_OBJECT( (PyObject *)var_n_greater );
    Py_DECREF( var_n_greater );
    var_n_greater = NULL;

    CHECK_OBJECT( (PyObject *)var_n_interval );
    Py_DECREF( var_n_interval );
    var_n_interval = NULL;

    Py_XDECREF( var_n_ineq );
    var_n_ineq = NULL;

    Py_XDECREF( var_n_eq );
    var_n_eq = NULL;

    Py_XDECREF( var_fun );
    var_fun = NULL;

    Py_XDECREF( var_jac );
    var_jac = NULL;

    Py_XDECREF( var_hess );
    var_hess = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_1_fun( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_f = NULL;
    PyObject *var_eq = NULL;
    PyObject *var_le = NULL;
    PyObject *var_ge = NULL;
    PyObject *var_il = NULL;
    PyObject *var_ig = NULL;
    struct Nuitka_FrameObject *frame_337c2a3b7cb5d6cf52890e92970dbff6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_337c2a3b7cb5d6cf52890e92970dbff6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_337c2a3b7cb5d6cf52890e92970dbff6, codeobj_337c2a3b7cb5d6cf52890e92970dbff6, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_337c2a3b7cb5d6cf52890e92970dbff6 = cache_frame_337c2a3b7cb5d6cf52890e92970dbff6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_337c2a3b7cb5d6cf52890e92970dbff6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_337c2a3b7cb5d6cf52890e92970dbff6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 288;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_337c2a3b7cb5d6cf52890e92970dbff6->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fun, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        assert( var_f == NULL );
        var_f = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_f );
        tmp_subscribed_name_1 = var_f;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "equal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 289;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[4] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "lb" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 289;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_2 = PyCell_GET( self->m_closure[4] );
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "equal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 289;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_2 = PyCell_GET( self->m_closure[1] );
        tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 289;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        assert( var_eq == NULL );
        var_eq = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_f );
        tmp_subscribed_name_3 = var_f;
        if ( PyCell_GET( self->m_closure[5] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "less" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 290;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_3 = PyCell_GET( self->m_closure[5] );
        tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[6] ) == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ub" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 290;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_4 = PyCell_GET( self->m_closure[6] );
        if ( PyCell_GET( self->m_closure[5] ) == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "less" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 290;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_4 = PyCell_GET( self->m_closure[5] );
        tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 290;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        assert( var_le == NULL );
        var_le = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        if ( PyCell_GET( self->m_closure[4] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "lb" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 291;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_5 = PyCell_GET( self->m_closure[4] );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "greater" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 291;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_5 = PyCell_GET( self->m_closure[2] );
        tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_f );
        tmp_subscribed_name_6 = var_f;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "greater" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 291;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_6 = PyCell_GET( self->m_closure[2] );
        tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 291;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        assert( var_ge == NULL );
        var_ge = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_4;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_right_name_4;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT( var_f );
        tmp_subscribed_name_7 = var_f;
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "interval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 292;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_7 = PyCell_GET( self->m_closure[3] );
        tmp_left_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[6] ) == NULL )
        {
            Py_DECREF( tmp_left_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ub" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 292;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_8 = PyCell_GET( self->m_closure[6] );
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_left_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "interval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 292;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_8 = PyCell_GET( self->m_closure[3] );
        tmp_right_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 292;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        assert( var_il == NULL );
        var_il = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_5;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_right_name_5;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        if ( PyCell_GET( self->m_closure[4] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "lb" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 293;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_9 = PyCell_GET( self->m_closure[4] );
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "interval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 293;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_9 = PyCell_GET( self->m_closure[3] );
        tmp_left_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_f );
        tmp_subscribed_name_10 = var_f;
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_left_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "interval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 293;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_10 = PyCell_GET( self->m_closure[3] );
        tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 293;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        assert( var_ig == NULL );
        var_ig = tmp_assign_source_6;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( var_eq );
        tmp_tuple_element_1 = var_eq;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 294;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_le );
        tmp_tuple_element_2 = var_le;
        tmp_args_element_name_2 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_ge );
        tmp_tuple_element_2 = var_ge;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_il );
        tmp_tuple_element_2 = var_il;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 2, tmp_tuple_element_2 );
        CHECK_OBJECT( var_ig );
        tmp_tuple_element_2 = var_ig;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 3, tmp_tuple_element_2 );
        frame_337c2a3b7cb5d6cf52890e92970dbff6->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_hstack, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 294;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_337c2a3b7cb5d6cf52890e92970dbff6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_337c2a3b7cb5d6cf52890e92970dbff6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_337c2a3b7cb5d6cf52890e92970dbff6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_337c2a3b7cb5d6cf52890e92970dbff6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_337c2a3b7cb5d6cf52890e92970dbff6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_337c2a3b7cb5d6cf52890e92970dbff6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_337c2a3b7cb5d6cf52890e92970dbff6,
        type_description_1,
        par_x,
        var_f,
        var_eq,
        var_le,
        var_ge,
        var_il,
        var_ig,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[4],
        self->m_closure[5],
        self->m_closure[6],
        self->m_closure[2],
        self->m_closure[3]
    );


    // Release cached frame.
    if ( frame_337c2a3b7cb5d6cf52890e92970dbff6 == cache_frame_337c2a3b7cb5d6cf52890e92970dbff6 )
    {
        Py_DECREF( frame_337c2a3b7cb5d6cf52890e92970dbff6 );
    }
    cache_frame_337c2a3b7cb5d6cf52890e92970dbff6 = NULL;

    assertFrameObject( frame_337c2a3b7cb5d6cf52890e92970dbff6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_1_fun );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

    CHECK_OBJECT( (PyObject *)var_eq );
    Py_DECREF( var_eq );
    var_eq = NULL;

    CHECK_OBJECT( (PyObject *)var_le );
    Py_DECREF( var_le );
    var_le = NULL;

    CHECK_OBJECT( (PyObject *)var_ge );
    Py_DECREF( var_ge );
    var_ge = NULL;

    CHECK_OBJECT( (PyObject *)var_il );
    Py_DECREF( var_il );
    var_il = NULL;

    CHECK_OBJECT( (PyObject *)var_ig );
    Py_DECREF( var_ig );
    var_ig = NULL;

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

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_eq );
    var_eq = NULL;

    Py_XDECREF( var_le );
    var_le = NULL;

    Py_XDECREF( var_ge );
    var_ge = NULL;

    Py_XDECREF( var_il );
    var_il = NULL;

    Py_XDECREF( var_ig );
    var_ig = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_1_fun );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_2_jac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_J = NULL;
    PyObject *var_eq = NULL;
    PyObject *var_le = NULL;
    PyObject *var_ge = NULL;
    PyObject *var_il = NULL;
    PyObject *var_ig = NULL;
    PyObject *var_ineq = NULL;
    struct Nuitka_FrameObject *frame_9e7c3a5cfe5a2344c85812e203fd9ceb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9e7c3a5cfe5a2344c85812e203fd9ceb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e7c3a5cfe5a2344c85812e203fd9ceb, codeobj_9e7c3a5cfe5a2344c85812e203fd9ceb, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9e7c3a5cfe5a2344c85812e203fd9ceb = cache_frame_9e7c3a5cfe5a2344c85812e203fd9ceb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e7c3a5cfe5a2344c85812e203fd9ceb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e7c3a5cfe5a2344c85812e203fd9ceb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 297;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_9e7c3a5cfe5a2344c85812e203fd9ceb->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_jac, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert( var_J == NULL );
        var_J = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_J );
        tmp_subscribed_name_1 = var_J;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "equal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 298;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert( var_eq == NULL );
        var_eq = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_J );
        tmp_subscribed_name_2 = var_J;
        if ( PyCell_GET( self->m_closure[4] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "less" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 299;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_2 = PyCell_GET( self->m_closure[4] );
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert( var_le == NULL );
        var_le = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_J );
        tmp_subscribed_name_3 = var_J;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "greater" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 300;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_3 = PyCell_GET( self->m_closure[2] );
        tmp_operand_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert( var_ge == NULL );
        var_ge = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_J );
        tmp_subscribed_name_4 = var_J;
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "interval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 301;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_4 = PyCell_GET( self->m_closure[3] );
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert( var_il == NULL );
        var_il = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_il );
        tmp_operand_name_2 = var_il;
        tmp_assign_source_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert( var_ig == NULL );
        var_ig = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_sps );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 303;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_J );
        tmp_args_element_name_2 = var_J;
        frame_9e7c3a5cfe5a2344c85812e203fd9ceb->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_issparse, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 303;
            type_description_1 = "ooooooooccccc";
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_tuple_element_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_sps );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 304;
                type_description_1 = "ooooooooccccc";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_2;
            CHECK_OBJECT( var_le );
            tmp_tuple_element_1 = var_le;
            tmp_args_element_name_3 = PyTuple_New( 4 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_ge );
            tmp_tuple_element_1 = var_ge;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_il );
            tmp_tuple_element_1 = var_il;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_3, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( var_ig );
            tmp_tuple_element_1 = var_ig;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_3, 3, tmp_tuple_element_1 );
            frame_9e7c3a5cfe5a2344c85812e203fd9ceb->m_frame.f_lineno = 304;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_vstack, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
                type_description_1 = "ooooooooccccc";
                goto frame_exception_exit_1;
            }
            assert( var_ineq == NULL );
            var_ineq = tmp_assign_source_7;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_tuple_element_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 306;
                type_description_1 = "ooooooooccccc";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_3;
            CHECK_OBJECT( var_le );
            tmp_tuple_element_2 = var_le;
            tmp_args_element_name_4 = PyTuple_New( 4 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_ge );
            tmp_tuple_element_2 = var_ge;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( var_il );
            tmp_tuple_element_2 = var_il;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_4, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( var_ig );
            tmp_tuple_element_2 = var_ig;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_4, 3, tmp_tuple_element_2 );
            frame_9e7c3a5cfe5a2344c85812e203fd9ceb->m_frame.f_lineno = 306;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_vstack, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 306;
                type_description_1 = "ooooooooccccc";
                goto frame_exception_exit_1;
            }
            assert( var_ineq == NULL );
            var_ineq = tmp_assign_source_8;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e7c3a5cfe5a2344c85812e203fd9ceb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e7c3a5cfe5a2344c85812e203fd9ceb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e7c3a5cfe5a2344c85812e203fd9ceb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e7c3a5cfe5a2344c85812e203fd9ceb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e7c3a5cfe5a2344c85812e203fd9ceb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e7c3a5cfe5a2344c85812e203fd9ceb,
        type_description_1,
        par_x,
        var_J,
        var_eq,
        var_le,
        var_ge,
        var_il,
        var_ig,
        var_ineq,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[4],
        self->m_closure[2],
        self->m_closure[3]
    );


    // Release cached frame.
    if ( frame_9e7c3a5cfe5a2344c85812e203fd9ceb == cache_frame_9e7c3a5cfe5a2344c85812e203fd9ceb )
    {
        Py_DECREF( frame_9e7c3a5cfe5a2344c85812e203fd9ceb );
    }
    cache_frame_9e7c3a5cfe5a2344c85812e203fd9ceb = NULL;

    assertFrameObject( frame_9e7c3a5cfe5a2344c85812e203fd9ceb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( var_eq );
        tmp_tuple_element_3 = var_eq;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_ineq );
        tmp_tuple_element_3 = var_ineq;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_2_jac );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_J );
    Py_DECREF( var_J );
    var_J = NULL;

    CHECK_OBJECT( (PyObject *)var_eq );
    Py_DECREF( var_eq );
    var_eq = NULL;

    CHECK_OBJECT( (PyObject *)var_le );
    Py_DECREF( var_le );
    var_le = NULL;

    CHECK_OBJECT( (PyObject *)var_ge );
    Py_DECREF( var_ge );
    var_ge = NULL;

    CHECK_OBJECT( (PyObject *)var_il );
    Py_DECREF( var_il );
    var_il = NULL;

    CHECK_OBJECT( (PyObject *)var_ig );
    Py_DECREF( var_ig );
    var_ig = NULL;

    CHECK_OBJECT( (PyObject *)var_ineq );
    Py_DECREF( var_ineq );
    var_ineq = NULL;

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

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_eq );
    var_eq = NULL;

    Py_XDECREF( var_le );
    var_le = NULL;

    Py_XDECREF( var_ge );
    var_ge = NULL;

    Py_XDECREF( var_il );
    var_il = NULL;

    Py_XDECREF( var_ig );
    var_ig = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_2_jac );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_3_hess( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_v_eq = python_pars[ 1 ];
    PyObject *par_v_ineq = python_pars[ 2 ];
    PyObject *var_n_start = NULL;
    PyObject *var_v_l = NULL;
    PyObject *var_v_g = NULL;
    PyObject *var_v_il = NULL;
    PyObject *var_v_ig = NULL;
    PyObject *var_v = NULL;
    struct Nuitka_FrameObject *frame_34f54d8526074249495d95d7b7cd40b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_34f54d8526074249495d95d7b7cd40b2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_34f54d8526074249495d95d7b7cd40b2, codeobj_34f54d8526074249495d95d7b7cd40b2, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_34f54d8526074249495d95d7b7cd40b2 = cache_frame_34f54d8526074249495d95d7b7cd40b2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_34f54d8526074249495d95d7b7cd40b2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_34f54d8526074249495d95d7b7cd40b2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_v_ineq );
        tmp_subscribed_name_1 = par_v_ineq;
        tmp_start_name_1 = const_int_0;
        tmp_left_name_1 = const_int_0;
        if ( PyCell_GET( self->m_closure[8] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "n_less" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 311;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = PyCell_GET( self->m_closure[8] );
        tmp_stop_name_1 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        assert( var_v_l == NULL );
        var_v_l = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = const_int_0;
        if ( PyCell_GET( self->m_closure[8] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "n_less" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 312;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = PyCell_GET( self->m_closure[8] );
        tmp_assign_source_2 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        assert( var_n_start == NULL );
        var_n_start = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( par_v_ineq );
        tmp_subscribed_name_2 = par_v_ineq;
        CHECK_OBJECT( var_n_start );
        tmp_start_name_2 = var_n_start;
        CHECK_OBJECT( var_n_start );
        tmp_left_name_3 = var_n_start;
        if ( PyCell_GET( self->m_closure[6] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "n_greater" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 313;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_3 = PyCell_GET( self->m_closure[6] );
        tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_stop_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_stop_name_2 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        assert( var_v_g == NULL );
        var_v_g = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_n_start );
        tmp_left_name_4 = var_n_start;
        if ( PyCell_GET( self->m_closure[6] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "n_greater" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 314;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_4 = PyCell_GET( self->m_closure[6] );
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_left_name_4;
        var_n_start = tmp_assign_source_4;

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_step_name_3;
        CHECK_OBJECT( par_v_ineq );
        tmp_subscribed_name_3 = par_v_ineq;
        CHECK_OBJECT( var_n_start );
        tmp_start_name_3 = var_n_start;
        CHECK_OBJECT( var_n_start );
        tmp_left_name_5 = var_n_start;
        if ( PyCell_GET( self->m_closure[7] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "n_interval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 315;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_5 = PyCell_GET( self->m_closure[7] );
        tmp_stop_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_stop_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_step_name_3 = Py_None;
        tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        Py_DECREF( tmp_stop_name_3 );
        assert( !(tmp_subscript_name_3 == NULL) );
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        assert( var_v_il == NULL );
        var_v_il = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_n_start );
        tmp_left_name_6 = var_n_start;
        if ( PyCell_GET( self->m_closure[7] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "n_interval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 316;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_6 = PyCell_GET( self->m_closure[7] );
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = tmp_left_name_6;
        var_n_start = tmp_assign_source_6;

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_start_name_4;
        PyObject *tmp_stop_name_4;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_step_name_4;
        CHECK_OBJECT( par_v_ineq );
        tmp_subscribed_name_4 = par_v_ineq;
        CHECK_OBJECT( var_n_start );
        tmp_start_name_4 = var_n_start;
        CHECK_OBJECT( var_n_start );
        tmp_left_name_7 = var_n_start;
        if ( PyCell_GET( self->m_closure[7] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "n_interval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 317;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_7 = PyCell_GET( self->m_closure[7] );
        tmp_stop_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_stop_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_step_name_4 = Py_None;
        tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
        Py_DECREF( tmp_stop_name_4 );
        assert( !(tmp_subscript_name_4 == NULL) );
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        assert( var_v_ig == NULL );
        var_v_ig = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 319;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros_like );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[4] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "lb" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 319;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( self->m_closure[4] );
        frame_34f54d8526074249495d95d7b7cd40b2->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_8;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_v_eq );
        tmp_ass_subvalue_1 = par_v_eq;
        CHECK_OBJECT( var_v );
        tmp_ass_subscribed_1 = var_v;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "equal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 320;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = PyCell_GET( self->m_closure[1] );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( var_v_l );
        tmp_ass_subvalue_2 = var_v_l;
        CHECK_OBJECT( var_v );
        tmp_ass_subscribed_2 = var_v;
        if ( PyCell_GET( self->m_closure[5] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "less" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 321;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_2 = PyCell_GET( self->m_closure[5] );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( var_v_g );
        tmp_operand_name_1 = var_v_g;
        tmp_ass_subvalue_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_ass_subscribed_3 = var_v;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "greater" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 322;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_3 = PyCell_GET( self->m_closure[2] );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT( var_v_il );
        tmp_left_name_8 = var_v_il;
        CHECK_OBJECT( var_v_ig );
        tmp_right_name_8 = var_v_ig;
        tmp_ass_subvalue_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_ass_subscribed_4 = var_v;
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "interval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 323;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_4 = PyCell_GET( self->m_closure[3] );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cfun" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 325;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_3 = var_v;
        frame_34f54d8526074249495d95d7b7cd40b2->m_frame.f_lineno = 325;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_hess, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_34f54d8526074249495d95d7b7cd40b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_34f54d8526074249495d95d7b7cd40b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_34f54d8526074249495d95d7b7cd40b2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_34f54d8526074249495d95d7b7cd40b2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_34f54d8526074249495d95d7b7cd40b2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_34f54d8526074249495d95d7b7cd40b2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_34f54d8526074249495d95d7b7cd40b2,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        var_n_start,
        var_v_l,
        var_v_g,
        var_v_il,
        var_v_ig,
        var_v,
        self->m_closure[8],
        self->m_closure[6],
        self->m_closure[7],
        self->m_closure[4],
        self->m_closure[1],
        self->m_closure[5],
        self->m_closure[2],
        self->m_closure[3],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_34f54d8526074249495d95d7b7cd40b2 == cache_frame_34f54d8526074249495d95d7b7cd40b2 )
    {
        Py_DECREF( frame_34f54d8526074249495d95d7b7cd40b2 );
    }
    cache_frame_34f54d8526074249495d95d7b7cd40b2 = NULL;

    assertFrameObject( frame_34f54d8526074249495d95d7b7cd40b2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_3_hess );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

    CHECK_OBJECT( (PyObject *)var_n_start );
    Py_DECREF( var_n_start );
    var_n_start = NULL;

    CHECK_OBJECT( (PyObject *)var_v_l );
    Py_DECREF( var_v_l );
    var_v_l = NULL;

    CHECK_OBJECT( (PyObject *)var_v_g );
    Py_DECREF( var_v_g );
    var_v_g = NULL;

    CHECK_OBJECT( (PyObject *)var_v_il );
    Py_DECREF( var_v_il );
    var_v_il = NULL;

    CHECK_OBJECT( (PyObject *)var_v_ig );
    Py_DECREF( var_v_ig );
    var_v_ig = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_v_eq );
    Py_DECREF( par_v_eq );
    par_v_eq = NULL;

    CHECK_OBJECT( (PyObject *)par_v_ineq );
    Py_DECREF( par_v_ineq );
    par_v_ineq = NULL;

    Py_XDECREF( var_n_start );
    var_n_start = NULL;

    Py_XDECREF( var_v_l );
    var_v_l = NULL;

    Py_XDECREF( var_v_g );
    var_v_g = NULL;

    Py_XDECREF( var_v_il );
    var_v_il = NULL;

    Py_XDECREF( var_v_ig );
    var_v_ig = NULL;

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
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_3_hess );
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


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_9_initial_constraints_as_canonical( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_prepared_constraints = python_pars[ 1 ];
    PyObject *par_sparse_jacobian = python_pars[ 2 ];
    PyObject *var_c_eq = NULL;
    PyObject *var_c_ineq = NULL;
    PyObject *var_J_eq = NULL;
    PyObject *var_J_ineq = NULL;
    PyObject *var_c = NULL;
    PyObject *var_f = NULL;
    PyObject *var_J = NULL;
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    PyObject *var_finite_ub = NULL;
    PyObject *var_finite_lb = NULL;
    PyObject *var_lb_inf = NULL;
    PyObject *var_ub_inf = NULL;
    PyObject *var_equal = NULL;
    PyObject *var_less = NULL;
    PyObject *var_greater = NULL;
    PyObject *var_interval = NULL;
    PyObject *var_vstack = NULL;
    PyObject *var_empty = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c7b770c8fdbbd549700aede51ed08d8b;
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
    static struct Nuitka_FrameObject *cache_frame_c7b770c8fdbbd549700aede51ed08d8b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_c_eq == NULL );
        var_c_eq = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New( 0 );
        assert( var_c_ineq == NULL );
        var_c_ineq = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyList_New( 0 );
        assert( var_J_eq == NULL );
        var_J_eq = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyList_New( 0 );
        assert( var_J_ineq == NULL );
        var_J_ineq = tmp_assign_source_4;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c7b770c8fdbbd549700aede51ed08d8b, codeobj_c7b770c8fdbbd549700aede51ed08d8b, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c7b770c8fdbbd549700aede51ed08d8b = cache_frame_c7b770c8fdbbd549700aede51ed08d8b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c7b770c8fdbbd549700aede51ed08d8b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c7b770c8fdbbd549700aede51ed08d8b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_prepared_constraints );
        tmp_iter_arg_1 = par_prepared_constraints;
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
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
                exception_lineno = 342;
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
            PyObject *old = var_c;
            var_c = tmp_assign_source_7;
            Py_INCREF( var_c );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_c );
        tmp_source_name_2 = var_c;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fun );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_f );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_c );
        tmp_source_name_4 = var_c;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_fun );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_J );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_J;
            var_J = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( var_c );
        tmp_source_name_5 = var_c;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_bounds );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooo";
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


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 345;
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


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 345;
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

                    type_description_1 = "oooooooooooooooooooooo";
                    exception_lineno = 345;
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

            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 345;
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
            PyObject *old = var_lb;
            var_lb = tmp_assign_source_13;
            Py_INCREF( var_lb );
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
            PyObject *old = var_ub;
            var_ub = tmp_assign_source_14;
            Py_INCREF( var_ub );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_6 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_all );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_lb );
        tmp_compexpr_left_1 = var_lb;
        CHECK_OBJECT( var_ub );
        tmp_compexpr_right_1 = var_ub;
        tmp_args_element_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 346;
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


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_c_eq );
            tmp_source_name_7 = var_c_eq;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_append );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_f );
            tmp_left_name_1 = var_f;
            CHECK_OBJECT( var_lb );
            tmp_right_name_1 = var_lb;
            tmp_args_element_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 347;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 347;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( var_J_eq );
            tmp_called_instance_1 = var_J_eq;
            CHECK_OBJECT( var_J );
            tmp_args_element_name_3 = var_J;
            frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 348;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_3;
            int tmp_truth_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 349;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_8 = tmp_mvar_value_2;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_all );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_lb );
            tmp_compexpr_left_2 = var_lb;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 349;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_9 = tmp_mvar_value_3;
            tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_inf );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 349;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_compexpr_right_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 349;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_4 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 349;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 349;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_4 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_4 );

                exception_lineno = 349;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_4 );
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
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_source_name_10;
                PyObject *tmp_mvar_value_4;
                CHECK_OBJECT( var_ub );
                tmp_compexpr_left_3 = var_ub;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 350;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_10 = tmp_mvar_value_4;
                tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_inf );
                if ( tmp_compexpr_right_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 350;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_15 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_right_3 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 350;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_finite_ub;
                    var_finite_ub = tmp_assign_source_15;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_11;
                PyObject *tmp_call_result_5;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_left_name_2;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_right_name_2;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                CHECK_OBJECT( var_c_ineq );
                tmp_source_name_11 = var_c_ineq;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_append );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 351;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_f );
                tmp_subscribed_name_1 = var_f;
                CHECK_OBJECT( var_finite_ub );
                tmp_subscript_name_1 = var_finite_ub;
                tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                if ( tmp_left_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 351;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_ub );
                tmp_subscribed_name_2 = var_ub;
                CHECK_OBJECT( var_finite_ub );
                tmp_subscript_name_2 = var_finite_ub;
                tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 351;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_args_element_name_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_args_element_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 351;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 351;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_5 );
                if ( tmp_call_result_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 351;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                Py_DECREF( tmp_call_result_5 );
            }
            {
                PyObject *tmp_called_name_5;
                PyObject *tmp_source_name_12;
                PyObject *tmp_call_result_6;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                CHECK_OBJECT( var_J_ineq );
                tmp_source_name_12 = var_J_ineq;
                tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_append );
                if ( tmp_called_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 352;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_J );
                tmp_subscribed_name_3 = var_J;
                CHECK_OBJECT( var_finite_ub );
                tmp_subscript_name_3 = var_finite_ub;
                tmp_args_element_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_5 );

                    exception_lineno = 352;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 352;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_call_result_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 352;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                Py_DECREF( tmp_call_result_6 );
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_called_name_6;
                PyObject *tmp_source_name_13;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_call_result_7;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_source_name_14;
                PyObject *tmp_mvar_value_6;
                int tmp_truth_name_3;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 353;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_13 = tmp_mvar_value_5;
                tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_all );
                if ( tmp_called_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 353;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_ub );
                tmp_compexpr_left_4 = var_ub;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_6 == NULL )
                {
                    Py_DECREF( tmp_called_name_6 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 353;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_14 = tmp_mvar_value_6;
                tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_inf );
                if ( tmp_compexpr_right_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );

                    exception_lineno = 353;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_args_element_name_7 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_right_4 );
                if ( tmp_args_element_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );

                    exception_lineno = 353;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 353;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7 };
                    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
                }

                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_args_element_name_7 );
                if ( tmp_call_result_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 353;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_7 );
                if ( tmp_truth_name_3 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_7 );

                    exception_lineno = 353;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_7 );
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
                    PyObject *tmp_assign_source_16;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_operand_name_2;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_mvar_value_7;
                    CHECK_OBJECT( var_lb );
                    tmp_compexpr_left_5 = var_lb;
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 354;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }

                    tmp_source_name_15 = tmp_mvar_value_7;
                    tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_inf );
                    if ( tmp_operand_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 354;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_compexpr_right_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
                    Py_DECREF( tmp_operand_name_2 );
                    if ( tmp_compexpr_right_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 354;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_assign_source_16 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    Py_DECREF( tmp_compexpr_right_5 );
                    if ( tmp_assign_source_16 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 354;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_finite_lb;
                        var_finite_lb = tmp_assign_source_16;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_called_name_7;
                    PyObject *tmp_source_name_16;
                    PyObject *tmp_call_result_8;
                    PyObject *tmp_args_element_name_8;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_subscript_name_4;
                    PyObject *tmp_right_name_3;
                    PyObject *tmp_subscribed_name_5;
                    PyObject *tmp_subscript_name_5;
                    CHECK_OBJECT( var_c_ineq );
                    tmp_source_name_16 = var_c_ineq;
                    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_append );
                    if ( tmp_called_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 355;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_lb );
                    tmp_subscribed_name_4 = var_lb;
                    CHECK_OBJECT( var_finite_lb );
                    tmp_subscript_name_4 = var_finite_lb;
                    tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                    if ( tmp_left_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_7 );

                        exception_lineno = 355;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_f );
                    tmp_subscribed_name_5 = var_f;
                    CHECK_OBJECT( var_finite_lb );
                    tmp_subscript_name_5 = var_finite_lb;
                    tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                    if ( tmp_right_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_7 );
                        Py_DECREF( tmp_left_name_3 );

                        exception_lineno = 355;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_args_element_name_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
                    Py_DECREF( tmp_left_name_3 );
                    Py_DECREF( tmp_right_name_3 );
                    if ( tmp_args_element_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_7 );

                        exception_lineno = 355;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 355;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_8 };
                        tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                    }

                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_args_element_name_8 );
                    if ( tmp_call_result_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 355;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_8 );
                }
                {
                    PyObject *tmp_called_name_8;
                    PyObject *tmp_source_name_17;
                    PyObject *tmp_call_result_9;
                    PyObject *tmp_args_element_name_9;
                    PyObject *tmp_operand_name_3;
                    PyObject *tmp_subscribed_name_6;
                    PyObject *tmp_subscript_name_6;
                    CHECK_OBJECT( var_J_ineq );
                    tmp_source_name_17 = var_J_ineq;
                    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_append );
                    if ( tmp_called_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 356;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_J );
                    tmp_subscribed_name_6 = var_J;
                    CHECK_OBJECT( var_finite_lb );
                    tmp_subscript_name_6 = var_finite_lb;
                    tmp_operand_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                    if ( tmp_operand_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_8 );

                        exception_lineno = 356;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_args_element_name_9 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
                    Py_DECREF( tmp_operand_name_3 );
                    if ( tmp_args_element_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_8 );

                        exception_lineno = 356;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 356;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_9 };
                        tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                    }

                    Py_DECREF( tmp_called_name_8 );
                    Py_DECREF( tmp_args_element_name_9 );
                    if ( tmp_call_result_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 356;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_9 );
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    PyObject *tmp_assign_source_17;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    PyObject *tmp_operand_name_4;
                    PyObject *tmp_source_name_18;
                    PyObject *tmp_mvar_value_8;
                    CHECK_OBJECT( var_lb );
                    tmp_compexpr_left_6 = var_lb;
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 358;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }

                    tmp_source_name_18 = tmp_mvar_value_8;
                    tmp_operand_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_inf );
                    if ( tmp_operand_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 358;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_compexpr_right_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
                    Py_DECREF( tmp_operand_name_4 );
                    if ( tmp_compexpr_right_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 358;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_assign_source_17 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                    Py_DECREF( tmp_compexpr_right_6 );
                    if ( tmp_assign_source_17 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 358;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_lb_inf;
                        var_lb_inf = tmp_assign_source_17;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_18;
                    PyObject *tmp_compexpr_left_7;
                    PyObject *tmp_compexpr_right_7;
                    PyObject *tmp_source_name_19;
                    PyObject *tmp_mvar_value_9;
                    CHECK_OBJECT( var_ub );
                    tmp_compexpr_left_7 = var_ub;
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 359;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }

                    tmp_source_name_19 = tmp_mvar_value_9;
                    tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_inf );
                    if ( tmp_compexpr_right_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 359;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_assign_source_18 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                    Py_DECREF( tmp_compexpr_right_7 );
                    if ( tmp_assign_source_18 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 359;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_ub_inf;
                        var_ub_inf = tmp_assign_source_18;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_19;
                    PyObject *tmp_compexpr_left_8;
                    PyObject *tmp_compexpr_right_8;
                    CHECK_OBJECT( var_lb );
                    tmp_compexpr_left_8 = var_lb;
                    CHECK_OBJECT( var_ub );
                    tmp_compexpr_right_8 = var_ub;
                    tmp_assign_source_19 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                    if ( tmp_assign_source_19 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 360;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_equal;
                        var_equal = tmp_assign_source_19;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_20;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_right_name_4;
                    PyObject *tmp_operand_name_5;
                    CHECK_OBJECT( var_lb_inf );
                    tmp_left_name_4 = var_lb_inf;
                    CHECK_OBJECT( var_ub_inf );
                    tmp_operand_name_5 = var_ub_inf;
                    tmp_right_name_4 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_5 );
                    if ( tmp_right_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 361;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_assign_source_20 = BINARY_OPERATION( PyNumber_And, tmp_left_name_4, tmp_right_name_4 );
                    Py_DECREF( tmp_right_name_4 );
                    if ( tmp_assign_source_20 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 361;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_less;
                        var_less = tmp_assign_source_20;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_21;
                    PyObject *tmp_left_name_5;
                    PyObject *tmp_right_name_5;
                    PyObject *tmp_operand_name_6;
                    CHECK_OBJECT( var_ub_inf );
                    tmp_left_name_5 = var_ub_inf;
                    CHECK_OBJECT( var_lb_inf );
                    tmp_operand_name_6 = var_lb_inf;
                    tmp_right_name_5 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_6 );
                    if ( tmp_right_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 362;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_assign_source_21 = BINARY_OPERATION( PyNumber_And, tmp_left_name_5, tmp_right_name_5 );
                    Py_DECREF( tmp_right_name_5 );
                    if ( tmp_assign_source_21 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 362;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_greater;
                        var_greater = tmp_assign_source_21;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_22;
                    PyObject *tmp_left_name_6;
                    PyObject *tmp_left_name_7;
                    PyObject *tmp_operand_name_7;
                    PyObject *tmp_right_name_6;
                    PyObject *tmp_operand_name_8;
                    PyObject *tmp_right_name_7;
                    PyObject *tmp_operand_name_9;
                    CHECK_OBJECT( var_equal );
                    tmp_operand_name_7 = var_equal;
                    tmp_left_name_7 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_7 );
                    if ( tmp_left_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 363;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_lb_inf );
                    tmp_operand_name_8 = var_lb_inf;
                    tmp_right_name_6 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_8 );
                    if ( tmp_right_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_7 );

                        exception_lineno = 363;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_left_name_6 = BINARY_OPERATION( PyNumber_And, tmp_left_name_7, tmp_right_name_6 );
                    Py_DECREF( tmp_left_name_7 );
                    Py_DECREF( tmp_right_name_6 );
                    if ( tmp_left_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 363;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_ub_inf );
                    tmp_operand_name_9 = var_ub_inf;
                    tmp_right_name_7 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_9 );
                    if ( tmp_right_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_6 );

                        exception_lineno = 363;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_assign_source_22 = BINARY_OPERATION( PyNumber_And, tmp_left_name_6, tmp_right_name_7 );
                    Py_DECREF( tmp_left_name_6 );
                    Py_DECREF( tmp_right_name_7 );
                    if ( tmp_assign_source_22 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 363;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_interval;
                        var_interval = tmp_assign_source_22;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_source_name_20;
                    PyObject *tmp_call_result_10;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_left_name_8;
                    PyObject *tmp_subscribed_name_7;
                    PyObject *tmp_subscript_name_7;
                    PyObject *tmp_right_name_8;
                    PyObject *tmp_subscribed_name_8;
                    PyObject *tmp_subscript_name_8;
                    CHECK_OBJECT( var_c_eq );
                    tmp_source_name_20 = var_c_eq;
                    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_append );
                    if ( tmp_called_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 365;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_f );
                    tmp_subscribed_name_7 = var_f;
                    CHECK_OBJECT( var_equal );
                    tmp_subscript_name_7 = var_equal;
                    tmp_left_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                    if ( tmp_left_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_9 );

                        exception_lineno = 365;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_lb );
                    tmp_subscribed_name_8 = var_lb;
                    CHECK_OBJECT( var_equal );
                    tmp_subscript_name_8 = var_equal;
                    tmp_right_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
                    if ( tmp_right_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_9 );
                        Py_DECREF( tmp_left_name_8 );

                        exception_lineno = 365;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_args_element_name_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
                    Py_DECREF( tmp_left_name_8 );
                    Py_DECREF( tmp_right_name_8 );
                    if ( tmp_args_element_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_9 );

                        exception_lineno = 365;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 365;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_10 };
                        tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
                    }

                    Py_DECREF( tmp_called_name_9 );
                    Py_DECREF( tmp_args_element_name_10 );
                    if ( tmp_call_result_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 365;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_10 );
                }
                {
                    PyObject *tmp_called_name_10;
                    PyObject *tmp_source_name_21;
                    PyObject *tmp_call_result_11;
                    PyObject *tmp_args_element_name_11;
                    PyObject *tmp_left_name_9;
                    PyObject *tmp_subscribed_name_9;
                    PyObject *tmp_subscript_name_9;
                    PyObject *tmp_right_name_9;
                    PyObject *tmp_subscribed_name_10;
                    PyObject *tmp_subscript_name_10;
                    CHECK_OBJECT( var_c_ineq );
                    tmp_source_name_21 = var_c_ineq;
                    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_append );
                    if ( tmp_called_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 366;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_f );
                    tmp_subscribed_name_9 = var_f;
                    CHECK_OBJECT( var_less );
                    tmp_subscript_name_9 = var_less;
                    tmp_left_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
                    if ( tmp_left_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );

                        exception_lineno = 366;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_ub );
                    tmp_subscribed_name_10 = var_ub;
                    CHECK_OBJECT( var_less );
                    tmp_subscript_name_10 = var_less;
                    tmp_right_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
                    if ( tmp_right_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );
                        Py_DECREF( tmp_left_name_9 );

                        exception_lineno = 366;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_args_element_name_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
                    Py_DECREF( tmp_left_name_9 );
                    Py_DECREF( tmp_right_name_9 );
                    if ( tmp_args_element_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );

                        exception_lineno = 366;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 366;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_11 };
                        tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
                    }

                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_args_element_name_11 );
                    if ( tmp_call_result_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 366;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_11 );
                }
                {
                    PyObject *tmp_called_name_11;
                    PyObject *tmp_source_name_22;
                    PyObject *tmp_call_result_12;
                    PyObject *tmp_args_element_name_12;
                    PyObject *tmp_left_name_10;
                    PyObject *tmp_subscribed_name_11;
                    PyObject *tmp_subscript_name_11;
                    PyObject *tmp_right_name_10;
                    PyObject *tmp_subscribed_name_12;
                    PyObject *tmp_subscript_name_12;
                    CHECK_OBJECT( var_c_ineq );
                    tmp_source_name_22 = var_c_ineq;
                    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_append );
                    if ( tmp_called_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 367;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_lb );
                    tmp_subscribed_name_11 = var_lb;
                    CHECK_OBJECT( var_greater );
                    tmp_subscript_name_11 = var_greater;
                    tmp_left_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
                    if ( tmp_left_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_11 );

                        exception_lineno = 367;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_f );
                    tmp_subscribed_name_12 = var_f;
                    CHECK_OBJECT( var_greater );
                    tmp_subscript_name_12 = var_greater;
                    tmp_right_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
                    if ( tmp_right_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_11 );
                        Py_DECREF( tmp_left_name_10 );

                        exception_lineno = 367;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_args_element_name_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
                    Py_DECREF( tmp_left_name_10 );
                    Py_DECREF( tmp_right_name_10 );
                    if ( tmp_args_element_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_11 );

                        exception_lineno = 367;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 367;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_12 };
                        tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
                    }

                    Py_DECREF( tmp_called_name_11 );
                    Py_DECREF( tmp_args_element_name_12 );
                    if ( tmp_call_result_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 367;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_12 );
                }
                {
                    PyObject *tmp_called_name_12;
                    PyObject *tmp_source_name_23;
                    PyObject *tmp_call_result_13;
                    PyObject *tmp_args_element_name_13;
                    PyObject *tmp_left_name_11;
                    PyObject *tmp_subscribed_name_13;
                    PyObject *tmp_subscript_name_13;
                    PyObject *tmp_right_name_11;
                    PyObject *tmp_subscribed_name_14;
                    PyObject *tmp_subscript_name_14;
                    CHECK_OBJECT( var_c_ineq );
                    tmp_source_name_23 = var_c_ineq;
                    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_append );
                    if ( tmp_called_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 368;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_f );
                    tmp_subscribed_name_13 = var_f;
                    CHECK_OBJECT( var_interval );
                    tmp_subscript_name_13 = var_interval;
                    tmp_left_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
                    if ( tmp_left_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_12 );

                        exception_lineno = 368;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_ub );
                    tmp_subscribed_name_14 = var_ub;
                    CHECK_OBJECT( var_interval );
                    tmp_subscript_name_14 = var_interval;
                    tmp_right_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
                    if ( tmp_right_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_12 );
                        Py_DECREF( tmp_left_name_11 );

                        exception_lineno = 368;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_args_element_name_13 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
                    Py_DECREF( tmp_left_name_11 );
                    Py_DECREF( tmp_right_name_11 );
                    if ( tmp_args_element_name_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_12 );

                        exception_lineno = 368;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 368;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_13 };
                        tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
                    }

                    Py_DECREF( tmp_called_name_12 );
                    Py_DECREF( tmp_args_element_name_13 );
                    if ( tmp_call_result_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 368;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_13 );
                }
                {
                    PyObject *tmp_called_name_13;
                    PyObject *tmp_source_name_24;
                    PyObject *tmp_call_result_14;
                    PyObject *tmp_args_element_name_14;
                    PyObject *tmp_left_name_12;
                    PyObject *tmp_subscribed_name_15;
                    PyObject *tmp_subscript_name_15;
                    PyObject *tmp_right_name_12;
                    PyObject *tmp_subscribed_name_16;
                    PyObject *tmp_subscript_name_16;
                    CHECK_OBJECT( var_c_ineq );
                    tmp_source_name_24 = var_c_ineq;
                    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_append );
                    if ( tmp_called_name_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 369;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_lb );
                    tmp_subscribed_name_15 = var_lb;
                    CHECK_OBJECT( var_interval );
                    tmp_subscript_name_15 = var_interval;
                    tmp_left_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
                    if ( tmp_left_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_13 );

                        exception_lineno = 369;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_f );
                    tmp_subscribed_name_16 = var_f;
                    CHECK_OBJECT( var_interval );
                    tmp_subscript_name_16 = var_interval;
                    tmp_right_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
                    if ( tmp_right_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_13 );
                        Py_DECREF( tmp_left_name_12 );

                        exception_lineno = 369;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_args_element_name_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
                    Py_DECREF( tmp_left_name_12 );
                    Py_DECREF( tmp_right_name_12 );
                    if ( tmp_args_element_name_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_13 );

                        exception_lineno = 369;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 369;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_14 };
                        tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
                    }

                    Py_DECREF( tmp_called_name_13 );
                    Py_DECREF( tmp_args_element_name_14 );
                    if ( tmp_call_result_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 369;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_14 );
                }
                {
                    PyObject *tmp_called_name_14;
                    PyObject *tmp_source_name_25;
                    PyObject *tmp_call_result_15;
                    PyObject *tmp_args_element_name_15;
                    PyObject *tmp_subscribed_name_17;
                    PyObject *tmp_subscript_name_17;
                    CHECK_OBJECT( var_J_eq );
                    tmp_source_name_25 = var_J_eq;
                    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_append );
                    if ( tmp_called_name_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 371;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_J );
                    tmp_subscribed_name_17 = var_J;
                    CHECK_OBJECT( var_equal );
                    tmp_subscript_name_17 = var_equal;
                    tmp_args_element_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
                    if ( tmp_args_element_name_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_14 );

                        exception_lineno = 371;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 371;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_15 };
                        tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
                    }

                    Py_DECREF( tmp_called_name_14 );
                    Py_DECREF( tmp_args_element_name_15 );
                    if ( tmp_call_result_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 371;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_15 );
                }
                {
                    PyObject *tmp_called_name_15;
                    PyObject *tmp_source_name_26;
                    PyObject *tmp_call_result_16;
                    PyObject *tmp_args_element_name_16;
                    PyObject *tmp_subscribed_name_18;
                    PyObject *tmp_subscript_name_18;
                    CHECK_OBJECT( var_J_ineq );
                    tmp_source_name_26 = var_J_ineq;
                    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_append );
                    if ( tmp_called_name_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 372;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_J );
                    tmp_subscribed_name_18 = var_J;
                    CHECK_OBJECT( var_less );
                    tmp_subscript_name_18 = var_less;
                    tmp_args_element_name_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
                    if ( tmp_args_element_name_16 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_15 );

                        exception_lineno = 372;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 372;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_16 };
                        tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
                    }

                    Py_DECREF( tmp_called_name_15 );
                    Py_DECREF( tmp_args_element_name_16 );
                    if ( tmp_call_result_16 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 372;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_16 );
                }
                {
                    PyObject *tmp_called_name_16;
                    PyObject *tmp_source_name_27;
                    PyObject *tmp_call_result_17;
                    PyObject *tmp_args_element_name_17;
                    PyObject *tmp_operand_name_10;
                    PyObject *tmp_subscribed_name_19;
                    PyObject *tmp_subscript_name_19;
                    CHECK_OBJECT( var_J_ineq );
                    tmp_source_name_27 = var_J_ineq;
                    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_append );
                    if ( tmp_called_name_16 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 373;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_J );
                    tmp_subscribed_name_19 = var_J;
                    CHECK_OBJECT( var_greater );
                    tmp_subscript_name_19 = var_greater;
                    tmp_operand_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
                    if ( tmp_operand_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_16 );

                        exception_lineno = 373;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_args_element_name_17 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_10 );
                    Py_DECREF( tmp_operand_name_10 );
                    if ( tmp_args_element_name_17 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_16 );

                        exception_lineno = 373;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 373;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_17 };
                        tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
                    }

                    Py_DECREF( tmp_called_name_16 );
                    Py_DECREF( tmp_args_element_name_17 );
                    if ( tmp_call_result_17 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 373;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_17 );
                }
                {
                    PyObject *tmp_called_name_17;
                    PyObject *tmp_source_name_28;
                    PyObject *tmp_call_result_18;
                    PyObject *tmp_args_element_name_18;
                    PyObject *tmp_subscribed_name_20;
                    PyObject *tmp_subscript_name_20;
                    CHECK_OBJECT( var_J_ineq );
                    tmp_source_name_28 = var_J_ineq;
                    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_append );
                    if ( tmp_called_name_17 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 374;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_J );
                    tmp_subscribed_name_20 = var_J;
                    CHECK_OBJECT( var_interval );
                    tmp_subscript_name_20 = var_interval;
                    tmp_args_element_name_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
                    if ( tmp_args_element_name_18 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_17 );

                        exception_lineno = 374;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 374;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_18 };
                        tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
                    }

                    Py_DECREF( tmp_called_name_17 );
                    Py_DECREF( tmp_args_element_name_18 );
                    if ( tmp_call_result_18 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 374;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_18 );
                }
                {
                    PyObject *tmp_called_name_18;
                    PyObject *tmp_source_name_29;
                    PyObject *tmp_call_result_19;
                    PyObject *tmp_args_element_name_19;
                    PyObject *tmp_operand_name_11;
                    PyObject *tmp_subscribed_name_21;
                    PyObject *tmp_subscript_name_21;
                    CHECK_OBJECT( var_J_ineq );
                    tmp_source_name_29 = var_J_ineq;
                    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_append );
                    if ( tmp_called_name_18 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 375;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_J );
                    tmp_subscribed_name_21 = var_J;
                    CHECK_OBJECT( var_interval );
                    tmp_subscript_name_21 = var_interval;
                    tmp_operand_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
                    if ( tmp_operand_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_18 );

                        exception_lineno = 375;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_args_element_name_19 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_11 );
                    Py_DECREF( tmp_operand_name_11 );
                    if ( tmp_args_element_name_19 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_18 );

                        exception_lineno = 375;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 375;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_19 };
                        tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
                    }

                    Py_DECREF( tmp_called_name_18 );
                    Py_DECREF( tmp_args_element_name_19 );
                    if ( tmp_call_result_19 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 375;
                        type_description_1 = "oooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_19 );
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_23;
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_11;
        CHECK_OBJECT( var_c_eq );
        tmp_truth_name_4 = CHECK_IF_TRUE( var_c_eq );
        assert( !(tmp_truth_name_4 == -1) );
        tmp_condition_result_4 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_10;
        CHECK_OBJECT( var_c_eq );
        tmp_args_element_name_20 = var_c_eq;
        frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 377;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_assign_source_23 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_hstack, call_args );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_11;
        frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 377;
        tmp_assign_source_23 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_empty, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        {
            PyObject *old = var_c_eq;
            assert( old != NULL );
            var_c_eq = tmp_assign_source_23;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_13;
        CHECK_OBJECT( var_c_ineq );
        tmp_truth_name_5 = CHECK_IF_TRUE( var_c_ineq );
        assert( !(tmp_truth_name_5 == -1) );
        tmp_condition_result_5 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_12;
        CHECK_OBJECT( var_c_ineq );
        tmp_args_element_name_21 = var_c_ineq;
        frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_assign_source_24 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_hstack, call_args );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_13;
        frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 378;
        tmp_assign_source_24 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_empty, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        {
            PyObject *old = var_c_ineq;
            assert( old != NULL );
            var_c_ineq = tmp_assign_source_24;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_6;
        CHECK_OBJECT( par_sparse_jacobian );
        tmp_truth_name_6 = CHECK_IF_TRUE( par_sparse_jacobian );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_source_name_30;
            PyObject *tmp_mvar_value_14;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_sps );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 381;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_30 = tmp_mvar_value_14;
            tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_vstack );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 381;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_vstack == NULL );
            var_vstack = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_tuple_element_1;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_sps );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_15;
            tmp_tuple_element_1 = const_int_0;
            tmp_args_element_name_22 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_22, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_n );
            tmp_tuple_element_1 = par_n;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_22, 1, tmp_tuple_element_1 );
            frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 382;
            {
                PyObject *call_args[] = { tmp_args_element_name_22 };
                tmp_assign_source_26 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_csr_matrix, call_args );
            }

            Py_DECREF( tmp_args_element_name_22 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_empty == NULL );
            var_empty = tmp_assign_source_26;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_source_name_31;
            PyObject *tmp_mvar_value_16;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 384;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_31 = tmp_mvar_value_16;
            tmp_assign_source_27 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_vstack );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 384;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_vstack == NULL );
            var_vstack = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_tuple_element_2;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 385;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_7 = tmp_mvar_value_17;
            tmp_tuple_element_2 = const_int_0;
            tmp_args_element_name_23 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_23, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_n );
            tmp_tuple_element_2 = par_n;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_23, 1, tmp_tuple_element_2 );
            frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 385;
            {
                PyObject *call_args[] = { tmp_args_element_name_23 };
                tmp_assign_source_28 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_empty, call_args );
            }

            Py_DECREF( tmp_args_element_name_23 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 385;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_empty == NULL );
            var_empty = tmp_assign_source_28;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_29;
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_7;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_24;
        CHECK_OBJECT( var_J_eq );
        tmp_truth_name_7 = CHECK_IF_TRUE( var_J_eq );
        assert( !(tmp_truth_name_7 == -1) );
        tmp_condition_result_7 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( var_vstack );
        tmp_called_name_19 = var_vstack;
        CHECK_OBJECT( var_J_eq );
        tmp_args_element_name_24 = var_J_eq;
        frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 387;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( var_empty );
        tmp_assign_source_29 = var_empty;
        Py_INCREF( tmp_assign_source_29 );
        condexpr_end_3:;
        {
            PyObject *old = var_J_eq;
            assert( old != NULL );
            var_J_eq = tmp_assign_source_29;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_30;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_8;
        PyObject *tmp_called_name_20;
        PyObject *tmp_args_element_name_25;
        CHECK_OBJECT( var_J_ineq );
        tmp_truth_name_8 = CHECK_IF_TRUE( var_J_ineq );
        assert( !(tmp_truth_name_8 == -1) );
        tmp_condition_result_8 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( var_vstack );
        tmp_called_name_20 = var_vstack;
        CHECK_OBJECT( var_J_ineq );
        tmp_args_element_name_25 = var_J_ineq;
        frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame.f_lineno = 388;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
        }

        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        CHECK_OBJECT( var_empty );
        tmp_assign_source_30 = var_empty;
        Py_INCREF( tmp_assign_source_30 );
        condexpr_end_4:;
        {
            PyObject *old = var_J_ineq;
            assert( old != NULL );
            var_J_ineq = tmp_assign_source_30;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7b770c8fdbbd549700aede51ed08d8b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7b770c8fdbbd549700aede51ed08d8b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c7b770c8fdbbd549700aede51ed08d8b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c7b770c8fdbbd549700aede51ed08d8b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c7b770c8fdbbd549700aede51ed08d8b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c7b770c8fdbbd549700aede51ed08d8b,
        type_description_1,
        par_n,
        par_prepared_constraints,
        par_sparse_jacobian,
        var_c_eq,
        var_c_ineq,
        var_J_eq,
        var_J_ineq,
        var_c,
        var_f,
        var_J,
        var_lb,
        var_ub,
        var_finite_ub,
        var_finite_lb,
        var_lb_inf,
        var_ub_inf,
        var_equal,
        var_less,
        var_greater,
        var_interval,
        var_vstack,
        var_empty
    );


    // Release cached frame.
    if ( frame_c7b770c8fdbbd549700aede51ed08d8b == cache_frame_c7b770c8fdbbd549700aede51ed08d8b )
    {
        Py_DECREF( frame_c7b770c8fdbbd549700aede51ed08d8b );
    }
    cache_frame_c7b770c8fdbbd549700aede51ed08d8b = NULL;

    assertFrameObject( frame_c7b770c8fdbbd549700aede51ed08d8b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( var_c_eq );
        tmp_tuple_element_3 = var_c_eq;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_c_ineq );
        tmp_tuple_element_3 = var_c_ineq;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        CHECK_OBJECT( var_J_eq );
        tmp_tuple_element_3 = var_J_eq;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_3 );
        CHECK_OBJECT( var_J_ineq );
        tmp_tuple_element_3 = var_J_ineq;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_3 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_9_initial_constraints_as_canonical );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_prepared_constraints );
    Py_DECREF( par_prepared_constraints );
    par_prepared_constraints = NULL;

    CHECK_OBJECT( (PyObject *)par_sparse_jacobian );
    Py_DECREF( par_sparse_jacobian );
    par_sparse_jacobian = NULL;

    CHECK_OBJECT( (PyObject *)var_c_eq );
    Py_DECREF( var_c_eq );
    var_c_eq = NULL;

    CHECK_OBJECT( (PyObject *)var_c_ineq );
    Py_DECREF( var_c_ineq );
    var_c_ineq = NULL;

    CHECK_OBJECT( (PyObject *)var_J_eq );
    Py_DECREF( var_J_eq );
    var_J_eq = NULL;

    CHECK_OBJECT( (PyObject *)var_J_ineq );
    Py_DECREF( var_J_ineq );
    var_J_ineq = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_lb );
    var_lb = NULL;

    Py_XDECREF( var_ub );
    var_ub = NULL;

    Py_XDECREF( var_finite_ub );
    var_finite_ub = NULL;

    Py_XDECREF( var_finite_lb );
    var_finite_lb = NULL;

    Py_XDECREF( var_lb_inf );
    var_lb_inf = NULL;

    Py_XDECREF( var_ub_inf );
    var_ub_inf = NULL;

    Py_XDECREF( var_equal );
    var_equal = NULL;

    Py_XDECREF( var_less );
    var_less = NULL;

    Py_XDECREF( var_greater );
    var_greater = NULL;

    Py_XDECREF( var_interval );
    var_interval = NULL;

    CHECK_OBJECT( (PyObject *)var_vstack );
    Py_DECREF( var_vstack );
    var_vstack = NULL;

    CHECK_OBJECT( (PyObject *)var_empty );
    Py_DECREF( var_empty );
    var_empty = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_prepared_constraints );
    Py_DECREF( par_prepared_constraints );
    par_prepared_constraints = NULL;

    CHECK_OBJECT( (PyObject *)par_sparse_jacobian );
    Py_DECREF( par_sparse_jacobian );
    par_sparse_jacobian = NULL;

    CHECK_OBJECT( (PyObject *)var_c_eq );
    Py_DECREF( var_c_eq );
    var_c_eq = NULL;

    CHECK_OBJECT( (PyObject *)var_c_ineq );
    Py_DECREF( var_c_ineq );
    var_c_ineq = NULL;

    CHECK_OBJECT( (PyObject *)var_J_eq );
    Py_DECREF( var_J_eq );
    var_J_eq = NULL;

    CHECK_OBJECT( (PyObject *)var_J_ineq );
    Py_DECREF( var_J_ineq );
    var_J_ineq = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_lb );
    var_lb = NULL;

    Py_XDECREF( var_ub );
    var_ub = NULL;

    Py_XDECREF( var_finite_ub );
    var_finite_ub = NULL;

    Py_XDECREF( var_finite_lb );
    var_finite_lb = NULL;

    Py_XDECREF( var_lb_inf );
    var_lb_inf = NULL;

    Py_XDECREF( var_ub_inf );
    var_ub_inf = NULL;

    Py_XDECREF( var_equal );
    var_equal = NULL;

    Py_XDECREF( var_less );
    var_less = NULL;

    Py_XDECREF( var_greater );
    var_greater = NULL;

    Py_XDECREF( var_interval );
    var_interval = NULL;

    Py_XDECREF( var_vstack );
    var_vstack = NULL;

    Py_XDECREF( var_empty );
    var_empty = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint$$$function_9_initial_constraints_as_canonical );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_68bb1842ff0d461de56cf24a7df5284e,
#endif
        codeobj_b2105c80cbb73c3a2a7264bd1a9edcbe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_2_from_PreparedConstraint(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_2_from_PreparedConstraint,
        const_str_plain_from_PreparedConstraint,
#if PYTHON_VERSION >= 300
        const_str_digest_1f4dc25f2fc1213c730ad476490bfa12,
#endif
        codeobj_7b749797b69353f3d8192fba092917fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        const_str_digest_a824b1415562212ab21c5323e6d0f9a7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty,
        const_str_plain_empty,
#if PYTHON_VERSION >= 300
        const_str_digest_e9f07429659cdcdc28588cf64f151044,
#endif
        codeobj_4195f79eeea2e25d05ea3f89287552d1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        const_str_digest_d7943be770ac08fc59b63e6cfbdf403e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_1_fun(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_1_fun,
        const_str_plain_fun,
#if PYTHON_VERSION >= 300
        const_str_digest_5d1ccb4fd0db149583d8744320d26fb0,
#endif
        codeobj_4c296b1ffc1349439917b1eedcb50d12,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_2_jac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_2_jac,
        const_str_plain_jac,
#if PYTHON_VERSION >= 300
        const_str_digest_48a88dfeff85e2d8733367c6a53d2ddc,
#endif
        codeobj_16d360f8d11e40cf075a2ccad02302f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_3_hess(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty$$$function_3_hess,
        const_str_plain_hess,
#if PYTHON_VERSION >= 300
        const_str_digest_0b491275b4dfbd3f9a99afc2c1693f19,
#endif
        codeobj_e14751ff53b1f7b1ad8008ccc8e37e90,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate,
        const_str_plain_concatenate,
#if PYTHON_VERSION >= 300
        const_str_digest_925ebe92959001dc48fb96e337fc5979,
#endif
        codeobj_d9983f5c6678fb5a620b7f562c31d6f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        const_str_digest_593b12bc62ca3fd90d1393c8301275a7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_1_fun(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_1_fun,
        const_str_plain_fun,
#if PYTHON_VERSION >= 300
        const_str_digest_f447b5bb13881bab9f64245c20b0144b,
#endif
        codeobj_2a172c81896b35cfb8f7ea064d67ee10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_2_jac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_2_jac,
        const_str_plain_jac,
#if PYTHON_VERSION >= 300
        const_str_digest_fe468d1c987f27d85d4842ffc96097c3,
#endif
        codeobj_021e7abba9b931cd78ae23c378c69df6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_3_hess(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_3_hess,
        const_str_plain_hess,
#if PYTHON_VERSION >= 300
        const_str_digest_1a1aa507769c98595fce8a2b97f171f3,
#endif
        codeobj_4d8e25e47b8eb924482c125bb803c784,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_3_hess$$$function_1_matvec(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate$$$function_3_hess$$$function_1_matvec,
        const_str_plain_matvec,
#if PYTHON_VERSION >= 300
        const_str_digest_cbd0c358c492d0a921135ea83beae8cd,
#endif
        codeobj_42a8aee01ff93a6a1943b1320143cd35,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical,
        const_str_plain__equal_to_canonical,
#if PYTHON_VERSION >= 300
        const_str_digest_fb1f8addfe6a59acf2f8f427ad06e0f3,
#endif
        codeobj_9466bf3ed30fd7d0979d2942f2d371d5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_1_fun(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_1_fun,
        const_str_plain_fun,
#if PYTHON_VERSION >= 300
        const_str_digest_50eedd0676181a1129301fa273b31fe4,
#endif
        codeobj_060f1662281e372db4dd108e71f3615f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_2_jac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_2_jac,
        const_str_plain_jac,
#if PYTHON_VERSION >= 300
        const_str_digest_10f0eb3f7922f6199df36f9c53afe201,
#endif
        codeobj_445b3833213d2bbec688f083a41faf69,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_3_hess(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical$$$function_3_hess,
        const_str_plain_hess,
#if PYTHON_VERSION >= 300
        const_str_digest_c77d9754d6b8c6a6ba439f118f54c9f3,
#endif
        codeobj_abf93fe868ae67ddf0fd4ff1fa03e931,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical,
        const_str_plain__less_to_canonical,
#if PYTHON_VERSION >= 300
        const_str_digest_8e11349ac45b5a7668d9fb4da34cb1e1,
#endif
        codeobj_ca683b9a9ccb95c1b72add0ab34984ca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_1_fun(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_1_fun,
        const_str_plain_fun,
#if PYTHON_VERSION >= 300
        const_str_digest_a175847ca99949fa7ba269b227922c17,
#endif
        codeobj_1f8318cc12483abf1c5847842933a355,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_2_jac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_2_jac,
        const_str_plain_jac,
#if PYTHON_VERSION >= 300
        const_str_digest_60bf0056ab18eba17c9812c7e1c43fd8,
#endif
        codeobj_08ab07e0127bc5166cddda8e5623c657,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_3_hess(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_3_hess,
        const_str_plain_hess,
#if PYTHON_VERSION >= 300
        const_str_digest_6f11995c4bfb8a3ef1d0281c81b129e9,
#endif
        codeobj_9b1e2d68d7d8c991a4c7c5c02059bd24,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_4_fun(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_4_fun,
        const_str_plain_fun,
#if PYTHON_VERSION >= 300
        const_str_digest_a175847ca99949fa7ba269b227922c17,
#endif
        codeobj_f075587286ed9d2afc438f6e7b50c22c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        4
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_5_jac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_5_jac,
        const_str_plain_jac,
#if PYTHON_VERSION >= 300
        const_str_digest_60bf0056ab18eba17c9812c7e1c43fd8,
#endif
        codeobj_dbdefb3eb171016b879144fdda7979f0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_6_hess(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical$$$function_6_hess,
        const_str_plain_hess,
#if PYTHON_VERSION >= 300
        const_str_digest_6f11995c4bfb8a3ef1d0281c81b129e9,
#endif
        codeobj_59e19ef32bf2d6d8f6d9b478dc3567ee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical,
        const_str_plain__greater_to_canonical,
#if PYTHON_VERSION >= 300
        const_str_digest_5d664284f6d39b5e60c84e9105e8d607,
#endif
        codeobj_a7b0ab208fae6845b1c9673e184f690c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_1_fun(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_1_fun,
        const_str_plain_fun,
#if PYTHON_VERSION >= 300
        const_str_digest_6b530982ceab60ea0450df2b5616cff2,
#endif
        codeobj_306d7200a22fea5c1f0f63316a734fde,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_2_jac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_2_jac,
        const_str_plain_jac,
#if PYTHON_VERSION >= 300
        const_str_digest_c1436350f021d6f25286256a15855f7a,
#endif
        codeobj_bcdefaa4aa7f2752563276d68c746941,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_3_hess(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_3_hess,
        const_str_plain_hess,
#if PYTHON_VERSION >= 300
        const_str_digest_b591988fb3c430c827895f8c4289f755,
#endif
        codeobj_05908fed27ce9db45fc9c857e855e529,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_4_fun(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_4_fun,
        const_str_plain_fun,
#if PYTHON_VERSION >= 300
        const_str_digest_6b530982ceab60ea0450df2b5616cff2,
#endif
        codeobj_783ca5023668ee3fb044ef523aad81da,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        4
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_5_jac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_5_jac,
        const_str_plain_jac,
#if PYTHON_VERSION >= 300
        const_str_digest_c1436350f021d6f25286256a15855f7a,
#endif
        codeobj_d7fd781376a234839bbe521cf47186e8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_6_hess(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical$$$function_6_hess,
        const_str_plain_hess,
#if PYTHON_VERSION >= 300
        const_str_digest_b591988fb3c430c827895f8c4289f755,
#endif
        codeobj_f9e57066b19cbb806ba18bf10205f39c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical,
        const_str_plain__interval_to_canonical,
#if PYTHON_VERSION >= 300
        const_str_digest_cebd83733491c54df846f05a078e3cf9,
#endif
        codeobj_b70d2ea400f7f3a82dcd1bd6bb7746fb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_1_fun(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_1_fun,
        const_str_plain_fun,
#if PYTHON_VERSION >= 300
        const_str_digest_869f70370b475e6ac8b732cbf44b77a2,
#endif
        codeobj_337c2a3b7cb5d6cf52890e92970dbff6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        7
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_2_jac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_2_jac,
        const_str_plain_jac,
#if PYTHON_VERSION >= 300
        const_str_digest_a9b2641cfe3d1463334d4f96ca5e137a,
#endif
        codeobj_9e7c3a5cfe5a2344c85812e203fd9ceb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        5
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_3_hess(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical$$$function_3_hess,
        const_str_plain_hess,
#if PYTHON_VERSION >= 300
        const_str_digest_38af509fb80c9a7e7cd436e264e2fef0,
#endif
        codeobj_34f54d8526074249495d95d7b7cd40b2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        9
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_9_initial_constraints_as_canonical(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_9_initial_constraints_as_canonical,
        const_str_plain_initial_constraints_as_canonical,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c7b770c8fdbbd549700aede51ed08d8b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        const_str_digest_b84dff457d63afd20942fdd0d1421e9e,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_trustregion_constr$canonical_constraint =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._trustregion_constr.canonical_constraint",
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

MOD_INIT_DECL( scipy$optimize$_trustregion_constr$canonical_constraint )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_trustregion_constr$canonical_constraint );
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
    puts("scipy.optimize._trustregion_constr.canonical_constraint: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._trustregion_constr.canonical_constraint: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._trustregion_constr.canonical_constraint: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_trustregion_constr$canonical_constraint" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_trustregion_constr$canonical_constraint = Py_InitModule4(
        "scipy.optimize._trustregion_constr.canonical_constraint",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_trustregion_constr$canonical_constraint = PyModule_Create( &mdef_scipy$optimize$_trustregion_constr$canonical_constraint );
#endif

    moduledict_scipy$optimize$_trustregion_constr$canonical_constraint = MODULE_DICT( module_scipy$optimize$_trustregion_constr$canonical_constraint );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_trustregion_constr$canonical_constraint,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_trustregion_constr$canonical_constraint,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_constr$canonical_constraint,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_constr$canonical_constraint,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_trustregion_constr$canonical_constraint );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_6428c1fb608574415ee63f9fafa27e83, module_scipy$optimize$_trustregion_constr$canonical_constraint );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_6bc2c906a74a4b17e731bfc685e353be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_scipy$optimize$_trustregion_constr$canonical_constraint_5 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4c16cf652f130fa13e0018275d06b205_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4c16cf652f130fa13e0018275d06b205_2 = NULL;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_6bc2c906a74a4b17e731bfc685e353be = MAKE_MODULE_FRAME( codeobj_6bc2c906a74a4b17e731bfc685e353be, module_scipy$optimize$_trustregion_constr$canonical_constraint );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_6bc2c906a74a4b17e731bfc685e353be );
    assert( Py_REFCNT( frame_6bc2c906a74a4b17e731bfc685e353be ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$canonical_constraint;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_6bc2c906a74a4b17e731bfc685e353be->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$canonical_constraint;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_6bc2c906a74a4b17e731bfc685e353be->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_sparse );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_sps, tmp_assign_source_5 );
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


            exception_lineno = 5;

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


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_1 != NULL );
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_type_object_tuple;
        tmp_assign_source_7 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

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


            exception_lineno = 5;

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


            exception_lineno = 5;

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


                exception_lineno = 5;

                goto try_except_handler_1;
            }
            tmp_args_name_1 = const_tuple_str_plain_CanonicalConstraint_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_6bc2c906a74a4b17e731bfc685e353be->m_frame.f_lineno = 5;
            tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 5;

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


                exception_lineno = 5;

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


                    exception_lineno = 5;

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

                    exception_lineno = 5;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 5;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 5;
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
            locals_scipy$optimize$_trustregion_constr$canonical_constraint_5 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_6428c1fb608574415ee63f9fafa27e83;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_d6e9cffb0aeb62d515c00f9750f5f722;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_CanonicalConstraint;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_4c16cf652f130fa13e0018275d06b205_2, codeobj_4c16cf652f130fa13e0018275d06b205, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *) );
        frame_4c16cf652f130fa13e0018275d06b205_2 = cache_frame_4c16cf652f130fa13e0018275d06b205_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_4c16cf652f130fa13e0018275d06b205_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_4c16cf652f130fa13e0018275d06b205_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_classmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_classmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_2;
            }
            else
            {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_name_2 = PyObject_GetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_classmethod );

            if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_2_from_PreparedConstraint(  );



            frame_4c16cf652f130fa13e0018275d06b205_2->m_frame.f_lineno = 50;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_classmethod_arg_1 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_2_from_PreparedConstraint(  );



            tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
            Py_DECREF( tmp_classmethod_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_from_PreparedConstraint, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_classmethod_arg_2;
            tmp_res = MAPPING_HAS_ITEM( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_classmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_3;
            }
            else
            {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_3 = PyObject_GetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_classmethod );

            if ( tmp_called_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_2 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty(  );



            frame_4c16cf652f130fa13e0018275d06b205_2->m_frame.f_lineno = 71;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_classmethod_arg_2 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_3_empty(  );



            tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_2 );
            Py_DECREF( tmp_classmethod_arg_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_empty, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_classmethod_arg_3;
            tmp_res = MAPPING_HAS_ITEM( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_classmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_4;
            }
            else
            {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_name_4 = PyObject_GetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_classmethod );

            if ( tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_3 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate(  );



            frame_4c16cf652f130fa13e0018275d06b205_2->m_frame.f_lineno = 93;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_classmethod_arg_3 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_4_concatenate(  );



            tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_3 );
            Py_DECREF( tmp_classmethod_arg_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_concatenate, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_classmethod_arg_4;
            tmp_res = MAPPING_HAS_ITEM( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_classmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_5;
            }
            else
            {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_name_5 = PyObject_GetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_classmethod );

            if ( tmp_called_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_4 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical(  );



            frame_4c16cf652f130fa13e0018275d06b205_2->m_frame.f_lineno = 151;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_classmethod_arg_4 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_5__equal_to_canonical(  );



            tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_4 );
            Py_DECREF( tmp_classmethod_arg_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain__equal_to_canonical, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_classmethod_arg_5;
            tmp_res = MAPPING_HAS_ITEM( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_classmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_6;
            }
            else
            {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_name_6 = PyObject_GetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_classmethod );

            if ( tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_5 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical(  );



            frame_4c16cf652f130fa13e0018275d06b205_2->m_frame.f_lineno = 183;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_classmethod_arg_5 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_6__less_to_canonical(  );



            tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_5 );
            Py_DECREF( tmp_classmethod_arg_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain__less_to_canonical, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_classmethod_arg_6;
            tmp_res = MAPPING_HAS_ITEM( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_classmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_10 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_7;
            }
            else
            {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_name_7 = PyObject_GetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_classmethod );

            if ( tmp_called_name_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_6 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical(  );



            frame_4c16cf652f130fa13e0018275d06b205_2->m_frame.f_lineno = 223;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_classmethod_arg_6 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_7__greater_to_canonical(  );



            tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_6 );
            Py_DECREF( tmp_classmethod_arg_6 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain__greater_to_canonical, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_classmethod_arg_7;
            tmp_res = MAPPING_HAS_ITEM( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_classmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_11 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_8;
            }
            else
            {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_name_8 = PyObject_GetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain_classmethod );

            if ( tmp_called_name_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 263;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_7 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical(  );



            frame_4c16cf652f130fa13e0018275d06b205_2->m_frame.f_lineno = 263;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_classmethod_arg_7 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_8__interval_to_canonical(  );



            tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_7 );
            Py_DECREF( tmp_classmethod_arg_7 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5, const_str_plain__interval_to_canonical, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4c16cf652f130fa13e0018275d06b205_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4c16cf652f130fa13e0018275d06b205_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_4c16cf652f130fa13e0018275d06b205_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_4c16cf652f130fa13e0018275d06b205_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_4c16cf652f130fa13e0018275d06b205_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_4c16cf652f130fa13e0018275d06b205_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_4c16cf652f130fa13e0018275d06b205_2 == cache_frame_4c16cf652f130fa13e0018275d06b205_2 )
        {
            Py_DECREF( frame_4c16cf652f130fa13e0018275d06b205_2 );
        }
        cache_frame_4c16cf652f130fa13e0018275d06b205_2 = NULL;

        assertFrameObject( frame_4c16cf652f130fa13e0018275d06b205_2 );

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
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_9 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_CanonicalConstraint;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_scipy$optimize$_trustregion_constr$canonical_constraint_5;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_6bc2c906a74a4b17e731bfc685e353be->m_frame.f_lineno = 5;
            tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 5;

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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5 );
        locals_scipy$optimize$_trustregion_constr$canonical_constraint_5 = NULL;
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

        Py_DECREF( locals_scipy$optimize$_trustregion_constr$canonical_constraint_5 );
        locals_scipy$optimize$_trustregion_constr$canonical_constraint_5 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint );
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
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_trustregion_constr$canonical_constraint );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 5;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_CanonicalConstraint, tmp_assign_source_10 );
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
    RESTORE_FRAME_EXCEPTION( frame_6bc2c906a74a4b17e731bfc685e353be );
#endif
    popFrameStack();

    assertFrameObject( frame_6bc2c906a74a4b17e731bfc685e353be );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6bc2c906a74a4b17e731bfc685e353be );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6bc2c906a74a4b17e731bfc685e353be, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6bc2c906a74a4b17e731bfc685e353be->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6bc2c906a74a4b17e731bfc685e353be, exception_lineno );
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
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function_9_initial_constraints_as_canonical(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain_initial_constraints_as_canonical, tmp_assign_source_12 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_trustregion_constr$canonical_constraint );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
